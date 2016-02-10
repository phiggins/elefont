#include <ruby.h>
#include <fontconfig/fontconfig.h>

#include <stdio.h>
#include <stdlib.h>

static VALUE cElefont;

static VALUE
elefont_best_match(VALUE klass, VALUE str)
{
  VALUE fontFile;
  FcResult result;
  FcPattern *match, *pat;

  pat = FcNameParse((const FcChar8*)(StringValueCStr(str)));
  FcPatternAddString(pat, FC_FONTFORMAT, (const FcChar8*)"TrueType");

  FcConfigSubstitute(NULL, pat, FcMatchPattern);
  FcDefaultSubstitute(pat);
  match = FcFontMatch(NULL, pat, &result);

  if (match) {
    FcChar8* file = NULL;
    if (FcPatternGetString(match, FC_FILE, 0, &file) == FcResultMatch) {
      fontFile = rb_usascii_str_new_cstr((char*)file);
    }
  }

  FcPatternDestroy(match);
  FcPatternDestroy(pat);

  return fontFile;
}

void Init_elefont(void)
{
  cElefont = rb_define_class("Elefont", rb_cObject);
  rb_define_singleton_method(cElefont, "best_match", elefont_best_match, 1);
}

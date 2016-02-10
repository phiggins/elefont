require 'mkmf'

have_library 'fontconfig' or abort 'missing fontconfig'
have_header 'fontconfig/fontconfig.h' or abort 'missing fontconfig/fontconfig.h'

create_makefile 'elefont/elefont'

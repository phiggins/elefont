= elefont

home  :: https://github.com/phiggins/elefont

== DESCRIPTION:

The gem that never forgets where your fonts are.

== FEATURES/PROBLEMS:

* Finds closest matching TrueType font with fontconfig and returns the path.

== SYNOPSIS:

    >> require 'elefont'
    => true
    >> Elefont.best_match "Menlo"
    => "/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf"
    >> Elefont.best_match "Courier"
    => "/usr/share/fonts/truetype/msttcorefonts/Courier_New.ttf"
    >> Elefont.best_match "Arial"
    => "/usr/share/fonts/truetype/msttcorefonts/Arial.ttf"
    >> Elefont.best_match "lolol"
    => "/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf"

== REQUIREMENTS:

* fontconfig development headers on Linux.

== INSTALL:

Linux:

`sudo apt-get install libfontconfig1-dev`

On OS X:

`brew install fontconfig`

== DEVELOPERS:

After checking out the source, run:

  $ rake newb

This task will install any missing dependencies, run the tests/specs,
and generate the RDoc.

== LICENSE:

(The MIT License)

Copyright (c) 2016 Pete Higgins

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
'Software'), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

/*
CSTRTFREADER - read flat text or rtf and output flat text, 
               one line per sentence, optionally tokenised

Copyright (C) 2012  Center for Sprogteknologi, University of Copenhagen

This file is part of CSTRTFREADER.

CSTRTFREADER is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

CSTRTFREADER is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with CSTRTFREADER; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
#ifndef UNICODE_H
#define UNICODE_H

#include "data.h"
#include "option.h"

#if FILESTREAM

void checkEncoding(STROEM * fi,getcFnc * Getc,ungetcFnc * Ungetc,fseekFnc * Fseek,fputcFnc * Fputc,frewindFnc * Frewind,encodingType encoding);
void forceOutputUnicode(fputcFnc * Fputc,encodingType encoding);

#endif

#endif

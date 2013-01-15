/*
 * A L F _ PRINT. C X X
 *
 * This file contains print routines for ALF.
 *
 * Copyright (c) 1998, Sente Inc.
 *
 * $Id: prn2.cc,v 1.1.1.1 2001/04/12 16:06:50 tim_littlefair Exp $
 */

#include<string.h>
#include "utils.h"
#include "AlfObject.hxx"

void alfPrintSpaces(int numTabs, FILE* fp)
{
int numBlanks;
for (numBlanks = 0; numBlanks < 4*numTabs; numBlanks++)
   fprintf(fp,"%c",' ');
}


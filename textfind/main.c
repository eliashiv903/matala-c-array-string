/*
 ============================================================================
 Name        : Part.c
 Author      :
 Version  9 :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "Text.h";
#include <string.h>
#define Line 256
#define Word 256
int main() {
    char nb[]="njjjkncdknh\nfchctcdtcfdyj";
    char bn[]="cd";
    words(nb, bn);
    findLine(nb, bn);

    char jump;
    char kind;
    int lengthWord=0;
    char wordInput [30];
    char allText[256*250];
    int i=0;
   for(jump=getc(stdin);jump!= ' ';i++,jump=getc(stdin)) {
       wordInput[i] = jump;
       lengthWord++;
   }
    char wordRelly[lengthWord];
    for (int j = 0; j < lengthWord; ++j)
        wordRelly[j]=wordInput[j];
    jump=getc(stdin);
    jump=getc(stdin);
    kind=jump;
    jump=getc(stdin);
    i=0;
    for(jump=getc(stdin);jump!= EOF;i++,jump=getc(stdin))
        allText[i]=jump;
    if(kind=='a')findLine(allText,wordRelly)   ;
    else words(allText,wordRelly);
    return 0;
}
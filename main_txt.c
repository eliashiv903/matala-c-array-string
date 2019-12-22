

#include <stdio.h>
#include <stdlib.h>

#include "Text.h"
#include <string.h>
#define Line 256
#define Word 30
int main() {
    char jump;
    char kind;
    int lengthWord=0;
    char wordInput [30];
   char  allText[256*250]    ;
   int i=0;
    while((jump=getc(stdin))!= ' ')
    {
        lengthWord++;
        wordInput[i]=jump;
        i++;
    }
    char wordd [lengthWord];
    for (int j = 0; j < lengthWord; ++j) {
        wordd[j]=wordInput[j];
    }



    i=0;
    while ((jump=getc(stdin))!= '\n' ){
        allText[i]=jump;
        i++;
        if (jump=='a' || jump=='b'){
            kind =jump;
        }
    }
    allText[i]='\0';


    i=0;
    if (kind=='a')
    {
        while ((jump=getc(stdin))!= EOF){
            allText[0]=jump;
            i++;
            while ((jump=getc(stdin))!= '\n' ) {
                allText[i]=jump;
                i++;
            }
            findLine(allText,wordInput);
             allText[i]='\0';
            i=0;
        }
    }
    if (kind=='b')
{
while ((jump=getc(stdin))!= EOF){
allText[0]=jump;
i++;
while ((jump=getc(stdin))!= '\n' ) {
allText[i]=jump;
i++;
}
words(allText,wordInput);
allText[i]='\0';
i=0;
}
}
}

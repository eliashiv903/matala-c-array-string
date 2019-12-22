

#include <string.h>
#include <stdio.h>
#include "Text.h"
void findLine(char  text[],char  word[]){
    int apear=0;
    int startLine=0;
    int lengthText = strlen( text );
    int lengthWord = strlen( word );
    for (int i = 0; i < lengthText; i++) {
        int sumEquals=0;
        for (int j = i,k=0;apear==0&& k < lengthWord &&j<lengthText ; ++j,k++) {
            if(text[j]==word[k]){
                sumEquals++;
            }
        }
        if(sumEquals==lengthWord)apear=1;
        if(text[i]=='\n'){
            if(apear==1)	sysoWordAndLine(startLine, i-1, text);
            startLine=i+1;
            apear=0;
        }
        else if(i==lengthText-1) if(apear==1)sysoWordAndLine(startLine, i, text);
    }
}
void sysoWordAndLine (int  start,char  end,char  text[]){
    char ans[end-start+1+1];
    int i=0;
    for (int j=start; i <= end-start; ++i,j++) ans[i]=text[j];
   ans[i]='\0';
   printf("%s\n", ans);
}
void words (char  text[],char  word[]){
    int sumCarcter=0;
    int lengthText = strlen( text );
    int lengthWord = strlen( word );
    for (int i = 0; i < lengthText; ++i) {
        int sumEquals=0;
        int j = i;
        sumCarcter=0;
        if(j-1!=-1&&text[j-1]!='\t')sumCarcter++;
        for (int k=0; j <= i+lengthWord &&j<lengthText&&text[j]!=' ' ; ++j) {
            if(text[j]==word[k]){
                sumEquals++;
                k++;
            }
        }
        if(j==lengthText||text[j]!='\t')sumCarcter++;
        if(sumCarcter!=2) sumEquals=-10;
        if(sumEquals>=lengthWord)	sysoWordAndLine(i, i+lengthWord, text);
    }
}

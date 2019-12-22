

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
        for (int j = i,k=0;apear==0&& j < i+lengthWord &&j<lengthText ; ++j) {
            if(text[j]==word[k]){
                sumEquals++;
                k++;
            }
        }
        if(sumEquals==lengthWord)apear=1;
        if(text[i]=='\n'){
            if(apear==1)	sysoWordAndLine(startLine, i-1, text);
            startLine=i+1;
            apear=0;
        }
        else if(i==lengthText-1)sysoWordAndLine(startLine, i, text);
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
    int lengthText = strlen( text );
    int lengthWord = strlen( word );
    for (int i = 0; i < lengthText; ++i) {
        int sumEquals=0;
        for (int j = i,k=0; j <= i+lengthWord &&j<lengthText ; ++j) {
            if(text[j]==word[k]){
                sumEquals++;
                k++;
            }
        }
        if(sumEquals>=lengthWord)	sysoWordAndLine(i, i+lengthWord, text);
    }



}
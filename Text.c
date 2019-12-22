

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
            if(apear==1)   sysoWordAndLine(startLine, i-1, text);
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
        int sumCarcter=0;
        if(i-1!=-1&&text[i-1]!=' ') sumCarcter=-10;
        for (int j=i, k=0; j < i+lengthWord &&j<lengthText&&text[j]!=' ' ; ++j) {
            if (text[j] == word[k]) {
                sumCarcter++;
                k++;
            }
            if(i+lengthWord!=lengthText&&text[i+lengthWord]!=' ') sumCarcter=0;
        }
        int sumEquals=0;
        int j = i;
        for (int k=0; j <= i+lengthWord+1 &&j<lengthText&&text[j]!=' ' ; ++j) {
            if(text[j]==word[k]){
                sumEquals++;
                k++;
            }

            if(i+lengthWord+1!=lengthText&&text[i+lengthWord+1]!=' ')sumEquals=0;
        }

        if(text[i+lengthWord]>='a'&&text[i+lengthWord]<='Z')sumEquals=-10;
        if(sumEquals>=lengthWord)  sysoWordAndLine(i, i+lengthWord, text);
        else  if( sumCarcter==lengthWord)  sysoWordAndLine(i, i+lengthWord-1, text);
    }

}

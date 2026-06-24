#include<stdio.h>
int main(){
    char s[100];
    int i,st=0,maxstart=0,len=0,maxlen=0;
    printf("enter a sentence ");
    fgets(s,100,stdin);
    for(i=0;;i++){
        if(s[i]==' '||s[i]=='\0'||s[i]=='\n'){
            len=i-st;
            if(len>maxlen){
                maxlen=len;
                maxstart=st;
            }
            st=i+1;
        }
        if(s[i]=='\0'){
            break;
        }
    }
    printf("longest word=");
    for(i=maxstart;i<maxstart+maxlen;i++){
        printf("%c",s[i]);
    }
    return 0;
}

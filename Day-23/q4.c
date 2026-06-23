#include<stdio.h>
int main(){
    char s[100];
    int i,j,max=0,count;
    char ch;
    printf("enter a string ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        count=0;
        for(j=0;s[j]!='\0';j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            ch=s[i];
        }
    }
    printf("maximum occurring character=%c",ch);
return 0;
}

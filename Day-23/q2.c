#include<stdio.h>
int main(){
    char s[100];
    int i,j,count;
    printf("enter a string ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        count=0;
        for(j=0;s[j]!='\0';j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count>1){
            printf("first repeating character=%c",s[i]);
            break;
        }
    }
return 0;
}

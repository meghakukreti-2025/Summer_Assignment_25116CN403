#include<stdio.h>
int main(){
    char s1[100],s2[100];
    int i,j,len1=0,len2=0,flag=1;
    printf("enter first string ");
    scanf("%s",s1);
    printf("enter second string ");
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++){
        len1++;
    }
    for(i=0;s2[i]!='\0';i++){
        len2++;
    }
    if(len1!=len2){
        flag=0;
    }
    else{
        for(i=0;i<len1;i++){
            int count1=0,count2=0;
            for(j=0;j<len1;j++){
                if(s1[i]==s1[j]){
                    count1++;
                }
            }
            for(j=0;j<len2;j++){
                if(s1[i]==s2[j]){
                    count2++;
                }
            }
            if(count1!=count2){
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        printf("strings are anagrams");
    }
    else{
        printf("strings are not anagrams");
    }
return 0;
}

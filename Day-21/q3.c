#include<stdio.h>
int main(){
    char s[100];
    int i,v=0,c=0;
    printf("enter a string ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        switch(s[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                v++;
                break;
            default:
                c++;
        }
    }
    printf("vowels=%d\n",v);
    printf("consonants=%d",c);
return 0;
}

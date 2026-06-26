#include <stdio.h>
int main(){
    int num,guess,attempts=0;
    printf("enter the number ");
    scanf("%d",&num);
    printf("guess the number ");
    while(guess!=num){
        printf("enter your guess ");
        scanf("%d",&guess);
        attempts++;
        if(guess>num)
            printf("too high ");
        else if(guess<num)
            printf("too low ");
        else
            printf("correct,you guessed in %d attempts ",attempts);
    }
return 0;
}

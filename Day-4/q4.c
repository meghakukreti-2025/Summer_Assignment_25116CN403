#include<stdio.h>
#include<math.h>
int main(){
    int i,a,b,d,n;
    printf("enter the range");
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++){
        n=i; 
        int og=n;
        int sum=0;
        int count=0;
        //counting the number of digits
        while (n!=0){
        count++;
        n=n/10;}
        n=og;
        // calculating the sum for checking armstrong number
        while (n!=0){
        d=n%10;
        sum = sum+ pow(d,count);
        n=n/10;}
    
    if (sum==og){
        printf("%d",og);
        printf("\t");
    }
    }
    return 0;
}

#include <stdio.h>
int main(){
int n,i;
printf ("enter the number of array elements");
scanf ("%d",&n);
int a[n];
for (i=0;i<n;i++){
    printf("enter a[%d]",i);
    scanf("%d",&a[i]);
}
int even=0,odd=0;
for (i=0;i<n;i++){
    if (a[i]%2==0){
    even++;
    }
    else {
        odd++;
    }
}
printf ("the number of even and odd elements = %d %d",even,odd);
return 0;
}

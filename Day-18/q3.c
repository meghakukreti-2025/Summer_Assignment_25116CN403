#include <stdio.h>
int main(){
  int n,i,e;
  printf ("enter the number of array elements");
  scanf ("%d", &n);
  int a[n];
  printf ("enter elements in sorted order\n");
  for (i=0;i<n;i++){
  printf("enter a[%d]", i);
  scanf("%d",&a[i]);
  }
  printf("enter which element to search");
  scanf("%d",&e);
  int low = 0,high =n-1,mid;
  int found = 0;
    while(low<=high) {
        mid =(low+high)/2;
        if(a[mid]==e) {
            found =1;
            break;
        }
        else if(e>a[mid]) {
            low= mid+1;
        }
        else {
            high = mid-1;
        }
    }
    if(found==1){
        printf("element found at index %d",mid);
    }
    else{
        printf("element not found");
    }
return 0;
}

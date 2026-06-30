#include <stdio.h>
#include <string.h>
struct employee{
    int id;
    char name[30];
    float salary;
};
int main(){
    struct employee e[100];
    int n,i;
    printf("enter number of employees ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nemployee ID ");
        scanf("%d",&e[i].id);
        printf("employee name ");
        scanf("%s",e[i].name);
        printf("salary ");
        scanf("%f",&e[i].salary);
    }
    printf("\nEmployee Details\n");
    for(i=0;i<n;i++){
        printf("\nID = %d",e[i].id);
        printf("\nName = %s",e[i].name);
        printf("\nSalary = %.2f\n",e[i].salary);
    }
return 0;
}

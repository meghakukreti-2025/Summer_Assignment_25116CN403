#include <stdio.h>
struct employee{
    char name[20];
    float salary;
};
int main(){
    struct employee e;
    printf("enter employee name ");
    scanf("%s",e.name);
    printf("enter salary ");
    scanf("%f",&e.salary);
    printf("employee salary details\n");
    printf("name = %s\n",e.name);
    printf("salary = %.2f rs",e.salary);
return 0;
}

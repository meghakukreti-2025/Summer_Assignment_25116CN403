#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    char name[30];
    float marks;
};
void display(struct student s[], int n){
    int i;
    printf("\nStudent Records\n");
    for(i=0;i<n;i++){
        printf("\nRoll No = %d",s[i].roll);
        printf("\nName = %s",s[i].name);
        printf("\nMarks = %.2f\n",s[i].marks);
    }
}
int main(){
    struct student s[100];
    int n,i,choice,search,f=0;
    printf("enter number of students ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter roll no ");
        scanf("%d",&s[i].roll);
        printf("enter name ");
        scanf("%s",s[i].name);
        printf("enter marks ");
        scanf("%f",&s[i].marks);
    }
    do{
        printf("\n    STUDENT MENU   \n");
        printf("\n1.Display");
        printf("\n2.Search");
        printf("\n3.Exit");
        printf("\nEnter choice ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                display(s,n);
                break;
            case 2:
                printf("enter roll number ");
                scanf("%d",&search);
                f=0;
                for(i=0;i<n;i++){
                    if(s[i].roll==search){
                        printf("\nRecord Found");
                        printf("\nRoll = %d",s[i].roll);
                        printf("\nName = %s",s[i].name);
                        printf("\nMarks = %.2f\n",s[i].marks);
                        f=1;
                    }
                }
                if(f==0)
                    printf("Record not found\n");
                break;
            case 3:
                printf("thank you");
                break;
            default:
                printf("invalid choice");
        }
    }while(choice!=3);
return 0;
}

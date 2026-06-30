#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    char name[30];
    float marks;
};
int main(){
    struct student s[100];
    int n=0,i,ch,search,f=0;
    do{
        printf("\n       MENU      ");
        printf("\n1.Add Student");
        printf("\n2.Display");
        printf("\n3.Search");
        printf("\n4.Exit");
        printf("\nenter choice ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("enter roll no ");
                scanf("%d",&s[n].roll);
                printf("enter name ");
                scanf("%s",s[n].name);
                printf("enter marks ");
                scanf("%f",&s[n].marks);
                n++;
                break;
            case 2:
                for(i=0;i<n;i++){
                    printf("\n%d",s[i].roll);
                    printf("\n%s",s[i].name);
                    printf("\n%.2f\n",s[i].marks);
                }
                break;
            case 3:
                printf("Enter roll no ");
                scanf("%d",&search);
                f=0;
                for(i=0;i<n;i++){
                    if(s[i].roll==search){
                        printf("\nStudent Found");
                        printf("\n%d",s[i].roll);
                        printf("\n%s",s[i].name);
                        printf("\n%.2f\n",s[i].marks);
                        f=1;
                    }
                }
                if(f==0)
                    printf("Record not found");
                break;
            case 4:
                printf("thank you");
                break;
            default:
                printf("invalid choice");
        }
    }while(ch!=4);
return 0;
}

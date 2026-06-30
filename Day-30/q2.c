#include <stdio.h>
#include <string.h>
struct book
{
    int id;
    char name[30];
    char author[30];
};
int main()
{
    struct book b[100];
    int n,i,search,f=0;
    printf("enter number of books ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nbook ID ");
        scanf("%d",&b[i].id);
        printf("book Name ");
        scanf("%s",b[i].name);
        printf("author ");
        scanf("%s",b[i].author);
    }
    printf("\nBook Records\n");
    for(i=0;i<n;i++)
    {
        printf("\nID = %d",b[i].id);
        printf("\nBook = %s",b[i].name);
        printf("\nAuthor = %s\n",b[i].author);
    }
    printf("\nenter book ID to search ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(b[i].id==search)
        {
            printf("\nBook found");
            printf("\n%s",b[i].name);
            printf("\n%s\n",b[i].author);
            f=1;
        }
    }
    if(f==0)
        printf("Book not found");
return 0;
}

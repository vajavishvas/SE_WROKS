#include<stdio.h>
#include<conio.h>

struct Address
{
     char city[50];
     int zip;
}a1;

struct student
{
    char name[50];
    int age;
    struct Address add;
}s1[50];

int main()
{
    int i,n;
    
    printf("Enter your student no. : ");
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        printf("Enter Name: ");
        scanf("%s",&s1[i].name);
        
        printf("Enter Age: ");
        scanf("%d",&s1[i].age);
        
        printf("Enter City: ");
        scanf("%s",&s1[i].add.city);
        
        printf("Enter Zip: ");
        scanf("%d",&s1[i].add.zip);
        
        printf("\n");
    }
    printf("\n");
    for (i=0; i<n; i++)
    {
        printf("\n Your All details are : %d ",i);
        printf("\n");
        printf("\n Name is : %s",s1[i].name);
        printf("\n Age is : %d",s1[i].age);
        printf("\n City is : %s",s1[i].add.city);
        printf("\n Zip is : %d",s1[i].add.zip);
        printf("\n");
    }
    
    
    return 0;
} 
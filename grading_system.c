#include<stdio.h>

int main()
{
    int marks;
    printf("enter your marks :");
    scanf("%d",&marks);
    if(marks>75)
    {
        printf("Grade A");

    }
    else if (marks>60)
    {
        printf("Grade B");

    }
    else if (marks>40)

    {
        printf("Grade C");

    }
    else if  (marks<40)
    {
        printf("Grade F");
    }
    else

    {
        printf("Enter valid Marks");
    }
   
}
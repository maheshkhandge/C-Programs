//Q1. Accept the age from user and display appropriate meesage for issuing of license less  than 18 yr

#include<stdio.h>
int main()
{
    int age ;
    printf("Enter Your Age :");
    scanf("%d",&age);

    if (age>=18)
    {
       printf("You are Eligible For License");

    }
    else
    {
        printf("Your Not Eligible");
    }
    
   
}
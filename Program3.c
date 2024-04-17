// Problem Statement : Accept 2 Values From User and Perforn the Addition.

// Step 1 : Understand the Problem statement
// Conclusion : We have to accept 2 integers and perform its addition

// Step 2 : Write the Algorithm

/*
    START
        Accept first number from user and store it into no1
        Accept second number from user and store it into no2
        Create one Variable to store the result named as Ans
        Perform Addition of no1 and no2, store the result in Ans
        Display the result from Ans to the user
*/

// step 3 : Decide the Programming Language (C/C++/Java/Python)
// We select C programming

//Step 4 : Write the program

#include<stdio.h>

int main()
{
   int i,j,k;

printf("Enter First Number:\n");
   scanf("%d",&i);

printf("Enter First Number:\n");
   scanf("%d",&j);

   k= i + j;

printf("Addition Of Two Number is : %d",k);   


    return 0;
}
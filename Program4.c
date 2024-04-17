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
   int iValue1 = 0; 
   int iValue2 = 0; 
   int iAns = 0;

printf("Enter First Number:\n");
   scanf("%d",&iValue1);

printf("Enter First Number:\n");
   scanf("%d",&iValue2);

   iAns = iValue1 + iValue2;

printf("Addition Of Two Number is : %d",iAns);   


    return 0;
}

// Step 5 : Test the code

/*
Test case 1 :
Input : 10 11
Output : 10

Test case 2 :
Input : 10 0
Output : 10

Test case 3 :
Input : -6 -5
Output : -11

Test case 4 :
Input : 12 -6
Output : 6
*/
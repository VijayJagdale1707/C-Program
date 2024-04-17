// Problem Statement : Accept radius from user and calculate the area of circle

// Step1 : Understand the problem statement
// Conclusion : We are going to use the formula as PI * R * R

// Step 2 : Algorithm
/*
      START 
         Accept radius from user and store into RADIUS
         Create variable as PI and store value 3.14
         Calculate are PI * RADIUD * RADIUS
         Display the value of Area to the user
      STOP
*/


#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//     Function Name :    CalculateArea
//     Description :      It is used to calculate area of circle
//     Input argument:    Float
//     Output:            Float
//     Author:            Vijay Balu Jagdale
//     Date:               02/10/2023
//
//////////////////////////////////////////////////////////////////
#define PI 3.14

float Area(float fdr)
{ 
  float iAre = 0.0f;
  iAre = PI * fdr * fdr;
  return iAre;
}

int main()
{
    float dRadius = 0.0f;
    float fresult = 0.0f;

    printf("Enter the radius : \n");
    scanf("%f",&dRadius);

     fresult = Area(dRadius); 

     printf("Area of the circle is : %f\n",fresult);

   return 0;
}
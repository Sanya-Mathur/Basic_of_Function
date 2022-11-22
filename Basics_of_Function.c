
#include <stdio.h>

int max(int num1, int num2);//function declaration
int main ()//main function
{printf("RA2211042010042\n");

 int a = 100;
 int b = 200;
 int maximum;

 maximum = max(a, b);//actual arguments
 printf( "Max value is : %d\n", maximum);
 return 0;
}

int max(int num1, int num2)//formal argument
{
 
 int result=(num1>num2)?num1:num2;//function definition

 
 return result;
}


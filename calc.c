#include <stdio.h>
#include <stdlib.h>

float divide(float numerator, float dominator)
    { 
        if (dominator == 0) // check if you are dividing by zero
        {
       	   printf("can't perform division");
           return 0;
        }

        else 
        {// Perform division
            float result = numerator / dominator;
	    return result;
        }

    }


//fuction multiplying two double numbers

double multiply (double num1, double num2)
{
	return (num1*num2);
}


// function subtracting two float numbers
float subtraction(float num1, float num2)
{
	float subResult=0;
	subResult=num1-num2;
	return subResult;
}
	
// function adding two float numbers
float add(float num1, float num2)
{
    return (num1+num2);
}

// function for mod
int mod(int num1,int num2)
{
	int temp = num1%num2;
	return temp;
}

int main(void){

	float num1 , num2 ;
    char operation;
	printf("enter num1 : ");
	scanf("%f",&num1);
	printf("enter operator : ");
	scanf("%s",&operation);
	printf("enter num2 : ");
	scanf("%f",&num2);
	
	switch (operation){
		case '%':
			printf("the result of mod %d by %d = %d",(int)num1,(int)num2, mod((int)num1, (int)num2));
			break;
		case '+':
			printf("the result of adding %f and %f = %f",num1,num2, add(num1, num2));
			break;
		case '-':
			printf("the result of subtracting %f from %f = %f",num2,num1, subtraction(num1, num2));
			break;
		case '*':
			printf("the result of multiplication %f by %f = %f",num1,num2, multiply(num1, num2));
			break;
		case '/':
			printf("the result of dividing %f by %f = %f",num1,num2, divide(num1, num2));
			break;
		
	}
	
	return 0;
}

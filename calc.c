#include <stdio.h>
#include <stdlib.h>

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

	int num1 , num2 ;
    char operation;
	printf("enter num1 : ");
	scanf("%d",&num1);
	printf("enter operator : ");
	scanf("%s",&operation);
	printf("enter num2 : ");
	scanf("%d",&num2);
	
	switch (operation){
		case '%':
			printf("the result of mod %d by %d = %d",num1,num2, mod(num1, num2));
			break;
		
	}
	
	return 0;
}

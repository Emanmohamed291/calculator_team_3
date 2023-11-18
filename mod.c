#include <stdio.h>
#include <stdlib.h>
int mod(int , int);
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
			printf("the result of mod %f by %f = %f",num1,num2, mod(num1, num2));
			break;
		
	}
	return 0;
}
int mod(int num1, int num2){
	int temp = num1%num2;
	return temp;
}
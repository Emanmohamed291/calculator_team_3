#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
float mod(float , float);
int main(void){

	float num1 , num2 ;
    char operation;
	cout<<"enter num1 : ";
	cin>>num1;
	cout<<"enter operator : ";
	cin>>operation;
	cout<<"enter num2 : ";
	cin>>num2;
	
	switch operation{
		case '%':
			cout<<"the result of mod "<<num1<<" by "<<num2<<" = "<<mod(num1, num2);
			break;
		
	}
	
	getch();
	return 0;
}
float mod(float num1, float num2){
	float temp = num1%num2;
	return temp;
}
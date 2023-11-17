#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int multi(int , int);
int main(void){

	int num1 = 5, num2 = 3;
	cout<<"the result of multiply "<<num1<<" and "<<num2<<" = "<<multi(num1, num2);
	getch();
	return 0;
}
int multi(int num1, int num2){
	return num1*num2;
}
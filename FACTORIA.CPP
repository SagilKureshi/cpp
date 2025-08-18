#include<iostream.h>
#include<conio.h>
int main(){
	int s;
	int fac;
	int temp=1;
	clrscr();
	cout << "Enter a Number to find It's  Factorial(!) : ";
	cin >> fac;
	cout <<fac<<"! = ";
	for(s=fac;s>0;s--){
		cout << s ;
		if(s>1)
		cout << "*";
		temp=temp*s;
	}
	cout <<endl<<temp;
	getch();
	return 0;
}
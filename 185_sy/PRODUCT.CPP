#include<iostream.h>
#include<conio.h>
int product(int a,int b=5)
{
	return a*b;
}
int main()
{
	int m=1000;
	cout<<"default value"<<product<<(m)<<endl;
	getch();
	return 0;
}
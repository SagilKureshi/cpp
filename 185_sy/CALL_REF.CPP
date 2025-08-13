#include<iostream.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int x,y;
	clrscr();
	cout<<"enter value a:-"<<endl;
	cin>>x;
	cout<<"enter value b:-"<<endl;
	cin>>y;
	swap(&x,&y);
	cout<<"a="<<x<<endl<<"b"<<y<<endl;
	getch();
	return 0;
}
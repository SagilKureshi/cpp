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
	int s,k;
	clrscr();
	cout <<"Enter value of s : ";
	cin>
;
	cout <<"Enter value of k : ";
	cin>>k;
	swap(&s,&k);
	cout<<"s = "<<s<<endl<<"k = "<<s;
	getch();
	return 0;
}
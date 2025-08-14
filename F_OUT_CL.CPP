//function outside the class
#include<iostream.h>
#include<conio.h>
class data{
	int s,k;
	public : void assign(int a,int b);
	public : void display();
};
void data::assign(int a,int b){
	s=a;
	k=b;
}
void data::display(){
	cout<<"Value s = "<<s<<endl;
	cout<<"Value k = "<<k<<endl;
}
int main()
{
	clrscr();
	data d;
	d.assign(10,20);
	d.display();
	getch();
	return 0;
}
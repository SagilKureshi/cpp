//Array within class
#include<iostream.h>
#include<conio.h>
class calas{
	int getvalue[7];
	public :
		void get();//define
		void display();//define


};
void calas::get(){//declare
	cout<<"Enter value of array : "<<endl;
	for(int x=0;x<7;x++){
		cout <<"arry["<<x<<"] : ";
		cin>>getvalue[x];
	}
}
void calas::display(){
	cout <<endl<<endl<<"Display values of array : "<<endl;
	for(int x=0;x<7;x++){
		cout<<"arry["<<x<<"] = ";
		cout <<getvalue[x]<<endl;
	}
}
int main(){
	clrscr();
	calas c;
	c.get();
	c.display();
	getch();
	return 0;
}
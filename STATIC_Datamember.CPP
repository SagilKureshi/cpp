//static datamember using in class
#include<iostream.h>
#include<conio.h>
class static_var{
	static int s;//static datamember/variable
	public :
		void abc(){
			cout<<"Value of S :  "<<s++<<endl;
		       //	s++;
		}
};
int static_var::s;
int main(){
	clrscr();
	static_var o1,o2,o3;
	o1.abc();
	o2.abc();
	o3.abc();
	getch();
	return 0;

}

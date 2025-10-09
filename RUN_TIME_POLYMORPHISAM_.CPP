//Run time polymorphisam
#include<iostream.h>
#include<conio.h>
class sk{     //Base /Parent / Super Class
	public:
		virtual void show(){
			cout << "Base Class\n";
		}
};
class ks:public sk{//Derived /Child/Sub class
	public :
		void show(){
			cout << "Derived Class";
		}
};
int main(){
	clrscr();
	sk *ptr,o_sk;
	ks o_ks;
	o_sk.show();
	ptr=&o_ks;
	ptr->show();
	getch();
	return 0;

}

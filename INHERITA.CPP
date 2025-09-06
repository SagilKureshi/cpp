#include<iostream.h>
#include<conio.h>
class a{
	public :
		 void fun1(int a){
			int n1=a;
			cout <<n1<<endl<<"this is public class"<<endl;
			fun2();
		 }
	private:
		void fun2(){
			int n2=4;
			cout <<n2<<endl<<"this is private class";
			fun3();
		}
	protected :
		void fun3(){
			int n3=5;
			cout <<n3<<endl<<"this is protected class";
		}
};
class class2:public a{
	public :
		void fun4(){
			fun3();
		}
};
int main(){
	clrscr();
	class2 o1;
	o1.fun4();
       //	o1.class2();
	getch();
	return 0;
}
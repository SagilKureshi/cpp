//function inside the class
#include<iostream.h>
#include<conio.h>
class data{
	int s,k;
	public : void assign(int a,int b){
		s=a;
		k=b;
	}
	public : void display(){
		cout << "value == s : "<<s<<endl;
		cout << "value == k : "<<k<<endl;
	}
};
int main()
{
	data d;
	d.assign(10,20);
	d.display();
	getch();
	return 0;
}
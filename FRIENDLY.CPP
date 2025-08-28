//Friendly Functio
//  find key
#include<iostream.h>
#include<conio.h>
class friendly{
	int x,y;
	public :
		friend void sum_fun(friendly);
		void add_data(int x1=0,int y1=0){
			x=x1;
			y=y1;
		}
		void display(){
			cout << "x="<<x<<"\n";
		}
};
void sum_fun(friendly obj1){
	int s;
	s=obj1.x+obj1.y;
	cout << "sum of 2 numbers using friend function : "<<s<<endl;
}
int main(){
	clrscr();
	friendly f1;
	f1.add_data(7,2);
	cout << "friendly 1 / point \n";
	f1.display();
	cout <<"sum of the two friendly1/points is : \n";
	f1.display();
	sum_fun(f1);
	getch();
	return 0;
}
#include<iostream.h>
#include<conio.h>
int area(float y){
	return 3.14*y*y;//2pi.r pi=3.14, r==y
}
int area(int y,int z){
	return y*z;
}
int area(float y,float z){
	return y*z;
}
int main(){
	char choice;
	int s,k;
	clrscr();
	cout<<"Menu for find Area :"<<endl<<endl;
	cout<<"R = Area of Rectangle :"<<endl;
	cout<<"S = Area of Squar : "<<endl;
	cout<<"C = Area of Circle :"<<endl<<endl;
	cout<<"Enter value : ";
	cin>>choice;
	switch (choice)
	{

		case 'R':
		cout<<"Enter value 1: ";
		cin>>s;
		cout<<"Enter value 2: ";
		cin>>k;
		cout<<"Area of Rectangle : "<<area(s,k);
		break;

		case 'S':
		cout<<"Enter value 1: ";
		cin>>s;
		cout<<"Enter value 2: ";
		cin>>k;
		cout<<"Area of squre : "<<area(s,k);
		break;


		case 'C':
		cout<<"Enter radius of Circle : ";
		cin>>s;
		cout<<"Area of Rectangle : "<<area(s);
		break;

		default :
		cout<<"Please Enter only R or S or C";
	}
	getch();
	return 0;
}

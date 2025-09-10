//POINTER TO MEMBERS 
#include<iostream>
#include<conio.h>
using namespace std;
class sk{
    public :
            int s;
            void fun(int a){
                cout <<"Member function :-"<<endl;
                cout << "Value of A = "<<a<<endl;
            };
};
int main(){

    //Pointer to datamember
    int sk :: *p = &sk ::s;//In C language similar to *p = &s;
    //Pointer to Member Function
    void (sk :: *ptr)(int) = &sk :: fun;
    clrscr();
    sk o;
    o.*p = 100;//assign value to S Datamember through Pointer
    cout << "Data member S = "<<o.*p<<endl<<endl;//print value for S Datamember
    //Call and give argument to the (fun) Member function using Pointer
    (o.*ptr)(200);
    getch();
    return 0;
}
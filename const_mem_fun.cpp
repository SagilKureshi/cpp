#include<iostream>
#include<conio.h>
using namespace std;
class sk{
    int s;
    public :
            void setdata(int a){
                s=a;
            }
            void getdata() const{// const member function
                //s++; can not increament value because of constant 
                cout <<"value of S = "<<s;
            }
    
};
int main(){
    
    sk o;
    clrscr();
    o.setdata(5);
    o.getdata();
    getch();
    return 0;
}
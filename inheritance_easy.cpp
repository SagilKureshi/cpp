#include<iostream>
#include<conio.h>
using namespace std;
class parent{
    public :
            void fun1(){
                cout << "Public funtion"<<endl;
                fun2();
            }
    private :
            void fun2(){
                cout <<"private class"<<endl;
              //  fun3();
            } 
    protected :
            void fun3(){
                cout <<"protect class"<<endl;
            }
};
class child : public parent{
    public :
            void fun4(){
                fun3();
            }
};
int main(){
    clrscr();
    parent o1;
    child o2;
    o1.fun1();
    o2.fun4();
    getch();
    return 0;
}
#include<iostream>
#include<conio.h>
using namespace std;
class sk{
    int s;
    public :
            sk(int x){// Parameterized Constructor
                s = x;
            }
            void display(){
                cout << "Value Of S = "<<s;
            }
};
int main(){

    sk o(100);
    clrscr();
    o.display();
    getch();
    return 0;
    
}
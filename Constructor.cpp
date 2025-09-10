#include<iostream>
#include<conio.h>
using namespace std;
class sk{
    int s;
    public :
            sk(){// Constructor
                s = 70;
            }
            void display(){
                cout << "Value Of S = "<<s;
            }
};
int main(){

    sk o;
    clrscr();
    o.display();
    getch();
    return 0;
    
}
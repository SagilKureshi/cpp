#include<iostream>
#include<conio.h>
using namespace std;
class sk{
 
    public :
            int s;
            sk(int a){
                s = a;
            }
            void show(){
                cout << "S == " << s << endl;
            }
};
int main(){
    clrscr();
    sk o1(150);// Implicit Constructor Call
    o1.show();
    sk o2 = sk(300);// Explicit Constructor Call
    o2.show();
    getch();
    return 0;
}
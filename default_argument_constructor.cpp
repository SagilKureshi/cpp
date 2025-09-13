#include<iostream>
#include<conio.h>
using namespace std;
class sk {
    public :
            int s;
            sk(int z=199){
                s=z;
            }
            void show(){
                cout <<"S == " <<s<<endl;
            }

};
int main(){

    clrscr();
    sk o;
    o.show();
    getch();
    return 0;
}
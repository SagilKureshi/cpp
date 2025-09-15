//->(MIL)Member Initialization List
#include<iostream>
//#include<conio.h>
using namespace std;
class SK{
    public : 
            int s,k;
            SK(int z,int y):s(z),k(y){
            
            }
            void show(){
                cout << "S = "<<s<<endl;
                cout << "k = "<<k<<endl;
            }
};
int main(){
   // clrscr();
    SK o(99,199);
    o.show();
   //getch();
    return 0;
}

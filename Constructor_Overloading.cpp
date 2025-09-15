// Constructor Oveloading / Multiple Constructor 
#include<iostream>
#include<conio.h>
using namespace std;
class sk{
    int s;
    public :
            sk(){
                s = 99;
            }
            sk(int n,int k){
                s = n+k;
            }
            sk(int x,int y,int z){
                s = x+y+z;
            }
            void show(){
                cout << "Value Of S = "<<s<<endl;
            }
};
int main(){
    // clrscr();
    sk o1;
    o1.show();
    sk o2(99,99);
    o2.show();
    sk o3(99,99,99);
    o3.show();
    //getch();
    return 0;
    
}
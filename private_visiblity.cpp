//Private Access Specifire/visibility 
#include<iostream>
#include<conio.h>
using namespace std;
class name{
    private : int s,k;
    private : void put(int a,int z){
        s=a;
        k=z;
    }
    public : void out(){
        put(500000,990000);
        cout << "Value of S : " << s <<endl;
        cout << "Value of K : " << k;
    }
};
int main()
{
    clrscr();
    name c;
    c.out ();
   // c.put(); Never Called Directly Any Private class Function
    getch();
    return 0;
}
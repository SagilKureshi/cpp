//->Dynamic Initialization of Object
#include<iostream>
//#include<conio.h>
using namespace std;
class SK{
    public : 
            int s;
            SK(int k){
                s = k;
            }
            void show(){
                cout << "S = "<<s<<endl;
            }
};
int main(){
    // clrscr();
    int dynamic;
    cin >> dynamic;
    SK o(dynamic);
    o.show();
    //getch();
    return 0;
}
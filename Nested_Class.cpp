//Nested Class
#include<iostream>
#include<conio.h>
using namespace std;
class outer_class{
    public:void outer(){
        cout << "It's Outer Class"<<"\n";
    }
    class inner_class{
        public:void inner(){
            cout << "It's Inner Class";
        }
    };
};
int main(){
    outer_class o;//Object of Outer Class 
    outer_class::inner_class i;//Object of Inner Class
    o.outer();
    i.inner();
    getch();
    return 0;
}
#include<iostream>
#include<conio.h>
using namespace std;
class obj_arg{
    int s;
    public :
            void setdata(int n1);
            void sum(obj_arg o1,obj_arg o2);
};
void obj_arg :: setdata(int n1){
    s = n1;
}
void obj_arg :: sum(obj_arg o1,obj_arg o2){
    cout << "sum is " << o1.s + o2.s;
}
int main(){
    obj_arg obj1,obj2,obj3;
    clrscr();
    obj1.setdata(5);
    obj2.setdata(6);
    obj3.sum(obj1,obj2);
    getch();
    return 0;
}
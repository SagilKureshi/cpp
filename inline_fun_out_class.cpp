//Making Outside Inline Function
#include<iostream>
#include<conio.h>
using namespace std;
class class_name{
    public:
            int function(int n);
};
inline int class_name:: function(int n){
    return n+100;
}
int main(){
    class_name cn;
    cout << "Value of n = " <<cn.function(99);
    getch();
    return 0;
}
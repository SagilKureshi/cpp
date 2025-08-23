//Local Class
#include<iostream>
#include<conio.h>
using namespace std;
void udf(){//User Defined Function
    cout << "UDF" <<endl;
    class local_class{
        public : 
                void class_function(){
                    cout << "Local Class Crested";
                }
    };
    local_class lc;
    lc.class_function();
}
int main()
{

    clrscr();
    udf();
    getch();
    return 0;
}
//Culculate Average of Given Number Using UDF Function
#include<iostream>
#include<conio.h>
using namespace std;
void average(int,int);
int main(){
    int s,k;
    clrscr();
    cout << "Enter Number1 : ";
    cin >> s;
    cout << "Enter Number2 : ";
    cin >> k;
    average(s,k);
    getch();
    return 0;
}
void average(int z,int k){   
 
    cout << "Average of Number is : "<<(z+k)/2;
}
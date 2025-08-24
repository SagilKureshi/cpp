//Calculate Simple Interest of given numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int s,k,w,si;
    clrscr();
    cout << "Enter Total Ammount : ";
    cin >> s;
    cout << "Enter Rate of Interest : ";
    cin >> k;
    cout << "Enter Number of Years : ";
    cin >> w;
    si=(s*k*w)/100;
    cout << "Simple Interest is : "<<si;
    getch();
    return 0;
}
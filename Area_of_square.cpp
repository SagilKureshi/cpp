//Calculate Area Of Square
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int s,area;
    clrscr();
    cout << "Enter The Side Length Of The Square : ";
    cin >> s;
    area=s*s;
    cout << "Area Of Square is : "<<area;
    getch();
    return 0;
}
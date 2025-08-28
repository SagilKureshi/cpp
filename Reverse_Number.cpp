#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    int n, r, rev = 0;
    clrscr();
    cout << "Enter a number to Reverse it : ";
    cin >> n;

    while(n != 0) {
        r = n % 10;             // last digit
        rev = rev * 10 + r;     // build reverse number
        n = n / 10;             // remove last digit
    }

    cout << "Reverse Number is : " << rev;
    getch();
    return 0;
}
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int n, r, rev = 0;
    clrscr();

    cout << "Enter a number: ";
    cin >> n;

    int temp = n;   // store original number

    while (n != 0) {
        r = n % 10;           // last digit
        rev = rev * 10 + r;   // build reverse number
        n = n / 10;           // remove last digit
    }

    if (temp == rev)
        cout << temp << " is a Palindrome Number.";
    else
        cout << temp << " is NOT a Palindrome Number.";

    getch();
    return 0;
}
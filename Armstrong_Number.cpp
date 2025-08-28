#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int n, r, arm = 0;
    clrscr();

    cout << "Enter a number: ";
    cin >> n;

    int temp = n;   // store original number

    while (n != 0) {
        r = n % 10;           // last digit
        arm = arm+ r * r * r;   // sum of reminder
        n = n / 10;           // remove last digit
    }

    if (temp == arm)
        cout << temp << " is an Armstrong  Number.";
    else
        cout << temp << " is NOT an Armstrong Number.";
    getch();
    return 0;
}
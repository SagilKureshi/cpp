#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int r,c,col=0;
    clrscr();
    cout << "Enter Number of Rows for pattern : ";
    cin >> r ;
    cout << "Enter Number of Columns for pattern : ";
    cin >> c ;
    cout <<endl<<endl;
    for(int row=1;row<=r;row++){
        for(int col=1;col<=c;col++){
            if(row==1||row==r||col==1||col==c)
                cout <<"sk  ";
            else
                cout <<"    ";
        }
        cout <<endl;
    }
    getch();
    return 0;
}
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n;
    clrscr();
    cout << "Enter Number Of Rows : ";
    cin >> n;
    for(int s=1;s<=n;s++){
        for(int k=1;k<s;k++){
            if(k%2==1)
                cout << k<<" ";
            else
                cout <<"# ";
        }
        cout <<endl;
    }
    getch();
}
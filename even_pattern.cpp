#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n;
    clrscr();
    cout << "Enter Number Of Rows : ";
    cin >> n;
    cout << endl;
    for(int s=1;s<=n;s++){
        for(int k=1;k<=s;k++){
            if(k%2==0)
                cout << k<<" ";
            else
                cout <<"# ";
        }
        cout <<endl;
    }
    getch();
}

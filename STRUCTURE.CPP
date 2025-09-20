#include <iostream>
using namespace std;

struct Student {
    int id;
    char c;
};

int main() {
    Student s1;//{1, "Sagil"};
    s1.id =103;
    s1.c='S';
    cout << "Roll No. : " << s1.id << "\n1st name character : " << s1.c;
    return 0;
}

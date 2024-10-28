#include <vector>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    struct StudentAttributes {
        int age;
        string name;
        string lastName;
        int std;
    };
    StudentAttributes student;
    cin >> student.age >> student.name >> student.lastName >> student.std;
    cout << student.age << " " << student.name << " " << student.lastName << " " << student.std;
    return 0;
}

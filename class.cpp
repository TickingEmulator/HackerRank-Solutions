#include <cmath>
#include <cstdio>
#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age, standard;
        string firstName, lastName;
        stringstream ss;
    public:
        int get_age(){
            return age;
        }
        void set_age(){
            cin >> age;
        }
        string get_first_name(){
            return firstName;
        }
        void set_first_name(){
            cin >> firstName;
        }
        string get_last_name(){
            return lastName;
        }
        void set_last_name(){
            cin >> lastName;
        }
        int get_standard(){
            return standard;
        }
        void set_standard(){
            cin >> standard;
        }
        string to_string(){
            ss << age << "," << firstName << "," << lastName << "," << standard;
            return ss.str();
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Student s;
      s.set_age();
      s.set_first_name();
      s.set_last_name();
      s.set_standard();
      cout << s.get_age() << "\n" << s.get_last_name() << ", " << s.get_first_name() << "\n" << s.get_standard() << "\n\n" << s.to_string();
    return 0;
}

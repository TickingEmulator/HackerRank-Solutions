
#include <iostream>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    cin >> a >> b;
    string counter[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = a; i <= b; i++){
       if (i <= 9){
           cout << counter[i - 1] << "\n";    
       }else if (i % 2 == 0) {
           cout << "even" << "\n";
       }else {
           cout << "odd" << "\n";
       }
    }
    return 0;
}


#include <vector>
#include <iostream>
using namespace std;

void update(int *a, int *b){
    int aPrime = *a;
    *a+=*b;
    *b=abs(aPrime-*b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    cin >> a >> b;
    update(&a, &b); 
    cout << a << "\n" << b << "\n";
    return 0;
}

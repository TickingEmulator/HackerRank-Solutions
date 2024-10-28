#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    long b;
    char c;
    float d;
    double e; 
    // cin >> a >> b >> c >> d >> e;
    // cout << a << endl << b << endl << c << endl << d << endl << e << endl; other method (endl not recommended due to flush operation)
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%f\n%lf", a, b , c, d, e);
     
    return 0;
}

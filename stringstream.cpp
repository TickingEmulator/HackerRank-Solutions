#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

vector<int> parseInt(string str){
    vector<int> integers;
    stringstream ss(str);
    int i = 0;
    char c;
    while (ss >> i >> c){
        integers.push_back(i);
    }
    ss >> i; integers.push_back(i);
    return integers;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string a;
    cin >> a;
    vector<int> v = parseInt(a);
    for (int i2 = 0; i2 < v.size(); i2++){
        cout << v[i2] << "\n";
    } 
    return 0;
}

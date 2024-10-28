#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    private:
        int scores[5];
    public:
      void input(){
          for (int i = 0; i < 5; i++){
              cin >> scores[i];
          }
      }
      int calculateTotalScore(){
          int s;
          for (int i = 0; i < 5; i++){
              s+=scores[i];
          }
          return s;
      }
      
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, l = 0;
    cin >> n;
    int sums[n - 1];
    Student k;
    k.input();
    int ks = k.calculateTotalScore();
    for (int i = 0; i < n - 1; i++){
        Student std;
        std.input();
        sums[i] = std.calculateTotalScore();
    }
    for (int i2 = 0; i2 < n - 1; i2++){
        if (sums[i2] > ks){
            l++;
        }
    }
    cout << l;
    return 0;
};

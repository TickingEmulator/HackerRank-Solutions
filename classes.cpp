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
          int a,b,c,d,e;
          cin >> a >> b >> c >> d >> e;
          scores[0] = a;
          scores[1] = b;
          scores[2] = c;
          scores[3] = d;
          scores[4] = e;
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
    for (int i = 0; i < n; i++){
        Student std;
        std.input();
        sums[i] = std.calculateTotalScore();
    }
    for (int i2 = 1; i2 < n; i2++){
        if (sums[i2] > sums[0]){
            l++;
        }
    }
    cout << l;
    return 0;
};

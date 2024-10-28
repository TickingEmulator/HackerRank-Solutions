#include <vector>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<vector<int>> arr;
    int n, q;
    cin >> n >> q;
    while (n--){
        int j;
        cin >> j;
        vector<int> r(j);
        for (int i = 0; i < j; i++){
            cin >> r[i];
        }
        arr.push_back(r);
    }
    while (q--){
        int i, j;
        cin >> i >> j;
        cout << arr[i][j] << "\n";
    } 
    return 0;
}

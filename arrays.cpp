#include <iostream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i2 = 0; i2 < n; i2++){
        cout << arr[n - i2 - 1] << " ";
    }
    return 0;
}

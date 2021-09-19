#include<bits/stdc++.h>
using namespace std;
int check(int n){
    if (n < 2) return 0;
    else {
        for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0) return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int l, r;
        cin >> l >> r;
        int count = 0;
        for (int i = l; i <= r; i++){
            if (check(i) == 1) count ++;
        }
        cout << count << endl;
    }
    return 0;
}
// code by dnhuyen

#include<bits/stdc++.h>
using namespace std;
int fibo[1005];
int MAX = 1000000007;
int main(){
    int t;
    cin >> t;
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 1005; i++){
        fibo[i] = (fi
        fibbo[i-1] + fibo[i-2])% MAX;
    }
    while (t--){
        int n;
        cin >> n;
        cout << fibo[n] << endl;
    }
    return 0;
}
// code by dnhuyen

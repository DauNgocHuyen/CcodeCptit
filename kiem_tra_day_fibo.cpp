#include<bits/stdc++.h>
using namespace std;
long long fibo[1000000];
int main(){
    int t;
    cin >> t;
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 100; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    while (t--){
        int n;
        cin >> n;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j <= 100; j++){
                if (a[i] == fibo[j]) {
                    cout << a[i] <<" ";
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen

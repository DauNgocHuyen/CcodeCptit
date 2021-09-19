#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        int count = 0;
        long long a[n+5];
        for (long long i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] == 0) count ++;
        }
        long long b[n+5];
        long long q = 0;
        for (int i = 0; i < n; i++){
            if (a[i] != 0){
                b[q++] = a[i];
            }
        }
        for (int i = 0; i < q; i ++){
            cout << b[i] << " ";
        }
        for (int i = 0; i < count ; i++){
            cout << "0" << " ";
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen

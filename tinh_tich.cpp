#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        int b[m+5];
        for (int i = 0; i < m; i ++){
            cin >> b[i];
        }
        sort(b, b+n, greater<int>());
        long long k = (long long)a[n-1] * b[m-1];
        cout << k << endl;
    }
    return 0;
}
// code by dnhuyen

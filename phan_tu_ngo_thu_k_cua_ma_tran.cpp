#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n*n+5];
        for(int i = 0; i < n*n; i++){
            cin >> a[i];
        }
        sort(a, a+n*n);
        cout << a[k-1] << endl;
    }
    return 0;
}
// code by dnhuyen

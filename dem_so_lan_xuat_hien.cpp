#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++){
            if (a[i] == x) count ++;
        }
        if (count > 0) cout << count << endl;
        else cout << "-1" << endl;
    }
    return 0;
}
// code by dnhuyen

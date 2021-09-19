#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        int count = 0;
        if (m > n) swap(m,n);
        for (int i = m; i <= n; i++){
            if (i%a == 0 || i%b == 0) count ++;
        }
        cout << count << endl;
    }
    return 0;
}
// code by dnhuyen

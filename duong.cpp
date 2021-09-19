#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int x = 1, dem = 1;
        while (dem < k){
            n -= x;
            x += 2;
            dem ++;
        }
        if (n % 2 == 1 && n >= x) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
// code by dnhuyen

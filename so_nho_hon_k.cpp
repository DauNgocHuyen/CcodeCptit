#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int b[n+5];
        int m = 0;
        for (int i = 0; i < n; i++){
            if 
        }
        int x = 0;
        for (int i = 0; i < n; i++){
            if (a[i] > k){
                x =i;
                break;
            }
        }
        int count = 0;
        for (int i = x; i < n; i++){
            if (a[i] <= k) count ++;
        }
        cout << count << endl;
    }

    return 0;
}
// code by dnhuyen

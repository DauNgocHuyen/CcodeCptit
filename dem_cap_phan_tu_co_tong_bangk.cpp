#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n-1; i++){
            int sum = 0;
            for (int j = i+1; j < n; j++){
                sum = a[i] + a[j];
                if (sum == k) count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
// code by dnhuyen

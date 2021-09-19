#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        int Min = a[1] - a[0];
        for (int i = 0; i < n-1; i++){
            int MIN = a[i+1] - a[i];
            Min = min(MIN, Min);
        }
        cout << Min << endl;
    }
    return 0;
}
// code by dnhuyen

#include<bits/stdc++.h>
using namespace std;
int check[1000005];
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 0; i < 1000005; i++){
            check[i] = 0;
        }
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i] ;
            check[a[i]] ++;
        }
        int count = 0;
        for (int i = 0; i < n; i++){
            if (check[a[i]] > 1) count ++;
        }
        cout << count << endl;
    }
    return 0;
}
// code by dnhuyen

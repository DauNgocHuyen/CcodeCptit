#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int check[100005];
        for (int i = 0; i < 100005 ; i++){
            check[i] = 0;
        }
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            check[a[i]] ++;
        }
        sort(a, a+n);
        int count = 0;
        for (int i = a[0]; i <= a[n-1]; i++){
            if (check[i] == 0){
                count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
// code by dnhuyen

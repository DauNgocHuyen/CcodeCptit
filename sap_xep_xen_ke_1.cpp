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
        int b[n+5];
        int k = 0;
        for (int i = 0; i < n/2; i ++){
            b[k++] = a[i];
        }
        int c[n+5];
        int q = 0;
        for (int i = n/2; i < n; i++){
            c[q++] = a[i];
        }
        int m = 0;
        int x = 0;
        sort(c, c+q, greater<int>());
        for (int i = 0; i < n; i++){
            if (i%2 == 0){
                cout << c[m++] <<" ";
            }
            else {
                cout << b[x++] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen

#include<bits/stdc++.h>
using namespace std;
int check[10005];
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < 1005; i++){
        check[i] = 0;
    }
    int a[n+5];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        check[a[i]] ++;
    }
    sort(a, a+n);
    for (int  i = 0; i < n; i++){
        if (check[a[i]] > 0){
            cout << a[i] << " ";
            check[a[i]] = 0;
        }
    }
    return 0;
}
// code by dnhuyen

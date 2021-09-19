#include<bits/stdc++.h>
using namespace std;
int check[10000000] ;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long x;
        for (int i = 0; i < 10000000; i++){
            check[i] = 0;
        }
        for (long long i = 0; i < n; i++){
            cin >> x;
			if (x >= 0 && x < n){
				check[x] ++;
			}
        }
        for (int i = 0 ; i < n; i++){
            if (check[i] > 0) cout << i << " ";
            else cout << "-1" << " ";
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen

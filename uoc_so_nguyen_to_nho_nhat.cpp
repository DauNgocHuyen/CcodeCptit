#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout <<"1 ";
        for (int i = 2; i <= n; i++){
            int x = i;
            for (int j = 2; j <= sqrt(x); j++){
                while (x % j == 0){
                    cout << j <<" ";
                    x/=j;
                    break;
                }
                if (x != i) break;
            }
            if (x == i) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen

#include<bits/stdc++.h>
using namespace std;
int check(long long n){
    if (n < 2) return 0;
    else {
        for (int i = 2; i <= sqrt(n); i++){
            if (n%i == 0) return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        long long a,b;
        cin >> a >> b;
        int count = 0;
        if (a > b) swap(a,b);
        long long m = sqrt(a);
        if ((int)sqrt(a) != sqrt(a)){
            if (check(m) == 1){
                m += 1;
            }
        }
        long long n = sqrt(b);
        for (long long i = m; i <= n; i++){
            if (check(i) == 1) count ++;
        }
        cout << count << endl;
    }
    return 0;
}
// code by dnhuyen

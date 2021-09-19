#include<bits/stdc++.h>
using namespace std;
long long a, b, p;
void input(){
    cin >> a >> b >> p;
}
long long mod( long long a, long long b){
    if ( b == 0) return 0;
    long long tmp = mod (a, (b/2));
    if (b % 2 == 0) return tmp % p * 2 % p;
    return (a + 2*tmp) % p;
}
void solve(){
    cout << mod(a,b) << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        input();
        solve();
    }
    return 0;
}
// code by dnhuyen

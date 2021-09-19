#include<bits/stdc++.h>
using namespace std;
int check(int n){
    if (n < 2) return 0;
    else {
        for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0) return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int x;
        cin >> x;
        int count = 0;
        for (int i = 1; i < x; i++){
            if (__gcd(i,x) == 1) count ++;
        }
        if (check(count) == 1) cout <<"1"<<endl;
        else cout <<"0"<<endl;
    }
    return 0;
}
// code by dnhuyen

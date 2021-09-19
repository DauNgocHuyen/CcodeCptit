#include<bits/stdc++.h>
using namespace std;
int check(long long n){
    if (n < 2) return 0;
    else {
        for (long long i = 2; i <= sqrt(n); i++){
            if (n%i == 0) return 0;
        }
    }
    return 1;
}
int main(){
    long long n;
    cin >> n;
    if(check(n) == 1) cout << "YES";
    else cout << "NO";
    return 0;
}
// code by dnhuyen

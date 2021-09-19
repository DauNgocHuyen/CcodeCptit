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
        long long n;
        cin >> n;
        int count = 0;
        for (long long i = 1; i <= sqrt(n); i++){
            if (check(i) == 1) count ++;
        }
        cout << count << endl;
    }
    return 0;
}
// code by dnhuyen

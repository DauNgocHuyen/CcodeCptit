#include<bits/stdc++.h>
using namespace std;
int tong(int n){
    int a = n;
    int sum = 0;
    while ( a > 0){
        sum += a%10;
        a/=10;
    }
    return sum;
}
int tonguoc(int n){
    int sumuoc = 0;
    for (int i = 2; i <= sqrt(n); i++){
        int tmp = 0;
        while (n%i == 0){
            tmp = tong(i);;
            sumuoc += tmp;
            n/=i;
        }
    }
    if (n > 1) {
        int tmp = tong(n);
        sumuoc += tmp;
    }
    return sumuoc;
}
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
        int n;
        cin >> n;
        if (check(n) == 1) cout << "NO"<< endl;
        else {
            int p = tong(n);
            int q = tonguoc(n);
            if (p == q) cout <<"YES"<< endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
// code by dnhuyen

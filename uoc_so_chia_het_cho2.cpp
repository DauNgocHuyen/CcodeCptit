#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        int count = 0;
        for (int i = 1; i <= sqrt(n); i++){
            if (n%i == 0){
                if (i%2 == 0) count ++;
                if ((n/i) % 2 == 0) count ++;
            }
        }
        if (n%2 == 1) count = 0;
        else if (sqrt(n) == (int) sqrt(n) && n%2 == 0) count = count -1;
        cout << count << endl;
    }
    return 0;
}
// code by dnhuyen

#include<bits/stdc++.h>
using namespace std;
int MAX = 1000000000 + 7;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long sum = 0;
        for (int i = 0; i < n; i++){
        	long long s = 1;
        	for (int j = n-i-1; j >= 1; j--){
        		s = (s*x) % MAX;
			}
			sum += a[i] *s;
			sum %= MAX;
		}
        cout << sum << endl;
    }
    return 0;
}
// code by dnhuyen

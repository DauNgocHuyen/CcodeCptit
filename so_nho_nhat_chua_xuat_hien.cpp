#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        if (a[n-1] < 0) cout << "1" << endl;
		else {
			int b[n+5];
			int q = 0;
			int ok = 0;
			for (int i = 0; i < n; i++){
				if (a[i] > 0){
					b[q++] = a[i];
				}
			}
			if (b[0] > 1) cout <<"1" << endl;
			else {
				for (int i = 0; i < q-1; i++){
					if (b[i+1] - b[i] > 1) {
						cout << b[i] + 1 << endl;
						ok = 1;
						break;
					}
				}
				if (ok == 0) cout << b[q-1] + 1 << endl;
			}
		} 
    }
    return 0;
}
// code by dnhuyen

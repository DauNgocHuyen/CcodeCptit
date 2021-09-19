#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		int a[n+5][m+5];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int d=0, hang=n-1, cot=m-1, f=0;
		while (d<n){
			for (int i=d; i<=cot; i++){
				cout << a[d][i] << " ";
				f++;
			}
			if (f==n*m) break;
			for (int i=d+1; i<=hang; i++){
				cout << a[i][cot] << " ";
				f++;
			}
			if (f==n*m) break;
			for (int i=cot-1; i>=d; i--){
				cout << a[hang][i] << " ";
				f++;
			}
			if (f==n*m) break;
			for (int i=hang-1; i>d; i--){
				cout << a[i][d] << " ";
				f++;
			}
			if (f==n*m) break;
			cot--;
			hang--;
			d++;
		}
		cout << endl;
	}
	return 0;
}
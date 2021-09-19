#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m, k;
		cin >> n >> m >> k;
		int a[n+5][m+5];
		int ans[n*m + 10];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int d=0, hang=n-1, cot=m-1, f=0;
		while (d<=n/2){
			for (int i=d; i<=cot; i++){
				ans[f++] = a[d][i];
			}
			if (f==n*m) break;
			for (int i=d+1; i<=hang; i++){
				ans[f++] = a[i][cot];
			}
			if (f==n*m) break;
			for (int i=cot-1; i>=d; i--){
				ans[f++] = a[hang][i];
			}
			if (f==n*m) break;
			for (int i=hang-1; i>d; i--){
				ans[f++] = a[i][d];
			}
			if (f==n*m) break;
			cot--;
			hang--;
			d++;
		}
		cout << ans[k-1];
		cout << endl;
	}
	return 0;
}

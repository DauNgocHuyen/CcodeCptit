#include<bits/stdc++.h>
using namespace std;
void cong (string a, string b){
    int n= a.size(), m= b.size(),t, nho=0;
	reverse (a.begin(), a.end());
    reverse (b.begin(), b.end());
	a = a + '0';
	for (int i = 0; i <= n-m; i++){
		b = b + '0';
	}
	string tong="";
	for (int i = 0; i <= n; i++){
		t = (a[i]-'0') + (b[i] -'0') + nho;
		nho = t/10;
		t = t%10;
		char c = '0' + t;
		tong = tong + c;
	}
	reverse ( tong.begin(), tong.end());
	int k;
	for (int i = 0; i < tong.size(); i++){
        if( tong[i] !='0'){
        	k = i;
        	break;
		}
    }
    for(int i = k; i < tong.size(); i++){
    	cout << tong[i];
	}
    cout << endl; 
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string a, b;
        getline(cin, a);
        getline(cin, b);
        if (a.size() > b.size()) cong (a,b);
        else cong (b, a);
    }
    return 0;
}
// code by dnhuyen
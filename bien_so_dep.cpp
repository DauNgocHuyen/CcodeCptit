#include<bits/stdc++.h>
using namespace std;
int sosanh(string s){ 
	if (s[5] < s[6] && s[6] < s[7] && s[7] < s[9] && s[9] < s[10]) return 1;
    return 0;
}
int bangnhau(string s){
	if(s[5] == s[6] && s[6] == s[7] && s[7] == s[9] && s[9] == s[10 ]){
		return 1;
	}
	return 0;
}
int haiba(string s){
	int count = 0;
	if(s[5] == s[6] && s[6] == s[7] && s[9] == s[10]) return 1;
    return 0;
}
int sautam(string s){
	int count = 0;
	for(int i = 5; i <= 7;i++){
		if(s[i] == '6' || s[i] =='8'){
			count++;
		}
	}
	for(int i = 9; i <= 10;i++){
		if(s[i] == '6' || s[i] =='8'){
			count++;
		}
	}
	if(count == 5) return 1;
    return 0;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        if(sosanh(s) == 1 || sautam(s) == 1||haiba(s) == 1 || bangnhau(s) == 1){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
    }
    return 0;
}
// code by dnhuyen

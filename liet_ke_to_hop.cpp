#include<bits/stdc++.h>
using namespace std;

int n, x;
int a[1000];

void in(){
    int dem = 0;
	for(int i = 0; i < x; ++i){
        cout << a[i] ;
        dem ++;
        if (dem == x) cout << " ";
	}
}

void t(int i){
	for(int j = 1; j <= n; ++j){
		a[i] = j;
		if(i + 1 == x) in();
		else t(i + 1); 
	}
}

int main(){
    int k;
    cin >> k;
    while (k--){
        cin >> n >> x;
	    t(0);
        cout << endl;
    }
	return 0;
}
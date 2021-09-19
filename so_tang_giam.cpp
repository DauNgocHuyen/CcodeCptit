#include<bits/stdc++.h>
using namespace std;

int checknt(int n){
    if (n < 2) return 0;
    else {
        for (int i = 2; i <= sqrt(n); i++){
            if (n%i == 0) return 0;
        }
    }
    return 1;
}
int stg(long long n){
	if(n < 10){
		return 1;
	}
	int b = n%10;
	int c = (n/10) %10; 
	n = n /100;
	if(b == c){
		return 0;
	}
	else if( b > c){
		while(n > 0){
			b = c;
			c = n % 10;
			if(b <= c){
				return 0;
			}
			n= n/10;
		}
	}
	else if( b < c){
		while(n > 0){
			b = c;
			c = n % 10;
			if(b >= c){
				return 0;
			}
			n= n/10;
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
        int count = 0;
        long long a = pow(10,n);
        for (int i = a/10; i < a; i++){
            if (stg(i) == 1){
				if (checknt(i) == 1) count ++;
			}
        }
        cout << count << endl;
	}
	return 0;
}
// code by dnhuyen


#include<iostream>
using namespace std;
/*
	vi du : m=2   s=15;
*/
void max(int m,int s){
	int a[m];
	int i=0;
	while(s>=9&&i<m){
		a[i++]=9;	// suy ra a[]={9}, i=1;
		s-=9;
	}
	// s=6;
	while(i<m){
		a[i++]=s;	// suy ra a[] = {96}, i=2;
		s=0;
	}
	for(int i=0;i<m;i++)
		cout<<a[i];
}
void min(int m,int s){
	int a[m];
	int i=m-1;
	while(s>9&&i>=0){
		a[i--]=9;
		s-=9;
	}
	if(i>0){
		a[i]=s-1;i--;
		for(int j=i;j>0;j--) a[j]=0;
		a[0]=1;
	}
	else a[0]=s;
	for(int i=0;i<m
	;i++)
		cout<<a[i];
}
main(){
	int m,s;
	cin>>m>>s;
	if(s>m*9||s==0)
		cout<<"-1 -1";
	else{
		min(m,s);
		cout<<" ";
		max(m,s);
	}	
}
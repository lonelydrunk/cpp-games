#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	string a;
	int n;
	getline(cin,a);
	n=a.size();
	for(int i=0;i<n;i++){
		if(a[i]>='a'&&a[i]<='z'){
			if(a[i]=='z')a[i]='a';
			else a[i]=a[i]+1;
		}
		else if(a[i]>='A'&&a[i]<='Z'){
			if(a[i]=='Z')a[i]='A';
			else a[i]=a[i]+1;
		}
	}
	cout<<a;
	return 0;
}

// NEXT ROUND

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k,i,c=0;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]>0&&a[i]>=a[k-1])
		c++;
	}
	cout<<c;
	
}
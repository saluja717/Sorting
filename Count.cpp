#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],result[n];
	for(int i=0;i<n;i++){cin>>a[i];}
	int max = *max_element(a,a+n);
	int b[max+1]={0};
	for(int i=0;i<n;i++)
	{
		b[a[i]]++;
	}
	for(int i=1;i<=max;i++)
	{
		b[i]=b[i]+b[i-1];
	}
	for(int i=n-1;i>=0;i--)
	{
		b[a[i]]--;
		result[b[a[i]]]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<result[i]<<" ";
	}
	return 0;
}

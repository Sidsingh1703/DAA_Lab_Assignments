#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n,int k)
{
	int i,j,diff,cnt=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				diff=a[j]-a[i];
				if(k==diff)
				cnt++;
			}
			else
			{
				diff=a[i]-a[j];
				if(k==diff)
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
}
int main()
{
	int t,n,i,k,j;
	cin>>t;
	for(j=1;j<=t;j++)
	{
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		cin>>k;
		output(a,n,k);
	}
}

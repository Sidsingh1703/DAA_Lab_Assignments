#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		int n,key,l,r,f=0;
 		cin>>n;
 		int a[n];
 		for(int i=0;i<n;i++)
 		{
 			cin>>a[i];
		}
		cin>>key;
		sort(a,a+n);
		l=0;
		r=n-1;
		while(l<r)
		{
			if(a[l]+a[r]==key)
			{
				f=1;
				cout<<a[l]<<" "<<a[r]<<" ";
				l++;
				r--;
			}
			else if(a[l]+a[r]>key)
			{
		        
			    r--;
		    }
			else
			l++;
			
		}
		if(f==0)
		{
			cout<<"No such pair exists"<<endl;
		}
	}
 }

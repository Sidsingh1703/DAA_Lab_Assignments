/* You have been given to sorted integer arrays of size m and n.
Design an algorithm and implement it using a program to find list 
of elements which are common to both.*/

#include<iostream>
using namespace std;

int main()
{
	
		int n,m,i,j;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>m;
		int b[m];
		for(i=0;i<m;i++)
		{
			cin>>b[i];
		}
		i=0;
		j=0;
		while(i<n && j<m)
		{
			if(a[i]==b[j])
			{
				cout<<b[j]<<" ";
				i++;
				j++;
			}
			else if(a[i]<b[j])
			{
				i++;
			}
			else
			j++;
		}
	
}

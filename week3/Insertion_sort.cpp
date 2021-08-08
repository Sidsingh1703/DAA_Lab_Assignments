#include<iostream>
using namespace std;

void insertion_sort(int a[],int n)
{
	int i,j,curr_element,cmp=0,shift=0;
	for(i=1;i<n;i++)
	{
		curr_element=a[i];
		j=i-1;
		while(a[j]>curr_element && j>=0)
		{   
		    cmp++;
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=curr_element;
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<cmp<<endl<<shift<<endl;
	
}

int main()
{
	int t,i,n,j;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n;
		int a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		
		insertion_sort(a,n);
		cout<<endl;
	}
}


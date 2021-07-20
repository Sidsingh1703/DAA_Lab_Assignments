#include<iostream>
using namespace std;
int sort(int a[],int n )
{
	int round , i,temp;
	for(round=1;round<=n-1;round++)
	{
		for(i=0;i<=n-1-round;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}
int binary_search(int a[],int n,int item)
{
	int l,u,m,f=0;
	l=0;
	u=n-1;
	while(l<=u)
	{
		m=(l+u)/2;
		if(item==a[m])
		{
		f=1;
		break;
		}
		else if(item>a[m])
		{
			l=m+1;
		}
		else
		{
			u=m-1;
		}
	}
	if(f==1)
	cout<<"SEARCH SUCCESSFUL ELEMENT FOUND";
	else
	cout<<"ELEMENT NOT FOUND IN YOUR LIST";
}
int main()
{
	int n,item,i;
	cout<<"Enter the no.of elements:"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements of your list:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	cout<<"enter the element you want to search-"<<endl;
	cin>>item;
	sort(a,n);
	binary_search(a,n,item);
	return 0;
}


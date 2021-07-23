/*given a sorted array of posituve integers ,design an algorithm and
 implement using a program to find three indices i,j,k such that 
arr[i]+arr[j]=arr[k] */

#include<iostream>
using namespace std;

void output(int arr[],int n)
{   
    int i,j,k,s=0,f=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			s=arr[i]+arr[j];
			for(k=j+1;k<n;k++)
			{
				if(s==arr[k])
				{   
				    f=1;
					cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
					break;
				}
			}
		}
	}
	if(f==0)
	cout<<"match not found"<<endl;
}
int main()
{
	int T,n,i,j;
	cin>>T;
	for(j=1;j<=T;j++){
	cin>>n;
	int arr[n]	;
	for(i=0;i<n;i++)
		cin>>arr[i];
	output(arr,n);
}

}

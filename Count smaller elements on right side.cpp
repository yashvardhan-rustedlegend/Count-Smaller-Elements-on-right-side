#include<iostream>
using namespace std;
int main()
{
	int a[]={12,1,2,3,0,11,4};
	int n=sizeof(a)/sizeof(a[0]);
	int countSmaller[10];
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				count++;
			}
		}
		countSmaller[i]=count;
	}
	cout<<"countSmaller[]=";
	for(int i=0;i<n;i++)
	{
		cout<<countSmaller[i]<<" ";
	}
}

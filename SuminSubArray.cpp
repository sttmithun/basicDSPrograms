#include<iostream>
using namespace std;
void subarrayfound(int a[],int n,int sum)
{
	int windsum=0;
	int low=0,high=0;
	for(low=0;low<n;low++)
	{
		while(windsum< sum && high < n)
		{
			windsum += a[high];
			high++;
		}
		if(windsum==sum)
		{
			cout<<"SUM FOUND - "<<low<<"-" << high-1 <<endl;
			return;
		}
		windsum-=a[low];
	}
}
int main()
{
	int a[]={3,5,6,7,3,25};
	int n=sizeof(a)/sizeof(a[0]);
	subarrayfound(a,n,25);
	return 0;
}

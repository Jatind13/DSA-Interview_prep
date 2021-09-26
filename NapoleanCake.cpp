#include <iostream>
#include<vector>
using namespace std;
 
int main() { int t;cin>>t;
while(t--)
{
	int n;cin>>n;
	vector<int>v(n);
		vector<int>a(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
int	i=n-1,curr=0;    //strating from right side of the input array.
while(i>=0)
{
	if(v[i]>curr)   
	 curr=v[i];  //giving curr the value from input array if it is greater than 0.
	 if(curr>0) a[i]=1;   //a vector kai ander peeche sai value daal rha hai.
	 else a[i]=0;
	 curr--;
	 i--;
	 
}
for(int i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
cout<<endl;
}
 
	return 0;
}
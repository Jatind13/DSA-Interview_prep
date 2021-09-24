//This algorithm is used to solve the rotate array by k postion problem
//Problem:Suppose we are given an array of n integers and we have to rotate it by k positions to the left with space complexity of O(1) i.e. within the same array (in-place).
//Input:-a[]=1,2,3,4,5,6,7,8,9 ,n=9; k=3;
//Output:-4,5,6,7,8,9,1,2,3
//CODE:
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
 if(b==0)
  return a;
 else
  return gcd(b, a%b);
}
void rotateArray(int a[],int n ,int k)
{
int d=-1,i,temp,j;
for(int i=0;i<gcd(n,k);i++)  //number of sets depend on gcd of(n,k) 
{
   j=i;
  temp=a[i];
  while(1)
  {
   d=(j+k)%n;   //finds the position to which the value is shifted to left
   if(d==i)     //if d has reachd the position of i which means set is completed
    break;
   a[j]=a[d];
   j=d;
  }
  a[j]=temp;
 }

}
void displayArray(int a[],int n)
{
 int i;
 for(i=0;i<n;i++)
  cout<<a[i]<<" ";
 cout<<"\n";
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    rotateArray(a,n,2);
    displayArray(a,n);
    return 0;
}
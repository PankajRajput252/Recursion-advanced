#include<bits/stdc++.h>
using namespace std;
int  subsequence(int ind,int arr[],vector<int>&v,int k,int sum,int n)
{
    if(ind==n)
    {   
        if(sum%k==0)
        {
         return 1;
        }
       
        return 0;
    }
    v.push_back(arr[ind]);
     sum+=arr[ind];
  int l= subsequence(ind+1,arr,v,k,sum,n); //here k is the target value for which it will be exactly divisible 
    v.pop_back();
    sum-=arr[ind];
  int  h= subsequence(ind+1,arr,v,k,sum,n); 
  return l+h;

}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   int k;
   cout<<"Enter the target for divisible";
   cin>>k;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   } 
   vector<int>v;
  int c= subsequence(0,arr,v,k,0,n);
   cout<<"count="<<c-1;//-1 is for the empty one
}
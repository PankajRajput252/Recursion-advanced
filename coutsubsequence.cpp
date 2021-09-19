#include<bits/stdc++.h>
using namespace std;
void subsequence(int ind,int arr[],vector<int>&v,int k,int sum,int n)
{
    if(ind==n)
    {   
        if(sum%k==0)
        {
        for(auto it:v)
        {  

            cout<<it<<" ";
        }
         cout<<endl;
        }
       
        return;
    }
    v.push_back(arr[ind]);
     sum+=arr[ind];
    subsequence(ind+1,arr,v,k,sum,n);
    v.pop_back();
    sum-=arr[ind];
    subsequence(ind+1,arr,v,k,sum,n);

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
   subsequence(0,arr,v,k,0,n);
}
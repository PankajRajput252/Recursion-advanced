#include<bits/stdc++.h>
using namespace std;
void subsequence(int ind,int arr[],vector<int>&v,int n)
{
    if(ind==n)
    {
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[ind]);
    subsequence(ind+1,arr,v,n);
    v.pop_back();
    subsequence(ind+1,arr,v,n);

}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   } 
   vector<int>v;
   subsequence(0,arr,v,n);
}
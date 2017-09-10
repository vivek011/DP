#include<iostream>
using namespace std;
int optimal(int arr[],int i,int j)
{
    if(i==j-1) return max(arr[i],arr[j]);
    if(i==j) return arr[i];
    return max((arr[i]+min(optimal(arr,i+2,j),optimal(arr,i+1,j-1))),arr[j]+min(optimal(arr,i+1,j-1),optimal(arr,i,j-2)));
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
   cout <<optimal(arr,0,n-1)<<endl;
   return 0;
}

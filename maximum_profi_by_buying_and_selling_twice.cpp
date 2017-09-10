#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
    int n,sum=0,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    priority_queue<int> q;
    for(int i=0;i<n;)
    {
        if(arr[i]<arr[i+1]&&flag==0)
        {
           sum=arr[i];flag=1;
           i++;
           cout<<sum<<" ";
        }
        else if(arr[i]<arr[i+1]&&flag==1)
        {
            i++;
        }
        else
        {
            if(sum!=0)
            {q.push(arr[i]-sum);cout<<arr[i+1]<<" ";}
            flag=0;
            sum=0;
            i++;
        }
        if(i==n-1&&flag==1) {q.push(arr[i]-sum);cout<<arr[i]<<" ";}
    }
    int ans=q.top();q.pop();
    ans+=q.top();
    cout<<ans<<endl;
    return 0;
    }

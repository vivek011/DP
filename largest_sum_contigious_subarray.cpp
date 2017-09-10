#include<iostream>
#include<vector>
using namespace std;
int lscs(vector<int> v)
{
    int l=v.size(),sum=0,global_sum=-1;
    //if(l==0) return 0;
    for(int i=0;i<l;i++)
    {
       sum+=v[i];
       if(sum>global_sum)
         global_sum=sum;
       if(sum<0)
         sum=0;

    }
    return global_sum;
}
int main()
{
    int x;
    vector<int> v;
    /*while(cin>>x)
      v.push_back(x);*/
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<lscs(v);
    return 0;
}

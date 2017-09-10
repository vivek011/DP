
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> p1,p2;
    cout<<"Enter first points:";

        int x,y;
        cin>>x>>y;
        p1.push_back(x);
        p1.push_back(y);
    cout<<"Enter second point:";
        cin>>x>>y;
        p2.push_back(x);
        p2.push_back(y);
   int w[2];
   cout<<"Enter weighted of each point:";
   cin>>w[0]>>w[1];
    cout<<"Calculated weighted ecludian distance:";
    int sq_sum=0;
    for(int i=0;i<2;i++)
    {
        sq_sum+=w[i]*(p1[i]-p2[i])*(p1[i]-p2[i]);
    }
    int dist=sqrt(sq_sum);
    cout<<dist<<" ";
}

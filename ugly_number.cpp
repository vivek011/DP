#include<iostream>
using namespace std;
int find_ugly(int n)
{
    int next_mul_2=2,next_mul_3=3,next_mul_5=5;
    int ind_2=0,ind_3=0,ind_5=0;
    int ugly[n];
    ugly[0]=1;
    for(int i=1;i<n;i++)
    {
        int next_min=min(next_mul_2,min(next_mul_3,next_mul_5));
        ugly[i]=next_min;
        if(next_min==next_mul_2)
        {
            ind_2+=1;
            next_mul_2=ugly[ind_2]*2;
        }
        if(next_min==next_mul_3)
        {
            ind_3+=1;
            next_mul_3=ugly[ind_3]*3;
        }
        if(next_min==next_mul_5)
        {
            ind_5+=1;
            next_mul_5=ugly[ind_5]*5;
        }
    }
    return ugly[n-1];
}
int main()
{
    int n;
    cin>>n;
    cout<<find_ugly(n);
    return 0;
}

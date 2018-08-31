#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long int t,s=7,a=1,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
    for(j=1;j<=i;j++)
    {
        cout<<setfill('0')<<setw(5)<<s<<" ";
          s+=8*(2*a+1);
          a++;
    }
    cout<<endl;
    }
    return 0;
}

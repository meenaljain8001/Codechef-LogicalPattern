#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j,t,c=1,a;
        cin>>t;
        while(i<=t)
        {

                while(j<=i)
                {
                        a=8*pow(c,2)-1;
                   cout<<setfill('0')<<setw(5)<<a<<" ";
                  c++;
                  j++;

                }

                cout<<endl;
                i++;
        }
                return 0;
}

using namespace std;
#include<bits/stdc++.h>



int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int ones=0;
    while(n!=0)
     {
        if(n%2==1)
           ones++;
        n=n/2;   
     }
     int ans=0;
     for(int i=0;i<ones;i++)
      {
        ans = ans*2 +1;
      }
      cout<<ans<<endl;
}

return 0;    
}
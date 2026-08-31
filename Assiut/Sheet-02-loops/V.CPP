using namespace std;
#include <bits/stdc++.h>

int main() {
long long n;
cin>>n;
int sum=0;
long long c=1;
for(int i=0;i<n;i++)
{  
       for(int i=0 ; i<4 ; i++ )
       {      if(i==3)
            {
                cout<<"PUM";
            }
            else 
            cout<<c<<" ";
            c++;
          
       }
       cout<<endl;
}


    return 0;
}
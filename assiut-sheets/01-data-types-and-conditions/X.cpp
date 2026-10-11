using namespace std;
#include<bits/stdc++.h>


int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    
    long long left=max(a,c);
    long long right=min(b,d);

    if(left<=right)
        cout<<left<<" "<<right<<endl;
    else
        cout<<"-1"<<endl;    
}
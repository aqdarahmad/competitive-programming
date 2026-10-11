
using namespace std;
 
#include <bits/stdc++.h>
 
int main() {
int t;
cin>>t;
set<int>st;
while(t--)
{
    int x;
    cin>>x;
    st.insert(x);
    
}
cout<< *st.rbegin()<<endl;
 
    return 0;
}
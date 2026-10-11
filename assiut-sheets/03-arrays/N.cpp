using namespace std;
#include <bits/stdc++.h>
 
int main() {
 
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}



auto k1 = min_element(arr.begin(),arr.end());
auto k2 = max_element(arr.begin(),arr.end());

swap(*k1,*k2);

for(int c:arr)
{
    cout<<c<<" ";
}
return 0;
 
    
}
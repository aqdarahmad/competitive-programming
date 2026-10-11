using namespace std;

#include <bits/stdc++.h>

int main() {
long long n;
cin>>n;
multiset<long long>s; 
multiset<long long>s2; 

    vector<long long>v(n);
    for(int i=0;i<n;i++){
     cin>>v[i];
     s.insert(v[i]);
    }
      vector<long long>v2(n);
    for(int i=0;i<n;i++){
     cin>>v2[i];
     s2.insert(v2[i]);
    }


if(s==s2)
cout<<"yes";
else
cout<<"no";
    

return 0;
}

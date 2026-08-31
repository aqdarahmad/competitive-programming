using namespace std;
 
#include <bits/stdc++.h>
 
int main() {
int t;
cin>>t;
int ev=0;
int pos=0;
int od=0;
int ng=0;
while(t--)
{
    int x;
    cin>>x;
    if(x%2==0)
      ev++;
      if(x%2!=0)
       od++; 
    if(x<0)
      ng++;
     if(x>0)
      pos++;
     
}
cout<<"Even: "<<ev<<endl;
cout<<"Odd: "<<od<<endl;
cout<<"Positive: "<<pos<<endl;
cout<<"Negative: "<<ng<<endl;
 
    return 0;
}
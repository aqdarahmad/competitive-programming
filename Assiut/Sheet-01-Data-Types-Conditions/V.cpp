using namespace std;

#include<bits/stdc++.h>

// 5.5 float 5 0.5
int main(){

   double a;
   cin>>a;
   double ap=a-(int)a;
   if(ap==0)
    cout<<"int "<<a<<endl;
    else
        cout<<"float "<<(int)a<<" "<<ap<<endl;
return 0;   
}
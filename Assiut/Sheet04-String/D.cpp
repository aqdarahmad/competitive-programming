using namespace std;
#include<bits/stdc++.h>


int main()
{

    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
   
    cout<<s1.size()<<" "<<s2.size()<<endl;
    cout<<s1+s2<<endl;
    char a=s1[0];
    s1[0]=s2[0];
    s2[0]=a;
    cout<<s1<<" "<<s2<<endl;

return 0;    
}
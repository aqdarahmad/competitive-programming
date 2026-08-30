
using namespace std;
#include<bits/stdc++.h>
#include<cmath>

/*
comparing
65 90 is captial 

*/

int main(){
char c;
cin>>c;

if(c>=65 && c<=90){
cout<<(char)tolower(c)<<endl;
}
else{
cout<<(char)toupper(c)<<endl;
}
return 0;
}


using namespace std;

#include<bits/stdc++.h>


int getsum(int a , int b)
{
    int cin=0;
    int rslt=0;

    for(int i=0;i<32;i++)
     {
        int a1=(a>>i)&1;
        int b1=(b>>i)&1;

        int cin,sum;

        int x=a1^b1;

        sum=x^cin;

        cout=(a1&b1)|(x&cin);
        result=result | (sum<<i);
        cin=cout;
     }
     return result;
}
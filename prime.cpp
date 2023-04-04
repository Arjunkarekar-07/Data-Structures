#include<bits/stdc++.h>
using namespace std;
void isprime(int n);
int main(){
    int n ;
    cout<<"enter the no";
    cin>>n;
    isprime(n);
}

void isprime(int n){
    int prime=0;
    for(int i=2;i<42;i++)
    {
        if(n%2==0)
          prime=1;
    }
    if(prime==1)
        cout<<"not a prime";
    else
        cout<<"prime";
}
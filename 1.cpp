#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,newN,temp,i=1;;
    cin>>n;
    newN=n;
    while(n>0){
        temp=n%10;
        newN=newN+i;
        if(n%10==9){
            newN=newN-i*10;
        }
        n/=10;
        i*=10;
    }
    cout<<newN;
    return 0;
}
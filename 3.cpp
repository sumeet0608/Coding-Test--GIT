#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count {};
    cin>>n;
    while(n>0){
        n/=10;
        count++;
    }
    cout<<count;
    return 0;
}
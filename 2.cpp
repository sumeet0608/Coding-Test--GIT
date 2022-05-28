#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i=1000,num;
    cin>>n;
    for(int j=3;j>=0;j--){
        num=n/i;
        cout<<num <<" * "<<pow(10,j) <<" = "<<num * pow(10,j)<<endl;
        n%=i;
        i=i/10;
    }
    return 0;
}
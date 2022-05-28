#include<bits/stdc++.h>
using namespace std;

int main(){
    int lb,hb,flag;
    cin>>lb>>hb;
    for(int i=lb;i<=hb;i++){
        flag=1;
        if(i==0 || i==1) continue;
        for(int n=2;n<i/2;n++){
            if(i%n==0){
                flag=0;
                break;
            }
        }
        if(flag==1) cout<<i<<" ";
    }
    return 0;
}
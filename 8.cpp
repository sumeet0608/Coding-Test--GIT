#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.length();
    if(n==0) {cout<<"";return 0;}
    string res="";
    int i {}, k{};
    while (i<n){
        while(i+k < n && str[i+k]==str[i]) k++;
        if(k>=3) i+=k;
        else {
            res+=str[i];
            i++;
        }
        k=0;
    }
    cout<<res;
    return 0;
}
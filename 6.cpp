#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string names[n];
    string name;
    for(int i=0;i<n;i++){
        cin>>names[i];
    }
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(names[j]>names[j+1]){
                name=names[j];
                names[j]=names[j+1];
                names[j+1]=name;
            }
        }
    }
    for (int i=0;i<n;i++){
        cout<<names[i]<<endl;
    }
    return 0;
}
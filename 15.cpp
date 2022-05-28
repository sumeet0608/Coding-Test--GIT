#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arr[]={6,2,5,4,3,1};
    sort(arr, arr + n);
    for (int i = 0; i < n / 2; i++)
        cout << arr[i] << " ";
    for (int j = n - 1; j >= n / 2; j--)
        cout << arr[j] << " "; 
}
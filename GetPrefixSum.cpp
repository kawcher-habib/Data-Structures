#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

   vector<int> pri[n];
    pri[0] = a[0];
     for(int i = 1; i<n; i++){
        pri[i] = pri[i-1] + a[i];
     }

     for(int i = pri.size()-1; i>0; i--){
        cout<<pri[i]<<" ";
     }
}

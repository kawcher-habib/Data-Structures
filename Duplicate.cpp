#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
   //sort(a.begin(), a.end());
   for(int i = 0; i<n; i++){
    if(a[i]<a[i+1]){
        int tmp = a[i];
        a[i] = a[i+1];
        a[i+1] = tmp;
    }
   }
    bool flag = false;
   for(int i = 0; i<n; i++){
        if(a[i] == a[i+1]){
            flag = true;
            break;
        }
   }
   if(flag){
    cout<<"YES";
   }else{
    cout<<"NO";
   }
        return 0;
}

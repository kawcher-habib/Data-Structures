#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
        int crn_idx = v.size() - 1;
        while(crn_idx != 0){
            int prn = (crn_idx-1)/2;
            if(v[prn] < v[crn_idx]){ // just change here like > it will be min heap
                swap(v[prn], v[crn_idx]);

            }else{
                break;
            }
            crn_idx = prn;
        }
    }
    for(int val: v){
            cout<<val<<" ";
        }

    return 0;
}

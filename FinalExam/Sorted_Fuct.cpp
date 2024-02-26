#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
            list<int>sortMe;
        int n;
        cin>>n;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            sortMe.push_back(x);
        }
        sortMe.sort();
        sortMe.unique();

        for(int v: sortMe){
            cout<<v<<" ";

        }
        cout<<endl;

    }



}



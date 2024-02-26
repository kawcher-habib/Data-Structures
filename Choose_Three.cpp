#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n, s;
        cin>>n >>s;
        int arr[n];
        for(int j = 0; j<n; j++){
            cin>>arr[j];
        }
        int checker = 0;
        for(int j = 0; j<n; j++){
            for(int k = j+1; k<n; k++){

                for(int l = k+1; l<n; l++){
                   int sum = arr[i] + arr[k] + arr[l];
                    if(sum == s){
                        checker = 1;
                    }
                }
            }
        }
        if(checker == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }

return 0;
}

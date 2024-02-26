#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n;
    cin>>n;
    vector<pair<string, int>> pairVector;
    while(n--){
        string world; int i;
        cin>>world>>i;
        pairVector.push_back({world, i});
    }
    sort(pairVector.begin(), pairVector.end());
     for (const auto& pair : pairVector) {
         if(pair.first == pair.first){
             if(pair.second < pair.second){

                cout << pair.first << " " << pair.second << endl;
             }
         }else{
             cout << pair.first << " " << pair.second << endl;
         }

     }

    return 0;
}


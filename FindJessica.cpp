#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    string s;
    getline(cin, s);
   // string findName = "Jessica";
    stringstream ss(s);
    string world;
    string resl= "NO;
    while(ss>>world){

       if(world == "Jessica"){
        resl = "YES";

        }

    }
    cout<<resl;
    return 0;
}


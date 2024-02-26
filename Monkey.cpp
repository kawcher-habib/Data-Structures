#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
        char s[100005];
        while(cin.getline(s, 100005)){

            int stl = strlen(s);
             sort(s, s + stl);
            for(int i = 0; i<stl; i++){

                if(s[i] != ' '){
                    cout<<s[i];
                }
            }
                cout<<endl;

        }
    return 0;
}

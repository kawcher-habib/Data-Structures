
#include <bits/stdc++.h>

using namespace std;

int *sort_it(int n){
    int *a = new int[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n, greater<int>());
    return a;
}

int main()
{
    // Write your code here
int n;
cin>>n;
int *res = sort_it(n);
for(int i = 0; i<n; i++){
    cout<<res[i]<<" ";
}
    return 0;
}

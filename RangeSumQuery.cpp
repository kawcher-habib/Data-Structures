// Problem statement

//   Given 2 numbers N
//  and Q
// , an array A
//  of N
//  number and Q
//  number of pairs L
// , R
// . For each query Q
//  print a single line that contains the summation of all numbers from index L
//  to index R
// .

//Solve By Prefix sum


#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, q;
    cin>>n>>q;
    long long a[n];

    for(int i =0; i<n; i++){
        cin>>a[i];
    }
       long long pr[n];
        pr[0] = a[0];
        for(int i = 1; i<n; i++){
            pr[i] = a[i] + pr[i-1];
        }
    while(q--){
        long long l, r;
        cin>>l>>r;
        l--;
        r--;
        long long sum;
        if(l == 0) sum = pr[r];
        else sum = pr[r] - pr[l-1];
        cout<<sum<<endl;
    }

    return 0;
}

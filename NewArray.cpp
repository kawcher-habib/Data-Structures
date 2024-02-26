#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int>a(n);
for(int i = 0; i<n; i++){
    cin>>a[i];
}
vector<int>b(n);
for(int i = 0; i<n; i++){
    cin>>b[i];
}
b.resize(a.size());
for(int i = 0; i<n; i++){
    b.push_back(a[i]);
}

vector<int>c(b);

for(int i =0; i<c.size(); i++){
    cout<<c[i]<<" ";
}

}

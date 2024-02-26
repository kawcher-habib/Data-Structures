#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    int id;
    string name;
    int sclass;
    char sections;

};
int main(){
     int n;
    cin >> n;

    Student a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i].name>>a[i].sclass>>a[i].sections>>a[i].id;
    }

    for(int i = 0; i<n/2; i++){

        swap(a[i].sections, a[n-i-1].sections);
       // cout<< a[i].sections <<" "<<a[n-i-1].sections<<endl;
    }
     for(int i = 0; i<n; i++){

        cout<< a[i].name<<" "<<a[i].sclass<<" "<<a[i].sections<<" "<<a[i].id<<endl;
    }

return 0;
}

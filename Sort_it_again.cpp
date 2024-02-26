#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    long int id;
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_marks;

};
int main(){

    int n;
    cin >> n;
    Student a[n];
    for(int i =0; i<n; i++){
        cin>> a[i].nm >> a[i].cls >> a[i].s >>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    }

    for(int i = 0; i<n-1; i++){
            sort(a[i].eng_marks, a[i+1].eng_marks)

    }
    for(int i = 0; i<n; i++){
     cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<" "<<endl;
    }
    return 0;
}


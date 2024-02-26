#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int id;
    string name;
    int sClass;
    char section;
    int math_marks;
    int eng_marks;
    int totalMarks= math_marks + eng_marks;
};
int main(){

    int n;
    cin >> n;
    Student a[n];
    for(int i =0; i<n; i++){
        cin>> a[i].name >> a[i].sClass >> a[i].section >>a[i].id>>a[i].math_marks>>a[i].eng_marks;
        a[i].totalMarks = a[i].eng_marks + a[i].math_marks;
    }

    for(int i = 0; i<n-1; i++){
            for(int j =i+1; j<n; j++){
                if(a[i].totalMarks < a[j].totalMarks){
                   swap(a[i], a[j]);
                }else if(a[i].totalMarks == a[j].totalMarks){
                    if(a[i].id > a[j].id){
                        swap(a[i], a[j]);
                    }
                }
            }

    }
    for(int i = 0; i<n; i++){
     cout<<a[i].name<<" "<<a[i].sClass<<" "<<a[i].section<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<" "<<endl;
    }
    return 0;
}

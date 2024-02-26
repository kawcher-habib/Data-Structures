#include<bits/stdc++.h>
using namespace std;
class Mystack{
public:
    vector<int>v;
void push(int x){
    v.push_back(x);
}
int top(){
    return v.front();
}
void pop(){
    v.pop_back();
}
int sizes(){
    v.size();
}
bool empty(){
    if(v.size() == 0)
        return true;
    else{
        return false;
    }
}
};

int main(){
        Mystack st;

        int n;
        cin>>n;
        while(n>0){
            int x;
            cin>>x;
            st.push(x);
            n--;
        }
         Mystack st2;
        int n2;
         cin>>n2;
           while(n2>0){
            int x2;
            cin>>x2;
            st2.push(x2);
            n2--;
        }
    if(st.sizes() == st2.sizes()){
            bool flag = true;
        while(st2.empty()== false){
          //int getData = st.top();
          if(st2.top() != st.top()){
            flag = false;
            break;
          }
          st2.pop();
        }
        if(flag){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    else{
        cout<<"Invalid";
    }
}

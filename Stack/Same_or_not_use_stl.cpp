
#include<bits/stdc++.h>
using namespace std;
class Mystack{
public:
    queue<int>q;
    stack<int>v;
void pushs(int x){
    v.push(x);
    q.push(v.top());
}
int top(){
    return v.top();
}
void pop(){
    v.pop();
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
            st.pushs(x);
            n--;
        }
         Mystack st2;
        int n2;
         cin>>n2;
           while(n2>0){
            int x2;
            cin>>x2;
            st2.pushs(x2);
            n2--;
        }


        while(st2.empty()== false){
          //int getData = st.top();
          cout<<st2.top()<<" ";
          st2.pop();
        }

}

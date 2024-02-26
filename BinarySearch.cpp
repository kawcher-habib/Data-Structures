#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){

        cin>>a[i];

    }
    int x;
    cin>>x;
    int leftSide = 0;
    int rightSide = (sizeof(a)/ sizeof(a[0]));
    int midlePointer= (leftSide+rightSide)/2;
    bool flag = false;
    while(leftSide<= rightSide){
        if(x == a[midlePointer]){
            flag = true;
            break;
        }
        if(x < a[midlePointer]){
            rightSide = midlePointer +1;
        }else{
            leftSide = midlePointer + 1;
        }
    }

    if(flag){
        cout<<"found";
    }
}

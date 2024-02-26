#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    list<int>doublyLinkedList;
    while(q>0){
        int x,v;
        cin>>x>>v;
        int length = doublyLinkedList.size();
         if(x == 0){
            doublyLinkedList.push_front(v);
            cout<<"L -> ";
            for(int vl: doublyLinkedList){
                cout<<vl<<" ";
            }
            cout<<endl;
            doublyLinkedList.reverse();
             cout<<"R -> ";
            for(int vl: doublyLinkedList){
                cout<<vl<<" ";
            }
            cout<<endl;
            doublyLinkedList.reverse();
        }else if(x == 1){
            if(x > 1){
            doublyLinkedList.insert(next(doublyLinkedList.begin(), x), v);
            }else{
                doublyLinkedList.push_back(v);
            }
           cout<<"L -> ";
            for(int vl: doublyLinkedList){
                cout<<vl<<" ";
            }
            cout<<endl;

            doublyLinkedList.reverse();
              cout<<"R -> ";
            for(int vl: doublyLinkedList){
                cout<<vl<<" ";
            }
            cout<<endl;
            doublyLinkedList.reverse();
        }else if(x==2){

             if(v >= length){
                      cout<<"L -> ";
                    for(int vl: doublyLinkedList){
                        cout<<vl<<" ";
                    }
                    cout<<endl;

                    doublyLinkedList.reverse();
                      cout<<"R -> ";
                    for(int vl: doublyLinkedList){
                        cout<<vl<<" ";
                    }
                    cout<<endl;
                    doublyLinkedList.reverse();
                 }
             else{
            doublyLinkedList.erase(next(doublyLinkedList.begin(), v));
                cout<<"L -> ";
                for(int vl: doublyLinkedList){
                    cout<<vl<<" ";
                }
                cout<<endl;

                doublyLinkedList.reverse();
                  cout<<"R -> ";
                for(int vl: doublyLinkedList){
                    cout<<vl<<" ";
                }
                cout<<endl;
                doublyLinkedList.reverse();
            }
        }

        q--;
    }

}

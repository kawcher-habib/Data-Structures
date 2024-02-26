#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> v={1,2,3,4};
vector<int> v2={4,5,6,7,8,9};
v = v2;

  for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<endl;
  }

    return 0;
}


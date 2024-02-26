#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    list<int> insertInData(n);

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insertInData.push_back(v);
    }

    insertInData.sort();
    insertInData.unique();

    for (auto it = insertInData.begin(); it != insertInData.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}

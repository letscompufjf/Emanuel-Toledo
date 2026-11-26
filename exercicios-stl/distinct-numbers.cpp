#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n; cin >> n;
    int val;

    set<int> valores;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        valores.insert(val);
    }

    cout << valores.size() << endl;

    return 0;
}
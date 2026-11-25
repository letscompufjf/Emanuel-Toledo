#include <bits/stdc++.h>
using namespace std;

bool ehClaro(vector<pair<int, int>> &m)
{
    sort(m.begin(), m.end());
    
    for (int i = 0; i < m.size() - 1; i++)
    {
        if (m[i].second < m[i+1].second)
            return false;
    }
    return true;
}


int main ()
{
    int n; cin >> n;
    
    vector<pair<int, int>> morros (n);
    
    for (int i = 0; i < n; i++)
    {
        int d; cin >> d;
        int t; cin >> t;
        morros[i].first = t;
        morros[i].second = d;
    }
    
    if (ehClaro(morros))
        cout << "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}
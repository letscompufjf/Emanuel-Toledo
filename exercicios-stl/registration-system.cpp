#include <bits/stdc++.h>
using namespace std;

int main ()
{   
    int n; cin >> n;
    cin.ignore();

    map<string, int> palavras;

    string t;
    
    for (int i = 0; i < n; i++)
    {
        getline (cin, t);
        if (!palavras.count(t))
            cout << "OK" << endl;
        else
        {
            palavras[t]++;
            cout << t + to_string(palavras[t]) << endl;
        }
        palavras[t];
    }

    return 0;
}
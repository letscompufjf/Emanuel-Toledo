#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n; cin >> n;
    string palavra;
    
    vector<pair<char,char>> inicioFim (n);
    vector<string> palavras (n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> palavra;
        palavras[i] = palavra;
        inicioFim[i].first = palavra[0];
        inicioFim[i].second = palavra[palavra.size() - 1];
    }
    
    vector<string> pMod (n);
    
    for (int i = 0; i < n; i++)
    {
        if (palavras[i].size() <= 10)
            pMod[i] = palavras[i];
        else
        {
            pMod[i] += inicioFim[i].first;
            pMod[i] += to_string(palavras[i].size() - 2);
            pMod[i] += inicioFim[i].second;
        }
    }
    
    for (int i = 0; i < n; i++)
        cout << pMod[i] << endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n; cin >> n;
    
    vector<int> numerosPares;
    vector<int> numerosImpares;
    
    int num;
    
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num % 2 == 0)
            numerosPares.push_back(num);
        else
            numerosImpares.push_back(num);
    }
    
    sort(numerosPares.begin(), numerosPares.end());
    sort(numerosImpares.begin(), numerosImpares.end(), greater<>());
    
    for (int i = 0; i < numerosPares.size(); i++)
        cout << numerosPares[i] << endl;
        
    for (int i = 0; i < numerosImpares.size(); i++)
        cout << numerosImpares[i] << endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string t;

    while (cin >> t)
    {
        stack<char> st;
        bool ok = true;

        for (char c: t)
        {
            if (c == '(')
                st.push(c);
            else if (c == ')')
            {
                if (st.empty())
                {
                    ok = false;
                    break;
                }
                st.pop();
            }
        }
        if (ok && st.empty())
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }

    return 0;
}
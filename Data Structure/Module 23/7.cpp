#include <bits/stdc++.h>
using namespace std;

int pre(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 0;
    }

    else
        return 1;
}
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    string res = "";

    for (int i = 0; i < s.size(); i++)
    {
        char now = s[i];
        if (now >= 'a' && now <= 'z')
        {
            res += now;
        }
        else
        {
            while (st.size() && pre(st.top()) >= pre(now))
            {
                res += st.top();
                st.pop();
            }
            st.push(now);
        }
    }
    while (st.size())
    {
        res += st.top();
        st.pop();
    }

    cout << res << "\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
bool isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
int pre(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        char now = s[i];
        if (isOperand(now))
        {
            ans += now;
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (st.empty() == false && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (st.size() && pre(st.top()) >= pre(now))
            {
                ans += st.top();
                st.pop();
            }
            st.push(now);
        }
    }
    while (st.size())
    {
        ans += st.top();
        st.pop();
    }
    cout << ans << endl;
    return 0;
}

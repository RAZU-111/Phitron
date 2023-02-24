#include <bits/stdc++.h>
using namespace std;
bool oparand(char ch)
{
    return (ch >= '0' && ch <= '9');
}
int prc(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '/' || ch == '*')
        return 2;
    return 0;
}
int main()
{
    string s;
    cin >> s;
    stack<char> stk;
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        char now = s[i];
        if (oparand(now))
        {
            res += now;
        }
        else if (s[i] == '(')
        {
            stk.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (stk.empty() == false && stk.top() != '(')
            {
                res += stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else
        {
            while (stk.size() && prc(stk.top()) >= prc(now))
            {
                res += stk.top();
                stk.pop();
            }
            stk.push(now);
        }
    }
    while (stk.size())
    {
        res += stk.top();
        stk.pop();
    }
    string str = res;
    stack<int> num;
    int x1, x2, x3;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/')
        {
            int a = str[i] - 48;
            num.push(a);
        }
        if (!(str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/'))
        {
            x2 = num.top();
            num.pop();
            x1 = num.top();
            if (str[i] == '+')
            {
                x3 = x1 + x2;
            }
            else if (str[i] == '-')
            {
                x3 = x1 - x2;
            }
            else if (str[i] == '*')
            {
                x3 = x1 * x2;
            }
            else if (str[i] == '/')
            {
                x3 = x1 / x2;
            }
            num.pop();
            num.push(x3);
        }
    }
    cout << x3;
    return 0;
}


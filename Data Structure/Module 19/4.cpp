#include <bits/stdc++.h>
bool isPalRev(char str[], int s, int e)
{

    if (s == e)
        return true;

    if (str[s] != str[e])
        return false;

    if (s < e + 1)
        return isPalRev(str, s + 1, e - 1);

    return true;
}

bool isPalindrome(char str[])
{
    int n = strlen(str);

    if (n == 0)
        return true;

    return isPalRev(str, 0, n - 1);
}

using namespace std;
int main()
{

    char str[100];
    cin >> str;

    if (isPalindrome(str))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

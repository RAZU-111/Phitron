#include <bits/stdc++.h>
using namespace std;
int main()
{
    // cout << "Hello World!";
    // string s = "I am eating rice ";
    // string s1 = "I am also eating fish ";
    // string s3 = s + s1;
    // cout << s3 << endl;
    // cout<<s3.size()<<endl;
    // character shifting A--B
    // for (int  i = 0; i <s.size(); i++)
    // {
    //     s[i] = s[i] +1;

    // }
    // cout<<s<<endl;
    // remove last  charater

   // string s = "abcdefg";
   string s;
   getline(cin,s);
    s.pop_back();
    //cout << s << endl;
    s.erase(s.begin()+0);
    cout<<s<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
const int N=3005;
pair<int,char> dp[N][N];
string s,t;
int main()
{
    cin>>s;
    cin>>t;
    int n=s.size();
    int m=t.size();
    for(int i=0; i<=n; i++)dp[i][0]= {0,' '};
    for(int i=0; i<=m; i++)dp[0][i]= {0,' '};
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(s[i-1]==t[j-1])
            {
                dp[i][j].first = dp[i-1][j-1].first+1;
                dp[i][j].second = 'D';
            }
            else
            {
                if(dp[i-1][j].first > dp[i][j-1].first)
                {
                    dp[i][j].first = dp[i-1][j].first;
                    dp[i][j].second = 'U';
                }
                else
                {
                    dp[i][j].first = dp[i][j-1].first;
                    dp[i][j].second = 'R';
                }

            }
        }
    }
    vector<char>final;
    cout<<endl;
    int i=n;
    int j=m;

    while(1)
    {
        if(i==0 || j==0)break;
        if(dp[i][j].second == 'D')
        {
            final.push_back(s[i-1]);
            i--;
            j--;
        }
        else if(dp[i][j].second == 'U')
        {
            i--;
        }
        else if(dp[i][j].second == 'R')
        {
            j--;
        }
    }
    for(int i=final.size()-1; i>=0; i--)cout<<final[i];
    return 0;
}

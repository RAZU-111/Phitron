#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string Name;
    int std_ID;
    int Age;
    void print_info()
    {
        cout << Name << " " << std_ID << " " << Age << "\n";
    }
};

int main()
{
    vector<student>a;
    for(int i=0;i<10 ;i++)
    {
        a.push_back(student("A",i,20));
    }
for(int i=0;i<10;i++)
{
    a[i].print_info();
}

  
   

    return 0;
}

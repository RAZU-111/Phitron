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
class person
{
public:
    string Name;
    person *father, *mother;
    void person_info()
    {
        cout << "Father Name :" << father->Name << "\n";
        cout << "Mother Name :" << mother->Name << "\n";
    }
};
class Rectangel
{
public:
    int Hight;
    int wight;
    int calculate()
    {
        return Hight * wight;
    };
};
int main()
{
    student s;
    s.Name = "Razu";
    s.std_ID = 5516;
    s.Age = 22;
    s.print_info();

    person p;

    p.father->Name = "ABC";
    p.mother->Name = "DFG";
    p.person_info(); 

    Rectangel r;
    r.Hight = 20;
    r.wight = 10;

    cout << r.calculate() << endl;

    return 0;
}

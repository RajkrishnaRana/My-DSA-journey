#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> m;
    m["Raj"] = 98;
    m["Harry"] = 89;
    m["Suman"] = 2;

    m.insert({{"Kozume", 45}, {"Kuroo", 54}});
    map<string, int>::iterator i;

    for (i = m.begin(); i != m.end(); i++)
    {
        cout << (*i).first << (*i).second << endl;
    }

    return 0;
}
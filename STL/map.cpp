#include <iostream>
#include <map>
using namespace std;

int main () {
    map <int, string> m;

    m[1] = "Raj";
    m[2] = "sam";
    m[13] = "babbaar";

    m.insert ( {5, "bheem"});

    cout << "before erase " << endl;
    for (auto i : m)
        cout << i.first <<" " << i.second << endl;
    cout << endl;

    cout << "finding 13 = " <<m. count (-13) << endl;

    m.erase(13);
    cout << "after erase " << endl;
    for (auto i : m)
        cout << i.first <<" " << i.second << endl;
    cout << endl;
    //this functions time complexity is log n. this map implemented by redflag 3 or balance tree
    //normal map implemented by hashtable. in this case complexity is 1.

    auto it = m.find(5);

    for (auto i =it; i !=m.end(); i++)
        cout << (*i).first<<" ";
    cout << endl;
   

    
}
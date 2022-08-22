#include <iostream>
#include <set>
using namespace std;

int main() {
    set <int> s;
    s.insert (5);
    s.insert (5);
    s.insert (5);
    s.insert (6);
    s.insert (6);
    s.insert (6);
    s.insert (0);
    s.insert (0);
    s.insert (0);
    s.insert (0);

    for (auto i : s) {
        cout << i << endl;
    } cout << endl;

    set<int> :: iterator it = s.begin(); //set the iterator
    it ++; //increment iterator

    s.erase(it);

    for (auto i : s) {
        cout << i << endl;
    } cout << endl;

    cout << " -5 is present or not = " << s.count (-5) << endl;

    set <int> ::iterator itr = s.find (0);

    for (auto it = itr; it != s.end(); it ++) {
        cout << *it <<" ";
    } cout << endl;

    //time complexity of insert, find, erase count is logn and size, begin, empty, end is 1.
}
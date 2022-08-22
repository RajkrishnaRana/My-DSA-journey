#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> s;

    s.push ("saumalya");
    s.push ("Raj");
    s.push ("sunita");

    cout << "Top element " << s.top() << endl;

    s.pop ();
    cout << "top element " << s.top() << endl;
    cout << "size " << s.size() << endl;
    cout << "empty or not " << s.empty() << endl;
}
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue <string> q;

    q.push ("Raj");
    q.push ("Sam");

    cout << "Size of queue" << q.size() << endl;
    cout << "First element " << q.front() << endl;
    q.pop();
    cout << "size after pop " << q.size() << endl;
    cout << "First element " << q.front() << endl;
}
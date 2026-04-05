#include <iostream>
#include <stack>
using namespace std;

class Stack {
public:
    stack<int> s1, s2;

    void fill() {
        s1.push(1); s1.push(2); s1.push(3);
        s2.push(1); s2.push(2); s2.push(3);
    }

    bool equal() {
        if (s1.size() != s2.size())
            return false;

        stack<int> a = s1, b = s2;

        while (!a.empty()) {
            if (a.top() != b.top())
                return false;
            a.pop();
            b.pop();
        }

        return true;
    }
};

int main() {
    Stack sc;
    sc.fill();

    if (sc.equal())
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    return 0;
}

#include <iostream>
#include <stack>

using namespace std;

int main()
{
        stack<string> s;
        s.push("ab");
        s.push("cd");
        s.push("ef");

        cout << "top of the stack: " << s.top() << endl;

        cout << "size of stack: " << s.size() << endl;

        cout << "empty or not: " << s.empty() << endl;

        // s.emplace(s.begin(), "disha");
        while (!s.empty())
        {
                cout << s.top() << " ";
                s.pop();
        }
}
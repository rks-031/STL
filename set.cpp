#include <iostream>
#include <set>
using namespace std;

int main()
{
        set<int> s;
        s.insert(5);
        s.insert(5);
        s.insert(5);
        s.insert(1);
        s.insert(0);
        s.insert(4);
        s.insert(4);
        s.insert(4);
        s.insert(6);

        for (auto i : s)
        {
                cout << i << " ";
        }
        cout << endl;

        set<int>::iterator it = s.begin();
        it++;

        s.erase(it);

        for (auto i : s)
        {
                cout << i << " ";
        }
        cout << endl;

        // count determines if an element is present or not
        cout << "3 is present or not??: " << s.count(3) << endl;

        set<int>::iterator itr = s.find(5);
        for (auto it = itr; it != s.end(); it++)
        {
                cout << *it << " ";
        }
        cout << endl;
}
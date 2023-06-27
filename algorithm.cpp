#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
        vector<int> v;
        v.push_back(1);
        v.push_back(3);
        v.push_back(6);
        v.push_back(7);

        cout << "finding 6--->" << binary_search(v.begin(), v.end(), 6) << endl;
        cout << "lower bound---->" << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;
        cout << "upper bound---->" << upper_bound(v.begin(), v.end(), 3) - v.begin() << endl;

        cout << "max of 3 and 5:" << max(3, 5) << endl;
        cout << "min of 3 and 5:" << min(3, 5) << endl;

        int a = 1, b = 7;
        swap(a, b);
        cout << "a=" << a << " b=" << b << endl;

        string s = "abcd";
        reverse(s.begin(), s.end());
        cout << s << endl;

        rotate(v.begin(), v.begin() + 1, v.end());
        cout << "after rotate" << endl;
        for (int i : v)
        {
                cout << i << " ";
        }
        cout << endl;
}
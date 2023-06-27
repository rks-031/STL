#include <iostream>
#include <vector>

using namespace std;

// vector is a dynamic array. apna size double kr leta hai if elements are added more than the size of the array. kaise??
// ek dusra array banata h jo ki prev array k double size ka hota h usme prev array ko copy krta hai and prev aaray ko then dump kr deta h

int main()
{
        vector<int> v;
        // cout << "size of the vector is: " << v.capacity() << endl;

        vector<int> a(5, 1);
        vector<int> last(a);

        cout << "print a" << endl;
        for (int i : last)
        {
                cout << i << " ";
        }

        // v.push_back(1);
        // cout << "size" << v.capacity() << endl;

        // v.push_back(2);
        // cout << "size" << v.capacity() << endl;

        // v.push_back(3);
        // cout << "size" << v.capacity() << endl;

        // cout << "size of the vector" << v.size() << endl;
        // for (int i = 0; i < v.size(); i++)
        // {
        //         cout << v[i] << endl;
        // }
        // cout << "front" << v.front() << endl;
        // cout << "back" << v.back() << endl;

        // beginner iterator
        // cout << v.begin() << endl;

        // v.pop_back();
        // for (int i = 0; i < v.size(); i++)
        // {
        //         cout << v[i] << endl;
        // }

        // // clear method
        // cout << "before clear, size:" << v.size() << endl;
        // v.clear();
        // cout << "after clear, size:" << v.size() << endl;
}
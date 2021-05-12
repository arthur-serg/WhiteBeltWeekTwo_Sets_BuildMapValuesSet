#include <iostream>
#include <set>
#include <map>
#include <vector>

using namespace std;

set<string> BuildMapValuesSet(const map <int, string>& m) {
    set<string> values;
    for (const auto& item : m) {
        values.insert(item.second);
    }
    return values;
}


int main()
{
    set<string> values = BuildMapValuesSet({
        {1,"odd"},
        {2,"even"},
        {3,"odd"},
        {4,"even"},
        {5,"odd"},
        {6,"even"},
    {7,"unknown"}
        });

    for (const auto& elem : values) {
        cout << elem << endl;
    }

    /*
    output:

    even
    odd
    */
}

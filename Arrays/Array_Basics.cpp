#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initialization
    vector<int> vecOne(5, 0);

    // Declaration
    vector<int> vecTwo = {1, 2, 3, 4, 5};

    // Access
    vector<int> vecThree = {1, 2, 100, 4, 5};
    cout << "Index (2): " << vecThree[2] << '\n';

    // Update
    vector<int> vecFour = {1, 2, 3, 4, 5};
    vecFour[2] = 100;

    // Insertion
    vector<int> vecFive = {1, 2, 3, 4, 5};
    vecFive.insert(vecFive.begin(), 100);     // Beginning
    vecFive.insert(vecFive.begin() + 2, 200); // Middle
    vecFive.push_back(300);                   // End

    // Deletion
    vecFive.erase(vecFive.begin());     // Beginning
    vecFive.erase(vecFive.begin() + 2); // Middle
    vecFive.pop_back();                 // End

    // Check Empty
    cout << boolalpha << vecFive.empty() << '\n';

    // Search
    auto it = find(vecFive.begin(), vecFive.end(), 5);
    if (it != vecFive.end())
    {
        cout << "Found: " << *it << '\n';
    }

    // Counting
    int sum = accumulate(vecFive.begin(), vecFive.end(), 0);
    cout << "Sum: " << sum << '\n';

    // Display
    for (int item : vecFive)
    {
        cout << item << ' ';
    }
    cout << '\n';

    // Size
    cout << "Length: " << vecFive.size() << '\n';

    return 0;
}
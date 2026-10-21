// Implement an array-based stack of capacity 'n' that supports 'push(x)', 'pop()', 'peek()', 'isEmpty()', and 'isFull()' operations, returning the appropriate results for each operation

#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    vector<int> arr;
    int capacity;
    int length;

public:
    Stack(int n)
    {
        capacity = n;
        length = 0;
        arr.resize(n);
    }

    bool isEmpty()
    {
        return length == 0;
    }

    bool isFull()
    {
        return length == capacity;
    }

    void push(int x)
    {
        if (!isFull())
            arr[length++] = x;
    }

    void pop()
    {
        if (!isEmpty())
            length--;
    }

    int peek()
    {
        if (isEmpty())
            return -1;

        return arr[length - 1];
    }
};

int main()
{
}
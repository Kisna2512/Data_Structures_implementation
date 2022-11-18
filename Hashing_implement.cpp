#include <iostream>

#define n 10

using namespace std;

class Node
{
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Hashing
{
    string telephone[n];
    int arr[n];

public:
    Hashing()
    {

        for (int i = 0; i < n; i++)
        {
            arr[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            telephone[i] = "-";
        }
    }

    void insert(int ele, string str)
    {

        if (arr[hash(ele)] == 0)
        {
            arr[hash(ele)] = ele;
            telephone[hash(ele)] = str;
        }
    }

    int hash(int ele)
    {
        return (ele % 10);
    }

    void print()
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << "\t" << arr[i] << "\t" << telephone[i] << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    Hashing h;
    h.insert(14, "123456");
    h.insert(50, "345565");
    h.insert(77, "456434");
    h.print();

    return 0;
}

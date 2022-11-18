#include <iostream>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Stack
{

    Node *head = NULL;

public:
    Stack()
    {

        head = NULL;
    }

    void push(int ele)
    {

        Node *n = new Node(ele);
        n->next = head;
        head = n;
    }

    void pop()
    {
        if(head==NULL)
        {
            cout<<"Stack is underflow"<<endl;
        }
        head = head->next;
    }

    bool empty()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
            return true;
        }
        else
        {
            cout << "Stack is not empty" << endl;
            return false;
        }
    }

    int topele()
    {
        return (head->data);
    }

    void Display()
    {
        Node* temp=head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{
    Stack st;
    // st.push(4);
    // st.push(5);
    // st.push(6);
    // st.push(6);
    // st.push(6);
    // st.push(6);
    // st.push(6);
    // st.push(6);
    // // st.pop();
    int size;
    cout<<"Enter the size of stack:- "<<endl;
    cin>>size;
    while(size--)
    {
        int ele;
        cout<<"Enter the element you want to push:- "<<endl;
        cin>>ele;
        st.push(ele);
    }
    cout<<"Your stack is:- "<<endl;
    st.pop();
    st.Display();
    // cout << "Top element is:- " << st.topele() << endl;
    return 0;
}

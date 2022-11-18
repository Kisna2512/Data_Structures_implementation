#include <iostream>

using namespace std;

#define n 10
// Stack implementation using arrays


class Stack
{
    int top = -1;
    int arr[n];

public:
    stack()
    {
        top = -1;
    }

    void push(int ele)
    {
        if (top == n - 1)
        {
            cout << "Stack is overflow" << endl;
        }
        top++;
        arr[top] = ele;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is underflow"<<endl;
        }
        arr[top] = 0;
        top--;
    }

    int topele()
    {
        return arr[top];
    }

    bool empty()
    {
        return top == -1 ? true : false;
    }


    bool full()
    {
        return top == n - 1 ? true : false;
    }


    void Display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack st;
    int size;
    cout<<"Enter how wany many elements you want to push into the stack: "<<endl;
    cin>>size;
    while (size--)
    {
        int ele;
        cout << "Enter element you want to push into the stack:- " << endl;
        cin >> ele;
        st.push(ele);
    }
    cout<<"Your stack is:- "<<endl;
       st.Display();
    //    st.pop();
    //    st.Display();
    // st.push(5);
    // st.push(5);
    // st.push(5);
    // st.push(5);
    // st.push(5);
    // st.push(5);
    // st.push(5);
    // st.push(5);
    // st.push(5);
    // st.push(5);
   
    // if(st.empty()) cout<<"The stack is empty"<<endl;
    // else cout<<"stack is not empty"<<endl;
    // if(st.full()) cout<<"The stack is full"<<endl;
    // else cout<<"stack is not full"<<endl;
    // cout << "The top element of stack is:- " << st.topele() << endl;

    return 0;
}
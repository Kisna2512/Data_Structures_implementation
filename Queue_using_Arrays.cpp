#include <iostream>

using namespace std;

#define n 10
//Queue implementation using Arrays
class Queue
{
public:
    int front = -1;
    int rear = -1;
    int arr[n];

    Queue()
    {
        front = -1;
        rear = -1;
        arr[n] = {0};
    }

    void push(int ele)
    {
        if(rear==n-1)
        {
            cout<<"Queue is overflowed"<<endl;
        }
        rear++;
        if (front == -1)
        {
            front++;
        }
        arr[rear] = ele;
    }

    void pop()
    {
        if(front==-1)
        {
            cout<<"Queue is underflow"<<endl;
        }
        front++;
    }

    int frontq()
    {
        return arr[front];
    }

    int backq()
    {
        return arr[rear];
    }

    bool empty()
    {
        if (front == -1 and rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void display()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    // q.display();
    // cout<<"At back:- "<<q.backq();
    cout<<"Front:- "<<q.frontq()<<endl;
    q.pop();
    cout<<"Front:- "<<q.frontq()<<endl;


    return 0;
}
#include <iostream>
using namespace std;

template <class T>
class Queue
{
private:
    int size;
    int front;
    int rear;
    T *arr;

public:
    Queue()
    {
        size = 0;
        front = -1;
        rear = -1;
        arr = new T[1000];
    }
    void enqueue(T e){
        if(rear==arr.size()-1)cout<<"Queue is full";
        rear++;
        arr[rear]= e;
    }
    T dequeue(){
        if(front==rear){
            cout<<"Queue is empty";
            return NULL;
        }
        front++;
        return arr[front];
    }
    T frontlm(){
         if(front==rear){
            cout<<"Queue is empty";
            return NULL;
        }
        else return arr[front+1];
    }



};

int main()
{
    Queue <int> q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(10);
    cout<<q.dequeue()<<"\n";
    cout<<q.dequeue()<<"\n";
    q.enqueue(3);
    q.enqueue(99);
    // cout<<q.frontlm()<<"\n";

    return 0;
}
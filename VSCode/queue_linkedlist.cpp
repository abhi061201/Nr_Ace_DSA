#include <iostream>
using namespace std;
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
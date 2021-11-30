#include <iostream>
#define maxn 10000000;
using namespace std;

template <typename T>
class stack
{
private:
    T *arr;
    int top;
    int size;

   public:
    stack(){
    arr = new T[1000];
    top = -1;
    size = 1000;
    }
    void push(T data)
    {
        if (top == size - 1)
            return;
        else
        {
            top++;
            arr[top] = data;
        }
    }

    T top_most()
    {
        if(top==-1){cout<<"Stack is empty";return NULL;}
        return arr[top];
    }
    T pop(){
       
      if(top==-1){cout<<"Stack is empty";return NULL;}
       T temp= arr[top];
       top--;
       return temp;
    }
};

int main()
{
 stack <string>s;
 s.push("Abhishek");
 s.push("is");
 s.push("A good ");
 s.push("Boy");
 cout<<s.top_most();
 

    return 0;
}
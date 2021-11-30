#include <iostream>
using namespace std;
template <class T>
class Node
{   public:
    T data;
    Node *next;
    Node(T d)
    {
        data = d;
        next = NULL;
    }
};
template <class T>
class LinkedList
{

public:
    Node<T> *head;
    int length;


    LinkedList()
    {
        length = 0;
        head = NULL;
    }
    void insertathead(T data)
    {
        Node<T> *ptr = new Node<T>(data);
        if (head == NULL)
            head = ptr;
        else
        {
            ptr->next = head;
            head = ptr;
        }
    }
    void display(){
      Node<T> *temp = new Node<T>();
      temp= head;
      while(temp!=NULL){
          cout<<temp->data<<",";
          temp=temp->next;
      }




    }
};

int main()
{
 LinkedList <int>ll;
 ll.insertathead(8);
 ll.insertathead(9);
 ll.insertathead(7);
 ll.insertathead(5);
 ll.insertathead(3);
 ll.display();

    return 0;
}
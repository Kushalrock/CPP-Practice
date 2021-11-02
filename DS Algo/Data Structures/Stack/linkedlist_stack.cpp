#include <iostream>

using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
    T getData()
    {
        return data;
    }
};

template <typename T>
class Stack
{
    Node<T> *head;
    int size;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        if (size == 0)
            return true;
        return false;
    }
    void push(T ele)
    {
        Node<T> *newNode = new Node<T>(ele);
        newNode->next = head;
        head = newNode;
        size++;
    }
    void pop()
    {
        if(head==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node<T> *tempNode = head;
        head = head->next;
        delete tempNode;
        size--;
    }
    T top()
    {
        if(head==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return head->getData();
    }
};

int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.pop();
    cout << s.top() << " ";
    cout << s.isEmpty() << " ";
    cout << s.getSize() << " ";
    s.pop();
    cout << s.isEmpty() << " ";

    return 0;
}

#include<iostream>

using namespace std;

template <class T = int>


class Node{
    public:
        T data;
        Node* next;

        Node(T data){
            this->data = data;
            next = NULL;
        }
};


template <class T1 = int>
void print(Node<T1>* head){
    
    cout<<head->data<<" ";
    if(head->next == NULL){
        return;
    }
    print(head->next);
}

int printINode(Node<>* head, int index){
    if(index == 0){
        return head->data;
    }
    index--;
    return printINode(head->next, index);
}

template <class T3 = int>
int length(Node<T3>* head);

void insertAtI(Node<>* &head, int data, int index){
    Node<>*temp = head;
    Node<>* newNode = new Node<>(data);
    Node<>* nextNodeAddress;
    // Corner cases
    if(index == 0){
        nextNodeAddress = temp;
        newNode->next = nextNodeAddress;
        head = newNode;
        return;
    }
    else if(index < 0){
        return;
    }
    else{
    while(index >= 0){
        if(index==1){
            nextNodeAddress = temp->next;
            temp->next = newNode;
        }
        else if(index == 0){
            newNode->next = nextNodeAddress;
            return;
        }
        index--;
        if(temp->next==NULL){
            return;
        }
        temp = temp->next;
    }
    }
}

template <class T3 = int>
int length(Node<T3>* head){
    if(head->next == NULL){
        return 1;
    }
    return length(head->next) + 1;
}

template <class T2 = int>
Node<T2>* takeInput(){
   T2 data;
   cin>>data;
   Node<T2> *head = NULL;  /// LL is empty
   Node<T2> *tail = NULL;   /// LL is empty
   while(data != -1){
    /// creating LL
    Node<T2> *n = new Node<T2>(data);
    /// 1st node
    if(head == NULL){
        head = n;
        tail = n;
    }else {
        tail -> next = n;   /// Inserting at Tail
        tail = n;            
    }

    cin>>data;
   }
   return head;

}

Node<>* deleteithNode(Node<>* head, int i){
   if(i<0){
      return head;
   }
   if(i==0 && head){
    Node<>* newHead = head->next;
    head->next = NULL;
    delete head;
    return newHead;
   }

   Node<>* curr = head;
   int count = 1;
   while(count<=i-1 && curr!=NULL){
    curr = curr->next;
    count++;
   }
   if(curr && curr->next){
     Node<> *temp = curr->next;
     curr->next = curr->next->next;
     temp->next=NULL;
     free(temp);
     return head;
   }
   return head;
}

//Middle slow fast
template <class T4 = int>
Node<T4>* middleNode(Node<T4>* head){
    Node<T4>* slow = head;
    Node<T4>* fast = head;
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    if(fast->next!=NULL){
        return slow->next;
    }
    return slow;
}
int main(){
    Node<> n1(1);
    Node<> *head = &n1;

    Node<> n2(2);
    Node<> n3(3);
    Node<> n4(4);
    Node<> n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);
    cout<<endl;
    insertAtI(head, 20, 2);
    print(head);
    cout<<endl;
    insertAtI(head, 30, 2);
    print(head);
    cout<<endl;
    insertAtI(head, 30, 0);
    print(head);
    cout<<endl;
    insertAtI(head, 300, 8);
    print(head);
    cout<<endl;
    insertAtI(head, 300, 10);
    print(head);
    cout<<endl;
    head = deleteithNode(head, 2);
    print(head);
    cout<<endl;
    cout<<middleNode(head)->data;
    cout<<endl;
    head = deleteithNode(head, 2);
    print(head);
    cout<<endl;
    cout<<middleNode(head)->data;
    // Node<> *getHead = takeInput();
    // print(getHead);
    // cout<<endl;
    // cout<<length(getHead)<<endl;
    // cout<<printINode(getHead, 2);
    return 0;
}
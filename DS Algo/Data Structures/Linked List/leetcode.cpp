#include<iostream>

using namespace std;


 struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        int carryValue = (l1->val+l2->val)/10;
        int headValue = (l1->val + l2->val + carryValue)%10;
        ListNode* head = new ListNode(headValue);
        ListNode* curr = head;
        carryValue = 0;
        while(l1!=NULL || l2!=NULL){
            int newNodeValue;
            if(l1 == NULL){
                newNodeValue = (l2->val + carryValue)%10;
                carryValue = (l2->val+carryValue)/10;
                curr->val = newNodeValue;
                l2=l2->next;
            }
            else if(l2 == NULL){
                newNodeValue = (l1->val + carryValue)%10;
                carryValue = (l1->val+carryValue)/10;
                curr->val = newNodeValue;
                l1=l1->next;
            }
            else{
                newNodeValue = (l1->val + l2->val + carryValue)%10;
                carryValue = (l1->val+l2->val+carryValue)/10;
                curr->val = newNodeValue;
            l1 = l1->next;
            l2=l2->next;
            }
            
            if(l1!=NULL || l2!=NULL){
                curr->next = new ListNode(0);
                curr = curr->next;
            }
        }
        if(carryValue > 0){
                curr->next = new ListNode(carryValue);
            }
        return head;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr!=NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prevPointer = head;
        ListNode* nextPointer = head;
        while(n--){
            nextPointer = nextPointer->next;
        }
        if(nextPointer!=NULL){
            while(nextPointer->next!=NULL){
                prevPointer = prevPointer->next;
                nextPointer = nextPointer->next;
            }
            ListNode* deletePointer = prevPointer->next;
            prevPointer->next = deletePointer->next;
            deletePointer->next = NULL;
            delete deletePointer;
            return head;
        }
        return prevPointer->next;
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* first = l1;
        ListNode* second = l2;
        ListNode* head=NULL;
        ListNode* current=NULL;
        while(l1!=NULL){
            ListNode* newNode;
            if(l2==NULL){
                newNode = new ListNode(l1->val);
                l1=l1->next;
            }
            else if(l1->val < l2->val){
                newNode = new ListNode(l1->val);
                l1=l1->next;
            }
            else{
                newNode = new ListNode(l2->val);
                l2=l2->next;
            }
            if(head==NULL){
               head = newNode; 
            }
            if(current!=NULL){
                current->next = newNode;
            }
            current = newNode;
        }
        while(l2!=NULL){
            ListNode* newNode = new ListNode(l2->val);
            if(head==NULL){
               head = newNode; 
            }
            if(current!=NULL){
                current->next = newNode;
            }
            current = newNode;
            l2=l2->next;
        }
        return head;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        /// break list into two
        ListNode *slow = head;
        ListNode *fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *n = slow->next;
        slow->next = NULL;
        
        ListNode* a = sortList(head);
        ListNode* b = sortList(n);
        
        head = mergeTwoLists(a,b);
        return head;
    }
};

int main(){
    ListNode* l1 = new ListNode(2);
    ListNode* l2 = new ListNode(4);
    ListNode* l3 = new ListNode(3);
    ListNode* l4 = new ListNode(5);
    ListNode* l5 = new ListNode(6);
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    ListNode* l6 = new ListNode(7);
    ListNode* l7 = new ListNode(8);
    ListNode* l8 = new ListNode(9);
    l6->next = l7;
    l7->next = l8;
    Solution s;
    ListNode* result = s.addTwoNumbers(l1,l6);
    while(result!=NULL){
        cout<<result->val<<endl;
        result = result->next;
    }
    ListNode* l9 = new ListNode(1);
    ListNode* l10 = new ListNode(2);
    ListNode* l11 = new ListNode(3);
    l9->next = l10;
    l10->next = l11;
    ListNode* l12 = new ListNode(1);
    ListNode* l13 = new ListNode(3);
    ListNode* l14 = new ListNode(4);
    l12->next = l13;
    l13->next = l14;
    ListNode* result2 = s.mergeTwoLists(l9,l12);
    while(result2!=NULL){
        cout<<result2->val<<endl;
        result2 = result2->next;
    }
    return 0;
}
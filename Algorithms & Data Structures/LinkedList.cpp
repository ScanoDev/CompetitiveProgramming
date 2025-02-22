#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main(){
    // Create some nodes (the first one is the head)
    ListNode* list1 = new ListNode(10);
    list1->next = new ListNode(20);
    list1->next->next = new ListNode(30);

    // print the linked list
    ListNode* temp = list1;
    while(temp != nullptr) {
        cout << temp->val << " -> "; //prints the value of temp
        temp = temp->next; //go to the next node
    }
    cout << "NULL" << endl;

    //delete
    while(list1 != nullptr){
        ListNode* toDelete = list1;
        list1 = list1->next;
        delete toDelete;
    }
    return 0;
}

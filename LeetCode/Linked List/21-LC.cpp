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
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);

    //
    ListNode* temp = head;
    while(temp != nullptr) {
        cout << temp->val << " -> "; //prints the value of temp
        temp = temp->next; //go to the next node
    }
    cout << "NULL" << endl;

    while(head != nullptr){
        ListNode* toDelete = head;
        head = head->next;
        delete toDelete;
    }
    return 0;
}

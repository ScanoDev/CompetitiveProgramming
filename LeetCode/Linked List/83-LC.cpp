#include <bits/stdc++.h>
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
        ListNode* deleteDuplicates(ListNode* head) {
            if(head == nullptr) return {};
            ListNode* res = new ListNode(head->val);
            ListNode* prin = res;
            while(head != nullptr){
                if(head->val != res->val){
                    res->next = new ListNode(head->val);
                    res = res->next;
                }
                head = head->next;
            }
            return prin;
        }
    };
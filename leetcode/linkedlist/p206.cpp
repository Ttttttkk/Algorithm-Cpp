#include <bits/stdc++.h>
using namespace std;
#define int long long

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


    ListNode* reverseList(ListNode* head) {
      ListNode *cur=head;
      ListNode *pre=nullptr;
      while(cur){
        ListNode *next=cur->next;
        cur->next=pre;
        pre=cur;
        cur=next;
      }
      return pre;
    }

signed main() {
    int n;
    cin>>n;
    // 空链表
    if(n==0){
        return 0;
    }
    int x;
    cin >> x;
    // 创建第一个节点
    ListNode* head = new ListNode(x);
    ListNode* tail = head;

    // 创建后面的节点
    for (int i=1;i<n; i++) {
        cin>>x;
        tail->next = new ListNode(x);
        tail = tail->next;
    }

    // 调用算法
    head = reverseList(head);

    // 输出结果
    ListNode* cur = head;
    while (cur != nullptr) {
        cout << cur->val << " ";
        cur = cur->next;
    }
    return 0;
}
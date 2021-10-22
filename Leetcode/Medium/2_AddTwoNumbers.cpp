#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define all(a) a.begin(),a.end()
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* head = ans;
        ans->val = (l1->val + l2->val) % 10;
        int f = (l1->val + l2->val) >= 10;
        l1 = l1->next;
        l2 = l2->next;
        if (l1 != NULL || l2 != NULL)
        {
            ans->next = new ListNode();
            ans = ans -> next;
        }
        while(l1 != NULL || l2 != NULL)
        {
            if (l1 == NULL)
            {
                ans->val = (l2->val + f) % 10;
                f = (l2->val + f) >= 10;
                l2 = l2->next;
            }
            else if (l2 == NULL)
            {
                ans->val = (l1->val + f) % 10;
                f = (l1->val + f) >= 10;
                l1 = l1->next;
            }
            else
            {
                ans->val = (l1->val + l2->val + f) % 10;
                f = (l1->val + l2->val + f) >= 10;
                l1 = l1->next;
                l2 = l2->next;
            }
            if (l1 != NULL || l2 != NULL)
            {
                ans->next = new ListNode();
                ans = ans -> next;
            }
        }
        if (f)
            ans->next = new ListNode(f);
        return head;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}
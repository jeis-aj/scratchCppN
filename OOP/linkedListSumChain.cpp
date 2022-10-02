#include <stack>
#include <iostream>
using namespace std; 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    private:
    int carry;
    int tempCarry;
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       stack <int> buf; 
        while(l1.next != NULL && l2.nex != NULL){
           tempCarry = partialSum / 10;
           if (tempCarry){
               carry = tempCarry;
           }
           else{ carry = 0;}
           int partialSum = l1.val + l2.val + carry;
          buf.push(partialSum) ;
          ptr = 
        }
        while(!buf.empty()){
            ans.push(buf.top());
            buf.pop();
        }
        return ans;
    }
};

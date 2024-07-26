//  ! Brute force approach using the two pointers


class Solution {
public:
    ListNode* reverseList(ListNode* head) {

          ListNode* prev = NULL;
            ListNode* curr = head;

            while( curr != NULL){

                  ListNode* nextNode = curr->next;
                  curr->next = prev;
                  prev = curr;
                  curr = nextNode;
            }
        return prev;
    }
};




// ! using the recursive method

class Solution {
public:


  ListNode* reverseUsingRecursion (  ListNode* prev ,   ListNode*  curr){


if( curr == NULL){
    return prev;
}


ListNode* nextNode = curr->next;

curr->next = prev;
prev = curr;
curr = nextNode;


  ListNode*  recursionAns = reverseUsingRecursion ( prev,curr);

  return recursionAns ; 

  }

    ListNode* reverseList(ListNode* head) {

          ListNode*  prev = NULL;
            ListNode*  curr = head;
            return   reverseUsingRecursion(prev,curr);


        
    }
};
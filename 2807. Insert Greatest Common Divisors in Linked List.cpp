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
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head; //if empty return empty
        }
        ListNode *pointer = head; //set pointer to head of linked-list
        while( pointer -> next ){
            //while pointer points from head to the next link in linked list:
            ListNode* node = new ListNode (gcd( pointer -> val, pointer -> next -> val));
            //insert the new node of the greatest common denomenator between the linked pair

            ListNode *original = pointer->next; //store original pointer on linked list


            pointer -> next = node;
            node -> next = original; 
            // insert node in between the linked pair we're conducting a gcd on from original list
            
            //move forward on original list
            pointer = original;
        }
        return head;
    }

 int gcd(int a, int b) {
   if (a == 0 || b == 0){
    return 0;
   }
   else if (a == b){
    return a;
   }
   else if (a > b){
    return gcd(a-b, b);
   }
    else return gcd(a, b-a);
}
    
};




//Solution for finding whether the linkedlist is palindrome or not


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* trail=head;
ListNode* lead=head;
while(lead!=NULL && lead->next!=NULL){
trail=trail->next;
lead=lead->next->next;
}

ListNode* prev=NULL;
ListNode* temp=trail;
ListNode* next;
while(temp!=NULL){
next=temp->next;
temp->next=prev;
prev=temp;
temp=next;
}
ListNode* temp1=prev;
ListNode* temp2=head;
while(temp1!=NULL){
if(temp1->val!=temp2->val){
return false;
}
temp1=temp1->next;
temp2=temp2->next;
}
return true;

}
};

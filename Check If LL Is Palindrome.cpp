// CodeStudio - Check If Linked List Is Palindrome
//  https://www.codingninjas.com/studio/problems/check-if-linked-list-is-palindrome_985248?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/****************************************************************

    Following is the class structure of the Node class:

    class Node
    {
    public:
        int data;
        Node *next;
        Node()
        {
            this->data = 0;
            next = NULL;
        }
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        }
    };

*****************************************************************/
// Node* getMid(Node* head){
//     Node* slow = head;
//     Node* fast = head -> next;

//     while(fast != NULL && fast -> next != NULL){
//         slow = slow -> next;
//         fast = fast -> next -> next;
//     }
//     return slow;
// }

// Node* reverse(Node* head){
//     Node* curr = head;
//     Node* prev = NULL;
//     Node* forward = NULL;

//     while(curr != NULL){
//         forward = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
// }

// bool isPalindrome(Node *head)
// {
//     if(head == NULL || head -> next == NULL){
//         return true;
//     }
//     Node* middle = getMid(head);
//     Node* temp = middle -> next;
//     middle -> next = reverse(temp);

//     Node* head1 = head;
//     Node* head2 = middle -> next;

//     while(head2 != NULL){
//         if(head1 -> data != head2 -> data){
//             return false;
//         }
//         head1 = head1 -> next;
//         head2 = head2 -> next;
//     }
//     return true;
// }
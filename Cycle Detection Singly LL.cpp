// CodeStudio -  Cycle Detection in a Singly Linked List
//  https://www.codingninjas.com/studio/problems/cycle-detection-in-a-singly-linked-list_628974?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

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

// bool detectCycle(Node *head)
// {
//     Node* fast = head;
//     Node* slow = head;

//     while(fast != NULL && fast -> next != NULL){
//         fast = fast -> next;
//         if(fast != NULL){
//             fast = fast -> next;
//         }
//         slow = slow -> next;
//         if(fast == slow){
//             return true;
//         }
//     }
//     return false;
// }
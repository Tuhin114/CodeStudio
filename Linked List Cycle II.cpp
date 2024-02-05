// CodeStudio -  Linked List Cycle II
// https://www.codingninjas.com/studio/problems/linked-list-cycle-ii_1112628?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

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
// Node* detectLoop(Node* &head){
//     Node* slow = head;
//     Node* fast = head;

//     while(fast != NULL && fast -> next != NULL){
//         fast = fast -> next;
//         if(fast != NULL){
//             fast = fast -> next;
//         }
//         slow = slow -> next;
//         if(slow == fast){
//             return slow;
//         }
//     }
//     return NULL;
// }

// Node *firstNode(Node *head)
// {
//     if(head == NULL){
//         return NULL;
//     }

//     Node* intersection = detectLoop(head);
//     if(intersection == NULL){
//         return NULL;
//     }
//     Node* slow = head;
//     while(slow != intersection){
//         slow = slow -> next;
//         intersection = intersection -> next;
//     }
//     return slow;
// }
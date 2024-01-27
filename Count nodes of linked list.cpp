// CodeStudio - Count nodes of linked list
// https://codingninjas.com/studio/problems/count-nodes-of-linked-list_5884?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=PROBLEM

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

// int length(Node *head)
// {
// 	Node* temp = head;
//     int cnt = 0;
//     //Traverse the linked list and count nodes
//     while(temp != NULL){
//         temp = temp -> next;
//         cnt++; //increment cnt for every node traversed
//     }
//     return cnt;
// }
// CodeStudio - Delete Kth Node From End
//  https://www.codingninjas.com/studio/problems/delete-kth-node-from-end_799912?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/*
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
*/

// Brute Force approach (Incorrect 49/50 test casses passed)
// int getLength(Node* head){
//         Node* temp = head;
//         int count = 0;
//         while(temp != NULL){
//             temp = temp -> next;
//             count++;
//         }
//         return count;
//     }

// Node* removeKthNode(Node* head, int K)
// {
//     if(head == nullptr || head -> next == nullptr){
//             return nullptr;
//         }
//         Node* curr = head;
//         int N = getLength(head);
//         int n = 0;
//         while(n < N - 1 - K){
//             curr = curr -> next;
//             n++;
//         }
//         Node* temp = curr->next;
//         curr -> next = curr -> next -> next;
//         delete temp;
//         return head;
// }

// Optimal Approach
//  Node* removeKthNode(Node* head, int K)
//  {
//      Node* fast = head;
//      Node* slow = head;

//     //Move the fast pointer N nodes ahead
//     for(int i = 0; i < K; i++){
//         fast = fast -> next;
//     }

//     if(fast == nullptr){
//         return head -> next;
//     }

//     //Move both pointers until the fast reaches the end
//     while(fast -> next != nullptr){
//         fast = fast -> next;
//         slow = slow -> next;
//     }

//     Node* delNode = slow -> next;
//     slow -> next = slow -> next -> next;
//     delete delNode;
//     return head;
// }

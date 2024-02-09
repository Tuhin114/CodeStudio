// CodeStudio - Delete Middle Node
// https://www.codingninjas.com/studio/problems/delete-middle-node_763267?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

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

// Approach 1
//  int getLength(Node* head){
//      Node* temp = head;
//      int count = 0;
//      while(temp != nullptr){
//          temp = temp -> next;
//          count++;
//      }
//      return count;
//  }

// Node* deleteMiddle(Node* head){
//     Node* curr = head;
//     if(head == nullptr || head -> next == nullptr){
//         return nullptr;
//     }
//     int N = getLength(head);
//     int n = 0;
//     while(n < N/2 - 1){
//         curr = curr -> next;
//         n++;
//     }
//     Node *middle = curr->next;
//     curr->next = curr->next->next;
//     delete middle;
//     return head;
// }

// Approach 2(Optimal)
//  Node* deleteMiddle(Node* head){
//      if(head == nullptr || head -> next == nullptr){
//              return nullptr;
//          }
//          Node* slow = head;
//          Node* fast = head;
//          fast = fast -> next -> next;
//          while(fast != nullptr && fast -> next != nullptr){
//              slow = slow -> next;
//              fast = fast -> next -> next;
//          }
//          Node* middle = slow -> next;
//          slow -> next = slow -> next -> next;
//          delete middle;
//          return head;
//  }

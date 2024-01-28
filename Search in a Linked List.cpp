// CodeStudio - Search in a Linked List
//  https://www.codingninjas.com/studio/problems/search-in-a-linked-list_975381?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=PROBLEM

/****************************************************************

    Following is the class structure of the Node class:

    template <typename T>
    class Node
    {
    public:
        T data;
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, T* next)
        {
            this->data = data;
            this->next = next;
        }
    };

*****************************************************************/

// int searchInLinkedList(Node<int> *head, int k) {
//     Node<int>* temp = head;

// Traverse the linked list
//     while(temp != NULL){
// Check if the current node's data is equal to the desired element
//         if(temp->data == k){
//             return 1;
//         }
// Move to the next node
//         temp = temp->next;
//     }
//     return 0;
// }
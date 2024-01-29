// CodeStudio -  Introduction To Doubly Linked List
//  https://www.codingninjas.com/studio/problems/introduction-to-doubly-linked-list_8160413?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

// Node* constructDLL(vector<int>& arr) {
// Node *head = new Node(arr[0]); // head is 0th element of array
// Node *prev = head;

// for (int i=1; i<arr.size(); i++){
// Node *temp = new Node (arr[i], nullptr, prev);
// prev->next = temp; // Next should point to temp
// prev = temp; // Now move the prev to temp
// }
// return head;
// }
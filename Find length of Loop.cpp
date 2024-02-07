// CodeStudio - Find length of Loop
// https://www.codingninjas.com/studio/problems/find-length-of-loop_8160455?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

// Approach 1
//  Using Hash map
//  #include <unordered_map>
//  int lengthOfLoop(Node *head) {
//      Node* temp = head;
//      int timer = 1;
//      std::unordered_map<Node*,int>mp;
//      while(temp != nullptr){
//          if(mp.find(temp) != mp.end()){
//              int value = mp[temp];
//              return timer - value;
//          }
//          mp[temp] = timer;
//          timer++;
//          temp = temp -> next;
//      }
//      return 0;
//  }

// Approach 2
// Using Slow & Fast Method (Floyed's Algorithm)
// int findLength(Node* slow, Node* fast){
//     int count = 1;
//     fast = fast -> next;
//     while(slow != fast){
//         count++;
//         fast = fast -> next;
//     }
//     return count;
// }

// int lengthOfLoop(Node *head) {
//     Node* slow = head;
//     Node* fast = head;

//     while(fast != nullptr && fast -> next != nullptr){
//         slow = slow -> next;
//         fast = fast -> next -> next;

//         if(slow == fast){
//             return findLength(slow, fast);
//         }
//     }
//     return 0;
// }
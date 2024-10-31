// C++ (intermedio) - Strutures and Enumerations
// -------------------------------------------------------------------
// Merge Two Sorted Lists
// -------------------------------------------------------------------
// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists into one sorted list. The list should be made
// by splicing together the nodes of the first two lists.
//
// Return the head of the merged linked list.
// -------------------------------------------------------------------
// Example 1:
// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// -------------------------------------------------------------------
// Example 2:
// Input: list1 = [], list2 = []
// Output: []
// -------------------------------------------------------------------
// Example 3:
// Input: list1 = [], list2 = [0]
// Output: [0]
//
// display the mergeTwoLists Example 1 on console.

#include <iostream>
#include <cstddef>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1 == nullptr) return list2;

    if(list2 == nullptr) return list1;

    if(list1 -> val <= list2 -> val) {
        list1 -> next = mergeTwoLists(list1 -> next, list2);
        return list1;
    }
    else {
        list2 -> next = mergeTwoLists(list1, list2 -> next);
        return list2;
    }
}

// Function to insert node at the end
ListNode* insertEnd(ListNode* root, int item)
{
    ListNode* temp = new ListNode(item);
    if(root == NULL)
        return temp;
  
    ListNode* last = root;
    while(last -> next != nullptr) {
        last = last -> next;
    }
  
    last -> next = temp;
    
    return root;
}

ListNode* arrayToList(int arr[], int n)
{
    ListNode* root = nullptr;
    
    for(int i = 0; i < n; i++) {
        root = insertEnd(root, arr[i]);
    }
    
    return root;
}

void display(ListNode* root)
{
    while (root != nullptr) {
        cout << root -> val << " ";
        root = root -> next;
    }
    cout << "\n";
}


int main() {
    int arr1[] = { 1, 2, 4 };
    int arr2[] = { 1, 3, 4 };
    
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    
    ListNode* list1 = arrayToList(arr1, n);
    ListNode* list2 = arrayToList(arr2, m);
    
    display(mergeTwoLists(list1, list2));

    return 0;
}
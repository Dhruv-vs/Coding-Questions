//{ Driver Code Starts
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <ios>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) { 
        count++;
        temp = temp->next;
    }
    return count;
}
Node* reverse(Node* head){
    Node* prev = NULL;
    Node* nex;
    while(head){
        nex = head->next;
        head->next = prev;
        prev = head;
        head = nex;
    }
    return prev;
}
    bool isPalindrome(Node *head) {
        if (!head || !head->next) return true;
        Node *pointer1 = head;
        Node *pointer2 = head;
        int count1 = countNodes(head);
        int mid = count1/2;
        if(count1%2!=0){
            mid = mid+1;
            while(mid){
               pointer2 = pointer2->next;
               mid--;
            }
        Node* point2 = reverse(pointer2);
        while(point2){
            if(pointer1->data!=point2->data) return 0;
            point2 = point2->next;
            pointer1 = pointer1->next;
        }
        }
        else{
            while(mid){
                pointer2 = pointer2->next;
                mid--;
            }
        Node *point1 = reverse(pointer2);
        while(point1){
            if(pointer1->data!=point1->data) return 0;
            point1 = point1->next;
            pointer1 = pointer1->next;
        }
        }
        return 1;
    }
};

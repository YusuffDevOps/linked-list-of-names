#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include <fstream>
using namespace std;

//functions.cpp
//Lastname:Firstname:A00458228:u33
//Submission 05
//Linked Lists of Names

extern const string MY_ID_INFO = "\t\tLastname:Firstname:A00458228:u33";

/*
 * Code Works perfectly
 */

typedef string DataType;
struct Node
{
    DataType data; //Data in the node
    Node* next;    //Link to next node
};

/**
 * Create and return a linked list of the names read from inFile.
 */
Node* createNameList(ifstream& inFile)
{
    Node* head = new Node;
    inFile >> head -> data;
    string word;
    Node* curr = head;
    while (inFile >> word)
    {
        Node* temp = new Node;
        temp -> data = word;
        curr -> next = temp;
        curr = temp;
    }

    return head;

}

/**
 * Display the values in this list of names, five per line, with
 * each name right-justified in a fieldwidth of five spaces.
 */
void displayNameList(Node* head)
{
    Node* curr = head;
    int numWords = 0;
    while (curr != nullptr)
    {
        cout << setw(5) << curr -> data;
        numWords++;


        if (numWords == 5)
        {
            numWords = 0;
            cout << endl;

        }
        curr = curr -> next;

    }
    cout << endl;


}

/**
 * Ensure that all the names in the list begin with a capital letter,
 * and the remaining letters in the name are all lowercase.
 */
void CapitalizeNameList(Node*& head)
{
    Node* curr = head;
    while (curr != nullptr)
    {
        transform(curr->data.begin(), curr->data.end(),
            curr->data.begin(), ::tolower);
        curr -> data[0] = toupper(curr -> data[0]);
        curr = curr -> next;
    }
}

/**
 * Sort the list of names into reverse alphabetical order.
 */
void SortNameList(Node*& head)
{

    Node* current = head;
    while (current != nullptr)
    {
        Node* minNode = current;
        Node* temp = current->next;
        Node* swap = new Node;

        while (temp != nullptr)
        {
            if (temp->data > minNode->data)
                minNode = temp;

            temp = temp->next;
        }


        swap->data = current->data;
        current->data = minNode->data;
        minNode->data = swap->data;


        current = current->next;
    }

}


/**
 * Move the first name in the list to the last position.
 */
void MoveFirstNameToLast(Node*& head)
{
    Node* curr = head;
    Node* last = new Node;
    while (curr != nullptr)
    {
        last = curr;
        curr = curr ->next;
    }
    Node* temp = new Node;
    temp->data = head->data;
    last->next = temp;
    head = head->next;


}
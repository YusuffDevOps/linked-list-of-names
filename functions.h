//functions.h
//Lastname:Firstname:A00123456:u00
//Submission 05
//Linked Lists of Names

/*
 * Self-assessment goes here ...
 */

typedef string DataType;
struct Node
{
    DataType data; //Data in the node
    Node* next;    //Link to next node
};

/**
 * Display the values in this list of names, five per line, with
 * each name right-justified in a fieldwidth of five spaces.
 */
void displayNameList(Node* head);

/**
 * Create and return a linked list of the names read from inFile.
 */
Node* createNameList(ifstream& inFile);

//===================================================================
//Ignore this function ... it does not have to be implemented.
/**
 * Sort the names in the list pointed to by head and return a pointer
 * to the sorted version of the list.
 */
//Node* sortedNameList(Node* head);
//===================================================================

/**
 * Ensure that all the names in the list begin with a capital letter,
 * and the remaining letters in the name are all lowercase.
 */
void CapitalizeNameList(Node*& head);

/**
 * Sort the list of names into reverse alphabetical order.
 */
void SortNameList(Node*& head);

/**
 * Move the first name in the list to the last position.
 */
void MoveFirstNameToLast(Node*& head);

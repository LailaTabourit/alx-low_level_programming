Singly linked lists

In C, a linked list is a data structure that consists of a series of nodes, where each node contains a value and a pointer to the next node in the list. This makes it easy to add or remove elements from the list dynamically, without needing to move around large amounts of memory.

To define a linked list in C, we can start by defining a struct that represents a single node:

struct Node {
    int value;
    struct Node* next;
};
This struct contains an int value to store the data and a struct Node* pointer to the next node in the list.

To create a new node, we can use malloc() to allocate memory for the node and initialize its values:

struct Node* newNode = malloc(sizeof(struct Node));
newNode->value = 42;
newNode->next = NULL;

This creates a new node with a value of 42 and a NULL pointer for the next node, indicating that it is the end of the list.

To traverse the list and print out the values of each node, we can use a loop that follows the next pointers:

struct Node* currentNode = head;
while (currentNode != NULL) {
    printf("%d ", currentNode->value);
    currentNode = currentNode->next;
}

Here, head is a pointer to the first node in the list. We start at the head and follow the next pointers until we reach the end of the list.

To insert a new node into the list, we can create a new node and update the pointers of the adjacent nodes:

struct Node* newNode = malloc(sizeof(struct Node));
newNode->value = 99;
newNode->next = currentNode->next;
currentNode->next = newNode;

Here, currentNode is a pointer to the node after which we want to insert the new node. We create a new node with a value of 99 and set its next pointer to the node that was originally after currentNode. We then update currentNode's next pointer to point to the new node, effectively inserting it into the list.

To delete a node from the list, we can update the pointers of the adjacent nodes and free the memory of the deleted node:

struct Node* nodeToDelete = currentNode->next;
currentNode->next = nodeToDelete->next;
free(nodeToDelete);


Here, nodeToDelete is a pointer to the node we want to delete, and currentNode is a pointer to the node before nodeToDelete. We update currentNode's next pointer to skip over nodeToDelete, effectively removing it from the list. Finally, we use free() to release the memory allocated for nodeToDelete.


<h1 align="center">Linked List in C</h1>
	<p>Linked lists are used in many programming languages, including C, and are an important tool for organizing and manipulating data.</p>
	<h2>Table of Contents</h2>
	<ul>
		<li>Introduction</li>
		<li>Linked List Basics</li>
		<li>Creating a Linked List</li>
		<li>Inserting Elements into a Linked List</li>
		<li>Deleting Elements from a Linked List</li>
		<li>Traversing a Linked List</li>
		<li>Reversing a Linked List</li>
		<li>Conclusion</li>
	</ul>
	<h2>1. Introduction</h2>
	<p>A linked list is a linear data structure consisting of a sequence of nodes, each containing data and a pointer to the next node in the sequence. Unlike arrays, linked lists do not have a fixed size and can grow or shrink dynamically as needed.</p>
	<p>Linked lists are commonly used to implement other data structures such as stacks, queues, and hash tables, and are an important part of many algorithms in computer science.</p>
	<h2>2. Linked List Basics</h2>
	<p>Before we dive into the code, let's go over some basic concepts related to linked lists.</p>
	<ul>
		<li>Nodes</li>
		<p>A node is the basic building block of a linked list. Each node contains a piece of data, which can be of any type, and a pointer to the next node in the list.</p>
		<li>Head</li>
		<p>The head of a linked list is the first node in the list. It is used to access the first element in the list and to traverse the list.</p>
		<li>Tail</li>
		<p>The tail of a linked list is the last node in the list. It is used to add new nodes to the end of the list.</p>
		<li>NULL Pointer</li>
		<p>A NULL pointer is a special pointer that does not point to any memory location. It is commonly used in linked lists to indicate the end of the list.</p>
	</ul>
	<h2>3. Creating a Linked List</h2>
	<p>To create a linked list, we first need to define a node structure to hold the data and the next pointer. Here's an example:</p>
	<pre><code>struct Node {
    int data;
    struct Node* next;
};</code></pre>
<p> In this example, we define a node structure that contains an integer data field and a pointer to the next node.</p>

<ul>To create a new linked list, we simply create a new node and set the head pointer to point to it:?</ul>

<pre><code>
struct Node* head = NULL;
head = (struct Node*)malloc(sizeof(struct Node));
head->data = 1;
head->next = NULL; </code></pre>
<ul>In this example, we create a new node and set the head pointer to point to it. We then set the data field of the node to 1 and the next pointer to NULL, indicating that this is the end of the list.</ul>

<h2>4. Inserting Elements into a Linked List</h2>
<ul>To insert a new element into a linked list, we need to create a new node and set its next pointer to the node after the insertion point. Here's an example:</ul>
<pre><code>
void insertNode(struct Node* head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }
    
    struct Node* temp = head;
    for (int i = 0; i < position - 1; i++) {
        temp = temp->next;
    }
   
    newNode->next = temp->next;
    temp->next = newNode;
}</pre></code>
<p>In this example, we define a function insertNode that takes the head of the list, the data to insert, and the position at which to insert the new node.</p>

<ul>If the position is 0, we insert the new node at the beginning of the list. We set the next pointer of the new node to point to the current head of the list, and then update the head pointer to point to the new node.</ul>

<ul>If the position is not 0, we traverse the list until we reach the node before the insertion point. We then set the next pointer of the new node to point to the next node in the list, and the next pointer of the previous node to point to the new node.</ul>

<h2>5. Deleting Elements from a Linked List</h2>
<ul>To delete an element from a linked list, we need to update the next pointer of the previous node to point to the next node after the deleted node. Here's an example:</ul>

<pre><code>
void deleteNode(struct Node* head, int position) {
    if (head == NULL) {
        return;
    }
    
    struct Node* temp = head;
    
    if (position == 0) {
        head = head->next;
        free(temp);
        return;
    }
    
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL || temp->next == NULL) {
        return;
    }
    
    struct Node* nextNode = temp->next->next;
    free(temp->next);
    temp->next = nextNode;
}</pre></code>
<ul>In this example, we define a function deleteNode that takes the head of the list and the position of the node to delete.</ul>

<p>If the list is empty, we simply return. If the position is 0, we update the head pointer to point to the next node in the list, and then free the memory occupied by the deleted node.</p>

<p>If the position is not 0, we traverse the list until we reach the node before the deleted node. We then update the next pointer of the previous node to point to the node after the deleted node, and then free the memory occupied by the deleted node.</p>

<h2>6. Traversing a Linked List</h2>
<p>To traverse a linked list, we simply start at the head of the list and follow the next pointers until we reach the end of the list. Here's an example:</p>

<pre><code>
void traverseList(struct Node* head) {
    struct Node* temp = head;
    
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}</pre></code>
<p>In this example, we define a function traverseList that takes the head of the list and prints out each element in the list. We start at the head of the list and follow the next pointers until we reach the end of the list.</p>

<h2>7. Reversing a Linked List</h2>
<p>To reverse a linked list, we need to reverse the order of the nodes and update the next pointers accordingly. Here's an example:</p>
<pre><code>
void reverseList(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* nextNode = NULL;
    
    while (current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    
    *head = prev;
}</pre></code>
<p>In this example, we define a function reverseList that takes a double pointer to the head of the list. We define three pointers: prev, current, and nextNode.</p>
<p> We start at the head of the list and traverse the list, updating the next pointers of each node to point to the previous node. Once we reach the end of the list, we update the head pointer to point to the last node, which is now the first node in the reversed list.</p>

<h2>Conclusion</h2>
<p>This concludes our course on linked lists in C. We covered the basics of linked lists, including creating a node struct, inserting and deleting nodes, traversing the list, and reversing the list.</p>
<pre><code>
Linked lists are a powerful data structure that can be used to solve many problems in computer science and programming. Understanding how they work is an important foundation for any programmer.
</pre></code>

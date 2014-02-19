typedef struct Node Node;
struct Node
{
  Node* next;
  int data;
};

void push(Node** head, int data);
void appendNode(Node* head, int data);
Node* last(Node* head);
int length(Node* head);

void removeNode(Node** head, Node** node);

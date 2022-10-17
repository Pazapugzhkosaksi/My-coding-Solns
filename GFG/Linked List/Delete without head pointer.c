// Successful Approach
void deleteNode(Node *del)
{
    *del=*(del)->next;
}

// GFG approaches
void deleteNode(Node *del)
{
    del->data=del->next->data;
    del->next=del->next->next;
}

void deleteNode(Node *del)
{
    if (pos == NULL) // If linked list is empty
        return;
    else {

        if (pos->next == NULL) {
            printf("This is last node, require head, can't "
                   "be freed\n");
            return;
        }

        struct Node* temp = pos->next;

        // Copy data of the next node to current node
        pos->data = pos->next->data;

        // Perform conventional deletion
        pos->next = pos->next->next;

        free(temp);
    }
}
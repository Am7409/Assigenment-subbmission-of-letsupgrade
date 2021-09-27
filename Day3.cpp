#include<iostream>
 using namespace std;
 struct node
{

    int data;
    struct node *next;
};

void insert_end(node *&n, int d)
{
    // just follow the three steps to make it
    node *ptr = new node();
    ptr->data = d;

    if (n == NULL)
    {
        cout << "The list is empty";
    }
    else
    {
        node *temp = n;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}

void delete_end(node *&n){
    node * ptr, * prev; 
    if(n==NULL){
        cout<<"List is empty";
        return; 
    }
    else{
        if(n->next == NULL){
            ptr=n;
            n=NULL;
            delete ptr;
        }
        else{
            ptr=n;
            while(ptr->next !=NULL){
                prev= ptr;
                ptr= ptr->next;
            }
            prev->next=NULL;
            delete ptr; 
        }
    }

}
void print(node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}

int main()
{
    node * head = new node(); 
       head->data= 3;
      insert_end(head, 5);	 
       insert_end(head, 3);	
     insert_end(head, 2);	
     print(head);
     delete_end(head);
     cout<<endl; 
print(head);
    return 0;
}


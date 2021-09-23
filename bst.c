# include <stdio.h>
#include  <stdlib.h>


struct Node
{

int data;
struct Node * right;
struct Node * left;

};

void insert(int key) ;
void print_DFS(struct Node * root); // Inorder traversal
struct Node * head = NULL;

int main (void)
{
    int key = 0;
    while(scanf("%d",&key)== 1)
    {
        insert(key);
    }

print_DFS(head);
    printf("%d\n",head->data);
    
    return 0;

}

void insert( int key )
{
       
       
       
        struct Node* parent = NULL; // will point to the node
        struct Node * node_ptr = NULL;// will point to null eventially
        struct Node  * node =malloc(sizeof(struct Node));
        if(node == NULL)
         
         {

             printf("not enought memmory\n");
             exit(1);
         }
        
        
        
        
        node->data = key;
        node->left = NULL;
        node->right = NULL;
    
        if(head == NULL)
        {

            head = node;
            return;
        }

        else
        
        {
         
            node_ptr = head;
        
            while(node_ptr!= NULL)
            {

                parent = node_ptr; 
            
                if(key < node_ptr->data)
                    node_ptr = node_ptr ->left;
                    
                

                   
                   else
                    node_ptr = node_ptr->right;
            

            }
        
        

            if(key < parent->data)
            {

                parent ->left = node;
            }


            else
            {
                parent ->right = node;
            }
        
        }

}



void print_DFS(struct Node * root)
{

        if(root != NULL) 
        {
    
            print_DFS(root->left);
            printf("%d\n" ,root->data);
            print_DFS(root->right);
        }
}
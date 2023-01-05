// #include<iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *lchild;
//     Node *rchild;
// };
// Node* insert(Node*p,int x)
// {
//         Node *t=p;
//         Node *r,*s;

//     if(p==NULL)
//     {
//         t->data=x;
//         t->lchild=t->rchild=NULL;
//         return t;
//     }
//     while(t!=0)
//     {
//         r=t;
//         if(x<t->data)
//         {
//             t=t->lchild;

//         }
//         else if(x>t->data)
//         {
//             t=t->rchild;
//         }
//         else
//         {
//             return p;
//         }
//     }
//     s=new Node;
//     s->data=x;
//     s->lchild=s->rchild=NULL;
//         if(x<r->data)
//         {
//             r->lchild=s;

//         }
//         else if(x>r->data)
//         {
//             r->rchild=s;
//         }
    
// }
// int main()
// {
//     Node *root=NULL;
//     root=insert(root,20);
//     insert(root,10);
//     insert(root,30);
//     return 0;
// }
#include<iostream>
using namespace std;
class Node
{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};
class BST
{
    private:
     Node *root;
    public:
    BST()
    {
        root=nullptr;
    }
    Node* getroot()
    {
        return root;
    }
    void insert(int x)
    {
        Node* t=root;
        Node *p,*r;
        if(root==NULL)
        {
            p= new Node;
            p->data=x;
            p->lchild=p->rchild=NULL;
            root=p;
            return;
        }
        while(t!=0)
        {
            r=t;
            if(x<t->data)
            {
                t=t->lchild;
            }
            else if(x>t->data)
            {
                t=t->rchild;
            }
            else
            {
                return;
            }
        }
        p= new Node;
        p->data=x;
        p->lchild=p->rchild=NULL;
        if(x<r->data)
        {
            r->lchild=p;
        }
        else
        {
            r->rchild=p;
        }
    }
    void inorder(Node *p);
    Node* search(int x);
};
void BST::inorder(Node* p)
{
    if(p)
    {
        inorder(p->lchild);
        cout<<p->data<<", "<<flush;
        inorder(p->rchild);
    }
}

Node* BST::search(int x)
{
    Node* t=root;
    while(t!=0)
    {
        if(x==t->data)
        {
            return t;
        }
        else if(x<t->data)
        {
            t=t->lchild;
        }
        else{
            t=t->rchild;
        }
    }
    return NULL;
}
int main()
{
    BST bst;

    //Insert
    bst.insert(20);
    bst.insert(10);
    bst.insert(30);
    bst.insert(17);
    bst.insert(5);
    bst.insert(1);
    bst.insert(0);
    bst.insert(45);

    //Inorder traversal
    bst.inorder(bst.getroot());
    cout<<endl;

    //Search
    Node *temp=bst.search(45);
    if(temp==NULL)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<temp->data<<" is present."<<endl;
    }
    return 0;
}

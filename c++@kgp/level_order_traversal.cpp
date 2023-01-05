#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* lchild;
    Node* rchild;
    Node()
    {
        data=-1;
        lchild=rchild=NULL;
    }
    Node(int x)
    {
        data=x;
        lchild=rchild=NULL;
    }
};
class BST
{
    private:
    Node* root;
    public:
    BST()
    {
        root=NULL;
    }
    BST(int arr[],int n)
    {
        root=NULL;
        // iinsert(arr[0]);
            // root=rinsert(root,arr[0]);
        for(int i=0;i<n;i++)
        {
            rinsert(root,arr[i]);
        }
    }
    Node* rinsert(Node*p,int x);
    Node* getroot(){return root;}
    void iinsert(int x);
    void search(int key);
    void preorder(Node *p);
    void inorder(Node *p);
    Node* deletion(Node *p,int key);
    Node* InPre(Node* p);
    Node* InSucc(Node* p);
    int height(Node* p)
    {
        if(p==NULL)
        {
            return 0;
        }
        else
        {
            int lheight=height(p->lchild);
            int rheight=height(p->rchild);

            if(lheight>rheight)
            {
                return (lheight+1);
            }
            else
            {
                return (rheight+1);
            }
        }
    }
    void printcurrentlevel(Node*p,int level)
    {
        if(p==NULL)
        {
            return;
        }
        if(level==1)
        {
            cout<<p->data<<" ";
        }
        else if(level>1)
        {
            printcurrentlevel(p->lchild,level-1);
            printcurrentlevel(p->rchild,level-1);
        }
    }
    void printlevelorder(Node* p)
    {
        int h=height(p);
        for(int i=1;i<=h;i++)
        {
            printcurrentlevel(p,i);
            cout<<endl;
        }
    }
};
Node* BST::deletion(Node *p,int key)
{
    if(p==NULL)
    {
        return NULL;
    }
    if(p->lchild==NULL && p->rchild==NULL)
    {
        if(p==root)
        {
            root=NULL;
        }
        delete p;
        return NULL;
    }
    if(key<p->data)
    {
        p->lchild=deletion(p->lchild,key);
    }
    else if(key>p->data)
    {
        p->rchild=deletion(p->rchild,key);
    }
    else
    {
        Node* q;
        if(p->lchild!=0)
        {
            q=InPre(p->lchild);
            p->data=q->data;
            p->lchild=deletion(p->lchild,q->data);
        }
        else
        {
            q=InSucc(p->rchild);
            p->data=q->data;
            p->rchild=deletion(p->rchild,q->data);
        }
    }
        return p;
}

Node* BST::InPre(Node* p)
{
    while(p && p->rchild)
    {
        p=p->rchild;
    }
    return p;
}
Node* BST::InSucc(Node* p)
{
    while(p && p->lchild)
    {
        p=p->lchild;
    }
    return p;
}
Node* BST::rinsert(Node *p,int x)
{
    Node *t;
    if(root==NULL)
    {
        root=new Node(x);
        return root;
    }
    if(p==NULL)
    {
        t=new Node(x);
        return t;
    }
    else
    {
        if(x<p->data)
        {
            p->lchild=rinsert(p->lchild,x);
        }
        else if(x>p->data)
        {
            p->rchild=rinsert(p->rchild,x);
        }
        else
        {
            cout<<"BST cannot have duplicate elements"<<endl;
        }
        return p;
    }
}
void BST::iinsert(int x)
{
    Node *t=root;
    if(root==NULL)
    {
        root=new Node(x);
        return;
    }
    Node *r;
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
            cout<<x<<" is already present."<<endl;
            return;
        }
    }
    Node *t2=new Node(x);
    if(x<r->data)
    {
        r->lchild=t2;
    }
    else
    {
        r->rchild=t2;
    }
}
void BST::search(int key)
{
    Node*t=root;
    if(t==NULL)
    {
        cout<<"BST is empty"<<endl;
    }
    while(t!=0)
    {
        if(key<t->data)
        {
            t=t->lchild;
        }
        else if(key>t->data)
        {
            t=t->rchild;
        }
        else
        {
            cout<<key<<" element found."<<endl;
        }
    }
    cout<<key<<" element not found"<<endl;
    return ;
}
void BST::preorder(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void BST::inorder(Node *p)
{
    if(p)
    {
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}
int main()
{
    int arr[]={3,6,8,4,1,9,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    //creating bst
    BST bst(arr,n);
    cout<<"\nInorder traversal"<<endl;
    bst.inorder(bst.getroot());
    cout<<"\nPreorder traversal"<<endl;
    bst.preorder(bst.getroot());
    cout<<"\nrinserting 7";
    bst.rinsert(bst.getroot(),7);
    cout<<"\nInorder traversal"<<endl;
    bst.inorder(bst.getroot());
    cout<<"\nPreorder traversal"<<endl;
    bst.preorder(bst.getroot());
    //deletion
    bst.deletion(bst.getroot(),6);
    cout<<"\nInorder traversal"<<endl;
    bst.inorder(bst.getroot());
    cout<<"\nPreorder traversal"<<endl;
    bst.preorder(bst.getroot());
    cout<<"\nLevel order traversal:"<<endl;
    bst.printlevelorder(bst.getroot());
    return 0;
}
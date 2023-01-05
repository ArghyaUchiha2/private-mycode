#include<iostream>
using namespace std;
class Node
{
    public:
    Node* lchild;
    int data;
    Node *rchild;
    int height;
};

class AVL
{
    Node *root;
    public:
    AVL(){root=NULL;}

    //Helper methods for inserting 
    int NodeHeight(Node *p);
    int BalanceFactor(Node *p);
    Node *LLRotation(Node *p);
    Node *RRRotation(Node *p);
    Node *LRRotation(Node *p);
    Node *RLRotation(Node *p);

    //Insert
    Node *rInsert(Node *p,int key);

    //Traversal
    void Inorder(Node *p);
    void Inorder(){Inorder(root);}
    void Preorder(Node *p);
    void Preorder(){Preorder(root);}
    Node* getroot(){return root;}
};
int AVL::NodeHeight(Node *p)
{
    int hl,hr;

    hl=(p && p->lchild)? p->lchild->height:0;
    hr=(p && p->rchild)? p->rchild->height:0;

    return hl>hr ? hl+1:hr+1;
}

int AVL::BalanceFactor(Node *p)
{
    int hl,hr;
    hl=(p && p->lchild)? p->lchild->height:0;
    hr=(p && p->rchild)? p->rchild->height:0;

    return hl-hr;
}
Node* AVL::RRRotation(Node *p)
{
    Node* pr=p->rchild;
    Node* prl=pr->lchild;

    p->rchild=prl;
    pr->lchild=p;

    //Update height
    p->height=NodeHeight(p);
    pr->height=NodeHeight(pr);

    //update root
    if(root==p)
    {
        root=pr;
    }
    return pr;
}
Node* AVL::LLRotation(Node *p)
{
    Node *pl=p->lchild;
    Node *plr=pl->rchild;

    pl->rchild=p;
    p->lchild=plr;

    //Update height
    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);

    //Update root
    if(root==p)
    {
        root=pl;
    }
    return pl;
}
Node* AVL::RLRotation(Node *p)
{
    Node* pr=p->rchild;
    Node* prl=pr->lchild;

    p->rchild=prl->lchild;
    pr->lchild=prl->rchild;

    prl->lchild=p;
    prl->rchild=pr;

    //Update height
    p->height=NodeHeight(p);
    prl->height=NodeHeight(p);

    //Update root
    if(root==p)
    {
        root=prl;
    }
    return prl;
}
Node* AVL::LRRotation(Node *p)
{
    Node* pl=p->lchild;
    Node* plr=pl->rchild;

    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;

    plr->lchild=pl;
    plr->rchild=p;

    //Update height
    pl->height=NodeHeight(pl);
    p->height=NodeHeight(p);
    plr->height=NodeHeight(plr);

    //Update root
    if(p==root)
    {
        root=plr;
    }
    return plr;
}
Node* AVL::rInsert(Node *p,int key)
{
    Node*t;
    if(root==NULL)
    {
        root=new Node;
        root->data=key;
        root->lchild=root->rchild=NULL;
        root->height=1;
    }
    if(p==NULL)
    {
        t=new Node;
        t->data=key;
        t->lchild=t->rchild=NULL;
        t->height=1;
        return t;
    }
    if(key<p->data)
    {
        p->lchild=rInsert(p->lchild,key);
    }
    else if(key>p->data)
    {
        p->rchild=rInsert(p->rchild,key);
    }

    //Update height
    p->height=NodeHeight(p);

    //Balance factor and rotation
    if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1)
    {
        return LLRotation(p);
    }
    if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==-1)
    {
        return LRRotation(p);
    }
    if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==-1)
    {
        return RRRotation(p);
    }
    if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==1)
    {
        return RLRotation(p);
    }
    return p;
}

void AVL::Inorder(Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        cout<<p->data<<", "<<flush;
        Inorder(p->rchild);
    }
}
void AVL::Preorder(Node *p)
{
    if(p)
    {
        cout<<p->data<<", "<<flush;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
int main()
{
    AVL tll;
    tll.rInsert(tll.getroot(),10);
    tll.rInsert(tll.getroot(),30);
    tll.rInsert(tll.getroot(),20);
    tll.rInsert(tll.getroot(),5);
    tll.rInsert(tll.getroot(),4);
    tll.rInsert(tll.getroot(),3);
    tll.rInsert(tll.getroot(),2);
    tll.rInsert(tll.getroot(),40);
    tll.rInsert(tll.getroot(),35);
    tll.rInsert(tll.getroot(),1);
    tll.rInsert(tll.getroot(),0);

    tll.Inorder();
    cout<<endl;
    tll.Preorder(); 
    cout<<endl;
    return 0;
}
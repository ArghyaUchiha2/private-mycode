#include<bits/stdc++.h>
using namespace std;
class adjlistnode
{
    public:
    int data;
    adjlistnode* next;
    adjlistnode* head;

    adjlistnode(int key)
    {
        data=key;
        next=NULL;
    }

    adjlistnode(){}
};
class Graph
{
    private:
    int Vertices;
    adjlistnode* array;
    public:
    Graph(int V)
    {
        Vertices=V;
        array=new adjlistnode[V];
        for(int i=0;i<V;i++)
        {
            array[i].head=NULL;
        }
    }
    void addEdge(int src,int dest)
    { 
        adjlistnode* newnode=new adjlistnode(dest);
        newnode->next=array[src].head;
        array[src].head=newnode;

        newnode=new adjlistnode(src);
        newnode->next=array[dest].head;
        array[dest].head=newnode;
    }
    void printgraph()
    {
        for(int i=0;i<Vertices;i++)
        {
            adjlistnode* pCrawl=array[i].head;
            cout<<"\nAdjacency list of vertex "<<i;
            while(pCrawl)
            {
                cout<<"->"<<pCrawl->data;
                pCrawl=pCrawl->next;
            }
            cout<<endl;
        }
    }
};
int main()
{
    Graph gh(5);
    gh.addEdge(0, 1);
    gh.addEdge(0, 4);
    gh.addEdge(1, 2);
    gh.addEdge(1, 3);
    gh.addEdge(2, 3);
    gh.addEdge(3, 4);
 
    // print the adjacency list representation of the above graph
    gh.printgraph();
 
    return 0;
}
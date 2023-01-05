#include<bits/stdc++.h>
using namespace std;
class adjlistnode
{
    public:
    int data;
    adjlistnode* next;
    adjlistnode* head;
    adjlistnode(int x)
    {
        data=x;
        next=NULL;
    }
    adjlistnode(){}
};
class Graph
{
    private:
    int vertices;
    adjlistnode* array;
    public:
    Graph(int V)
    {
        vertices=V;
        array=new adjlistnode[V];
        for(int i=0;i<V;i++)
        {
            array[i].head=NULL;
        }
    }
    void addEdge(int src,int dest);
    void printGraph();
};
void Graph::addEdge(int src,int dest)
{
    adjlistnode* newnode=new adjlistnode(dest);
    newnode->next=array[src].head;
    array[src].head=newnode;

    newnode=new adjlistnode(src);
    newnode->next=array[dest].head;
    array[dest].head=newnode;
}
void Graph::printGraph()
{
    for(int i=0;i<vertices;i++)
    {
        adjlistnode* pCrawl=array[i].head;
        cout<<"\nAdjacency list of vertex "<<i<<"->";
        while(pCrawl!=0)
        {
            cout<<pCrawl->data<<"->";
            pCrawl=pCrawl->next;
        }
        cout<<"NULL"<<endl;
    }
}
int main()
{
    Graph g(5);
    g.addEdge(0,2);
    g.addEdge(0,4);
    g.addEdge(0,1);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(3,4);

    g.printGraph();
    return 0;
}
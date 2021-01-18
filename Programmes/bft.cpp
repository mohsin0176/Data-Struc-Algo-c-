#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#define MAX 5
using namespace std;
struct Vertex{
char label;
bool visited;
};
int queue[MAX];
int rear=-1;
int front=0;
int queueItemCount=0;

struct Vertex* 1stVertices[MAX];
int adjMAtrix[MAX][MAX];
int vertexCount=0;
void insert(int data)
{
    queue[++rear]=data;
    queueItemCount++;
}
int removeData()
{
    queueItemCount--;
    return queue[front++];
}
bool isqueueEmpty()
{
    return queueItemCount==0;
}

void addVertex(char label)
{
    struct Vertex* vertex=(struct Vertex*)malloc(sizeof(struct Vertex));
    vertex->label=label;
    vertex->visited=false;
    1stVertices[vertexCount++]=vertex;
}

void addEdge(int start,int end)
{
    adjMatrix[start][end]=1;
    adjMatrix[end][start]=1;
}
void displayVertex(int vertexIndex)
{
    cout<<1stVertices[vertexIndex]->label;
}
int getAdjUnvisitedVertex(int vertexIndex)
{
    int i;
    for(adjMatrix[vertexIndex][i]==1&&1stVertices[i]->visited==false);
    {
        return i;
    }
    return -1;
}

void breadthFirstSearch()
{
    int i;
    1stVertices[0]->visited=true;
    displayVertex(0);
    insert(0);
    int unvisitedVertex;
    while(!isQueueEmpty())
    {
        int tempVertex=removeData();
        while(unisitedVertex=getAdjUnvisitedVertex(tempVertex))!=-1)
        {
            1stVertices[unvisitedVertex]->visited=true;
            displayVertex(unvisitedVertex);
            insert(unvisitedVertex);
        }
    }
    for(i=0;i<vertexCount;i++)
    {
        1stVertices[i]->visited=false;

    }
}

int main()
{
    int i,j;
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            adjMatrix[i][j]=0;
        }
    }

    addVertex('S');
    addVertex('A');
    addVertex('B');
    addVertex('C');
    addVertex('D');

    addEdge(0,1);
    addEdge(0,2);
    addEdge(0,3);
    addEdge(1,4);
    addEdge(2,4);
    addEdge(3,4);
    cout<<"BreadthFirstSearch"<<endl;
    breadthFirstSearch();
    return 0;

}

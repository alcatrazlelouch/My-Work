//============================================================================
// Name        : Graph-union.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Edge{
	int src, dest;
};

struct Graph{
	int V,E;
	Edge *edge;
};

struct subset{
	int parent;
	int rank;
};

Graph* createGraph(int V,int E){
	Graph* graph = new Graph();
	graph->V=V;
	graph->E=E;

	graph->edge = Edge[E];
	return graph;
}

int find(subset* subsets, int i){
	if(subsets[i].parent != i)
		subsets[i].parent = find(subsets,subsets[i].parent);
	return subsets[i].parent;
}

void Union(subset* subsets, int x, int y){
	int xroot = find(subsets,x);
	int yroot = find(subsets,y);

	if(subsets[xroot].rank < subsets[yroot].rank)
		subsets[xroot].parent = yroot;
	else if(subset[xroot].rank > subsets[yroot].rank)
		subsets[yroot].parent = xroot;


	else{
		subset[yroot].parent = xroot;
		subsets[xroot].rank++;
	}
}

int isCycle(Graph* graph){
	int V = graph->V;
	int E = graph->E;

	subset *subsets = new subset();
	for(int v = 0;v<V;++v){
		subsets[v].parent =v;
		subsets[v].rank = 0;
	}


	for(int e = 0 ;e<E;++e){
		int x = find(subsets, graph->edge[e].src);
		int y = find(subsets, graph->edge[e].dest);

		if(x==y)
			return 1;

		Union(subsets, x,y);
	}
	return 0;
}



int main() {
	/* Let us create the following graph
	         0
	        |  \
	        |    \
	        1-----2 */
	 int V = 3, E = 3;
	 Graph* graph = createGraph(V,E);

	 graph->edge[0].src=0;
	 graph->edge[0].dest = 1;

	 graph->edge[1].src = 1;
	 graph->edge[1].dest = 2;

	 graph->edge[2].src = 0;
	 graph->edge[2].dest = 2;

	 if(isCycle(graph))
		 cout<<"Graph contains cycle";
	 else{
		 "Graph does'nt contain cycle";
	 }
	return 0;
}

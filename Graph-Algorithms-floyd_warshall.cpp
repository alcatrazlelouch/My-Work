//============================================================================
// Name        : Graph-Algorithms-floyd_warshall.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<climits>
using namespace std;

#define INF INT_MAX
#define V 4

void printMS(int dist[V][V]){
	for(int i = 0;i<V;i++){
		for(int j = 0;j<V;j++){
			cout<<dist[i][j]<<" "<<flush;
		}
		cout<<endl;
	}
}
void floydWarshall(int graph[V][V]){
	int dist[V][V],i,j,k;
	
	for(i = 0;i<V;i++){
		for( j = 0;j<V;j++ ){
			dist[i][j] = graph[i][j];
		}
	}
	
	for( k = 0 ;k<V;k++){
		for(i = 0;i<V;i++){
			for(j = 0 ;j<V; j++){
				if(dist[i][k]+dist[k][j] < dist[i][j] && dist[i][k] != INF && dist[k][j] != INF ){
					dist[i][j] = dist[i][k]+dist[k][j] ;
				}
			}
		}
	}
	
	printMS(dist[V][V]);
}
int main() {
	 /* Let us create the following weighted graph
            10
       (0)------->(3)
        |         /|\
      5 |          |
        |          | 1
       \|/         |
       (1)------->(2)
            3           */
    int graph[V][V] = { {0,   5,  INF, 10},
                        {INF, 0,   3, INF},
                        {INF, INF, 0,   1},
                        {INF, INF, INF, 0}
                      };
 
    // Print the solution
    floydWarshall(graph);
	return 0;
}

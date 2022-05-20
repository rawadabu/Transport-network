//
//  Graph.hpp
//  EX2
//
//  Created by Rawad Abusaleh on 16/05/2022.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <iostream>
#include <stdio.h>
#include <vector>

// Enumeration type for stations
enum _stationType{
    intercity, centraal, stad
};

using namespace std;

struct Edge{
    int src
    ,dest
    ,weight;       // Travel time
    int type;     // Types of stop stations [intercity, centraal, stad]
    int stop_time; // I do it switch/case
};


typedef pair<int, int> Pair;
 
// A class to represent a graph object
class Graph
{
private:
    // a vector of vectors of Pairs to represent an adjacency list
    vector<vector<Pair>> adjList;
public:
   
    // Graph Constructor
    Graph(vector<Edge> const &edges, int n)
    {
        // resize the vector to hold `n` elements of type vector<Edge>
        adjList.resize(n);
 
        // add edges to the directed graph
        for (auto &edge: edges)
        {
            int src = edge.src;
            int dest = edge.dest;
            int weight = edge.weight;
            
 
            // insert at the end
            adjList[src].push_back(make_pair(dest, weight));
 
            // uncomment the following code for undirected graph
            // adjList[dest].push_back(make_pair(src, weight));
        }
    }
    
    // destructor
    ~Graph() = default;
    
    // Add edge
    void addEdge(int src,int dest, int weight)
    {
        adjList[src].push_back(make_pair(dest, weight));
    }
    
    // Print
    void printGraph(Graph const &graph, int n)
    {
        for (int i = 0; i < n; i++)
            {
                // Function to print all neighboring vertices of a given vertex
                for (Pair v: graph.adjList[i]) {
                    cout << "(" << i << ", " << v.first << ", " << v.second << ") ";
                }
            cout << endl;
            }
    }

    
};
 

#endif /* Graph_hpp */

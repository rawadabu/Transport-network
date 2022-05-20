//
//  main.cpp
//  EX2
//
//  Created by Rawad Abusaleh on 16/05/2022.
//

#include <iostream>
#include <string>
#include "Graph.hpp"
#include "Exceptions.cpp"
#include <fstream>
#include <memory>
#include <stdlib.h>

void readFromFile(ifstream &file, Graph graph){
    char in_src, in_dest, in_weight;
    string temp;
    ifstream input_file;
    while (file.good()) {
        file >> in_src >> in_dest >> in_weight;
    }
    
    // after checking inputs
    getline(file, temp);
//    graph.addEdge(atoi(in_src), in_dest, in_weight);
}

void UserInterface()
{
    string command;
    
    while(true){
        cout << "Press [1] to load a new folder." << endl;
        cout << "Press [2] to find the group of vertices that connected to the given point.(outbound)" << endl;
        cout << "Press [3] to find the group of vertices inbound." << endl;
        cout << "Press [4] to find the shortest travel time between <target_node> and <source_node>." << endl;
        cout << "Press [5] to calculate the shortest route between <target_node> and <source_node>." << endl;
        cout << "Press [6] to print the Transport network." << endl;
        cout << "Type [quit] to leave." << endl;
        cin >> command;
        if(command == "1"){
            //code here
            cout << "1" << endl;
        }else if(command == "2"){
            cout << "2" << endl;
            
        }else if(command == "3"){
            
        }else if(command == "4"){
            
        }else if(command == "5"){
            
        }else if(command == "6"){
            
        }else if(command == "quit"){
            cout << "See you later, hope not." << endl;
            exit(EXIT_SUCCESS);
        }else{
            cerr << "The given command cannot be located, please choose a number between 1-6, or [quit] to leave" << endl;
        }
    }
}



int main(int argc, const char * argv[]) {
    
//    try {
//        throw fileException();
//    }catch(fileException& e){
//        cout << e.what() << endl;
//    }
    
    
    // vector of graph edges as per the above diagram.
        // Please note that the initialization vector in the below format will
        // work fine in C++11, C++14, C++17 but will fail in C++98.
        vector<Edge> edges =
        {
            // (x, y, w) —> edge from `x` to `y` having weight `w`
            {0, 1, 6}, {1, 2, 7}, {2, 0, 5}, {2, 1, 4}, {3, 2, 10}, {5, 4, 1}, {4, 5, 3}
        };
     
        // total number of nodes in the graph (labelled from 0 to 5)
        int n = 6;
     
        // construct graph
        Graph graph(edges, n);
    
       // UserInterface();
     
        // print adjacency list representation of a graph
        graph.printGraph(graph, n);
    
    return 0;
}

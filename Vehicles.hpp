//
//  Vehicles.hpp
//  EX2
//
//  Created by Rawad Abusaleh on 16/05/2022.
//

#ifndef Vehicles_hpp
#define Vehicles_hpp

#include <stdio.h>
#include <iostream>
#include "Graph.hpp"
using namespace std;

// Enumeration type for vehicles
enum _vehicleType{
    bus, tram, sprinter, rail
};


class Vehicle {
    double _travelTime;   // Travel time;
    double _stopTime;     // Stop time
    double _transitTime;  // Transit time
    int _vType;          // bus, tram, sprinter, rail.
   
                
public:
    vector<Edge> edges;
    // empty constructor
    Vehicle() : _travelTime(0), _stopTime(0), _transitTime(0), _vType(1){}
    
    // default constructor
    Vehicle(double travel, double stop, double tranist, const int& type) : _travelTime(travel), _stopTime(stop), _transitTime(tranist), _vType(type){}
     
    // copy constructor
    Vehicle(const Vehicle& other) : _travelTime(other._travelTime), _stopTime(other._stopTime), _transitTime(other._transitTime), _vType(other._vType){}
    
    // move constructor
    Vehicle(const Vehicle&& other) : _travelTime(other._travelTime), _stopTime(other._stopTime), _transitTime(other._transitTime), _vType(other._vType){}
    
    // destructor
    ~Vehicle() = default;

    
    
};

#endif /* Vehicles_hpp */

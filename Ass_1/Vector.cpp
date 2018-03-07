/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vector.cpp
 * Author: blairjackson
 * 
 * Created on 6 March 2018, 4:33 PM
 */

#include "Vector.h"
#include "includes.h"

Vector::Vector() {
}


void Vector::add_vector(){
    
    vector<string> strings;
    string line;
    
    //open file (remember to change file to filename variable)
    ifstream file("test.txt");
    
    //check file opened correctly
    if(!file){
        cerr << ("could not open file") << endl;
    }
    
    //read file line by line and store in vector
    while(getline(file, line)){
        strings.push_back(line);
    }
    
    //read out vector (delete before submitting)
    for(vector<string>::iterator it = strings.begin(); it != strings.end(); ++it){
        cout << " " << *it << "\n";
    }
    
    compare_string(strings, "supppaaaa");
    
}

//remember to change what gets passed at the very start 
//makes sure to pass everything needed for multimap

void Vector::compare_string(vector<string> strings, string line){
    
    for(vector<string>::iterator it = strings.begin(); it != strings.end(); ++it){
        cout << "comparing strings mofo" << endl;
        string check = *it;
        if(check.compare(line) == 0){
            cout << "we have a match braj" << endl;
        }
    }
}


Vector::Vector(const Vector& orig) {
}

Vector::~Vector() {
}


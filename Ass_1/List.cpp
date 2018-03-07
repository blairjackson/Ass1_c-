/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.cpp
 * Author: blairjackson
 * 
 * Created on 6 March 2018, 4:35 PM
 */

#include "List.h"
#include "includes.h"

List::List() {
}


void List::add_list(){
    list<string> strings;
    string line;
    
    //open file (remember to change file to filename variable)
    ifstream file("test.txt");
    
    //check file opened correctly
    if(!file){
        cerr << ("could not open file") << endl;
    }
    
    //read file line by line and store in list
    while(getline(file, line)){
        strings.push_back(line);
    }
    
    //read out list (delete before submitting)
    for(list<string>::iterator it = strings.begin(); it != strings.end(); ++it){
        cout << " " << *it << "\n";
    }
}


List::List(const List& orig) {
}

List::~List() {
}


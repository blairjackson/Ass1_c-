/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Set.cpp
 * Author: blairjackson
 * 
 * Created on 6 March 2018, 8:25 PM
 */

#include "Set.h"
#include "includes.h"

Set::Set() {
}

void Set::add_set(){
    multiset<string> strings;
    string line;
    
    
    cout << "this is the multiset \n" << endl;
    
    //open file (remember to change file to filename variable)
    ifstream file("test.txt");
    
    //check file opened correctly
    if(!file){
        cerr << ("could not open file") << endl;
    }
    
    //read file line by line and store in list
    while(getline(file, line)){
        strings.insert(line);
    }
    
    //read out list (delete before submitting)
    for(multiset<string>::iterator it = strings.begin(); it != strings.end(); ++it){
        cout << " " << *it << "\n";
    }
    
    
}




Set::Set(const Set& orig) {
}

Set::~Set() {
}


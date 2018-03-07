/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vector.h
 * Author: blairjackson
 *
 * Created on 6 March 2018, 4:33 PM
 */


#ifndef VECTOR_H
#define VECTOR_H

#include "includes.h"
using namespace std;

class Vector {
public:
    Vector();
    void add_vector();
    void compare_string(vector<string> strings, string line);
    
    Vector(const Vector& orig);
    virtual ~Vector();
private:
    

};

#endif /* VECTOR_H */


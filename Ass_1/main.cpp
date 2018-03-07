/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: blairjackson
 *
 * Created on 6 March 2018, 4:12 PM
 */

#include "main.h"
#include "includes.h"
#include "Linked_List.h"


/*
 * 
 */
int main(int argc, char** argv) {
    
    cout << "we are starting" << "\n";
    
    Vector nv;
    List nl;
    Set ns;
    Linked_List nll;
    
    nv.add_vector();
    
    
    nl.add_list();
    ns.add_set();
    
    //fix linked list
    //make function to read lines, then call each line into add_linked_list()
    //nll.add_linked_list("hello there sucka");
    //nll.add_linked_list("this is cool right?");
    nll.get_line();
    nll.print_linked_list();
    
    //binary tree
    

    return EXIT_SUCCESS;
}


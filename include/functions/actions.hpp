//for actions; additem, del, view, quit
#pragma once
#include "../classes.hpp" // access to products list, includes.hpp, functions.hpp, globals.hpp

enum actions {
    Add = 'A',
    Remove = 'R',
    View = 'V',
    Exit = 'X',
};

//method to delete n lines above output?

void promptAction(){
    print("ACTIONS");
    print("");
    print("[A] Add Product");
    print("[R] Remove Product");
    print("[V] View Product");
    print("[X] Exit ");
    print("Choose Action: ");
    //
    char action = charInput();
    switch (action)
    {
    case actions::Add:
        print("");
        //add product interface
        break;
    case actions::Remove:
        print("");    
        //array remove list, then update interface
        break;
    case actions::View:
        print("");
        //extended view display
        break;
    case actions::Exit:
        print("Goodbye!");
        exit();
        break;
    default: //any other input
        print("Invalid Input!");
        //prompt action again
        break;
    }
    //ask for input
    //switch case for inputs
}

void addProduct(){
    print("");
    print("");
    print("");
}

void exit(){
    running = false;
}
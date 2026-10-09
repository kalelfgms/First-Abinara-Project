//for actions; additem, del, view, quit
#pragma once
#include "../classes.hpp" // access to products list, includes.hpp, functions.hpp, globals.hpp

enum actions {
    Add = 'A',
    Remove = 'R',
    View = 'V',
    Exit = 'X',
};

void promptAction(){
    print("ACTIONS");
    print("");
    print("[A] Add Product");
    print("[R] Remove Product");
    print("[V] View Product");
    print("[X] Exit ");
    print("Choose Action: ");
    char action = charInput();
    switch (action)
    {
    case actions::Add:
        print("");
        break;
    case actions::Remove:
        print("");    
        break;
    case actions::View:
        print("");
        break;
    case actions::Exit:
        print("Goodbye!");
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

void exit(bool exitval){
    exitval = false;
}
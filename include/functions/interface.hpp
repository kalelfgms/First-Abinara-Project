#pragma once
#include "../classes.hpp" // access to inventory

void printHeader(){ // prints header
    print("                                   [   nama toko yang sangat keren   ]                                      ");
    print("INVENTORY: "); 
    print(""); //topbar format 
    print("| no |", false);                                                 //2ch
    print(" product name         |", false);                                //20ch
    print(" price   |", false);                                             //7ch
    print(" stock |", false);                                               //5ch
    print(" category             |", false);                                //20ch
    print(" properties                                         |");  //50ch
}

void printProductLine(int index){ // prints each product row and its data
    Product& pr = *Inventory[index];

    string indexStr = to_string(index+1);
    string name = pr.getName();
    string type = pr.getType();
    string subtype = pr.getSubtype();
    string price = displayPrice(pr.getPrice());
    string stock = to_string(pr.getStock());
    vector<string> properties = pr.getProperties();

    const string sep = ", ";

    //numba
    print("| " + indexStr + spacing(2, indexStr.length()) + " |", false);

    //prodname
    print(" " + name + spacing(20, name.length()) + " |", false);
    
    //price
    print(" " + price + spacing(7, price.length()) + " |", false);

    //stock
    print(" " + stock + spacing(5, stock.length()) + " |", false);

    //type/category
    string categoryOutput = type + sep + subtype;
    print(" " + categoryOutput + spacing(20, categoryOutput.length()) + " |", false);

    //properties
    string propertiesOutput = "";
    int n_properties = properties.size();
    
    for (int i = 0; i < n_properties; i++){
        if (i > 0) propertiesOutput += sep;
        propertiesOutput += properties[i];
    }

    print(" " + propertiesOutput + spacing(50, propertiesOutput.length()) + " |");
}

void showInterface(){ // loops thorugh inventory to show each product
    printHeader();
    for (int i = 0; i < Inventory.size(); i++){
        printProductLine(i);
    }
}
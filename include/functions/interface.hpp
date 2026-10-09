#pragma once
#include "../classes.hpp" // access to inventory

void printHeader(){ // prints header
    print("                                   [   nama toko yang sangat keren   ]                                      ");
    print("INVENTORY: "); 
    print("| no | product name         | price   | stock | category        | properties                               |"); //topbar format 
}

void printProductLine(int index){ // prints each product row and its data
    product Product = inventory[index];

    string indexStr = to_string(index+1);
    string name = Product.getValue(productInfo::Name);
    string type = Product.getValue(productInfo::Type);
    string subtype = Product.getValue(productInfo::Subtype);
    string price = Product.getValue(productInfo::Price);
    string stock = Product.getValue(productInfo::Stock);
    vector<string> properties = Product.getProperties();

    const string sep = ", ";

    //numba
    print("| " + indexStr + spacing(2, indexStr.length()) + " |", false);

    //prodname
    print(" " + name + spacing(20, name.length()) + " |", false);
    
    //price
    print(" " + price + spacing(7, price.length()) + " |", false);

    //stock
    print(" " + stock + spacing(5, stock.length()) + " |", false);

    //category
    string categoryOutput = type + sep + subtype;
    print(" " + categoryOutput + spacing(15, categoryOutput.length()) + " |", false);

    //properties
    string propertiesOutput = "";
    int n_properties = properties.size();
    
    for (int i = 0; i < n_properties - 1; i++){
        if (i > 0) propertiesOutput += sep;
        propertiesOutput += properties[i];
    }

    print(" " + propertiesOutput + spacing(40, propertiesOutput.length()) + " |");
}

void showInterface(){ // loops thorugh inventory to show each product
    printHeader();
    for (int i = 0; i < inventory.size(); i++){
        printProductLine(i);
    }
}
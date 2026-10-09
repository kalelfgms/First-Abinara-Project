#pragma once
#include "../classes.hpp" // access to inventory

void printHeader(){ // prints header
    print("[        family mart mulyos asik uhuy         ]");
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

    string sep = ", ";

    //no
    if (to_string(index).length() < 2){
        print("| " + indexStr + "  |",false); // |  1 |
    }else{
        print("| " + indexStr + " |",false);  // | 10 |
    }

    //prodname
    int nameLen = name.length();
    int max_name = 20;
    print(" " + name + spacing(max_name, nameLen) + " |", false);
    
    //price
    int priceLen = price.length();
    int max_price = 7;
    print(" " + price + spacing(max_price, priceLen) + " |", false);

    //stock
    if (stock.length() == 1){
        print("   " + stock + "   |", false); // | 1    |
    }else if(stock.length() == 2){
        print("  " + stock + "   |", false);  // | 10   |
    }else if(stock.length() == 3){
        print("  " + stock + "  |", false);   // | 100  |
    }

    //category
    string categoryOutput = type + sep + subtype;
    int catLen = categoryOutput.length();
    int max_cat = 15;
    print(" " + categoryOutput + spacing(max_cat, catLen) + " |", false);

    //properties
    string propertiesOutput = "";
    int n_properties = properties.size();
    
    for (int i = 0; i < n_properties - 1; i++){
        propertiesOutput += properties[i] + sep;
    }
    propertiesOutput += properties[n_properties-1];

    int propLen = propertiesOutput.length();
    int max_prop = 40;
    print(" " + propertiesOutput + spacing(max_prop, propLen) + " |");
}

void showInterface(){ // loops thorugh inventory to show each product
    printHeader();
    for (int i = 0; i < inventory.size(); i++){
        printProductLine(i);
    }
}
//for interface stuff
#pragma once
#include "../classes.hpp" // access to products list

void printHeader(){
    print("[        family mart mulyos asik uhuy         ]");// header
    print("INVENTORY: "); print("| no | product name         | price   | stock |"); // list header
}

void printProductLine(int index){
    print("| no | product name         | price   | stock | category        | details                        |"); //topbar format
    //dynamic spaces based on product name length, so table is consistent size
    product Product = inventory[index];

    string indexStr = to_string(index);
    string name = Product.getValue(productInfo::Name);
    string type = Product.getValue(productInfo::Type);
    string subtype = Product.getValue(productInfo::Subtype);
    string price = Product.getValue(productInfo::Price);
    string stock = Product.getValue(productInfo::Stock);
    vector<string> properties = Product.getProperties();

    string sep = ", ";
    //no
    if (to_string(index).length() < 2){ // 2 ch
        print("|  " + indexStr + " |"); // |  1 |
    }else{
        print("| " + indexStr + " |");  // | 10 |
    }
    //prodname
    int nameLen = name.length();
    int max_name = 20;
    print(" " + name + spacing(max_name, nameLen) + " |"); // 20ch
      //no ifs, klo max-prodlen = 0, gada space jg
    
    //price
    int priceLen = price.length();
    int max_price = 7;
    print(" " + price + spacing(max_price, priceLen) + " |"); // 7ch

    //stock
    if (stock.length() == 1){ // 3 ch
        print("  " + indexStr + "  |"); // |  1  |
    }else if(stock.length() == 2){
        print("  " + indexStr + " |");  // |  10 |
    }else if(stock.length() == 3){
        print(" " + indexStr + " |");   // | 100 |
    }

    //category
    string categoryOutput = type + sep + subtype;
    int catLen = categoryOutput.length();
    int max_cat = 15;
    print(" " + categoryOutput + spacing(max_cat, catLen) + " |"); // 15ch

    //properties
    string propertiesOutput = "";
    int n_properties = properties.size();
    
    for (int i = 0; i < n_properties - 1; i++){
        propertiesOutput.insert(i, properties[i] + sep);
    }
    propertiesOutput.insert(n_properties, properties[n_properties]);

    int propLen = propertiesOutput.length();
    int max_prop = 30;
    print(" " + propertiesOutput + spacing(max_prop, propLen) + " |"); // 30ch
}

void showInterface(){
    //shows interface
    printHeader();
    //for each item in products array, print product according to index
    for (int i = 0; i < inventory.size(); i++){
        //product currentItem = inventory[i];
        printProductLine(i);
    }
}

void printProductView(int index){ //
    
}

void updateInterface(){
    //updates, run after item add/remove
    //run showInterface after finishing update
}
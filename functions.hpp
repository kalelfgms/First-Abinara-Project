#include "include.hpp"
string Products[] = {};
//make vector/array that holds all the products
//arrays only hold 1 datatype tho...
//convert price and stock to string
//turn inputs for add product into string, or let og variable in class be string in da firs place
//dont forget throws for when user doesnt input correct terms !!!


void print(string msg, bool newline = true){
    if (newline) {
        cout<<msg<<endl;
    }else{
        cout<<msg;
    }
}

void displayPrice(int price){ //function to convert price int 999999 to 999,999 string (class keeps integer price, ts only for display)
    string priceStr = to_string(price);
    priceStr.insert(
        priceStr.length() - 3, 1, ','
    );
}

void printHeader(){
    print("[        family mart mulyos asik uhuy         ]");
    print("INVENTORY: ");
    print("| no | product name         | price   | stock |");
}

void printProduct(int no, string prodnm, string price, int stock){

}

void showInterface(int no, string prodnm, string price, int stock){
    //shows interface
    printHeader();
    //for each item in products array, print product according to index
    //for (size_t i = 0; i < count; i++)//array size blablabla
    //{
        /* code */
    //}
    
}

void updateInterface(){
    //updates, run after item add/remove
    //run showInterface after finishing update
}


#pragma once // prevents recalling
#include "../include.hpp" // base includes

void print(string msg, bool newline = true){ // biar nulis print() aja, opsi utk newline
    cout<<msg;
    if (newline) cout<<endl;
}

string spacing(int max, int num){ // fills empty space dlm product row so column width is preserved
    string spaces = "";
    int spaceNeeded = max - num;
    for (int i = 0; i < spaceNeeded; i++){
        spaces.insert(0, " ");
    }
    return spaces;
}

string displayPrice(int price){ // converts int (1000) to money format(?) (1,000), max 999,999
    string priceStr = to_string(price);
    priceStr.insert(
        priceStr.length() - 3, 1, ','
    );
    return priceStr;
}
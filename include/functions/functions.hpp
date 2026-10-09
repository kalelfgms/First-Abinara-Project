#pragma once
#include "../include.hpp"
#include "../globals.hpp"

void print(string msg, bool newline = true){
    if (newline) {
        cout<<msg<<endl;
    }else{
        cout<<msg;
    }
}

string spacing(int max, int num){
    string spaces = "";
    int spaceNeeded = max - num;
    for (int i = 0; i < spaceNeeded; i++){
        spaces.insert(0, " ");
    }
    return spaces;
}

string displayPrice(int price){ //function to convert price int 999999 to 999,999 string (class keeps integer price, ts only for display)
    string priceStr = to_string(price);
    priceStr.insert(
        priceStr.length() - 3, 1, ','
    );
    return priceStr;
}

char charInput(){
    char val;
    cin >> val;
    return val;
}

string strInput(){
    string val;
    cin >> val;
    return val;
}

int intInput(){
    int val;
    cin >> val;
    return val;
}
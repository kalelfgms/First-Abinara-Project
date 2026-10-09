#pragma once
#include "include.hpp" // base includes
#include "functions/functions.hpp" // access to functions

enum productInfo {
    Name, Type, Subtype, Price, Stock, Properties
};

class product{ // class
    private:
        string name;
        string type;
        string subtype;
        vector<string> properties;
        int price;
        int stock;

    public:
        product(string n, string t, string subt, int p, int stk)
        : name(n), type(t), subtype(subt), price(p), stock(stk) {};

        void setProperties(const vector<string>& pr){
            properties = pr;
        }

        vector<string> getProperties(){
            return properties;
        }

        string getValue(productInfo valName){
            switch (valName){
                case productInfo::Name:
                    return name;
                case productInfo::Type:
                    return type;
                case productInfo::Subtype:
                    return subtype;
                case productInfo::Price:
                    return displayPrice(price);
                case productInfo::Stock:
                    return to_string(stock);
                default:
                    return "";
            }
        }
};

vector<product> inventory = {};
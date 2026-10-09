#pragma once
#include "include.hpp"
#include "globals.hpp"
#include "functions/functions.hpp"
//product list
//string Products[] = {};
//make vector/array that holds all the products
//arrays only hold 1 datatype tho...
//convert price and stock to string
//turn inputs for add product into string, or let og variable in class be string in da firs place
//dont forget throws for when user doesnt input correct terms !!!

class product{
    private:
        string productID;
        string name;
        string type;
        string subtype; // subtype
        vector<string> properties; // whatever extra values in each child class
        int price;
        int stock;

    public:
        product(string prodID, string n, string t, string subt, int p, int stk){
            //prodID; //id generator? or js dont use id might b 2 diff
            name = n; type = t; subtype = subt;
            price = p; stock = stk;
            inventory.push_back(*this);
        };

        void setProperties(vector<string> pr){
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
                break;
            }
        }
};

class food: public product{
    private:
        string type = "food";
        //subtypes = instant, snacks, fruits
        //properties: weight, calories, expires
    public:
        food(string n, string subt, int p, int stk)
        : product("", n, type, subt, p, stk){}
        //type should be applied auto, not from runner
};

class drink: public product{
    private:
        int volume; // ml
        int glucose; // mg
        int expires; // n days
    public:
};

class hygiene: public product{ // sabun, sampo, odol
    private:
        int volume; // ml
        int smell; // flowers or sum or batman idk
    public:
};

class medicine: public product{ //
    private:
        string heals; // what it treat; flu, demam, etc
        int expires; // months
    public:
};

//for each add item,  when prompted for type, show types list
//after choosing type, show subtype list based on type
//after choosing subtype, input each property value
//maybe turn propertis into one array (int array) so u can loop through inputting(?)
//add char limit to productname !!
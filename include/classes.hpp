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
        int price;
        int amount;
    public:
        void setData(string id, string n, string t, int p, int amt){
            productID;
            price = p; name = n; type = t; amount = amt;
        }

        void getData(){

        }
};

//for each add item,  when prompted for type, show types list
//after choosing type, show subtype list based on type
//after choosing subtype, input each property value
//maybe turn propertis into one array (int array) so u can loop through inputting(?)
//add char limit to productname !!

class food: public product{
    private:
        string type = "food";
        string subtypes[3] = {"instant", "snacks", "fruits"};
        int weight; // gr
        int calories; // kal
        int expires; // n days
    public:
        food(){
            
        }
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
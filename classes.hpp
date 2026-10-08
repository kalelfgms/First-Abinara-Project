#include "include.hpp"
#include "functions.hpp"

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
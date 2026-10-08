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
            //
            productID = id + to_string(100 + (rand() % 900));
            price = p; name = n; type = t; amount = amt;
        }

        void getData(){

        }
};

class food: public product{
    private:
        int weight; // gr
        int calories; // kal
        bool expires; // n days
    public:
        food(){
            
        }
};

class drink: public product{
    private:
        int volume; // ml
        int glucose; // mg
        bool expires; // n days
    public:
};

class hygiene: public product{ // sabun, sampo, odol
    private:
        int volume; // ml
        int calories;
    public:
};

class medicine: public product{ //
    private:
        string heals; // what it treat; flu, demam, etc
        bool expires; // months
    public:
};
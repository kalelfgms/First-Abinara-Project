#pragma once
#include "include.hpp" // base includes
#include "functions/functions.hpp" // access to functions

enum productInfo {
    Name, Type, Subtype, Price, Stock, Properties
};

class Product{ // class
    private:
        string name, type, subtype;
        vector<string> properties;
        int price, stock;

    public:
        Product(string n, string t, string subt, int p, int stk)
        : name(n), type(t), subtype(subt), price(p), stock(stk) {};

        virtual ~Product() = default;
        
        virtual vector<string> getProperties() const = 0;
        virtual int getPrice() const {
            return price;
        };

        string getName() const {
            return name;
        }
        string getType() const {
            return type;
        }
        string getSubtype() const {
            return subtype;
        }
        int getStock() const {
            return stock;
        }
};

vector<unique_ptr<Product>> Inventory; //dibawah karna class product harus terdefinisi

class Food: public Product{ // discount when near expiry
    private:
        int expire, price, weight, calories;
    public:
        Food(
            string n, string subt,
            int p, int stk,
            int gr, int kl, int e
        ): Product(n, "food", subt, p, stk),
        price(p), expire(e), weight(gr), calories(kl){}

        vector<string> getProperties() const override {
            return {
                to_string(weight) + "gr",
                to_string(calories) + "kal",
                "expires in " + to_string(expire) + " days"
            };
        }

        int getPrice() const override {
            if (expire <= 3){ // expires in 3 days
                return price*.5; // 50% off
            }else{
                return price;
            }
        }
};

class Drink: public Product{ // discount when near expiry
    private:
        int expire, price, volume, sugar;
    public:
        Drink(
            string n, string subt,
            int p, int stk,
            int ml, int gr, int e
        ): Product(n, "drink", subt, p, stk),
        price(p), expire(e), volume(ml), sugar(gr){}

        vector<string> getProperties() const override {
            return {
                to_string(volume) + "ml",
                to_string(sugar) + "gr",
                "expires in " + to_string(expire) + " days"
            };
        }

        int getPrice() const override {
            if (expire <= 3){ // expires in 3 days
                return price*.6; // 40% off
            }else{
                return price;
            }
        }
};

class Hygiene: public Product{ // too much stock, discount
    private:
        int price, volume, stock;
        string smell;
    public:
        Hygiene(
            string n, string subt,
            int p, int stk,
            int ml, string sm
        ): Product(n, "hygiene", subt, p, stk),
        price(p), volume(ml), smell(sm), stock(stk) {}

        vector<string> getProperties() const override {
            return {
                to_string(volume) + "ml",
                "smells like " + smell,
            };
        }

        int getPrice() const override {
            if (Stock >= 50){ // too much stock
                return price*0.6; // 40% off
            }else{
                return price;
            }
        }
};

class Medicine: public Product{ // price increase
    private:
        int expire, price;
        string treats, dose;
    public:
        Medicine(
            string n, string subt,
            int p, int stk,
            string d, string tr, int e
        ): Product(n, "medicine", subt, p, stk),
        price(p), expire(e), dose(d), treats(tr){}

        vector<string> getProperties() const override {
            return {
                dose,
                "treats " + treats,
                "expires in " + to_string(expire) + " days"
            };
        }

        int getPrice() const override {
            return price*1.2; // 20% price increazsee
        }
};
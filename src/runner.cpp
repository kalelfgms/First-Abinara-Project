#include "../include/classes.hpp"
#include "../include/functions/interface.hpp"
#include "../include/functions/actions.hpp"

int main () {
    food indomie(
        "indomie goreng", "instant",
        4000, 11
    );
    indomie.setProperties({"100gr", "300kal", "expire: 30 days"}); //FNE
    inventory.push_back(indomie);//find way to auto put it in inventory

    //prints the row table filled with its contents
    //add each class into inventory vector

    showInterface();

    
    return 0;
}
#include "../include/classes.hpp"
#include "../include/functions/interface.hpp"
#include "../include/functions/actions.hpp"

int main () {
    printHeader();
    food indomie(
        "indomie goreng", "instant",
        4000, 10
    );
    indomie.setProperties({"100gr", "300kal", "expire: 30 days"});
    //prints the row table filled with its contents
    //add each class into inventory vector
    

    showInterface();

    
    return 0;
}
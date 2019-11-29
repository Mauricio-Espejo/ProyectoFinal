#include <iostream>
#include "warehouse_t.h"
using namespace std;


int main() {
    warehouse_t casa (4,4,"Surco");
    casa.add_product_quantity(2,2,3);
    casa.add_product_quantity(2,2,6);
    casa.add_product_quantity(4,4,1);
    if(casa.is_slot_available(4,4)==true)
        cout<<"ta vacio";
    else
        cout<<"ta lleno";
}
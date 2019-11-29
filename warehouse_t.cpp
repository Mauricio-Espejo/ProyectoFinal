//
// Created by Lenovo on 28/11/2019.
//

#include "warehouse_t.h"

warehouse_t::warehouse_t(longitud x, longitud y, string address) {
    address=address;
    for(int i=0;i<x;i++)
    {for(int k=0;k<y;k++)
        slots.emplace_back(slot_t(i,k));
    }
}

bool warehouse_t::is_slot_available(coordenada x, coordenada y) {
    for(auto i:slots)
    {
        if(i.get_posx()== x && i.get_posy()==y && i.get_quantity()==0)
            return true;
    }
}

void warehouse_t::add_product_quantity(coordenada x,coordenada y,cantidad quantity) {
    for(auto i:slots)
    {
        if(i.get_posx()==x && i.get_posy()==y )
            i.add_product_quantity(quantity);
    }
}

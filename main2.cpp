#include <SFML/Graphics.hpp>



#include "Buttons.h"

int main() {
    pressingButtons();
    //sf::Event event;
    //buttons b;

    Linked_list l;
    l.populate("Testing");
    l.populate("123");
    l.printList();
    food_conditions();

    
   // window.close();
}
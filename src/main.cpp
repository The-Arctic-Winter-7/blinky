#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {
    bn::core::init();
    
    bn::backdrop::set_color(bn::color(0, 31, 31));

    while (true) {
       
       
        bn::core::update();
    }
}
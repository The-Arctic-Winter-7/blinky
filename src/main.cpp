#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_random.h>

int main()
{
    bn::core::init();
    bn::backdrop::set_color(bn::color(0, 31, 31));

    // Creates random integer. Internal seed is updated when called during game loop, so int is different every time
    bn::random rngC;

    while (true)
    {

        if (bn::keypad::a_pressed())
        {
            // Unbiased int prevents random from being biased to lower numbers because of modulo bias
            bn::backdrop::set_color(bn::color(rngC.get_unbiased_int(32), rngC.get_unbiased_int(32), rngC.get_unbiased_int(32)));
        }

        if (bn::keypad::b_pressed())
        {
            bn::backdrop::set_color(bn::color(0, 21, 5));
        }

        if (bn::keypad::l_pressed())
        {
            bn::backdrop::set_color(bn::color(31, 0, 31));
        }

        if (bn::keypad::r_pressed())
        {
            bn::backdrop::set_color(bn::color(31, 31, 0));
        }

        if (bn::keypad::up_pressed())
        {
            bn::backdrop::set_color(bn::color(31, 0, 0));
        }

        if (bn::keypad::down_pressed())
        {
            bn::backdrop::set_color(bn::color(0, 31, 0));
        }

        if (bn::keypad::left_pressed())
        {
            bn::backdrop::set_color(bn::color(0, 0, 31));
        }

        if (bn::keypad::right_pressed())
        {
            bn::backdrop::set_color(bn::color(0, 0, 0));
        }

        if (bn::keypad::select_pressed())
        {
            bn::backdrop::set_color(bn::color(31, 31, 31));
        }

        if (bn::keypad::start_pressed())
        {
            bn::backdrop::set_color(bn::color(0, 31, 31));
        }

        bn::core::update();
    }
}
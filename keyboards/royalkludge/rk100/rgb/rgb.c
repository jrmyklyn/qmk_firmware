#include "quantum.h"
#include "rgb_matrix.h"

#define LED5_RGB_MATRIX_INDEX 92
#define LED234_RGB_MATRIX_INDEX 93

bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }
    led_t current_host_keyboard_led_state = host_keyboard_led_state();
    rgb_matrix_set_color(LED5_RGB_MATRIX_INDEX, 0, (current_host_keyboard_led_state.num_lock ? 255 : 0), 0);
    rgb_matrix_set_color(LED234_RGB_MATRIX_INDEX, 0, (current_host_keyboard_led_state.caps_lock ? 255 : 0), 255);
    rgb_matrix_set_color(0, 63, 63, 63); // TODO why does green always break on a row if set in this function?
                                        // and why does it beak on one row, but not other rows???
    return true;
}

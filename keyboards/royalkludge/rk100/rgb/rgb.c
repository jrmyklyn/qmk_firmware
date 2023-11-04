#include "quantum.h"
#include "rgb_matrix.h"

#define LED5_RBG_MATRIX_INDEX 92
#define LED234_RGB_MATRIX_INDEX 93

bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }
    led_t current_host_keyboard_led_state = host_keyboard_led_state();
    rgb_matrix_set_color(LED5_RBG_MATRIX_INDEX, 0, 0, current_host_keyboard_led_state.num_lock ? 255 : 0);
    rgb_matrix_set_color(LED234_RGB_MATRIX_INDEX, 0, 255, current_host_keyboard_led_state.caps_lock ? 255 : 0);
    return true;
}

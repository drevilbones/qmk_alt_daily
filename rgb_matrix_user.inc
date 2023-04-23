// !!! DO NOT ADD #pragma once !!! //

// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(CYCLE_ROWS_ALT)

// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static HSV CYCLE_ROWS_ALT_math(HSV hsv,  uint8_t i, uint8_t time) {
    hsv.h = g_led_config.point[i].y - time;
    return hsv;
}

bool CYCLE_ROWS_ALT(effect_params_t* params) {
    return effect_runner_i(params, &CYCLE_ROWS_ALT_math);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS

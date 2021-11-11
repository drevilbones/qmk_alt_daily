/*
 * Copyright 2021 Nick Scratch
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// !!! DO NOT ADD #pragma once !!! //

// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(hid_effect)

// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

RGB rgb_matrix_led_state[DRIVER_LED_TOTAL];

// e.g: A simple effect, self-contained within a single method
RGB_MATRIX_EFFECT(CYCLE_DOWN_UP)
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static HSV CYCLE_DOWN_UP_math(HSV hsv,  uint8_t i, uint8_t time) {
    hsv.h = g_led_config.point[i].y + time;
    return hsv;
}

bool CYCLE_DOWN_UP(effect_params_t* params) {
    return effect_runner_i(params, &CYCLE_DOWN_UP_math);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
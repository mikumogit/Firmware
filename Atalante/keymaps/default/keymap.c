/*
Copyright 2023 NinthSky Studio

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //,-----------------------------------------------------------------------------------------------------------------------------------------------.
        KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, KC_LBRC, KC_RBRC,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_QUOT, KC_BSLS,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_NUBS, KC_UNDS,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_LCTRL, KC_LGUI,   KC_UP, KC_LALT, KC_LNG1,  KC_SPC, KC_BSPC,  KC_ENT,  KC_SPC, KC_LNG2, KC_RALT,   KC_UP,  KC_APP, KC_RCTRL,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_LEFT, KC_DOWN, KC_RGHT,                   KC_MUTE,                            KC_LEFT, KC_DOWN, KC_RGHT
  //|-----------------------------------------------------------------------------------------------------------------------------------------------'
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code16(KC_VOLD);
    } else {
        tap_code16(KC_VOLU);
    }
    return true;
}
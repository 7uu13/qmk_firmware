/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include "combos.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,   KC_Q,    KC_W,    KC_F,   KC_P,    KC_B,       KC_J,    KC_L,    KC_U,    KC_Y,   KC_MINUS,    KC_BSPC,
        KC_LCTL,  MT_A,   MT_R,    MT_S,    MT_T,    MT_G,       MT_M,   MT_N,    MT_E,    MT_I,  MT_O,    KC_QUOT,
        KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V,       KC_K,   KC_H,    KC_COMM, KC_DOT, KC_SLSH, KC_ESC,
                          KC_LGUI, LT(3, KC_NO), LT(2, KC_ENT), LT(1, KC_SPC), KC_BSPC, KC_RALT

  ),
    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_HOME,    KC_UP,    KC_END,  KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_PSCR, KC_LEFT,   KC_DOWN,KC_RIGHT, KC_DEL, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT,   MO(4), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
        KC_TAB,   KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC,                     KC_DOT, KC_7, KC_8, KC_9, KC_RPRN, KC_BSPC,
        KC_LSFT,  KC_NO,  KC_NO,   KC_NO,   KC_NO,  KC_NO,                        KC_NO,  KC_4,  KC_5, KC_6, KC_BSLS, KC_GRV,
        KC_NO,    KC_NO,  KC_NO,   KC_NO,   KC_NO,  KC_NO,                        KC_0,  KC_1, KC_2, KC_3, KC_PIPE, KC_TILD,
                                            KC_LGUI,  MO(3),  KC_SPC,  KC_ENT,  KC_NO,  KC_RALT
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_AMPR, KC_PAST, KC_AT, KC_HASH, KC_DLR, KC_CIRC,                      XXXXXXX, KC_LEFT_CURLY_BRACE, KC_RIGHT_CURLY_BRACE, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_SCLN, KC_COLN, XXXXXXX, KC_PERC, KC_PPLS, KC_EQL,                     XXXXXXX, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_PIPE, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TILD, KC_GRV, XXXXXXX, XXXXXXX, KC_EXLM, KC_BSLS,                      XXXXXXX, KC_LEFT_PAREN, KC_RIGHT_PAREN, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),
      [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};

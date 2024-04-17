// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐       ┌───┬───╥───┬───┐       ┌───┬───┐
     * │   │   │       │   │   ║   │   │       │   │   │
     * ├───┼───┼───┬───┼───┼───╫───┼───┼───┬───┼───┼───┤
     * │   │ Q │ W │ E │ R │ T ║ Y │ U │ I │ O │ P │   │
     * ├───┼───┼───┼───┼───┼───╫───┼───┼───┼───┼───┼───┤
     * │   │ A │ S │ D │ F │ G ║ H │ J │ K │ L │ ; │   │
     * ├───┼───┼───┼───┼───┼───╫───┼───┼───┼───┼───┼───┤
     * │   │ Z │ X │ C │ V │ B ║ N │ M │ , │ . │ / │   │
     * └───┴───┼───┼───┼───┴───╨───┴───┼───┼───┼───┴───┘
     *         │   │   │               │   │   │
     *         └───┴───┘               └───┴───┘
     *                   ┌───┐   ┌───┐ 
     *                   │   │   │   │
     *               ┌───┼───┤   ├───┼───┐
     *               │   │   │   │   │   │
     *               └───┼───┤   ├───┼───┘
     *                   │   │   │   │
     *                   └───┘   └───┘
     */
    [0] = LAYOUT_default(
        _______, _______,                   _______, _______, _______, _______,                   _______, _______,
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_SLSH,
        KC_DEL,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, 
                          KC_LBRC, KC_RBRC,                                     KC_MINS, KC_EQL,

                                            MO(3),                     KC_LALT,
                                   MO(1),   KC_LSFT,                   KC_LCTL,  KC_SPC,
                                            LT(2,KC_ENT),              KC_BSPC



    ),

    [1] = LAYOUT_default(
        _______, _______,                   _______, _______, _______, _______,                   _______, _______,
        _______, KC_GRV,  S(KC_GRV),KC_PSCR,_______, _______, _______, KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), _______, KC_4,    KC_5,    KC_6,    _______, _______,
        _______, S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______, KC_1,    KC_2,    KC_3,    _______, _______,
                          _______, _______,                                     _______, _______,

                                           _______,                    _______,
                                  _______, _______,                    _______, _______,
                                           _______,                    _______
    ),
    
    [2] = LAYOUT_default(
        QK_BOOT, _______,                   _______, _______, KC_PWR,  _______,                   _______, QK_BOOT,
        _______, KC_VOLD, KC_VOLU, KC_MPRV, KC_MNXT, KC_MPLY, _______, _______, KC_UP,   KC_PGUP, _______, _______,
        _______, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_WBAK, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
        _______, _______, C(KC_X), C(KC_C), C(KC_V), _______, _______, KC_HOME, KC_END,  KC_PGDN, _______, _______,
                          KC_NO,   KC_NO,                                       _______, _______,

                                            KC_NO,                     _______,
                                   KC_LCTL, KC_LSFT,                   _______, _______,
                                            KC_NO,                     _______

    ),
    
    [3] = LAYOUT_default(
        _______, _______,                   _______, _______, _______, _______,                   _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
        _______, _______, _______, _______, _______, _______, _______, KC_F4,   KC_F5,   KC_F6,   _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_F1,   KC_F2,   KC_F3,   _______, _______,
                          _______, _______,                                     _______, _______,

                                           _______,                    _______,
                                  _______, _______,                    _______, _______,
                                           KC_LCTL,                    _______
    ),
    
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  //debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}

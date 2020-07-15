// #include QMK_KEYBOARD_H
#include "dactyl_blue.h"

#define _QWERTY 0 // daily use and coding
#define _MOVE 2   // mouse, arrows, browsing useful keys
#define _CONF 1   // machine settings, keyboard settings, backlight

#define _KC_SPC LT(_MOVE, KC_SPC)
#define _KC_ENT LT(_CONF, KC_ENT)

#define KC_SPEC KC_SFTENT //KC_SFTENT - Right Shift when held, Enter when tapped

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_6x6(

    KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,                          KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,
    KC_GRV ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,                          KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS,
    KC_BSLS,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                          KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_EQL ,
    KC_SLSH,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                          KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_LBRC,KC_RBRC,
    KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,                          KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SCLN,KC_QUOT,
                    KC_TAB ,KC_ESC ,                                                          KC_HOME,KC_END ,
                                    _KC_ENT,                                          _KC_SPC ,
                                            KC_BSPC,KC_LGUI,          KC_RSFT,KC_DEL,
                                            KC_LCTL,KC_LALT,          KC_RALT,KC_RCTL
  ),

  [_MOVE] = LAYOUT_6x6(

    _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
    _______,KC_HOME,KC_END ,KC_PGDN,KC_PGUP,_______,                          _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
                    _______,_______,                                                          _______, _______,
                                    _______,                                          _______,
                                            _______,_______,          _______,_______,
                                            _______,_______,          _______,_______
  ),

  [_CONF] = LAYOUT_6x6(

    _______,_______,_______,_______,_______,_______,                          KC_MUTE,KC_VOLD,KC_VOLU,KC_MPRV,KC_MPLY,KC_MPLY,
    _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
    _______,_______,_______,KC_UP  ,_______,_______,                          _______,_______,_______,_______,_______,_______,
    _______,_______,KC_LEFT,KC_DOWN,KC_RGHT,_______,                          _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
                    _______,_______,                                                          _______,_______,
                                    _______,                                          _______,
                                            _______,_______,          _______,_______,
                                            _______,_______,          _______,_______
  ),
};

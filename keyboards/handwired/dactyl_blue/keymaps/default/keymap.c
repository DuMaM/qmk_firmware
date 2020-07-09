// #include QMK_KEYBOARD_H
#include "dactyl_blue.h"

#define _QWERTY 0 // daily use and coding
#define _MOVE 1   // mouse, arrows, browsing useful keys
#define _CONF 2   // machine settings, keyboard settings, backlight
#define _GAME 3   // left hand qwery, other place for eerprom binds, backlight

#define _KC_F1 LT(_QWERTY, KC_F1)
#define _KC_F2 LT(_MOVE  , KC_F2)
#define _KC_F3 LT(_CONF  , KC_F3)
#define _KC_F4 LT(_GAME  , KC_F4)
#define _KC_F5 LT(_QWERTY, KC_F5)
#define _KC_F6 LT(_QWERTY, KC_F6)

#define KC_SPEC KC_SFTENT //KC_SFTENT - Right Shift when held, Enter when tapped

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_6x6(

    _KC_F1 ,_KC_F2 ,_KC_F3 ,_KC_F4 ,_KC_F5 ,_KC_F6,                           KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,
    KC_GRV ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5  ,                           KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS,
    KC_BSLS,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T  ,                           KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_EQL ,
    KC_SLSH,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G  ,                           KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_LBRC,KC_RBRC,
    KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B  ,                           KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SCLN,KC_QUOT,
                    KC_TAB ,KC_INS ,                                                          KC_HOME,KC_END ,
                                    KC_BSPC,                                          KC_DEL ,
                                            KC_SPC ,KC_LGUI,          KC_ESC ,KC_RSFT,
                                            KC_LCTL,KC_LALT,          KC_RALT,KC_RCTL
  ),

  [_MOVE] = LAYOUT_6x6(

    _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
    KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                          KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
    _______,_______,_______,_______,_______,KC_LBRC,                          KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,
    _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                          KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
    _______,_______,_______,_______,_______,_______,                          _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,
                    _______,KC_PSCR,                                                          _______, KC_P0,
                                    _______,                                          _______,
                                            _______,_______,          _______,_______,
                                            _______,_______,          _______,_______
  ),

  [_CONF] = LAYOUT_6x6(

    _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,KC_LBRC,                          KC_RBRC,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE,
    _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                          KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,
    _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,KC_VOLD,
    _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
                    _______,_______,                                                          KC_EQL ,_______,
                                    _______,                                          _______,
                                            _______,_______,          _______,_______,
                                            _______,_______,          _______,_______
  ),
};

// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R,       KC_T,       KC_Y,      KC_U,       KC_I,     KC_O,   KC_P,
        KC_A, KC_S, KC_D, KC_F,       KC_G,       KC_H,      KC_J,       KC_K,     KC_L,   KC_BSPC,
        KC_Z, KC_X, KC_C, LT(1,KC_V), KC_SPACE,  LT(4,KC_N), LT(2,KC_M), KC_COMMA, KC_DOT, LT(3,KC_ENTER)
	),

    [1] = LAYOUT(
	  KC_TRNS, KC_LALT,    KC_LGUI,  KC_TAB,    KC_ESCAPE,  KC_BTN2, 	KC_BTN1, KC_MS_U, KC_WH_U, KC_TRNS,
	  KC_LSFT, KC_ACL0,    KC_ACL1,  KC_SLASH,  KC_MINUS, 	KC_ENTER, 	KC_MS_L, KC_MS_D, KC_MS_R, KC_INSERT,
	  KC_LCTL, LSFT(KC_1), KC_F17,   KC_TRNS,   KC_F17, 	KC_F18, 	KC_F18,  KC_MS_D, KC_WH_D, KC_TRNS
    ),  

    [2] = LAYOUT(
	  KC_COMMA, LSFT(KC_8),     KC_7, KC_8, KC_9, KC_DOT, KC_HOME, KC_UP,   KC_PGUP,  KC_TRNS, 
	  KC_LSFT,  LSFT(KC_EQUAL), KC_4, KC_5, KC_6, TD(0),  KC_LEFT, KC_DOWN, KC_RIGHT, KC_LCTL, 
	  KC_LCTL,  KC_0, 		    KC_1, KC_2, KC_3, KC_END, KC_NO,   KC_DOWN, KC_PGDN,  KC_TRNS
    ),

    [3] = LAYOUT(
	  KC_TRNS, KC_F12, KC_F7,   KC_F8, KC_F9, KC_PSCR, KC_K, 		   KC_VOLU, LALT(KC_LEFT),    LALT(KC_RIGHT), 
	  KC_LSFT, KC_F11, KC_F4,   KC_F5, KC_F6, KC_CAPS, KC_MPLY, 	   KC_MUTE, KC_ESCAPE, KC_DELETE, 
	  KC_LCTL, KC_F10, KC_SCRL, KC_F2, KC_F3, KC_J,    KC_APPLICATION, KC_VOLD, KC_O, 	   KC_DELETE
    ),
	[4] = LAYOUT(
	  KC_TRNS, LSFT(KC_2), LSFT(KC_3),    LSFT(KC_4),   LSFT(KC_5), LSFT(KC_6), LSFT(KC_7),     LSFT(KC_8), LSFT(KC_9),     LSFT(KC_0),
	  KC_LSFT, KC_GRAVE,   KC_EQUAL,      KC_SLASH,     KC_MINUS,   KC_QUOTE,   LSFT(KC_QUOTE), KC_SCLN,    LSFT(KC_SCLN),  KC_KP_PLUS, 
	  KC_LCTL, LSFT(KC_1), LSFT(KC_COMM), LSFT(KC_DOT), KC_TRNS,    KC_LBRC,    KC_RBRC, 	    KC_BSLS,    LSFT(KC_SLASH), KC_TRNS
	),
	[5] = LAYOUT(
      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,
	  KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,
	  KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS
	),
	[6] = LAYOUT(
      KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,		KC_TRNS,      KC_TRNS,      RGB_SPI,      KC_TRNS,      KC_TRNS,
	  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUI, 	RGB_VAI,      RGB_MOD,      RGB_TOG,      KC_TRNS,      KC_TRNS,
	  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUD,		RGB_VAD,      RGB_RMOD,     RGB_SPD,      KC_TRNS,      KC_TRNS
	)
};

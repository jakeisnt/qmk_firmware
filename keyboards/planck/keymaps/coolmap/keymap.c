#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_planck_mit(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_SFTENT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, KC_LCTL, KC_ESC, KC_LALT, KC_LGUI, MO(1), KC_SPC, MO(2), KC_MINS, KC_ASTG, KC_ASDN, KC_ASUP),
	[1] = LAYOUT_planck_mit(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_LCTL, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DQUO, KC_DEL, KC_TILD, KC_GRV, KC_PLUS, KC_EQL, KC_PIPE, KC_BSLS, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_QUES, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[2] = LAYOUT_planck_mit(KC_ESC, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, KC_BRIU, KC_END, KC_NO, KC_VOLD, KC_MUTE, KC_VOLU, KC_UNDS, KC_COPY, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_BRID, KC_PSCR, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_PSTE, KC_BTN3, KC_BTN4, KC_BTN5, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO)
};

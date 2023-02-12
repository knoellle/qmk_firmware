#include QMK_KEYBOARD_H

#define L_QWE 0
#define L_SYM 1
#define L_NAV 2

#define HM_S LGUI_T(KC_S)
#define HM_D LALT_T(KC_D)
#define HM_F LSFT_T(KC_F)
#define HM_G LCTL_T(KC_G)

#define HM_H LCTL_T(KC_H)
#define HM_J LSFT_T(KC_J)
#define HM_K LALT_T(KC_K)
#define HM_L LGUI_T(KC_L)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

     /*
      * ┌─────┬─────┬─────┬─────┬─────┐         ┌─────┬─────┬─────┬─────┬─────┐
      * │  Q  │  W  │  E  │  R  │  T  │         │  Y  │  U  │  I  │  O  │  P  │
      * ├─────┼─────┼─────┼─────┼─────┤         ├─────┼─────┼─────┼─────┼─────┤
      * │  A  │  S  │  D  │  F  │  G  │         │  H  │  J  │  K  │  L  │  ;  │
      * ├─────┼─────┼─────┼─────┼─────┤         ├─────┼─────┼─────┼─────┼─────┤
      * │  Z  │  X  │  C  │  V  │  B  │         │  N  │  M  │  ,  │  .  │ SYM │
      * └─────┴─────┴─────┴─────┴─────┘         └─────┴─────┴─────┴─────┴─────┘
      *                ┌─────┐                           ┌─────┐
      *                │ ESC ├─────┐               ┌─────┤ CTL │
      *                └─────┤ ENT ├─────┐   ┌─────┤ NAV ├─────┘
      *                      └─────┤ BSP │   │ SPC ├─────┘
      *                            └─────┘   └─────┘
      */

    [L_QWE] = LAYOUT_split_3x5_3(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    HM_S,    HM_D,    HM_F,    HM_G,      HM_H,    HM_J,    HM_K,    HM_L,    KC_COLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT,  _______,
                   LGUI_T(KC_ESC), KC_ENT, KC_BSPC,  KC_SPC,  MO(L_NAV), MO(L_SYM)
    ),
    [L_SYM] = LAYOUT_split_3x5_3(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        _______, _______, _______, _______, _______,   _______, KC_MINS, KC_UNDS, KC_SLSH, _______,
        _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______,
                          _______, _______, _______,   _______, _______, _______
    ),
    [L_NAV] = LAYOUT_split_3x5_3(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        _______, _______, _______, _______, _______,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
        _______, _______, _______, _______, _______,   QK_BOOT, _______, _______, _______, _______,
                          _______, _______, _______,   _______, _______, _______
    ),
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  // debug_enable=true;
  // debug_matrix=true;
  // debug_keyboard=true;
  // debug_mouse=true;
}

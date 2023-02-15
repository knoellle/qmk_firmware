#include QMK_KEYBOARD_H

#define L_CDH 0
#define L_QWE 1
#define L_SYM 2
#define L_NAV 3
#define L_GME 4

#define HMC_R LGUI_T(KC_R)
#define HMC_S LALT_T(KC_S)
#define HMC_T LSFT_T(KC_T)
#define HMC_G LCTL_T(KC_G)

#define HMC_M LCTL_T(KC_M)
#define HMC_N LSFT_T(KC_N)
#define HMC_E LALT_T(KC_E)
#define HMC_I LGUI_T(KC_I)

#define HMQ_S LGUI_T(KC_S)
#define HMQ_D LALT_T(KC_D)
#define HMQ_F LSFT_T(KC_F)
#define HMQ_G LCTL_T(KC_G)

#define HMQ_H LCTL_T(KC_H)
#define HMQ_J LSFT_T(KC_J)
#define HMQ_K LALT_T(KC_K)
#define HMQ_L LGUI_T(KC_L)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

     /*
      * ┌─────┬─────┬─────┬─────┬─────┐         ┌─────┬─────┬─────┬─────┬─────┐
      * │  Q  │  W  │  F  │  P  │  B  │         │  J  │  L  │  U  │  Y  │  ;  │
      * ├─────┼─────┼─────┼─────┼─────┤         ├─────┼─────┼─────┼─────┼─────┤
      * │  A  │  R  │  S  │  T  │  G  │         │  M  │  N  │  E  │  I  │  O  │
      * ├─────┼─────┼─────┼─────┼─────┤         ├─────┼─────┼─────┼─────┼─────┤
      * │  Z  │  X  │  C  │  D  │  V  │         │  K  │  H  │  ,  │  .  │ SYM │
      * └─────┴─────┴─────┴─────┴─────┘         └─────┴─────┴─────┴─────┴─────┘
      *                ┌─────┐                           ┌─────┐
      *                │ ESC ├─────┐               ┌─────┤ CTL │
      *                └─────┤ ENT ├─────┐   ┌─────┤ NAV ├─────┘
      *                      └─────┤ BSP │   │ SPC ├─────┘
      *                            └─────┘   └─────┘
      */

    [L_CDH] = LAYOUT_split_3x5_3(
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
        KC_A,    HMC_R,   HMC_S,   HMC_T,   HMC_G,     HMC_M,   HMC_N,   HMC_E,   HMC_I,   KC_O,
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,      KC_K,    KC_H,    KC_COMM, KC_DOT,  DF(L_QWE),
                   KC_ESC, LGUI_T(KC_ENT), KC_BSPC,  KC_SPC,  MO(L_NAV), MO(L_SYM)
    ),

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
        KC_A,    HMQ_S,   HMQ_D,   HMQ_F,   HMQ_G,     HMQ_H,   HMQ_J,   HMQ_K,   HMQ_L,   KC_COLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT,  DF(L_GME),
                   KC_ESC, LGUI_T(KC_ENT), KC_BSPC,  KC_SPC,  MO(L_NAV), MO(L_SYM)
    ),
    [L_SYM] = LAYOUT_split_3x5_3(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_GRV,  _______, _______, _______, _______,   _______, KC_MINS, KC_UNDS, KC_SLSH, _______,
        _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______,
                          _______, _______, _______,   _______, _______, _______
    ),
    [L_NAV] = LAYOUT_split_3x5_3(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_TAB,  _______, _______, _______, _______,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
        _______, _______, _______, _______, _______,   QK_BOOT, KC_PGDN, KC_PGUP, _______, _______,
                          _______, _______, _______,   _______, _______, _______
    ),
    [L_GME] = LAYOUT_split_3x5_3(
        KC_T,   KC_Q,    KC_W,    KC_E,    KC_R,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_LSFT,KC_A,    KC_S,    KC_D,    KC_F,       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
        KC_LCTL,KC_Z,    KC_X,    KC_C,    KC_V,       QK_BOOT, _______, _______, _______, DF(L_CDH),
                          KC_X, KC_SPC, KC_Z,   _______, _______, _______
    ),
};

void keyboard_post_init_user(void) {
  // debug_enable=true;
  // debug_matrix=true;
  // debug_keyboard=true;
  // debug_mouse=true;
}

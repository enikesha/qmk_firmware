#include QMK_KEYBOARD_H

//extern keymap_config_t keymap_config;

#define _BASE 0

#define _____ KC_NO

// Mod-Tap
#define SFT_BSPC LSFT_T(KC_BSPC)
#define CMD_BSPC LCMD_T(KC_BSPC)
#define SFT_A    LSFT_T(KC_A)
#define SFT_Z    LSFT_T(KC_Z)
#define SFT_SCLN LSFT_T(KC_SCLN)
#define SFT_QUOT LSFT_T(KC_QUOT)
#define SFT_DEL  LSFT_T(KC_DEL)
#define CMD_DEL  LCMD_T(KC_DEL)
#define CMD_SPC  RCMD_T(KC_SPC)
#define ALT_CAPS ALT_T(KC_CAPS)
#define SFT_ENT  RSFT_T(KC_ENT)
#define CTL_TAB  CTL_T(KC_TAB)
#define ALT_TAB  ALT_T(KC_TAB)

// compose keys
#define CMD_TAB  LCMD(KC_TAB)
#define CMD_RTAB LCMD(KC_GRAVE)
#define CTL_LEFT LCTL(KC_LEFT)
#define CTL_RGHT LCTL(KC_RIGHT)

// mouse keys
#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1

// active layers
#define LY_FN  MO(_FN)

// detect mod status
#define MODS_SHIFT_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base (qwerty)
 * ,-----------------------------------,                           ,-----------------------------------,
 * |  `~ |  q  |  w  |  e  |  r  |  t  |                           |  y  |  u  |  i  |  o  |  p  | [{  |
 * |-----+-----+-----+-----+-----+-----|                           |-----+-----+-----+-----+-----+-----|
 * | TAB |  a  |  s  |  d  |  f  |  g  |                           |  h  |  j  |  k  |  l  |  ;: | ]}  |
 * |-----+-----+-----+-----+-----+-----|                           |-----+-----+-----+-----+-----+-----|
 * |SHIFT|  z  |  x  |  c  |  v  |  b  |                           |  n  |  m  |  ,< |  .> |  /? | '"  |
 * '-----------+-----+-----+-----+-----+-----------+   '-----+-----+-----+-----+-----+-----+-----------'
 *             |MO(1)| ALT |     |BKSPC|CTRL |SUPER|   |ENTER|MO(1)|SPACE|     | ALT |MO(2)|
 *             '-----+-----'     '-----+-----------+   '-----------+-----'     '-----+-----'
 */

LAYOUT_mini_4x6(
        KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
        KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_RBRC,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_QUOT,
        MO(1), KC_LALT, KC_RALT, MO(2),
        KC_BSPC, KC_LCTL, KC_LGUI, KC_ENT, MO(1), KC_SPC),

/* Layer: function + navigation
 * ,-----------------------------------,                           ,-----------------------------------,
 * |  ~  |  1  |  2  |  3  |  4  |  5  |                           |  6  |  7  |  8  |  9  |  0  |  =+ |
 * |-----+-----+-----+-----+-----+-----|                           |-----+-----+-----+-----+-----+-----|
 * | ESC |  !  |  @  |  #  |  $  |  %  |                           | home| left| down|  up | left| end |
 * |-----+-----+-----+-----+-----+-----|                           |-----+-----+-----+-----+-----+-----|
 * |     |  ^  |  &  |  *  |  (  |  )  |                           |  +  |  -_ | pgdn| pgup|  \  |  |  |
 * '-----------+-----+-----+-----+-----+-----------+   '-----+-----+-----+-----+-----+-----+-----------'
 *             | DEL |     |     |     |     |     |   |     |     |     |     |     |     |
 *             '-----+-----'     '-----+-----------+   '-----------+-----'     '-----+-----'
 */

LAYOUT_mini_4x6(
        KC_TILD, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL,
        KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_HOME, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_END,
        KC_TRNS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS, KC_MINS, KC_PGDN, KC_PGUP, KC_BSLS, KC_PIPE,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

LAYOUT_mini_4x6(
        RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F12,
        KC_TRNS, KC_TRNS, KC_TRNS, LCTL(KC_INS), LSFT(KC_INS), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};

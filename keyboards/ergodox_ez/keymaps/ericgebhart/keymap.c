/*
  Copyright 2018 Eric Gebhart <e.a.gebhart@gmail.com>

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
#include "keymap_bepo.h"
#include "ericgebhart.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [DVORAK] = LAYOUT_ergodox_wrapper(
                             // left hand
                             KC_GRV,     ___NUMBER_L___,   DEF_OS_LAYER_SW,
                             KC_LOCK,    ___DVORAK_L1___,  KC_LBRC,
                             TAB_BKTAB,  ___DVORAK_L2___,
                             KC_LSFT,    ___DVORAK_L3___,  KC_LPRN,

                             ___ERGODOX_BOTTOM_LEFT___,
                             ___ERGODOX_THUMB_LEFT___,

                             // right hand
                             MDIA_SYMB,  ___NUMBER_R___,   KC_EQL,
                             KC_RBRC,    ___DVORAK_R1___,  KC_SLASH,
                             /*    */    ___DVORAK_R2___,  KC_MINUS,
                             KC_RPRN,    ___DVORAK_R3___,  KC_RSFT,

                             ___ERGODOX_BOTTOM_RIGHT___,
                             ___ERGODOX_THUMB_RIGHT___
                             ),

  [XMONAD] = LAYOUT_ergodox_wrapper(
                             // left hand
                             ___,  ___FUNC_L___,     ___,
                             ___,  ___DVORAK_L1___,  ___,
                             ___,  ___DVORAK_L2___,
                             ___,  ___DVORAK_L3___,  ___,

                             ___ERGODOX_BOTTOM_LEFT___,
                             ___ERGODOX_THUMB_LEFT___,

                             // right hand
                             ___,  ___FUNC_R___,     ___,
                             ___,  ___DVORAK_R1___,  ___,
                             /**/  ___DVORAK_R2___,  ___,
                             ___,  ___DVORAK_R3___,  ___,

                             ___ERGODOX_BOTTOM_RIGHT___,
                             ___ERGODOX_THUMB_RIGHT___
                             ),

  [QWERTY] = LAYOUT_ergodox_wrapper(
                            // left hand
                            KC_GRV,     ___NUMBER_L___,   DEF_OS_LAYER_SW,
                            KC_LOCK,    ___QWERTY_L1___,  KC_LBRC,
                            TAB_BKTAB,  ___QWERTY_L2___,
                            KC_LSFT,    ___QWERTY_L3___,  KC_LPRN,

                            ___ERGODOX_BOTTOM_LEFT___,
                            ___ERGODOX_THUMB_LEFT___,

                            // right hand
                            MDIA_SYMB,  ___NUMBER_R___,   KC_EQL,
                            KC_RBRC,    ___QWERTY_R1___,  KC_SLASH,
                            /*       */ ___QWERTY_R2___,  KC_MINUS,
                            KC_RPRN,    ___QWERTY_R3___,  KC_RSFT,

                            ___ERGODOX_BOTTOM_RIGHT___,
                            ___ERGODOX_THUMB_RIGHT___
                            ),

  [COLEMAK] = LAYOUT_ergodox_wrapper(
                              // left hand
                              KC_GRV,     ___NUMBER_L___,    DEF_OS_LAYER_SW,
                              KC_LOCK,    ___COLEMAK_L1___,  KC_LBRC,
                              TAB_BKTAB,  ___COLEMAK_L2___,
                              KC_LSFT,    ___COLEMAK_L3___,  KC_LPRN,

                              ___ERGODOX_BOTTOM_LEFT___,
                              ___ERGODOX_THUMB_LEFT___,

                              // right hand
                              MDIA_SYMB,  ___NUMBER_R___,    KC_EQL,
                              KC_RBRC,    ___COLEMAK_R1___,  KC_SLASH,
                              /*       */ ___COLEMAK_R2___,  KC_MINUS,
                              KC_RPRN,    ___COLEMAK_R3___,  KC_RSFT,

                              ___ERGODOX_BOTTOM_RIGHT___,
                              ___ERGODOX_THUMB_RIGHT___
                              ),

  [WORKMAN] = LAYOUT_ergodox_wrapper(
                              // left hand
                              KC_GRV,     ___NUMBER_L___,    DEF_OS_LAYER_SW,
                              KC_LOCK,    ___WORKMAN_L1___,  KC_LBRC,
                              TAB_BKTAB,  ___WORKMAN_L2___,
                              KC_LSFT,    ___WORKMAN_L3___,  KC_LPRN,

                              ___ERGODOX_BOTTOM_LEFT___,
                              ___ERGODOX_THUMB_LEFT___,

                              // right hand
                              MDIA_SYMB,  ___NUMBER_R___,    KC_EQL,
                              KC_RBRC,    ___WORKMAN_R1___,  KC_SLASH,
                              /*    */    ___WORKMAN_R2___,  KC_MINUS,
                              KC_RPRN,    ___WORKMAN_R3___,  KC_RSFT,

                              ___ERGODOX_BOTTOM_RIGHT___,
                              ___ERGODOX_THUMB_RIGHT___
                              ),

  [NORMAN] = LAYOUT_ergodox_wrapper(
                            // left hand
                            KC_GRV,     ___NUMBER_L___,   DEF_OS_LAYER_SW,
                            KC_LOCK,    ___NORMAN_L1___,  KC_LBRC,
                            TAB_BKTAB,  ___NORMAN_L2___,
                            KC_LSFT,    ___NORMAN_L3___,  KC_LPRN,

                            ___ERGODOX_BOTTOM_LEFT___,
                            ___ERGODOX_THUMB_LEFT___,

                            // right hand
                            MDIA_SYMB,  ___NUMBER_R___,   KC_EQL,
                            KC_RBRC,    ___NORMAN_R1___,  KC_SLASH,
                            /*       */ ___NORMAN_R2___,  KC_MINUS,
                            KC_RPRN,    ___NORMAN_R3___,  KC_RSFT,

                            ___ERGODOX_BOTTOM_RIGHT___,
                            ___ERGODOX_THUMB_RIGHT___
                            ),

  [DVORAK_ON_BEPO] = LAYOUT_ergodox_wrapper(
                                    // left hand
                                    DB_GRV,     ___NUMBER_BEPO_L___,  DEF_OS_LAYER_SW,
                                    KC_LOCK,    ___DVORAK_FR_L1___,   DB_LBRC,
                                    TAB_BKTAB,  ___DVORAK_FR_L2___,
                                    KC_LSFT,    ___DVORAK_FR_L3___,   DB_LPRN,

                                    ___ERGODOX_BOTTOM_LEFT___,
                                    ___ERGODOX_THUMB_LEFT___,


                                    // right hand
                                    MDIA_SYMB,   ___NUMBER_BEPO_R___,  DB_EQL,
                                    DB_RBRC,     ___DVORAK_FR_R1___,   DB_SLASH,

                                    /*      */   ___DVORAK_FR_R2___,   DB_MINUS,
                                    DB_RPRN,     ___DVORAK_FR_R3___,   KC_RSFT,

                                    ___ERGODOX_BOTTOM_RIGHT_FR___,
                                    ___ERGODOX_THUMB_RIGHT___
                                    ),

  [XMONAD_FR] = LAYOUT_ergodox_wrapper(
                               // left hand
                               ___,  ___FUNC_L___,        ___,
                               ___,  ___DVORAK_FR_L1___,  ___,
                               ___,  ___DVORAK_FR_L2___,
                               ___,  ___DVORAK_FR_L3___,  ___,

                               ___ERGODOX_BOTTOM_LEFT___,
                               ___ERGODOX_THUMB_LEFT___,


                               // right hand
                               ___,  ___FUNC_R___,         ___,
                               ___,  ___DVORAK_FR_R1___,   ___,
                               /**/  ___DVORAK_FR_R2___,   ___,
                               ___,  ___DVORAK_FR_R3___,   ___,

                               ___ERGODOX_BOTTOM_RIGHT_FR___,
                               ___ERGODOX_THUMB_RIGHT___
                               ),

  [BEPO] = LAYOUT_ergodox_wrapper(
                           // Left hand
                           BP_DLR,         ___SYMBOL_BEPO_L___,  DEF_OS_LAYER_SW,
                           KC_LOCK,        ___BEPO_FR_L1___,     DB_LBRC,
                           TAB_BKTAB,      ___BEPO_FR_L2___,
                           BP_SFT_T_ECRC,  ___BEPO_FR_L3___,     DB_RBRC,

                           ___ERGODOX_BOTTOM_LEFT___,
                           ___ERGODOX_THUMB_LEFT___,


                           // Right hand
                           MDIA_SYMB,  ___SYMBOL_BEPO_R___,  BP_EQL,
                           BP_DCRC,    ___BEPO_FR_R1___,     BP_W,
                           /*     */   ___BEPO_FR_R2___,     BP_CCED,
                           BP_C,    ___BEPO_FR_R3___,        KC_RSFT,

                           ___ERGODOX_BOTTOM_RIGHT___,
                           ___ERGODOX_THUMB_RIGHT___
                           ),

  // SYMBOLS
  [SYMB] = LAYOUT_ergodox_wrapper(
                          // left hand
                          ___,  ___FUNC_L___,     ___,
                          ___,  ___SYMBOLS_1___,  ___,
                          ___,  ___SYMBOLS_2___,
                          ___,  ___SYMBOLS_3___,  ___,

                          ___ERGODOX_TRANS_BOTTOM___,
                          ___ERGODOX_TRANS_THUMBS___,


                          // right hand
                          ___,  ___FUNC_R___, KC_F11,
                          ___,  KC_UP,    ___KEYPAD_1___,  KC_F12,
                          /**/  KC_DOWN,  ___KEYPAD_2___,  KC_TRNS,
                          ___,  KC_AMPR,  ___KEYPAD_3___,  KC_PENT,
                          /*    */        ___KEYPAD_4___,  ___,

                          ___ERGODOX_TRANS_THUMBS___
                          ),

  [SYMB_ON_BEPO] = LAYOUT_ergodox_wrapper(
                                  // left hand
                                  ___,  ___FUNC_L___,     ___,
                                  ___,  ___SYMBOLS_1_BP___,  ___,
                                  ___,  ___SYMBOLS_2_BP___,
                                  ___,  ___SYMBOLS_3_BP___,  ___,

                                  ___ERGODOX_TRANS_BOTTOM___,
                                  ___ERGODOX_TRANS_THUMBS___,


                                  // right hand
                                  ___,  ___FUNC_R___, KC_F11,
                                  ___,  KC_UP,    ___KEYPAD_1_BP___,  KC_F12,
                                  /**/  KC_DOWN,  ___KEYPAD_2_BP___,  KC_TRNS,
                                  ___,  KC_AMPR,  ___KEYPAD_3_BP___,  KC_PENT,
                                  /*    */        ___KEYPAD_4_BP___,  ___,

                                  ___ERGODOX_TRANS_THUMBS___
                                  ),

  // MEDIA AND MOUSE
  [MDIA] = LAYOUT_ergodox_wrapper(
                          // left hand
                          ___,  ___FUNC_L___,  ___,
                          ___MOUSE_BTNS_L___,  ___, ___,
                          ___,  ___MOUSE_LDUR___,   ___,
                          ___,  ___MWHEEL_LDUR___,  XXX,  ___,
                          ___,  ___,  ___MOUSE_ACCL_012___,
                          ___ERGODOX_TRANS_THUMBS___,

                          // right hand
                          ___,      ___FUNC_R___,                    KC_F11,
                          KC_VOLU,  ___, ___MUTE_PLAY_STOP___,  ___, KC_F12,
                          /*    */  KC_PGUP, ___VI_ARROWS___,        ___,
                          KC_VOLD,  KC_PGDN, ___MOUSE_BTNS_R___,
                          ___ERGODOX_TRANS_BOTTOM___,
                          ___ERGODOX_TRANS_THUMBS___
                          ),

  [LAYERS] = LAYOUT_ergodox_wrapper(
                            // left hand
                            ___,  ___FUNC_L___,  ___,
                            XXX,  XXX,  XXX, ___LAYERS_L1___,  XXX, XXX,
                            XXX,  XXX,  XXX, ___LAYERS_L2___,  XXX,
                            XXX,  XXX,  ___LAYERS_L3___,       XXX,  XXX,
                            ___,  ___,  ___LAYERS_L4___,
                            ___ERGODOX_TRANS_THUMBS___,

                            // right hand
                            ___,      ___FUNC_R___,                    KC_F11,
                            KC_VOLU,  ___, ___MUTE_PLAY_STOP___,  ___, KC_F12,
                            /*    */  KC_PGUP, ___VI_ARROWS___,        ___,
                            KC_VOLD,  KC_PGDN, ___MOUSE_BTNS_R___,
                            ___ERGODOX_TRANS_BOTTOM___,
                            ___ERGODOX_TRANS_THUMBS___
                            ),
};



// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

  uint8_t layer = biton32(layer_state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  if(!on_qwerty())
    ergodox_right_led_1_on();
  switch (layer) {
    //case DVORAK:
    //ergodox_right_led_1_off();
    //break;
    // first led on for a bepo software keyboard layer
  case DVORAK_ON_BEPO:
    ergodox_right_led_2_on();
    break;
  case BEPO:
    ergodox_right_led_1_on();
    ergodox_right_led_1_off();
    ergodox_right_led_1_on();
    ergodox_right_led_1_off();
    ergodox_right_led_1_on();
    break;
  case SYMB:
    ergodox_right_led_3_on();
    break;
  case MDIA:
    ergodox_right_led_3_on();
    break;
  case LAYERS:
    ergodox_right_led_1_on();
    ergodox_right_led_2_on();
    ergodox_right_led_3_on();
    break;
  default:
    ergodox_board_led_off();
    break;

    /* default: */
    /*   // none */
    /*   break; */

  }
}


/*
  clear_oneshot_mods();
  set_oneshot_locked_mods(mods);
  register_mods(mods);

  register_code(action.key.code);
  unregister_code(action.key.code);

  layer_on(action.layer_tap.val);
  layer_off(action.layer_tap.val);

  clear_oneshot_locked_mods();
  clear_oneshot_mods();
  unregister_mods(mods);

*/

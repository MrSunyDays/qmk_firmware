/* Copyright 2021 SunyDays
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layer_names {
    /* _MTGAP, */
    _QWERTY,
    _LOWER,
    _RAISE,
    _MOUSE,
    _ADJUST
};

/* #define QWERTY TG(_QWERTY)  // Toggle qwerty layout */
#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)
#define MOUSE  MO(_MOUSE)

/* MTGAP Home Row Mods */
// Left hand
/* #define GUI_N  LGUI_T(KC_N) */
/* #define ALT_I  LALT_T(KC_I) */
/* #define SHFT_E LSFT_T(KC_E) */
/* #define CTRL_A LCTL_T(KC_A) */

/* // Right hand */
/* #define CTRL_H RCTL_T(KC_H) */
/* #define SHFT_T RSFT_T(KC_T) */
/* #define ALT_S  LALT_T(KC_S) */
/* #define GUI_R  RGUI_T(KC_R) */

/* QWERTY Home Row Mods */
// Left hand
#define GUI_A  LGUI_T(KC_A)
#define ALT_S  LALT_T(KC_S)
#define SHFT_D LSFT_T(KC_D)
#define CTRL_F LCTL_T(KC_F)

// Right hand
#define CTRL_J   RCTL_T(KC_J)
#define SHFT_K   RSFT_T(KC_K)
#define ALT_L    LALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* MTGAP + Home Row Mods
   * ,-----------------------------------------+         +-----------------------------------------.
   * | Tab  |   Y  |   P  |   O  |   U  |   J  |         |   K  |   D  |   L  |   C  |   W  | Bspc |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * |  -   |   N  |   I  |   E  |   A  |   ,  |         |   M  |   H  |   T  |   S  |   R  |Enter |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * |  \   |   Q  |   Z  |   /  |   .  |   ;  |         |   B  |   F  |   G  |   V  |   X  |  '   |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   *                             |Mouse |Lower |  Space  |Raise |QWERTY|
   *                             +-------------/         \-------------+
   */
  /* [_MTGAP] = LAYOUT_reviung41( */
  /*   KC_TAB,  KC_Y,  KC_P,  KC_O,    KC_U,    KC_J,            KC_K,  KC_D,   KC_L,   KC_C,  KC_W,  KC_BSPC, */
  /*   KC_MINS, GUI_N, ALT_I, SHFT_E,  CTRL_A,  KC_COMM,         KC_M,  CTRL_H, SHFT_T, ALT_S, GUI_R, KC_ENT, */
  /*   KC_BSLS, KC_Q,  KC_Z,  KC_SLSH, KC_DOT,  KC_SCLN,         KC_B,  KC_F,   KC_G,   KC_V,  KC_X,  KC_QUOT, */
  /*                                   XXXXXXX, LOWER,   KC_SPC, RAISE, QWERTY */
  /* ), */


  /* QWERTY + Home Row Mods
   * ,-----------------------------------------+         +-----------------------------------------.
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |         |   Y  |   U  |   I  |   O  |   P  | Bspc |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * |  -   |   A  |   S  |   D  |   F  |   G  |         |   H  |   J  |   K  |   L  |   ;  |Enter |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * |  \   |   Z  |   X  |   C  |   V  |   B  |         |   N  |   M  |   ,  |   .  |   /  |  '   |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   *                             |Mouse |Lower |  Space  |Raise |      |
   *                             +-------------/         \-------------+
   */
  /* [_QWERTY] = LAYOUT_reviung41( */
  /*   _______, KC_Q,  KC_W,  KC_E,   KC_R,    KC_T,             KC_Y,    KC_U,   KC_I,    KC_O,   KC_P,     _______, */
  /*   _______, GUI_A, ALT_S, SHFT_D, CTRL_F,  KC_G,             KC_H,    CTRL_J, SHFT_K,  ALT_L,  GUI_SCLN, _______, */
  /*   _______, KC_Z,  KC_X,  KC_C,   KC_V,    KC_B,             KC_N,    KC_M,   KC_COMM, KC_DOT, KC_SLSH,  _______, */
  /*                                  _______, _______, _______, _______, _______ */
  /* ), */

  /* QWERTY
   * ,-----------------------------------------+         +-----------------------------------------.
   * |  \   |   Q  |   W  |   E  |   R  |   T  |         |   Y  |   U  |   I  |   O  |   P  |  -   |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * |  =   |   A  |   S  |   D  |   F  |   G  |         |   H  |   J  |   K  |   L  |   ;  |  '   |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * | Tab  |   Z  |   X  |   C  |   V  |   B  |         |   N  |   M  |   ,  |   .  |   /  |  `   |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   *                             | Lwr  | Bspc |  Space  | Entr | Rse  |
   *                             +-------------/         \-------------+
   */
  [_QWERTY] = LAYOUT_reviung41(
    KC_BSLS, KC_Q,  KC_W,  KC_E,   KC_R,    KC_T,          KC_Y,  KC_U,   KC_I,    KC_O,   KC_P,     KC_MINS,
    KC_EQL,  GUI_A, ALT_S, SHFT_D, CTRL_F,  KC_G,          KC_H,  CTRL_J, SHFT_K,  ALT_L,  GUI_SCLN, KC_QUOT,
    KC_TAB,  KC_Z,  KC_X,  KC_C,   KC_V,    KC_B,          KC_N,  KC_M,   KC_COMM, KC_DOT, KC_SLSH,  KC_GRV,
                                   KC_BSPC, LOWER, KC_SPC, RAISE, KC_ENT
  ),

  /* Lower
   * ,-----------------------------------------+         +-----------------------------------------.
   * | Esc  |  F1  |  F2  |  F3  |  F4  |  F5  |         |      | Home | PgDn | PgUp | End  |      |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * | Caps |  F6  |  F7  |  F8  |  F9  | F10  |         |      | Left | Down |  Up  |Right |      |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * |      |  F11 |  F12 |      |      |      |         |      | Del  |      |      |      |      |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   *                             |      |      |         |      |      |
   *                             +-------------/         \-------------+
   */
  [_LOWER] = LAYOUT_reviung41(
    XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,             XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC__VOLUP,
    KC_CAPS, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,            XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC__VOLDOWN,
    KC_ESC,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, KC__MUTE,
                                        _______, _______,  _______, _______, _______
  ),

  /* Raise
   * ,-----------------------------------------+         +-----------------------------------------.
   * |      |  1   |  2   |  3   |  4   |  5   |         |  6   |  7   |  8   |  9   |   0  |      |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * |      |  !   |  @   |  #   |  $   |  %   |         |  ^   |  &   |  *   |      |      |      |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * |      |      |  <   |  [   |  (   |  {   |         |  }   |  )   |  ]   |  >   |      |      |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   *                             |      |      |         |      |      |
   *                             +-------------/         \-------------+
   */
  [_RAISE] = LAYOUT_reviung41(
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
    XXXXXXX, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,          KC_CIRC, KC_AMPR, KC_ASTR, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_LABK, KC_LBRC, KC_LPRN, KC_LCBR,          KC_RCBR, KC_RPRN, KC_RBRC, KC_RABK, XXXXXXX, XXXXXXX,
                                        _______, _______, _______, _______, _______
  ),

  /* [_MOUSE] = LAYOUT_reviung41( */
  /*   _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, */
  /*   _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, */
  /*   _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, */
  /*                                       _______, _______, _______, _______, _______ */
  /* ) */

  [_ADJUST] = LAYOUT_reviung41(
    RGB_VAI,   RGB_SAI, RGB_HUI,  RGB_MOD,  XXXXXXX,   RGB_TOG,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    RGB_VAD,   RGB_SAD, RGB_HUD,  RGB_RMOD, XXXXXXX,   XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,   XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,            RESET,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                            _______,   _______,  XXXXXXX,  _______,  _______
  ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

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
    _BASE,
    _LOWER,
    _RAISE,
    _MOUSE,
    _ADJUST
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)
#define MOUSE  MO(_MOUSE)

/* Mods */
// Left hand
#define GUI_S LGUI_T(KC_S)
#define ALT_D  LALT_T(KC_D)
#define CTRL_F LCTL_T(KC_F)
#define SHFT_V LSFT_T(KC_V)

// Right hand
#define CTRL_J   RCTL_T(KC_J)
#define ALT_K    LALT_T(KC_K)
#define GUI_L LGUI_T(KC_L)
#define SHFT_M RSFT_T(KC_M)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Base
   * ,-----------------------------------------+         +-----------------------------------------.
   * |  `   |   Q  |   W  |   E  |   R  |   T  |         |   Y  |   U  |   I  |   O  |   P  |  -   |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * |  =   |   A  |S/GUI |D/Alt |F/Ctrl|   G  |         |   H  |J/Ctrl|K/Alt |L/GUI |   ;  |  '   |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * | Tab  |   Z  |   X  |   C  |V/Shft|   B  |         |   N  |M/Shft|   ,  |   .  |   /  |  \   |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   *                             | Bspc | Lwr  |  Space  | Rse  | Entr |
   *                             +-------------/         \-------------+
   */
  [_BASE] = LAYOUT_reviung41(
    KC_GRV, KC_Q,  KC_W,  KC_E,  KC_R,    KC_T,          KC_Y,  KC_U,   KC_I,    KC_O,   KC_P,    KC_MINS,
    KC_EQL,  KC_A,  GUI_S, ALT_D, CTRL_F,  KC_G,          KC_H,  CTRL_J, ALT_K,   GUI_L,  KC_SCLN, KC_QUOT,
    KC_TAB,  KC_Z,  KC_X,  KC_C,  SHFT_V,  KC_B,          KC_N,  SHFT_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
                                  KC_BSPC, LOWER, KC_SPC, RAISE, KC_ENT
  ),

  /* Lower
   * ,-----------------------------------------+         +-----------------------------------------.
   * |      |  F1  |  F2  |  F3  |  F4  |  F5  |         |      | Home | PgDn | PgUp | End  |VolUp |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * | Caps |  F6  |  F7  |  F8  |  F9  | F10  |         |      | Left | Down |  Up  |Right |VolDwn|
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * | Esc  |  F11 |  F12 |      |      |      |         |      | Del  |      |      |      | Mute |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   *                             |      |      |         |      |      |
   *                             +-------------/         \-------------+
   */
  [_LOWER] = LAYOUT_reviung41(
    XXXXXXX, KC_F1,  KC_F2,  KC_F3,   KC_F4,   KC_F5,             XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC__VOLUP,
    KC_CAPS, KC_F6,  KC_F7,  KC_F8,   KC_F9,   KC_F10,            XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC__VOLDOWN,
    KC_ESC,  KC_F11, KC_F12, XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, KC__MUTE,
                                      _______, _______,  _______, _______, _______
  ),

  /* Raise
   * ,-----------------------------------------+         +-----------------------------------------.
   * |  0   |  1   |  2   |  3   |  4   |  5   |         |  6   |  7   |  8   |  9   |      |      |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * |      |  !   |  @   |  #   |  $   |  %   |         |  ^   |  &   |  *   |      |      |      |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   * |      |      |      |  [   |  (   |  {   |         |  }   |  )   |  ]   |      |      |      |
   * |------+------+------+------+------+------+         +------+------+------+------+------+------|
   *                             |      |      |         |      |      |
   *                             +-------------/         \-------------+
   */
  [_RAISE] = LAYOUT_reviung41(
    KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_6,    KC_7,    KC_8,    KC_9,    XXXXXXX,    XXXXXXX,
    XXXXXXX, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,          KC_CIRC, KC_AMPR, KC_ASTR, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_LPRN, KC_LCBR,          KC_RCBR, KC_RPRN, KC_RBRC, XXXXXXX, XXXXXXX, XXXXXXX,
                                        _______, _______, _______, _______, _______
  ),

  /* [_MOUSE] = LAYOUT_reviung41( */
  /*   _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, */
  /*   _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, */
  /*   _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, */
  /*                                       _______, _______, _______, _______, _______ */
  /* ) */

  [_ADJUST] = LAYOUT_reviung41(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,            RESET,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                        _______, _______,  XXXXXXX,  _______,  _______
  ),
};

#ifdef RGBLIGHT_ENABLE
// RGB LED Indicators
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 11, HSV_RED}    // Light 11 LED, starting with LED 0
);

// RGB LED Indicators
const rgblight_segment_t PROGMEM my_base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 11, HSV_WHITE}    // Light 11 LED, starting with LED 0
);

const rgblight_segment_t PROGMEM my_lower_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 11, HSV_MY_BLUE}  // Light 11 LED, starting with LED 1
);

// RGB LED Indicators
const rgblight_segment_t PROGMEM my_rise_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 11, HSV_MY_ORANGE}    // Light 11 LED, starting with LED 0
);


// RGB LED Indicators
const rgblight_segment_t PROGMEM my_adjust_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 11, HSV_MY_PURPLE}    // Light 11 LED, starting with LED 0
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_base_layer,          // 0
    my_lower_layer,         // 1
    my_rise_layer,          // 2
    my_adjust_layer,        // 3
    my_capslock_layer       // 4
);

// Enable the LED layers
void keyboard_post_init_user(void) {
    rgblight_layers = my_rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);

    rgblight_set_layer_state(1, layer_state_cmp(state, _LOWER));
    rgblight_set_layer_state(2, layer_state_cmp(state, _RAISE));
    rgblight_set_layer_state(3, layer_state_cmp(state, _ADJUST));

    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(4, led_state.caps_lock);
    return true;
}
#endif

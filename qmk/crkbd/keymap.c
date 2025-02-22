#include QMK_KEYBOARD_H
#include "keymap_steno.h"

#define base 0
#define base_movement 1
#define base_symbols 2
#define base_nums 3
#define base_fn 4
#define game 5
#define game_nums 6
#define steno 7
#define extra 8


#define A_A LOPT_T(KC_A)
#define SU_O LCTL_T(KC_O)
#define S_E LSFT_T(KC_E)
#define C_U LCMD_T(KC_U)
#define A_S ROPT_T(KC_S)
#define SU_N RCTL_T(KC_N)
#define S_T RSFT_T(KC_T)
#define C_H RCMD_T(KC_H)

#define ENT_L1 LT(1, KC_ENT)
#define SPC_L2 LT(2, KC_SPC)
#define DEL_L3 LT(3, KC_DEL)
#define TAB_L4 LT(4, KC_TAB)
#define ESC_L8 LT(8, KC_ESC)
#define BSP_L8 LT(8, KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [base] = LAYOUT_split_3x6_3(
   //┌────────┬────────┬────────┬────────┬────────┬────────┐                  ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_NO,  KC_QUOT,  KC_COMM, KC_DOT,   KC_P,    KC_Y,                       KC_F,    KC_G,    KC_C,    KC_R,    KC_L,   KC_NO,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,    A_A,     SU_O,    S_E,     C_U,     KC_I,                       KC_D,    C_H,     S_T,     SU_N,    A_S,    KC_NO,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,  KC_SCLN,   KC_Q,    KC_J,    KC_K,    KC_X,                       KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,   KC_NO,
  // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┐         ┌────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      DEL_L3,  ENT_L1,  ESC_L8,            BSP_L8,  SPC_L2,  TAB_L4
                                 // └────────┴────────┴────────┘         └────────┴────────┴────────┘
  ),

  [base_movement] = LAYOUT_split_3x6_3(
  // ┌────────┬────────┬────────┬────────┬────────┬────────┐             ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,  KC_HOME,  KC_NO,   KC_NO,   KC_END,  KC_NO,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,  KC_LOPT, KC_LCTL, KC_LSFT, KC_LCMD,  KC_NO,                 KC_NO,  KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT,  KC_NO,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┐    ┌────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_DEL, KC_TRNS,  KC_ESC,      KC_BSPC,  KC_SPC,  KC_TAB
                                 // └────────┴────────┴────────┘    └────────┴────────┴────────┘
  ),

  [base_symbols] = LAYOUT_split_3x6_3(
   //┌────────┬────────┬────────┬────────┬────────┬────────┐             ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_NO,   KC_NO,  KC_LBRC, KC_RBRC,  KC_BSLS, KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_CAPS, KC_GRV, KC_MINS,  KC_EQL,  KC_SLSH, KC_NO,                 KC_NO,  KC_RCMD, KC_RSFT, KC_RCTL, KC_ROPT,   KC_NO,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, TO(steno),              TO(game), KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┐    ┌────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_DEL,  KC_ENT,  KC_ESC,      KC_BSPC, KC_TRNS,  KC_TAB
                                 // └────────┴────────┴────────┘    └────────┴────────┴────────┘
  ),

  [base_nums] = LAYOUT_split_3x6_3(
  // ┌────────┬────────┬────────┬────────┬────────┬────────┐             ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,    KC_1,    KC_2,    KC_3,   KC_NO,   KC_NO,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,  KC_LOPT, KC_LCTL, KC_LSFT, KC_LCMD,  KC_NO,                 KC_NO,    KC_4,    KC_5,    KC_6,    KC_0,   KC_NO,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,    KC_7,    KC_8,    KC_9,   KC_NO,   KC_NO,
  // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┐    ┌────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     KC_TRNS,  KC_ENT,  KC_ESC,      KC_BSPC, KC_SPC,  KC_TAB
                                 // └────────┴────────┴────────┘    └────────┴────────┴────────┘
  ),

  [base_fn] = LAYOUT_split_3x6_3(
  // ┌────────┬────────┬────────┬────────┬────────┬────────┐             ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,                 KC_NO,  KC_RCMD, KC_RSFT, KC_RCTL, KC_ROPT,  KC_NO,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┐    ┌────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_DEL,  KC_ENT, KC_TRNS,      KC_BSPC,  KC_SPC,  KC_TAB
                                 // └────────┴────────┴────────┘    └────────┴────────┴────────┘
  ),


  [game] = LAYOUT_split_3x6_3(
  // ┌────────┬────────┬────────┬────────┬────────┬────────┐             ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                  KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,   KC_BSPC,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_ESC,   KC_A,  KC_S,    KC_D,    KC_F,    KC_G,                  KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_ENT,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                  KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
  // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┐    ┌────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                  MO(game_nums),KC_SPC,KC_LCTRL,     MO(extra),KC_SPC,  KC_NO
                                 // └────────┴────────┴────────┘    └────────┴────────┴────────┘
  ),

  [game_nums] = LAYOUT_split_3x6_3(
  // ┌────────┬────────┬────────┬────────┬────────┬────────┐             ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_NO,   KC_1,    KC_2,    KC_3,    KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // ├────────┼───────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LALT,  KC_4,    KC_5,    KC_6,    KC_0,    KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   KC_7,    KC_8,    KC_9,    KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┐    ┌────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     KC_TRNS,  KC_NO,   KC_NO,        KC_NO,   KC_NO,   KC_NO
                                 // └────────┴────────┴────────┘    └────────┴────────┴────────┘
  ),

    [steno] = LAYOUT_split_3x6_3(
  // ┌────────┬────────┬────────┬────────┬────────┬────────┐             ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_NO,  STN_NUM, STN_NUM, STN_NUM, STN_NUM,  KC_NO,                 KC_NO,  STN_NUM, STN_NUM, STN_NUM, STN_NUM,  KC_NO,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   STN_SL,  STN_TL,  STN_PL,  STN_HL, STN_STR,               STN_STR,  STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   STN_SL,  STN_KL,  STN_WL,  STN_RL,  STN_STR,              STN_STR,  STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
  // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┐    ┌────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      STN_A,   STN_O,   KC_NO,       MO(steno),STN_E,   STN_U
                                 // └────────┴────────┴────────┘    └────────┴────────┴────────┘
  ),

    [extra] = LAYOUT_split_3x6_3(
  // ┌────────┬────────┬────────┬────────┬────────┬────────┐             ┌────────┬────────┬────────┬────────┬────────┬────────┐
      TO(game),TO(steno), KC_NO,   KC_NO,   KC_NO,  TO(0),                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RESET,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,  KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT,  KC_NO,                 KC_NO,  KC_RCMD, KC_RSFT, KC_RCTL, KC_ROPT,   KC_NO,
  // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┐    ┌────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_NO,   KC_NO,   KC_NO,        KC_NO,   KC_NO,   KC_NO
                                 // └────────┴────────┴────────┘    └────────┴────────┴────────┘
  )
};

                                                                                                                  
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {                                                    
        [0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_F14, KC_TAB, KC_Q, KC_
W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_F15, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_
J, KC_K, KC_L, KC_SCLN, KC_F16, KC_LALT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_F13, TG(2), KC_N, KC_M, KC_COMM, KC_DOT,
 KC_SLSH, KC_F17, KC_LGUI, KC_LSFT, KC_SPC, MO(2), KC_ENT, MO(1), RSFT_T(KC_BSPC), KC_DEL),                       
        [1] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_
TRNS, KC_NO, KC_TRNS, KC_BSLS, KC_LPRN, KC_UNDS, KC_PERC, KC_RPRN, KC_TRNS, KC_EQL, KC_LBRC, KC_RBRC, KC_PIPE, KC_
NO, KC_TRNS, KC_GRV, KC_LCBR, KC_DQUO, KC_QUOT, KC_RCBR, KC_CIRC, KC_PLUS, KC_MINS, KC_DLR, KC_COLN, KC_NO, KC_TRN
S, KC_TILD, KC_HASH, KC_EXLM, KC_AT, KC_ASTR, KC_TRNS, KC_NO, KC_NO, KC_AMPR, KC_LT, KC_GT, KC_QUES, KC_NO, KC_TRN
S, KC_TRNS, KC_TRNS, MO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),                                                  
        [2] = LAYOUT(KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F12, KC_MYCM, KC_INS, KC_PSCR, KC_NO, KC_F18,
 KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F19, KC_TRNS, KC_LGUI, KC_LALT, 
KC_LCTL, KC_LSFT, KC_GRV, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TAB, KC_F20, KC_NO, LCTL(KC_Z), LCTL(KC_X), LCTL(KC
_C), LCTL(KC_V), KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, CW_TOGG, KC_F21, KC_NO, KC_NO, KC_T
RNS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS, KC_TRNS),                                                                  
        [3] = LAYOUT(KC_ESC, KC_NUM, KC_NO, KC_PSLS, KC_PAST, KC_PMNS, KC_CAPS, KC_SCRL, KC_PAUS, KC_INS, KC_SLCT,
 KC_APP, KC_TAB, KC_PCMM, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_PDOT
, KC_P4, KC_P5, KC_P6, KC_PEQL, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TAB, KC_NO, KC_LALT, KC_NO, KC_P1, KC_P2, KC_
P3, KC_P0, KC_TRNS, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_LGUI, KC_LSFT, KC_TRNS, KC_TRNS, KC
_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)                                                                                 
};                                                                                                                
                                                                                                                  
#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)                                                        
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {                                            
                                                                                                                  
};                                                                                                                
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)                                                  
                                                                                                                  
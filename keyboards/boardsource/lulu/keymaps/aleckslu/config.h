
// * source: https://www.reddit.com/r/ErgoMechKeyboards/comments/11qevf9/i_have_to_unplug_and_replug_my_ergo_kb_after/

// to stop the need to replug keyboard every restart
// ! will not be able to enter bios with this method
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 8000
#define SPLIT_USB_TIMEOUT_POLL 25 

// Since Splinky RP2040 has working VBUS detect on pin GP19, a better fix IMO would be the following code, which forces QMK to use VBUS (USB voltage) detection, which is much faster than SPLIT_USB_DETECT.
// * able to enter bios with this method
// #undef SPLIT_USB_DETECT
// #define USB_VBUS_PIN GP19 

#define TAPPING_TOGGLE 2

/* 
? Note
With this method, you will be able to enter bios with the kb. However this method requires the firmware to be coded natively for RP2040 controller. Compiling firmware coded natively for ATmega32U4 with 'CONVERT_TO=promicro_rp2040' flag won't work because GP19 isn't valid pin for ATmega32U4. 
*/

// #undef TAPPING_TERM
// #define TAPPING_TERM 200

// Disables double tap repeat
#define QUICK_TAP_TERM 0

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define HOLD_ON_OTHER_KEY_PRESS
// #define RETRO_TAPPING

// Handedness https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness

// #undef RGBLIGHT_ANIMATIONS
#undef RGBLIGHT_EFFECT_BREATHING
#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_ALTERNATING
#undef RGBLIGHT_EFFECT_TWINKLE

#undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_BREATHING
#undef ENABLE_RGB_MATRIX_BAND_SAT
#undef ENABLE_RGB_MATRIX_BAND_VAL
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#undef ENABLE_RGB_MATRIX_DUAL_BEACON
#undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#undef ENABLE_RGB_MATRIX_FLOWER_BLOOMING
#undef ENABLE_RGB_MATRIX_RAINDROPS
#undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#undef ENABLE_RGB_MATRIX_HUE_BREATHING
#undef ENABLE_RGB_MATRIX_HUE_PENDULUM
#undef ENABLE_RGB_MATRIX_HUE_WAVE
#undef ENABLE_RGB_MATRIX_PIXEL_FLOW
#undef ENABLE_RGB_MATRIX_PIXEL_RAIN
#undef ENABLE_RGB_MATRIX_DIGITAL_RAIN
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#undef ENABLE_RGB_MATRIX_SPLASH
#undef ENABLE_RGB_MATRIX_MULTISPLASH
#undef ENABLE_RGB_MATRIX_SOLID_SPLASH
#undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH

// #define RGBLED_SPLIT 29
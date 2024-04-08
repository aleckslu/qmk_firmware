
// * source: https://www.reddit.com/r/ErgoMechKeyboards/comments/11qevf9/i_have_to_unplug_and_replug_my_ergo_kb_after/

// to stop the need to replug keyboard every restart
// ! will not be able to enter bios with this method
#define SPLIT_USB_TIMEOUT 10000
#define SPLIT_USB_TIMEOUT_POLL 10 

// Since Splinky RP2040 has working VBUS detect on pin GP19, a better fix IMO would be the following code, which forces QMK to use VBUS (USB voltage) detection, which is much faster than SPLIT_USB_DETECT.
// * able to enter bios with this method
#undef SPLIT_USB_DETECT
#define USB_VBUS_PIN GP19 

/* 
? Note
With this method, you will be able to enter bios with the kb. However this method requires the firmware to be coded natively for RP2040 controller. Compiling firmware coded natively for ATmega32U4 with 'CONVERT_TO=promicro_rp2040' flag won't work because GP19 isn't valid pin for ATmega32U4. 
*/

#define TAPPING_TERM 90

// Handedness https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness



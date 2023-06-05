#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_STARTUP_SPD 0
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define GRAVE_ESC_CTRL_OVERRIDE         //so we can still use ctrl+shift+esc with KC_GESC
#define FORCE_NKRO                      //turn on NKRO by default

//#define RGBLIGHT_DISABLE_KEYCODES       //so we can control the underglow separately

//more granular control over RGB effects speed
#define RGB_MATRIX_SPD_STEP 8

//RGB mode for startup and for RGB_DEF keycode
//#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_UP_DOWN
//#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CUSTOM_CYCLE_ROWS_ALT

//hit both shift keys to turn on caps for one word (until space is hit)
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
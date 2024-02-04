#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    RGB_MODE_FORWARD
  ),
  [1] = LAYOUT(
    _______
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(RGB_VAI, RGB_VAD) },
  [1] = { ENCODER_CCW_CW(RGB_VAI, RGB_VAD) },
};
#endif

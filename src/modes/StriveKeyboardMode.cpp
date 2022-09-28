#include "modes/StriveKeyboardMode.hpp"

#include "core/socd.hpp"
#include "core/state.hpp"

StriveKeyboardMode::StriveKeyboardMode(socd::SocdType socd_type) : KeyboardMode(socd_type) {}

void StriveKeyboardMode::UpdateKeys(InputState &inputs) {
    Press(HID_KEY_A, inputs.l);
    Press(HID_KEY_B, inputs.left);
    Press(HID_KEY_C, inputs.down);
    Press(HID_KEY_D, inputs.right);
    Press(HID_KEY_F, inputs.mod_y);
    Press(HID_KEY_G, inputs.select);
    Press(HID_KEY_H, inputs.start);
    Press(HID_KEY_I, inputs.home);
    Press(HID_KEY_J, inputs.r);
    Press(HID_KEY_K, inputs.y);
    Press(HID_KEY_L, inputs.lightshield);
    Press(HID_KEY_M, inputs.midshield);
    Press(HID_KEY_N, inputs.b);
    Press(HID_KEY_O, inputs.x);
    Press(HID_KEY_P, inputs.z);
    Press(HID_KEY_Q, inputs.up);
    Press(HID_KEY_R, inputs.c_up);
    Press(HID_KEY_S, inputs.c_left);
    Press(HID_KEY_T, inputs.c_right);
    // Bind both A and mod X to U, so you can bind jump on both thumbs, mimicking the Hitbox layout somewhat.
    Press(HID_KEY_U, inputs.a || inputs.mod_x);
    Press(HID_KEY_V, inputs.c_down);
}

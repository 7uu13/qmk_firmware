#include "keycodes.h"

enum combos {
    WFP_CAPS,
	WF_ESC
};

const uint16_t PROGMEM wfp_combo[] = {KC_W, KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM wf_combo[] = {KC_W, KC_F, COMBO_END};

combo_t key_combos[] = {
    [WFP_CAPS] = COMBO(wfp_combo, KC_CAPS),
	[WF_ESC] = COMBO(wf_combo, KC_ESC)
};

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
  switch (get_highest_layer(default_layer_state)) {
		/* you can add cases for layers you would like to exclude */
		/* for example, I have gaming layers in the `layer_number` enum like so: */
		// case _GAME1:
		// case _GAME2:
		// 	return false;
		default:
			return true;
  }
};

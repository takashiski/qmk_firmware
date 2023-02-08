#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_7,   KC_8,   KC_9,   KC_PSLS,
        KC_4,   KC_5,   KC_6,   KC_PAST,
        KC_1,   KC_2,   KC_3,   KC_PMNS,
        KC_0,   KC_DOT, KC_ENT, KC_PPLS
    )
};

void pointing_device_init_user(void){
    asns5050_init();
    pointing_device_set_cpi(1375)


}
report_mouse_t pointing_device_task_user(report_mouse_t mouse_report){
    // adns5050_cs_select();

    return mouse_report;
}

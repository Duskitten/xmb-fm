#pragma once

typedef struct {
    float position;
    bool is_visible;
    const char *content;
    int animation_target;
} Dialog;

void dialog_show(Dialog *dialog);
void dialog_hide(Dialog *dialog);
void dialog_move_cursor_left(Dialog *dialog);
void dialog_move_cursor_right(Dialog *dialog);

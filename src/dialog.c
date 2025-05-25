#include "dialog.h"
#include "animation.h"

void dialog_show(Dialog *dialog) {
    dialog->position = 0;
    dialog->is_visible = true;
    dialog->animation_target = 0;
}

void dialog_hide(Dialog *dialog) {
    dialog->position = 0;
    dialog->is_visible = false;
    dialog->animation_target = 0;
}

void dialog_move_cursor_left(Dialog *dialog) {
    if (dialog->animation_target <= -1)
        return;
    dialog->animation_target -= 1;
    animation_push(0.1, dialog->animation_target, &dialog->position, DialogTag);
}

void dialog_move_cursor_right(Dialog *dialog) {
    if (dialog->animation_target >= 0)
        return;
    dialog->animation_target += 1;
    animation_push(0.1, dialog->animation_target, &dialog->position, DialogTag);
}

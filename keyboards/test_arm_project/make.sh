#!/bin/bash
make -r -R -C ./ -f build_keyboard.mk  KEYBOARD=test_arm_project KEYMAP=jis SILENT=false $*

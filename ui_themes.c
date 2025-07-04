// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.11
// Project name: SR_SoC-Display

#include "ui.h"


ui_theme_variable_t _ui_theme_color_BackColor[2] = { 0xFFFFFF, 0x000000 };
ui_theme_variable_t _ui_theme_alpha_BackColor[2] = { 255, 255 };

ui_theme_variable_t _ui_theme_color_ForeColor[2] = { 0x000000, 0xFFFFFF };
ui_theme_variable_t _ui_theme_alpha_ForeColor[2] = { 255, 255 };

ui_theme_variable_t _ui_theme_color_BackScale[2] = { 0xDECE73, 0xDECE73 };
ui_theme_variable_t _ui_theme_alpha_BackScale[2] = { 255, 255 };

ui_theme_variable_t _ui_theme_color_FrontScale[2] = { 0xB4891C, 0xB4891C };
ui_theme_variable_t _ui_theme_alpha_FrontScale[2] = { 255, 255 };

ui_theme_variable_t _ui_theme_color_PanelColor[2] = { 0xABABAB, 0xABABAB };
ui_theme_variable_t _ui_theme_alpha_PanelColor[2] = { 255, 255 };
uint8_t ui_theme_idx = UI_THEME_DEFAULT;


void ui_theme_set(uint8_t theme_idx) {
  ui_theme_idx = theme_idx;
  _ui_theme_set_variable_styles(UI_VARIABLE_STYLES_MODE_FOLLOW);
}

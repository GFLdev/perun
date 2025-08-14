// SPDX-License-Indentifier: MIT
/*
 * File: perun/src/main.c
 * Description: Main entrypoint.
 *
 * Copyright (C) 2025 Gabriel Franco
 * Author: Gabriel Franco <gabriel.franco@gfldev.com>
 *
 */

#include <circ/comp.h>
#include <stdio.h>

int main() {
  circ_comp_type_t r = RESISTOR;
  if (r == RESISTOR) {
    printf("Is resistor");
  }
  return 0;
}

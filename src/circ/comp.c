// SPDX-License-Identifier: MIT
/*
 * File: perun/src/circ/comp.c
 * Description: Circuit components implementation.
 *
 * Copyright (C) 2025 Gabriel Franco Lourenço
 * Author: Gabriel Franco Lourenço <gabriel.franco@gfldev.com>
 *
 */

#include <circ/comp.h>
#include <math.h>

struct circ_resistor {
  float_t ohm;
};

struct circ_capacitor {
  float_t capacitance;
};

// TODO: Implement union components.
struct circ_comp {
  char *label;
  circ_comp_type_t type;
  union {
    circ_resistor_t resistor;
    circ_capacitor_t capacitor;
  };
};

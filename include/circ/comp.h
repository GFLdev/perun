// SPDX-License-Identifier: MIT
/*
 * File: perun/include/circ/comp.h
 * Description: Circuit components definition. Includes component types and it's
 * structure.
 *
 * Copyright (C) 2025 Gabriel Franco Lourenço
 * Author: Gabriel Franco Lourenço <gabriel.franco@gfldev.com>
 *
 */

#ifndef CIRC_COMP_H
#define CIRC_COMP_H

typedef enum circ_comp_type {
  RESISTOR,
  CAPACITOR,
  INDUCTOR,
  DIODE,
  LED,
  TRANSISTOR,
  CRYSTAL,
  OSCILLATOR
} circ_comp_type_t;

typedef struct circ_comp circ_comp_t;

#endif // !CIRC_COMP_H

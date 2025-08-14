
// SPDX-License-Identifier: MIT
/*
 * File: perun/src/circ/graph.c
 * Description: Circuit graph and it's nodes and node's tree implementation.
 *
 * Copyright (C) 2025 Gabriel Franco Lourenço
 * Author: Gabriel Franco Lourenço <gabriel.franco@gfldev.com>
 *
 */

#include <circ/comp.h>
#include <circ/graph.h>
#include <stdint.h>

struct circ_btree {
  circ_comp_t *comp;
  uint8_t k_order;
  circ_btree_t *next;
  circ_btree_t *prev;
  circ_btree_t **children;
};

struct circ_graph {
  circ_comp_t *comp;
  circ_btree_t nodes;
};

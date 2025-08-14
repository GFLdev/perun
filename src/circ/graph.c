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
#include <stdlib.h>
#include <stdbool.h>

struct circ_btree {
  circ_btree_t *parent;
  circ_comp_t **node;
  circ_btree_t **children;
  uint8_t k_order;
};

struct circ_graph {
  circ_comp_t *comp;
  circ_btree_t nodes;
};

static inline circ_btree_t *circ_new_btree(uint8_t k_order) {
  if (k_order < 2) {
    return NULL;
  }
  circ_btree_t *node = malloc(sizeof(circ_btree_t) * (k_order - 1));
  circ_btree_t *children[k_order];
  node->children = children;
  node->k_order = k_order;
  return node;
};

static void circ_balance_btree(circ_btree_t *btree) {};

static void circ_insert_to_btree(circ_btree_t *btree, circ_comp_t *comp) {};

static void circ_remove_from_btree(circ_btree_t *btree, circ_comp_t *comp) {};

static circ_comp_t *circ_search_btree(circ_btree_t *btree, circ_comp_t *comp) {
  return NULL;
};

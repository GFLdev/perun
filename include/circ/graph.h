// SPDX-License-Identifier: MIT
/*
 * File: perun/include/circ/graph.h
 * Description: Circuit's graph definition, used for storing the circuit's
 * components (perun/include/circ/comp.h) as the graph's nodes. For storing
 * linked nodes, it is used a B-Tree, with custom Knuth order.
 *
 * Copyright (C) 2025 Gabriel Franco Lourenço
 * Author: Gabriel Franco Lourenço <gabriel.franco@gfldev.com>
 *
 */

#ifndef CIRC_BTREE_H
#define CIRC_BTREE_H

#include <circ/comp.h>
#include <stdint.h>

typedef struct circ_btree circ_btree_t;
typedef struct circ_graph circ_graph_t;

static circ_btree_t *circ_new_btree(uint8_t k_order);
static void circ_balance_btree(circ_btree_t *btree);
static void circ_insert_to_btree(circ_btree_t *btree, circ_comp_t comp);
static void circ_remove_from_btree(circ_btree_t *btree, circ_comp_t comp);
static circ_comp_t *circ_search_btree(circ_btree_t *btree, circ_comp_t comp);

circ_graph_t *circ_new_empty_graph();
circ_graph_t *circ_new_graph(circ_comp_t comp);
void circ_insert_graph_node(circ_graph_t *graph, circ_comp_t comp);
void circ_remove_graph_node(circ_graph_t *graph, circ_comp_t comp);
circ_comp_t *circ_search_graph_node(circ_graph_t *graph, circ_comp_t *comp);

#endif // !CIRC_BTREE_H

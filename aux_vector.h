/*
 * aux_vector_t.h
 *
 *  Created on: May 19, 2013
 *      Author: emanuel
 */

#ifndef AUX_VECTOR_H_
#define AUX_VECTOR_H_
#include "graph_mat_adj.h"

typedef struct aux_vector_t
{
	int *vertex;
	int *cost;
	int *predec;
	int *isvalid;
	int *min_cost;

	int total;

}aux_vector_t;

aux_vector_t *aux_vector_init(int total);
void aux_vector_destroy(aux_vector_t *my_auxvector);

void aux_vector_addvertex(aux_vector_t *my_auxvector, int pos, int value);
void aux_vector_addcost(aux_vector_t *my_auxvector, int pos, int value);
void aux_vector_addpredec(aux_vector_t *my_auxvector, int pos, int value);
void aux_vector_addmincost(aux_vector_t *my_auxvector, int pos, int value);
int aux_vector_getmincost(aux_vector_t *my_auxvector);

int aux_vector_calcmincost(aux_vector_t *my_auxvector);
void aux_vector_print(aux_vector_t *my_auxvector);
void aux_vector_update_predec(aux_vector_t *my_auxvector, int pos_predec, int pos_vertex);
void aux_vector_update_isvalid(aux_vector_t *my_auxvector, int pos, int value);
int aux_vector_next_insert_on_tree(aux_vector_t *my_auxvector,int *pos_parent_on_tree, int *pos_child_on_tree);



#endif /* AUX_VECTOR_H_ */

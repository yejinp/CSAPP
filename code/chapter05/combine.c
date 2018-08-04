#include <stdio.h>
#include <stdlib.h>

typedef long data_t;

/* Create abstract data type for vector
 */
typedef struct {
	long len;
	data_t	*data;
} vec_rec, *vec_ptr;


/* Create vector of specified length 
 */
vec_ptr new_vec(long len)
{
	/* Allocate header structure */
	vec_ptr result = (vec_ptr) malloc(sizeof(vec_rec));
	data_t	*data = NULL;
	if(result == 0) {
		return NULL; /* Couldn't allocate storage */
	}

	result->len = len;

	/* Allocate array */
	if(len > 0) {
		data = (data_t *) calloc(len, sizeof(data_t));
		if(data == NULL) {
			free((void*) result);
			return NULL; /* Couldn't allocate storage */
		}
	}

	/* Data will either be NULL of allocated array */
	result->data = data;
	return result;
}

/*
 * Retrieve vector element and store at dest.
 * Return 0 (out of bounds) or 1 (successful)
 */
int get_vec_element(vec_ptr v, long index, data_t *dest)
{
	if(index < 0 || index >= v->len)
		return 0;

	*dest = v->data[index];
	return 1;
}

/* Return length of vector */
long vec_length(vec_ptr v)
{
	return v->len;
}

#define IDENT 	0
#define OP	+

/* Implementation with maximum use of data abstraction */
void combine1(vec_ptr v, data_t *dest)
{
	long	i;
	*dest	= IDENT;
	for(i = 0; i < vec_length(v); i++) {
		data_t	val;
		get_vec_element(v, i, &val);
		*dest = *dest OP val;
	}

}

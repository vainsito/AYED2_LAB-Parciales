#ifndef _SET_HELPERS_H_
#define _SET_HELPERS_H_

#include <stdbool.h>  /* Type bool */

set set_from_file(const char *filepath);
/*
 * Each element is read from the file located at 'filepath'.
 * The file must exist in disk and must have its contents in the following
 * format:
 *
 * <set_elem_1> <set_elem_2> <set_elem_3> ... <set_elem_N>
 *
 * Those elements are stored in a new instance of set.
 *
 * If something goes wrong in loading process, the funciton aborts.
 *
 * Returns the instance of set where the elements were loaded. 
 *
 */

#endif /* _SET_HELPERS_H_ */


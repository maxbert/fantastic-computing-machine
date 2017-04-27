#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"
#include "stack.h"
int main(int argc, char **argv) {

  screen s;
  struct matrix * edges;
  struct matrix * transform;
  struct stack * stac;
  stac = new_stack();
  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);

  /* print_matrix( make_bezier() ); */
  /* printf("\n"); */
  /* print_matrix( make_hermite() ); */

  if ( argc == 2 )
    parse_file( argv[1], transform, edges,stac,  s );
  else
    parse_file( "stdin", transform, edges,stac, s );

  
  free_matrix( edges );
  free_matrix( transform );
}  

#ifndef FIELD_H
#define FIELD_H

typedef struct Field {
	int positions[3][3][3]; // empty = 0 | white = 1 | black = 2 | not_a_field = -1
} field;


#endif
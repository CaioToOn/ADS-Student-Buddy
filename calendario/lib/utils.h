/*
 * utils.h
 */

#ifndef _UTILS_H
#define _UTILS_H

#ifndef S_CHAR
	#define S_CHAR sizeof(char)
#endif


#ifndef TRUE
	#define TRUE 1
#endif /* TRUE */

#ifndef FALSE
	#define FALSE 0
#endif /* FALSE */

struct _GenericArray {

	int length;
	void **elements;

};

typedef struct _GenericArray GenericArray;


/*
 * Converts a string to lowercase.
 */
void strToLower( char *str );


#endif

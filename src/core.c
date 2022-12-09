/*
    Made by Noah Van Miert
    8/12/2022

    Apollo Compiler
*/


#include "core.h"

#include <stdio.h>
#include <stdlib.h>


void *xmalloc(size_t size)
{
    void *result = malloc(size);
    
    if (result == NULL) {
        fprintf(stderr, "error: exhausted memory (malloc returned NULL)\n");
        exit(EXIT_FAILURE);
    }

    return result;
}


void *xcalloc(size_t nmemb, size_t size) 
{
    void *result = calloc(nmemb, size);

    if (result == NULL) {
        fprintf(stderr, "error: exhausted memory (calloc returned NULL)\n");
        exit(EXIT_FAILURE);
    }

    return result;
}


void *xrealloc(void *_ptr, size_t size)
{
    void *result = realloc(_ptr, size);
    
    if (result == NULL) {
        fprintf(stderr, "error: exhausted memory (realloc returned NULL)\n");
        exit(EXIT_FAILURE);
    }

    return result;
}
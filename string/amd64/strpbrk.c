/***
*strpbrk.c - Defines the strpbrk function.
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       The function strpbrk is mostly common code with strspn in strspn.c.
*
*******************************************************************************/

#define SSTRPBRK
#define STRSPN_USE_SSE2
#include "strspn.c"

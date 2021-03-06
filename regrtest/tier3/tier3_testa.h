/**
* @file   tier3_testa.h
* @author Armando Miraglia (arma@lamortenera.it)
* @date   July, 2011
* @brief  declares the first test suite of the Tier3
*
* This header file declares the function used for testing:
*
*/

#ifndef TIEAR3_TESTA_H
#define TIEAR3_TESTA_H

#include <sys/types.h>

/**
* @name    TestA checks
* @brief   check of the methods
*
*
*
*
* @param [in] n        number of elements that are going to be
*                      created and saved.
*
* Example Usage:
* @code
*    testa_check(3);   // this will call the first check and will create a new
*                      // list with 3 elements and check the functions'
*                      // functionalities
* @endcode
*/
void testa_check(size_t const n);

#endif

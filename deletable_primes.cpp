/*----------------------------------------------------------
 *				HTBLA-Leonding / Class
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			deletable_primes.c
 * Author:			P. Bauer
 * Due Date:		October 16, 2012
 * ----------------------------------------------------------
 * Description:
 * Implementation of deletable_primes.h.
 * ----------------------------------------------------------
 */
 #include "deletable_primes.h"
 #include <math.h>

 unsigned long remove_digit(int index, unsigned long n)
 {
   unsigned long digits_before = n/pow(10, index+1);
   unsigned long digits_after = n%(unsigned long)pow(10, index);
   unsigned long new_number = digits_before * pow(10, index) + digits_after;
 }

 int get_ways(unsigned long p)
 {
   int counter = 0;
 }

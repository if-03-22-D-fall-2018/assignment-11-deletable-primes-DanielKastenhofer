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

   return new_number;
 }

 int get_ways(unsigned long p)
 {
   int length = 0;
    for (int i = 0; i < get_length(p); i++) {
      if (get_length(p) == 1) {
        if (is_prime(p) == true) {
          return 1;
        }
        return 0;
      }
      else if (is_prime(remove_digit(i, p))) {
        length += get_ways(remove_digit(i, p));
      }
    }
    return length;
 }
 int get_length(unsigned long p)
 {
 unsigned long length = 0;
 unsigned long tmp = p;
 if (p < 10) {
   return 1;
 }
 while (tmp != 0) {
   tmp = tmp/10;
   length++;
 }
 return length;
}

bool is_prime(unsigned long p)
{
 if (p == 1) {
   return false;
 }
 unsigned long copied = p;
 for (unsigned long i = 2; i <= sqrt(p); i++) {
   if (copied%i == 0) {
     return false;
   }
 }
 return true;
}

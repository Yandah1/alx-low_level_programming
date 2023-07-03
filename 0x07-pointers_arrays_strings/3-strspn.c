#include "main.h"
#include <stdio.h>

/**
 * int _strspn - function that gets the length of a prefix substring.
 * @s: the pointer to the string.
 * @accept:the pointer to the string ofcharecter
 * Return: Always 0
 */
#include <stdio.h>

unsigned int _strspn(char* s, char* accept) {
	    unsigned int count = 0;
	        int found = 0;
		    for (unsigned int i = 0; s[i] != '\0'; i++) {
			            found = 0;
				            for (unsigned int j = 0; accept[j] != '\0'; j++) {
						                if (s[i] == accept[j]) {
									                count++;
											                found = 1;
													                break;
															            }
								        }
					            if (found == 0) {
							                return count;
									        }
						        }
		        return count;
}

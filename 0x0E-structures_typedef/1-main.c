#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for alx students.
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Django", 3.5, "Jay");
	printf("My name is %s, and I am %.1f :) - woof!\n", my_dog.name, my_dog.age);
	return (0);
}
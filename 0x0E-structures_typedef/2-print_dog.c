#include <stdio.h>

/* Define the struct dog*/
struct dog {
    char *name;
    int age;
    char *breed;
};
/* Function to print the details of a dog*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return; /* Do nothing if d is NULL*/
}
/* Print the name, or (nil) if name is NULL*/
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
/* Print the age*/
printf("Age: %d\n", d->age);
/* Print the breed, or (nil) if breed is NULL*/
printf("Breed: %s\n", (d->breed != NULL) ? d->breed : "(nil)");
}
int main(void)
{
/* Create a sample dog*/
struct dog my_dog = {NULL, 3, "Golden Retriever"
};
/* Call the print_dog function to print the details of the dog*/
print_dog(&my_dog);
return (0);
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'K';
    char first_name[] = "Viswajit";
    char last_name[] = "Nayak";

    printf("You are %d miles away.\n", distance);
    printf("You are %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have the first name \t==> %s \n", first_name);
    printf("I have the last name \t==> %s\n", last_name);
    printf("My whole name is \t==> %s %c. %s\n", first_name, initial, last_name);

    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    return 0;
}
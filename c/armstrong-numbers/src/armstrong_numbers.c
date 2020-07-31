#include "armstrong_numbers.h"


bool is_armstrong_number(int candidate)
{
    int number = candidate;
    int number_length = floor(log10(number)+1);
    int sum = 0;

    while(number > 0){
        int remainder = number%10;
        sum += pow(remainder, number_length);
        number /= 10;
    }

    return(sum == candidate);
}

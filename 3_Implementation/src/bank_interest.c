#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"

/**
 * @brief calculates the simple interest being earned by a particular account
 * 
 * @param t is the time period
 * @param a the amount that is available in the account
 * @param r the rate that is being offered by the service for the interest
 * @return float simple interest earned 
 */

float interest(float t,float a,int r)
{
    float SI;
    SI=(r*t*a)/100.0;
    return (SI);

}
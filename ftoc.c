//
//  main.c
//  Chapter1_3
//
//  Created by CHARLOTTE WUENNEMANN on 9/7/14.
//  Copyright (c) 2014 CHARLOTTE WUENNEMANN. All rights reserved.
//

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      /*lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    
    fahr = lower;
    printf("%3s %6s\n", "Fahr", "Celsius");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
}


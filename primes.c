//
//  main.c
//  Sieve of Eratosthenes
//
//  Created by CHARLOTTE WUENNEMANN on 11/17/14.
//  Copyright (c) 2014 CHARLOTTE WUENNEMANN. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#define LIMIT 1001 /*size of integers array*/

int main(int argc, const char * argv[]) {
        int i,j,k;
        int *primes;
    int n;
    printf("Enter a number");
    scanf("%d", &n);
        primes = malloc(sizeof(int)*LIMIT);
        
    for (i=2;i<=n;i++){
            primes[i]=1;
            printf("initialarray[%d] = %d ",i, primes[i]);
    }
    printf(".....................\n");
    printf(".....................\n");
    
    for (i=2;i<n;i++){
                for (j=i;i*j<=n;j++){
                    primes[i*j]=0;
                    printf("array[%d] = %d ",i, primes[i*j]);
                    printf("..........%d....%d.......\n",i,j);

                }
        printf("array[%d] = %d ",i, primes[i]);
                    
    }
    printf(".....................\n");
     printf(".....................\n");
        for (k=2;k<=n;k++)
            if (primes[k])
                printf("%d ",k);


    
        return 0;
}


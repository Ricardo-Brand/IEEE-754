//
//  main.c
//  IEEE-754
//
//  Created by Ricardo Augusto da Silva Brandão on 14/03/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double iee754, entrada;
    long mantissa = 0, expoente, inteiro;
    
    printf("Digite o valor que você deseja extrair a 'mantissa' e o 'expoente'\nDigite: ");
    scanf("%lf", &iee754);
    
    while(iee754 > 0){
        entrada = iee754;
        expoente = 0;
        inteiro = 0;
        
        long valor = *(long*) &iee754;
        
        mantissa = (valor & 0xFFFFFFFFFFFFF);
        mantissa |= (1ULL << 52);
        
        while(mantissa % 2 == 0){
            mantissa = mantissa / 2;
        }
        
        while (iee754 >= 2.0) {
            iee754 /= 2.0;
            expoente++;
        }

        while (iee754 < 1.0) {
            iee754 *= 2.0;
            expoente--;
        }
        
        expoente = expoente - 52;
        
        if(mantissa * pow(2,expoente) > entrada){
            while(mantissa * pow(2,expoente) != entrada){
                expoente--;
            }
        }
        else if(mantissa * pow(2,expoente) < entrada){
            while(mantissa * pow(2,expoente) != entrada){
                expoente++;
            }
        }
                
        printf("\nmantissa:  %ld\n", mantissa);
        printf("expoente: %ld\n\n", expoente);
        
        printf("Digite o valor que você deseja extrair a 'mantissa' e o 'expoente'\nDigite: ");
        scanf("%lf", &iee754);
    }
    return 0;
}


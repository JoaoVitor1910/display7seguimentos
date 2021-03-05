/*
 * File:   main.c
 * Author: 21192696
 *
 * Created on 25 de Fevereiro de 2021, 14:53
 */


#include <xc.h>
#include "config.h"
#include "inicializarDisplay.h"
#include "delay.h"

void main(void) 
{ 
   
    char cont = 0;
    inicializar();
    while(1)
    {
        display7seg(cont);
        delay(1000);
        ++cont;
        if(cont >= 16)
            cont = 0;
    }
            

}

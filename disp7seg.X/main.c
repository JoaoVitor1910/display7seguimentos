/*
 * File:   main.c
 * Author: 21192696
 *
 * Created on 25 de Fevereiro de 2021, 14:53
 */


#include <xc.h>
#include "config.h"

void inicializar (void)
{
    PORTD=0;
}

void main(void) 
{ 
   
   inicializar();
    
   while(1)
   {
      PORTD=0x06; 
   }
}

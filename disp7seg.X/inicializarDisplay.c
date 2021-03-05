/*
 * File:   display.c
 * Author: 21192696
 *
 * Created on 25 de Fevereiro de 2021, 16:53
 */


#include <xc.h>

void inicializar (void)
{
    TRISD=0x00;
    PORTD=0;
}    

char digitos[16] = { 0x3F,0x06,0x5B,0x4F,
                     0x66,0x6D,0x7D,0x07,
                     0x7F,0x6F,0x77,0x7C,
                     0x39,0x5E,0x79,0x71 };

void display7seg(char num)
{
    PORTD = digitos [num];
}
/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

#if defined(__XC)
    #include <xc.h>         /* XC8 General Include File */
#elif defined(HI_TECH_C)
    #include <htc.h>        /* HiTech General Include File */
#elif defined(__18CXX)
    #include <p18cxxx.h>    /* C18 General Include File */
#endif

#if defined(__XC) || defined(HI_TECH_C)

#include <stdint.h>         /* For uint8_t definition */
#include <stdbool.h>        /* For true/false definition */

#endif

#include "user.h"

/******************************************************************************/
/* User Functions                                                             */
/******************************************************************************/

/* <Initialize variables in user.h and insert code for user algorithms.> */

void InitApp(void)
{
    /* TODO Initialize User Ports/Peripherals/Project here */
    /* Setup analog functionality and port direction */

    LATA = 0;
    TRISA = 0b11111111;

    LATB = 0;
    TRISA = 0b11111111;
    
    LATC = 0;
    TRISC = 0b11111111;
    
    LATD = 0;     
    TRISD = 0b00111111; //Leds on RD6 and RD7, push buttons on RD4 and RD5

    LATE = 0;
    TRISE = 0b11111111;

    //ANCON0 = 0b00000000; //channels AN7-AN0 (RE2-RE0 RA5-RA0)
    //ANCON1 = 0b00000000; //channels AN12-AN8 (RB4 RC2 RB3-RB0)



    /* Initialize peripherals */

    /* Configure the IPEN bit (1=on) in RCON to turn on/off int priorities */

    /* Enable interrupts */
}


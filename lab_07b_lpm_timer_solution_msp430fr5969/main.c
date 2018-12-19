// ----------------------------------------------------------------------------
// main.c  (for lab_07b_lpm_timer project) ('FR5969 Launchpad)
// ----------------------------------------------------------------------------

//***** Header Files **********************************************************
#include <driverlib.h>
#include "myGpio.h"
#include "myClocks.h"
#include "myTimers.h"

//***** Prototypes ************************************************************


//***** Defines ***************************************************************


//***** Global Variables ******************************************************


//*****************************************************************************
// Main
//*****************************************************************************
void main (void)
{
    // Stop watchdog timer
    WDT_A_hold( WDT_A_BASE );

    // Initialize GPIO
    initGPIO();

    // Initialize clocks
    initClocks();

    // Initialize timers
    initTimers();

    __low_power_mode_3();
//    __bis_SR_register( GIE );                                                 // Enable interrupts globally
//
//    while(1) {
//        __no_operation();                                                     // Placeholder for while loop (not required)
//    }
}


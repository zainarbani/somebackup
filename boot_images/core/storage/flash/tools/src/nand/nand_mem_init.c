/*=======================================================================
 * FILE:        nand_mem_init.c
 *
 * SERVICES:    This module contains mrmory init functions
 *
 * DESCRIPTION
 *    This module contains mrmory init functions
 *
 *        Copyright � 2008-2009 Qualcomm Technologies Incorporated.
 *               All Rights Reserved.
 *            QUALCOMM Proprietary/GTDR
 *=======================================================================*/

/*===================================================================
 *
 *                       EDIT HISTORY FOR FILE
 *
 *   This section contains comments describing changes made to the
 *   module. Notice that changes are listed in reverse chronological
 *   order.
 *
 *   $Header: //components/rel/boot.bf/3.1.2.c2.2/boot_images/core/storage/flash/tools/src/nand/nand_mem_init.c#1 $ $DateTime: 2016/12/12 23:35:46 $ $Author: pwbldsvc $
 *
 * when         who     what, where, why
 * ----------   ---     ----------------------------------------------
 * 10/29/08     mm      Initial version
 *==================================================================*/

/*===================================================================
 *
 *                     Include Files
 *
 ====================================================================*/

#include "comdef.h"
#include "nand_config.h"

/*--------------------------------------------------------------------------
 * Extern Definitions
 * ------------------------------------------------------------------------*/

/* These symbols are created by the ARM linker and are referenced by using
 * these special characters ($$).
 */

extern byte *Image$$APP_RAM$$ZI$$Base;
extern byte *Image$$APP_RAM$$ZI$$Limit;

byte *Image$$ZI$$Limit;

/*--------------------------------------------------------------------------
 * Global Data Declarations
 * ------------------------------------------------------------------------*/

/* registers used in zeroing memory */
__global_reg (1)
     dword *dst32;
__global_reg (2)
     dword *src32;

int zero_init_needed = TRUE;




/*===========================================================================

FUNCTION memory_init

DESCRIPTION
  This function initializes initializes RAM for C code operation.

  This function is called from assembly.

DEPENDENCIES
  This function cannot make any call's since the stack has NOT been
  initialized.

RETURN VALUE
  None.

SIDE EFFECTS
  None.

===========================================================================*/

void
memory_init (void)
{
  /*************************************************************************
   * Warning: This routine can make no function calls and reference no
   * global data since we are about to zero out the stack.
   * Reference of global data will cause the compiler to put a push at
   * entry and a pop at exit.  Since we just wiped out the stack, we will
   * return using 0 and get an abort.
   *
   * Because we only need to do this once, the test of the global variable
   * which tells us whether we need to do initialization needs to be done
   * in assembly before calling this function.
   *************************************************************************/

  /* The main purpose of this routine is to initialize the ram memory
   * interface. This should include setting up the bus sizer in a real
   * phone target.
   */

  /* kick watchdog at least every 500 ms */
  KICK_WATCHDOG ();

  for (dst32 = (dword *) & Image$$APP_RAM$$ZI$$Base;
       dst32 < (dword *) & Image$$APP_RAM$$ZI$$Limit; dst32++)
  {
    *dst32 = 0;
  }

  /* kick watchdog at least every 500 ms */
  KICK_WATCHDOG ();

}                               /* memory_init() */

/**********************************************
 * This file was created by Wesley Flynn (wesleyf@vt.edu) to facilitate the Arty A7 Slave operation
 */
#include "xspi.h"

#define XSP_CR_SLAVE_MODE_MASK 		0x00000000

#define WES_SLAVE_MASK				0x00000002
#define WES_MASTER_MASK				0x00000006

void disp_important_regs(XSpi *InstancePtr);


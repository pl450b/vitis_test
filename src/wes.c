/**********************************************
 * This file was created by Wesley Flynn (wesleyf@vt.edu) to facilitate the Arty A7 Slave operation
 */
#include "wes.h"
#include "xspi.h"
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xspi_l.h"

u32 StatusReg;

void disp_important_regs(XSpi *InstancePtr)
{
	StatusReg = XSpi_IntrGetEnabled(InstancePtr);
	xil_printf("Int Enable: %x\t\t", StatusReg);
	StatusReg = XSpi_IntrGetStatus(InstancePtr);
	xil_printf("IntStatReg: %x\t", StatusReg);
	StatusReg = XSpi_GetControlReg(InstancePtr);
	xil_printf("CntlReg: %x\t", StatusReg);
	StatusReg = XSpi_GetStatusReg(InstancePtr);
	xil_printf("StatReg: %x\r\n", StatusReg);
}

#ifdef NDEBUG
#undef NDEBUG
#endif

#include "../generated/structs/syscfg.h"
#include "../generated/structs/sysinfo.h"
#include "../generated/structs/tbman.h"
#include "../generated/structs/timer.h"
#include "../generated/structs/usb.h"
#include "../generated/structs/usb_dpram.h"
#include "../generated/structs/watchdog.h"
#include "../generated/structs/xip_ctrl.h"
#include "../generated/structs/xosc.h"

int main(void)
{
    using namespace RP2350;

    (void)SYSCFG;
    (void)SYSINFO;
    (void)TBMAN;
    (void)TIMER0;
    (void)TIMER1;
    (void)USB;
    (void)USB_DPRAM;
    (void)WATCHDOG;
    (void)XIP_CTRL;
    (void)XOSC;

    return 0;
}

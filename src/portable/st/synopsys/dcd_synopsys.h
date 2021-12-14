#pragma once

#ifndef PORTABLE_ST_SYNOPSYS_DCD_SYSNOPSYS_H_
#define PORTABLE_ST_SYNOPSYS_DCD_SYSNOPSYS_H_

#include "common/tusb_common.h"

// If defined, this function will be invoked on SOF. To minimize latency and jitter, it
// is executed directly from the USB IRQ handler.
void dcd_sof_cb(uint32_t frame) TU_ATTR_WEAK;

#endif /* PORTABLE_ST_SYNOPSYS_DCD_SYSNOPSYS_H_ */

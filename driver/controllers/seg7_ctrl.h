#ifndef __SEG7CTRLH__
#define __SEG7CTRLH__

#include "controller.h"

void transpose8rS64(unsigned char* A, unsigned char* B);
size_t seg7_write_display_data(const struct vfd_display_data *data, unsigned short *raw_wdata, size_t sz);

#endif

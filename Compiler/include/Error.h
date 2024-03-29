#ifndef _ERROR_H
#define _ERROR_H

#include "Common.h"

struct Error {
    uint32 error_code;
    uint32 line_number;
    uint32 column_number;
};

void report_error(const char *reporter_filename, uint64 reporter_line, const char *filename, const char *file, uint64 offset, uint64 span, const char *msg_fmt, ...) ;

#endif /* _ERROR_H */
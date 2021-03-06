#include <Common.h>

/*
 * log base 2 algorithm from
 * https://stackoverflow.com/questions/11376288/fast-computing-of-log2-for-64-bit-integers
 */
const uint8 tab64[64] = {
    63,  0, 58,  1, 59, 47, 53,  2,
    60, 39, 48, 27, 54, 33, 42,  3,
    61, 51, 37, 40, 49, 18, 28, 20,
    55, 30, 34, 11, 43, 14, 22,  4,
    62, 57, 46, 52, 38, 26, 32, 41,
    50, 36, 17, 19, 29, 10, 13, 21,
    56, 45, 25, 31, 35, 16,  9, 12,
    44, 24, 15,  8, 23,  7,  6,  5};

uint8 log2_64(uint64 value)
{
    value |= value >> 1;
    value |= value >> 2;
    value |= value >> 4;
    value |= value >> 8;
    value |= value >> 16;
    value |= value >> 32;
    return tab64[((uint64)((value - (value >> 1))*0x07EDD5E59A4E28C2)) >> 58];
}

uint64 fnv_1(const char *data, uint64 length) {
    uint64 hash = 0xcbf29ce484222325UL;
    for (uint64 i = 0; i < length; i++) {
        hash ^= data[i];
        hash *= 0x100000001b3UL;
    }
    return hash;
}

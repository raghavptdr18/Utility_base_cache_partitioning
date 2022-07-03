/* CS204 - Project
Dated - 12 May 2022
Computer Architecture and Organization
    Submitted By -
    Abhay Shukralia (2020csb1061)
    Raghav Patidar (2020csb1115)
    Rohan Khanna (2020csb1117)
    Vibhav Goriya (2020csb1139)
    Vijay Dwivedi (2020csb1140) */

#include "champsim.h"
#include "instruction.h"
#include "set.h"

class ATD
{
public:
    uint64_t tag;
    uint8_t valid;
    int counter;
    uint8_t lru;
    ATD()
    {
        tag = 0;
        valid = 0;
        counter = 0;
        lru = 16;
    }
};


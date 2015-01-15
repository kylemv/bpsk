#ifndef BPSK_IMPL_H
#define BPSK_IMPL_H

#include "BPSK_base.h"
#include <liquid/liquid.h>
#include <stdio.h>
#include <complex>

class BPSK_i : public BPSK_base
{
    ENABLE_LOGGING
    public:
        BPSK_i(const char *uuid, const char *label);
        ~BPSK_i();
        int serviceFunction();
    private:
        void createModem(void);
        void sizeVectors(void);
        modem bpsk_modem;
        BULKIO::StreamSRI m_sriOut;
        double m_delta;
};

#endif // BPSK_IMPL_H

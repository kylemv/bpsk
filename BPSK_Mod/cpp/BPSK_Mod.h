#ifndef BPSK_MOD_IMPL_H
#define BPSK_MOD_IMPL_H

#include "BPSK_Mod_base.h"
#include <liquid/liquid.h>

class BPSK_Mod_i : public BPSK_Mod_base
{
    ENABLE_LOGGING
    public:
        BPSK_Mod_i(const char *uuid, const char *label);
        ~BPSK_Mod_i();
        int serviceFunction();
    private:
        void createModem();
        modem bpsk_mod;
        BULKIO::StreamSRI m_sriOut;
        double m_delta;
};

#endif // BPSK_MOD_IMPL_H

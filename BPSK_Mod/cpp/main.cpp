#include <iostream>
#include "ossie/ossieSupport.h"

#include "BPSK_Mod.h"
int main(int argc, char* argv[])
{
    BPSK_Mod_i* BPSK_Mod_servant;
    Resource_impl::start_component(BPSK_Mod_servant, argc, argv);
    return 0;
}


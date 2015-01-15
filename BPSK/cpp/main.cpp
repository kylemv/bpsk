#include <iostream>
#include "ossie/ossieSupport.h"

#include "BPSK.h"
int main(int argc, char* argv[])
{
    BPSK_i* BPSK_servant;
    Resource_impl::start_component(BPSK_servant, argc, argv);
    return 0;
}


#ifndef BPSK_MOD_IMPL_BASE_H
#define BPSK_MOD_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Resource_impl.h>
#include <ossie/ThreadedComponent.h>

#include <bulkio/bulkio.h>

class BPSK_Mod_base : public Resource_impl, protected ThreadedComponent
{
    public:
        BPSK_Mod_base(const char *uuid, const char *label);
        ~BPSK_Mod_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();

    protected:

        // Ports
        bulkio::InULongPort *dataLong_in;
        bulkio::OutFloatPort *dataFloat_out;

    private:
};
#endif // BPSK_MOD_IMPL_BASE_H

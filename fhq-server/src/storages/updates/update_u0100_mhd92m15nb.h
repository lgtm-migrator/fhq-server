#ifndef UPDATE_U0100_MHD92M15NB_H
#define UPDATE_U0100_MHD92M15NB_H

#include <storages.h>

class Update_u0100_mhd92m15nb : public StorageUpdateBase {
    public:
        Update_u0100_mhd92m15nb();
        virtual bool custom(Storage *pStorage, StorageConnection *pConn, std::string &error);
};

#endif // UPDATE_U0100_MHD92M15NB_H
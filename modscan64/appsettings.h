#ifndef APPSETTINGS_H
#define APPSETTINGS_H

#include "enums.h"
#include "connectiondetails.h"

class AppSettings
{
public:
    AppSettings();

    DataDisplayMode DataDisplayMode;
    ConnectionDetails ConnectionDetails;
};

#endif // APPSETTINGS_H

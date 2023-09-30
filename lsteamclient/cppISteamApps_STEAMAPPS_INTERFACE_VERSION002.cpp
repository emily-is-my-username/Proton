/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION002.h"

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
}


#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_123a/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_123a
#include "struct_converters.h"
#include "cppISteamUtils_SteamUtils005.h"

struct cppISteamUtils_SteamUtils005
{
#ifdef __cplusplus
    virtual uint32_t GetSecondsSinceAppActive(  ) = 0;
    virtual uint32_t GetSecondsSinceComputerActive(  ) = 0;
    virtual uint32_t GetConnectedUniverse(  ) = 0;
    virtual uint32_t GetServerRealTime(  ) = 0;
    virtual const char * GetIPCountry(  ) = 0;
    virtual bool GetImageSize( int32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetImageRGBA( int32_t, uint8_t *, int32_t ) = 0;
    virtual bool GetCSERIPPort( uint32_t *, uint16_t * ) = 0;
    virtual uint8_t GetCurrentBatteryPower(  ) = 0;
    virtual uint32_t GetAppID(  ) = 0;
    virtual void SetOverlayNotificationPosition( uint32_t ) = 0;
    virtual bool IsAPICallCompleted( uint64_t, bool * ) = 0;
    virtual uint32_t GetAPICallFailureReason( uint64_t ) = 0;
    virtual bool GetAPICallResult( uint64_t, void *, int32_t, int32_t, bool * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*)(int32_t, const char *) ) = 0;
    virtual bool IsOverlayEnabled(  ) = 0;
    virtual bool BOverlayNeedsPresent(  ) = 0;
    virtual uint64_t CheckFileSignature( const char * ) = 0;
    virtual bool ShowGamepadTextInput( uint32_t, uint32_t, const char *, uint32_t ) = 0;
    virtual uint32_t GetEnteredGamepadTextLength(  ) = 0;
    virtual bool GetEnteredGamepadTextInput( char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils005_GetConnectedUniverse( struct cppISteamUtils_SteamUtils005_GetConnectedUniverse_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils005_GetServerRealTime( struct cppISteamUtils_SteamUtils005_GetServerRealTime_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils005_GetIPCountry( struct cppISteamUtils_SteamUtils005_GetIPCountry_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils005_GetImageSize( struct cppISteamUtils_SteamUtils005_GetImageSize_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
}

void cppISteamUtils_SteamUtils005_GetImageRGBA( struct cppISteamUtils_SteamUtils005_GetImageRGBA_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils005_GetCSERIPPort( struct cppISteamUtils_SteamUtils005_GetCSERIPPort_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
}

void cppISteamUtils_SteamUtils005_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils005_GetCurrentBatteryPower_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils005_GetAppID( struct cppISteamUtils_SteamUtils005_GetAppID_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
}

void cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils005_IsAPICallCompleted( struct cppISteamUtils_SteamUtils005_IsAPICallCompleted_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
}

void cppISteamUtils_SteamUtils005_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils005_GetAPICallFailureReason_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
}

void cppISteamUtils_SteamUtils005_GetAPICallResult( struct cppISteamUtils_SteamUtils005_GetAPICallResult_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, params->pCallback, params->cubCallback, params->iCallbackExpected, params->pbFailed );
}

void cppISteamUtils_SteamUtils005_RunFrame( struct cppISteamUtils_SteamUtils005_RunFrame_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamUtils_SteamUtils005_GetIPCCallCount( struct cppISteamUtils_SteamUtils005_GetIPCCallCount_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamUtils_SteamUtils005_SetWarningMessageHook( struct cppISteamUtils_SteamUtils005_SetWarningMessageHook_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    void (*U_CDECL lin_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( lin_pFunction );
}

void cppISteamUtils_SteamUtils005_IsOverlayEnabled( struct cppISteamUtils_SteamUtils005_IsOverlayEnabled_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->IsOverlayEnabled(  );
}

void cppISteamUtils_SteamUtils005_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils005_BOverlayNeedsPresent_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->BOverlayNeedsPresent(  );
}

void cppISteamUtils_SteamUtils005_CheckFileSignature( struct cppISteamUtils_SteamUtils005_CheckFileSignature_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->CheckFileSignature( params->szFileName );
}

void cppISteamUtils_SteamUtils005_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils005_ShowGamepadTextInput_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->ShowGamepadTextInput( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax );
}

void cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextLength(  );
}

void cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput_params *params )
{
    struct cppISteamUtils_SteamUtils005 *iface = (struct cppISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextInput( params->pchText, params->cchText );
}

#ifdef __cplusplus
}
#endif

#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.14/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_010.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize(void *linux_side, uint32_t *pnWidth, uint32_t *pnHeight)
{
    ((IVRSystem*)linux_side)->GetRecommendedRenderTargetSize((uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

HmdMatrix44_t cppIVRSystem_IVRSystem_010_GetProjectionMatrix(void *linux_side, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    HmdMatrix44_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetProjectionMatrix((vr::EVREye)eEye, (float)fNearZ, (float)fFarZ, (vr::EGraphicsAPIConvention)eProjType);
    return _ret;
}

void cppIVRSystem_IVRSystem_010_GetProjectionRaw(void *linux_side, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    ((IVRSystem*)linux_side)->GetProjectionRaw((vr::EVREye)eEye, (float *)pfLeft, (float *)pfRight, (float *)pfTop, (float *)pfBottom);
}

DistortionCoordinates_t cppIVRSystem_IVRSystem_010_ComputeDistortion(void *linux_side, EVREye eEye, float fU, float fV)
{
    DistortionCoordinates_t _ret;
    _ret = ((IVRSystem*)linux_side)->ComputeDistortion((vr::EVREye)eEye, (float)fU, (float)fV);
    return _ret;
}

HmdMatrix34_t cppIVRSystem_IVRSystem_010_GetEyeToHeadTransform(void *linux_side, EVREye eEye)
{
    HmdMatrix34_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetEyeToHeadTransform((vr::EVREye)eEye);
    return _ret;
}

bool cppIVRSystem_IVRSystem_010_GetTimeSinceLastVsync(void *linux_side, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->GetTimeSinceLastVsync((float *)pfSecondsSinceLastVsync, (uint64_t *)pulFrameCounter);
    return _ret;
}

int32_t cppIVRSystem_IVRSystem_010_GetD3D9AdapterIndex(void *linux_side)
{
    int32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetD3D9AdapterIndex();
    return _ret;
}

void cppIVRSystem_IVRSystem_010_GetDXGIOutputInfo(void *linux_side, int32_t *pnAdapterIndex)
{
    ((IVRSystem*)linux_side)->GetDXGIOutputInfo((int32_t *)pnAdapterIndex);
}

bool cppIVRSystem_IVRSystem_010_IsDisplayOnDesktop(void *linux_side)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->IsDisplayOnDesktop();
    return _ret;
}

bool cppIVRSystem_IVRSystem_010_SetDisplayVisibility(void *linux_side, bool bIsVisibleOnDesktop)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->SetDisplayVisibility((bool)bIsVisibleOnDesktop);
    return _ret;
}

void cppIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose(void *linux_side, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    ((IVRSystem*)linux_side)->GetDeviceToAbsoluteTrackingPose((vr::ETrackingUniverseOrigin)eOrigin, (float)fPredictedSecondsToPhotonsFromNow, (vr::TrackedDevicePose_t *)pTrackedDevicePoseArray, (uint32_t)unTrackedDevicePoseArrayCount);
}

void cppIVRSystem_IVRSystem_010_ResetSeatedZeroPose(void *linux_side)
{
    ((IVRSystem*)linux_side)->ResetSeatedZeroPose();
}

HmdMatrix34_t cppIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *linux_side)
{
    HmdMatrix34_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
    return _ret;
}

HmdMatrix34_t cppIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *linux_side)
{
    HmdMatrix34_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetRawZeroPoseToStandingAbsoluteTrackingPose();
    return _ret;
}

uint32_t cppIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass(void *linux_side, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetSortedTrackedDeviceIndicesOfClass((vr::ETrackedDeviceClass)eTrackedDeviceClass, (vr::TrackedDeviceIndex_t *)punTrackedDeviceIndexArray, (uint32_t)unTrackedDeviceIndexArrayCount, (vr::TrackedDeviceIndex_t)unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel cppIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel(void *linux_side, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    _ret = ((IVRSystem*)linux_side)->GetTrackedDeviceActivityLevel((vr::TrackedDeviceIndex_t)unDeviceId);
    return _ret;
}

void cppIVRSystem_IVRSystem_010_ApplyTransform(void *linux_side, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    ((IVRSystem*)linux_side)->ApplyTransform((vr::TrackedDevicePose_t *)pOutputPose, (const vr::TrackedDevicePose_t *)pTrackedDevicePose, (const vr::HmdMatrix34_t *)pTransform);
}

TrackedDeviceIndex_t cppIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole(void *linux_side, ETrackedControllerRole unDeviceType)
{
    TrackedDeviceIndex_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetTrackedDeviceIndexForControllerRole((vr::ETrackedControllerRole)unDeviceType);
    return _ret;
}

ETrackedControllerRole cppIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedControllerRole _ret;
    _ret = ((IVRSystem*)linux_side)->GetControllerRoleForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)unDeviceIndex);
    return _ret;
}

ETrackedDeviceClass cppIVRSystem_IVRSystem_010_GetTrackedDeviceClass(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    _ret = ((IVRSystem*)linux_side)->GetTrackedDeviceClass((vr::TrackedDeviceIndex_t)unDeviceIndex);
    return _ret;
}

bool cppIVRSystem_IVRSystem_010_IsTrackedDeviceConnected(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->IsTrackedDeviceConnected((vr::TrackedDeviceIndex_t)unDeviceIndex);
    return _ret;
}

bool cppIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->GetBoolTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
    return _ret;
}

float cppIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    _ret = ((IVRSystem*)linux_side)->GetFloatTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
    return _ret;
}

int32_t cppIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetInt32TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
    return _ret;
}

uint64_t cppIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetUint64TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
    return _ret;
}

HmdMatrix34_t cppIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    HmdMatrix34_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetMatrix34TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
    return _ret;
}

uint32_t cppIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetStringTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (char *)pchValue, (uint32_t)unBufferSize, (vr::ETrackedPropertyError *)pError);
    return _ret;
}

const char * cppIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum(void *linux_side, ETrackedPropertyError error)
{
    const char *_ret;
    _ret = ((IVRSystem*)linux_side)->GetPropErrorNameFromEnum((vr::ETrackedPropertyError)error);
    return _ret;
}

bool cppIVRSystem_IVRSystem_010_PollNextEvent(void *linux_side, VREvent_t *pEvent)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->PollNextEvent((vr::VREvent_t *)pEvent);
    return _ret;
}

bool cppIVRSystem_IVRSystem_010_PollNextEventWithPose(void *linux_side, ETrackingUniverseOrigin eOrigin, VREvent_t *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->PollNextEventWithPose((vr::ETrackingUniverseOrigin)eOrigin, (vr::VREvent_t *)pEvent, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
    return _ret;
}

const char * cppIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum(void *linux_side, EVREventType eType)
{
    const char *_ret;
    _ret = ((IVRSystem*)linux_side)->GetEventTypeNameFromEnum((vr::EVREventType)eType);
    return _ret;
}

HiddenAreaMesh_t cppIVRSystem_IVRSystem_010_GetHiddenAreaMesh(void *linux_side, EVREye eEye)
{
    HiddenAreaMesh_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetHiddenAreaMesh((vr::EVREye)eEye);
    return _ret;
}

bool cppIVRSystem_IVRSystem_010_GetControllerState(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0914 *pControllerState)
{
    bool _ret;
    VRControllerState001_t lin;
    if(pControllerState)
        struct_VRControllerState001_t_0914_win_to_lin(pControllerState, &lin);
    _ret = ((IVRSystem*)linux_side)->GetControllerState((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin : nullptr);
    if(pControllerState)
        struct_VRControllerState001_t_0914_lin_to_win(&lin, pControllerState, -1);
    return _ret;
}

bool cppIVRSystem_IVRSystem_010_GetControllerStateWithPose(void *linux_side, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0914 *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    VRControllerState001_t lin;
    if(pControllerState)
        struct_VRControllerState001_t_0914_win_to_lin(pControllerState, &lin);
    _ret = ((IVRSystem*)linux_side)->GetControllerStateWithPose((vr::ETrackingUniverseOrigin)eOrigin, (vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin : nullptr, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
    if(pControllerState)
        struct_VRControllerState001_t_0914_lin_to_win(&lin, pControllerState, -1);
    return _ret;
}

void cppIVRSystem_IVRSystem_010_TriggerHapticPulse(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    ((IVRSystem*)linux_side)->TriggerHapticPulse((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, (uint32_t)unAxisId, (unsigned short)usDurationMicroSec);
}

const char * cppIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum(void *linux_side, EVRButtonId eButtonId)
{
    const char *_ret;
    _ret = ((IVRSystem*)linux_side)->GetButtonIdNameFromEnum((vr::EVRButtonId)eButtonId);
    return _ret;
}

const char * cppIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum(void *linux_side, EVRControllerAxisType eAxisType)
{
    const char *_ret;
    _ret = ((IVRSystem*)linux_side)->GetControllerAxisTypeNameFromEnum((vr::EVRControllerAxisType)eAxisType);
    return _ret;
}

bool cppIVRSystem_IVRSystem_010_CaptureInputFocus(void *linux_side)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->CaptureInputFocus();
    return _ret;
}

void cppIVRSystem_IVRSystem_010_ReleaseInputFocus(void *linux_side)
{
    ((IVRSystem*)linux_side)->ReleaseInputFocus();
}

bool cppIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess(void *linux_side)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->IsInputFocusCapturedByAnotherProcess();
    return _ret;
}

uint32_t cppIVRSystem_IVRSystem_010_DriverDebugRequest(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    _ret = ((IVRSystem*)linux_side)->DriverDebugRequest((vr::TrackedDeviceIndex_t)unDeviceIndex, (const char *)pchRequest, (char *)pchResponseBuffer, (uint32_t)unResponseBufferSize);
    return _ret;
}

EVRFirmwareError cppIVRSystem_IVRSystem_010_PerformFirmwareUpdate(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    _ret = ((IVRSystem*)linux_side)->PerformFirmwareUpdate((vr::TrackedDeviceIndex_t)unDeviceIndex);
    return _ret;
}

void cppIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting(void *linux_side)
{
    ((IVRSystem*)linux_side)->AcknowledgeQuit_Exiting();
}

void cppIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt(void *linux_side)
{
    ((IVRSystem*)linux_side)->AcknowledgeQuit_UserPrompt();
}

void cppIVRSystem_IVRSystem_010_PerformanceTestEnableCapture(void *linux_side, bool bEnable)
{
    ((IVRSystem*)linux_side)->PerformanceTestEnableCapture((bool)bEnable);
}

void cppIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange(void *linux_side, int nFidelityLevel)
{
    ((IVRSystem*)linux_side)->PerformanceTestReportFidelityLevelChange((int)nFidelityLevel);
}

#ifdef __cplusplus
}
#endif

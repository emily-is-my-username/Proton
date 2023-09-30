/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamFriends_SteamFriends013.h"

void cppISteamFriends_SteamFriends013_GetPersonaName( struct cppISteamFriends_SteamFriends013_GetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends013_SetPersonaName( struct cppISteamFriends_SteamFriends013_SetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->SetPersonaName( params->pchPersonaName );
}

void cppISteamFriends_SteamFriends013_GetPersonaState( struct cppISteamFriends_SteamFriends013_GetPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends013_GetFriendCount( struct cppISteamFriends_SteamFriends013_GetFriendCount_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
}

void cppISteamFriends_SteamFriends013_GetFriendByIndex( struct cppISteamFriends_SteamFriends013_GetFriendByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends013_GetFriendRelationship( struct cppISteamFriends_SteamFriends013_GetFriendRelationship_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends013_GetFriendPersonaState( struct cppISteamFriends_SteamFriends013_GetFriendPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends013_GetFriendPersonaName( struct cppISteamFriends_SteamFriends013_GetFriendPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends013_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends013_GetFriendGamePlayed_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
}

void cppISteamFriends_SteamFriends013_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends013_GetFriendPersonaNameHistory_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
}

void cppISteamFriends_SteamFriends013_HasFriend( struct cppISteamFriends_SteamFriends013_HasFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends013_GetClanCount( struct cppISteamFriends_SteamFriends013_GetClanCount_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
}

void cppISteamFriends_SteamFriends013_GetClanByIndex( struct cppISteamFriends_SteamFriends013_GetClanByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
}

void cppISteamFriends_SteamFriends013_GetClanName( struct cppISteamFriends_SteamFriends013_GetClanName_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
}

void cppISteamFriends_SteamFriends013_GetClanTag( struct cppISteamFriends_SteamFriends013_GetClanTag_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
}

void cppISteamFriends_SteamFriends013_GetClanActivityCounts( struct cppISteamFriends_SteamFriends013_GetClanActivityCounts_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanActivityCounts( params->steamIDClan, params->pnOnline, params->pnInGame, params->pnChatting );
}

void cppISteamFriends_SteamFriends013_DownloadClanActivityCounts( struct cppISteamFriends_SteamFriends013_DownloadClanActivityCounts_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->DownloadClanActivityCounts( params->psteamIDClans, params->cClansToRequest );
}

void cppISteamFriends_SteamFriends013_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends013_GetFriendCountFromSource_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
}

void cppISteamFriends_SteamFriends013_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends013_GetFriendFromSourceByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
}

void cppISteamFriends_SteamFriends013_IsUserInSource( struct cppISteamFriends_SteamFriends013_IsUserInSource_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
}

void cppISteamFriends_SteamFriends013_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends013_SetInGameVoiceSpeaking_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
}

void cppISteamFriends_SteamFriends013_ActivateGameOverlay( struct cppISteamFriends_SteamFriends013_ActivateGameOverlay_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
}

void cppISteamFriends_SteamFriends013_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends013_ActivateGameOverlayToUser_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
}

void cppISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->ActivateGameOverlayToWebPage( params->pchURL );
}

void cppISteamFriends_SteamFriends013_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends013_ActivateGameOverlayToStore_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID, params->eFlag );
}

void cppISteamFriends_SteamFriends013_SetPlayedWith( struct cppISteamFriends_SteamFriends013_SetPlayedWith_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
}

void cppISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
}

void cppISteamFriends_SteamFriends013_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends013_GetSmallFriendAvatar_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetSmallFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends013_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends013_GetMediumFriendAvatar_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetMediumFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends013_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends013_GetLargeFriendAvatar_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetLargeFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends013_RequestUserInformation( struct cppISteamFriends_SteamFriends013_RequestUserInformation_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->RequestUserInformation( params->steamIDUser, params->bRequireNameOnly );
}

void cppISteamFriends_SteamFriends013_RequestClanOfficerList( struct cppISteamFriends_SteamFriends013_RequestClanOfficerList_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->RequestClanOfficerList( params->steamIDClan );
}

void cppISteamFriends_SteamFriends013_GetClanOwner( struct cppISteamFriends_SteamFriends013_GetClanOwner_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetClanOwner( params->steamIDClan );
}

void cppISteamFriends_SteamFriends013_GetClanOfficerCount( struct cppISteamFriends_SteamFriends013_GetClanOfficerCount_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanOfficerCount( params->steamIDClan );
}

void cppISteamFriends_SteamFriends013_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends013_GetClanOfficerByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetClanOfficerByIndex( params->steamIDClan, params->iOfficer );
}

void cppISteamFriends_SteamFriends013_GetUserRestrictions( struct cppISteamFriends_SteamFriends013_GetUserRestrictions_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetUserRestrictions(  );
}

void cppISteamFriends_SteamFriends013_SetRichPresence( struct cppISteamFriends_SteamFriends013_SetRichPresence_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->SetRichPresence( params->pchKey, params->pchValue );
}

void cppISteamFriends_SteamFriends013_ClearRichPresence( struct cppISteamFriends_SteamFriends013_ClearRichPresence_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->ClearRichPresence(  );
}

void cppISteamFriends_SteamFriends013_GetFriendRichPresence( struct cppISteamFriends_SteamFriends013_GetFriendRichPresence_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresence( params->steamIDFriend, params->pchKey );
}

void cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyCount( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyByIndex( params->steamIDFriend, params->iKey );
}

void cppISteamFriends_SteamFriends013_RequestFriendRichPresence( struct cppISteamFriends_SteamFriends013_RequestFriendRichPresence_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->RequestFriendRichPresence( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends013_InviteUserToGame( struct cppISteamFriends_SteamFriends013_InviteUserToGame_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->InviteUserToGame( params->steamIDFriend, params->pchConnectString );
}

void cppISteamFriends_SteamFriends013_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends013_GetCoplayFriendCount_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetCoplayFriendCount(  );
}

void cppISteamFriends_SteamFriends013_GetCoplayFriend( struct cppISteamFriends_SteamFriends013_GetCoplayFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetCoplayFriend( params->iCoplayFriend );
}

void cppISteamFriends_SteamFriends013_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends013_GetFriendCoplayTime_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayTime( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends013_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends013_GetFriendCoplayGame_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayGame( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends013_JoinClanChatRoom( struct cppISteamFriends_SteamFriends013_JoinClanChatRoom_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->JoinClanChatRoom( params->steamIDClan );
}

void cppISteamFriends_SteamFriends013_LeaveClanChatRoom( struct cppISteamFriends_SteamFriends013_LeaveClanChatRoom_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->LeaveClanChatRoom( params->steamIDClan );
}

void cppISteamFriends_SteamFriends013_GetClanChatMemberCount( struct cppISteamFriends_SteamFriends013_GetClanChatMemberCount_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanChatMemberCount( params->steamIDClan );
}

void cppISteamFriends_SteamFriends013_GetChatMemberByIndex( struct cppISteamFriends_SteamFriends013_GetChatMemberByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetChatMemberByIndex( params->steamIDClan, params->iUser );
}

void cppISteamFriends_SteamFriends013_SendClanChatMessage( struct cppISteamFriends_SteamFriends013_SendClanChatMessage_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->SendClanChatMessage( params->steamIDClanChat, params->pchText );
}

void cppISteamFriends_SteamFriends013_GetClanChatMessage( struct cppISteamFriends_SteamFriends013_GetClanChatMessage_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanChatMessage( params->steamIDClanChat, params->iMessage, params->prgchText, params->cchTextMax, params->_e, params->_f );
}

void cppISteamFriends_SteamFriends013_IsClanChatAdmin( struct cppISteamFriends_SteamFriends013_IsClanChatAdmin_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->IsClanChatAdmin( params->steamIDClanChat, params->steamIDUser );
}

void cppISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam( struct cppISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->IsClanChatWindowOpenInSteam( params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends013_OpenClanChatWindowInSteam( struct cppISteamFriends_SteamFriends013_OpenClanChatWindowInSteam_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->OpenClanChatWindowInSteam( params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends013_CloseClanChatWindowInSteam( struct cppISteamFriends_SteamFriends013_CloseClanChatWindowInSteam_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->CloseClanChatWindowInSteam( params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends013_SetListenForFriendsMessages( struct cppISteamFriends_SteamFriends013_SetListenForFriendsMessages_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->SetListenForFriendsMessages( params->bInterceptEnabled );
}

void cppISteamFriends_SteamFriends013_ReplyToFriendMessage( struct cppISteamFriends_SteamFriends013_ReplyToFriendMessage_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->ReplyToFriendMessage( params->steamIDFriend, params->pchMsgToSend );
}

void cppISteamFriends_SteamFriends013_GetFriendMessage( struct cppISteamFriends_SteamFriends013_GetFriendMessage_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendMessage( params->steamIDFriend, params->iMessageID, params->pvData, params->cubData, params->peChatEntryType );
}

void cppISteamFriends_SteamFriends013_GetFollowerCount( struct cppISteamFriends_SteamFriends013_GetFollowerCount_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFollowerCount( params->steamID );
}

void cppISteamFriends_SteamFriends013_IsFollowing( struct cppISteamFriends_SteamFriends013_IsFollowing_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->IsFollowing( params->steamID );
}

void cppISteamFriends_SteamFriends013_EnumerateFollowingList( struct cppISteamFriends_SteamFriends013_EnumerateFollowingList_params *params )
{
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->EnumerateFollowingList( params->unStartIndex );
}


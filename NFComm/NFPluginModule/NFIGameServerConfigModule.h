// -------------------------------------------------------------------------
//    @FileName         ��    NFIGameServerConfigModule.h
//    @Author           ��    LvSheng.Huang
//    @Date             ��    2013-04-16
//    @Module           ��    NFIGameServerConfigModule
//
// -------------------------------------------------------------------------

#ifndef NFI_GAMESERVER_CONFIG_MODULE_H
#define NFI_GAMESERVER_CONFIG_MODULE_H

#include <iostream>
#include "NFILogicModule.h"

class NFIGameServerConfigModule
    : public NFILogicModule
{
public:
    virtual bool AddSceneToActor(const int nSceneID, const int nGameServer) = 0;
    virtual int GetActorID(const int nSceneID) = 0;
};

#endif
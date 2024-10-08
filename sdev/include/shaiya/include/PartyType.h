#pragma once
#include "include/shaiya/common.h"

namespace shaiya
{
    enum struct PartyType : UINT8
    {
        None,
        Member,
        Leader
    };

    enum struct RaidPartyType : UINT32
    {
        Leader,
        SubLeader,
        Member,
        Default = UINT_MAX
    };
}

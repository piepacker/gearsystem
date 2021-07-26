/*
 * Gearsystem - Sega Master System / Game Gear Emulator
 * Copyright (C) 2013  Ignacio Sanchez

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/
 *
 */

#ifndef BOOTROMMEMORYRULE_H
#define	BOOTROMMEMORYRULE_H

#include "MemoryRule.h"

class BootromMemoryRule : public MemoryRule
{
public:
    BootromMemoryRule(Memory* pMemory, Cartridge* pCartridge, Input* pInput);
    virtual ~BootromMemoryRule();
    virtual u8 PerformRead(u16 address);
    virtual void PerformWrite(u16 address, u8 value);
    virtual void Reset();
    virtual u8* GetPage(int index);
    virtual int GetBank(int index);

private:
    int m_iMapperSlot[3];
    int m_iMapperSlotAddress[3];
    u8* m_pBootrom;
    u8* m_pBootromBanks;
    int m_iBankMax;
};

#endif	/* BOOTROMMEMORYRULE_H */

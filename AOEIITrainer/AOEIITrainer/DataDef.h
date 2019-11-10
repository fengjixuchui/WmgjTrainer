#pragma once

constexpr auto GAME_PROC_NAME = _T("age2_x1.exe");

enum UnitId
{
	HEROC = 0x239,			// ʥ����ʿ
	HEROI = 0x237,			// ���߽�ʿ
	UMOSU = 0x231,			// �����ɹ�������
	ULGBW = 0x212,			// ���񳤹���
	PARAM_ADDR = 0x795FF0	// ��Ų����ĵ�ַ
};

enum ResourceOffset
{
	RESO_BASE = 0x7912A0,
	RESO_OFFSET1 = 0x424,
	RESO_OFFSET2 = 0x4C,
	RESO_OFFSET3 = 0x4,
	RESO_OFFSET4 = 0xA8,
	FOOD_OFFSET = 0x0,
	WOOD_OFFSET = 0x4,
	STONE_OFFSET = 0x8,
	GOOD_OFFSET = 0xC,
	POPULATION_OFFSET = 0x2C
};

enum UnitOffset
{
	UNIT_BASE = 0x6B7190,
	UNIT_OFFSET1 = 0x107C,
	ID_OFFSET = 0x868,
	HP_OFFSET = 0x88C
};

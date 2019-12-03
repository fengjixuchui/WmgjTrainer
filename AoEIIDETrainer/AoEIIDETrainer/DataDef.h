#pragma once

constexpr auto GAME_PROC_NAME = _T("age2_x1.exe");

enum UnitId
{
	HEROC = 0x239,			// ʥ����ʿ
	UTKNI = 0x22A,			// ������ʿ
	UMOSU = 0x231,			// �����ɹ�������
	ULGBW = 0x212,			// ���񳤹���
	PARAM_ADDR = 0x0	// ��Ų����ĵ�ַ
};

constexpr auto BASE = 0x7FF69AC0F668;

enum BaseOffset
{
	OFFSET1 = 0xB8,
	OFFSET2 = 0xBBF0,
	OFFSET3 = 0xD0,
	OFFSET4 = 0x8,
	OFFSET5 = 0x168,
	OFFSET6 = 0x118,
	OFFSET7 = 0x18
};

enum ResourceOffset
{
	RESO_OFFSET1 = 0x68,
	FOOD_OFFSET = 0x0,
	WOOD_OFFSET = 0x4,
	STONE_OFFSET = 0x8,
	GOOD_OFFSET = 0xC,
	POPULATION_OFFSET = 0x2C
};

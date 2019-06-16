#pragma once

class CClientEntity
{
public:
	int type;
	int networkID;
	int UID;
	virtual CEntity* GetEntity() { return NULL; };
};

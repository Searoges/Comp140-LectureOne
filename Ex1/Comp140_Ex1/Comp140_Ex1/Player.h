#pragma once

class Player
{
public:
	Player();
	~Player();
/* ========================================================================
	Method Definition
	========================================================================
*/
	void SetHealth(int health);
	int GetHealth()
	{
		return mHealth;
	}


private:
	int mHealth; // member variable Health
protected:

};
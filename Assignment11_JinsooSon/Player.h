#pragma once
#include <iostream>
#include "Entity.h"
using namespace std;

class Player : public Entity
{
private:
	string m_username;
	string m_name;

public:
	// Default constructor
	Player();

	Player(const string& username, const string& name, const int& id);

	// Destructor - called when the object is out of scope
	~Player();

	const string& GetName();

	const string& GetUsername();

	void SetName(const string& name);

	// Overloaded methods (functions) need to have different parameter types
	void SetName(const string& name, const string& lastName);


	// Assignment Operator for our Player class
	const Player& operator=(const Player& player);
	virtual void Update();
};
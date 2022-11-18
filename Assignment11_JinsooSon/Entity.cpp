#include "Entity.h"

void Entity::Update()
{
}

Entity::Entity(int id)
{
	m_id = id;
}

int Entity::GetId()
{
	return m_id;
}

void Entity::SetId(int id)
{
	m_id = id;
}
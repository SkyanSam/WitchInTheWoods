#ifndef PLAYERMOVEMENT_H
#define PLAYERMOVEMENT_H

#include <godot_cpp/classes/character_body2d.hpp>

namespace godot {

class PlayerMovement : public CharacterBody2D {
	GDCLASS(PlayerMovement, CharacterBody2D)

private:
    Vector2 velocity;

protected:
	static void _bind_methods();

public:
    double speed;
	PlayerMovement();
	~PlayerMovement();

	void _process(double delta) override;
};

} //namespace godot

#endif

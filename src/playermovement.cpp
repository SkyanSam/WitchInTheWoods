#include "playermovement.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/input.hpp>

using namespace godot;

void PlayerMovement::_bind_methods() {
}

PlayerMovement::PlayerMovement() {
    // Initialize any variables here.
    speed = 500.0;
	velocity = Vector2::Vector2(0,0);
}

PlayerMovement::~PlayerMovement() {
	// Add your cleanup here.
}

void PlayerMovement::_process(double delta) {
    godot::Input* input_handler = godot::Input::get_singleton();
    
    velocity = Vector2::Vector2(0,0);
	if(input_handler->is_action_pressed("w")){
        velocity.y = -.5 * speed;
    }
    if(input_handler->is_action_pressed("a")){
        velocity.x = -.5 * speed;
    }
    if(input_handler->is_action_pressed("s")){
        velocity.y = .5 * speed;
    }
    if(input_handler->is_action_pressed("d")){
        velocity.x = .5 * speed;
    }
    set_velocity(velocity);
    move_and_slide();


    
}

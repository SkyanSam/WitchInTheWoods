extends Area2D
func  _ready():
	pass
var entered = false

func _on_Area2D_body_entered(body: PhysicsBody2D):
	entered = true


func _on_Area2D_body_exited(body):
	entered = false
	
func _process(delta):
	if entered == true:
		if Input.is_action_just_pressed("interact"):
			get_tree().change_scene_to_file("res://scenes/city.tscn")

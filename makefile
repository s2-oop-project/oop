test_add_material:
	g++ add_material_test.cpp  material.cpp add_material_function_list.cpp -o test
All:
	g++ main.cpp material.cpp user.cpp log_in.cpp choose_material.cpp user_behavior.cpp -o test

test_add_material:
	g++ add_material_test.cpp  material.cpp add_material_function_list.cpp -o test

All:
	g++ main.cpp material.cpp user.cpp log_in.cpp choose_material.cpp user_behavior.cpp -o test

test_user_setup :
	g++ material.cpp user.cpp user_setup_test.cpp choose_material.cpp -o test_user_setup

test_user_borrow_return_test :
	g++ user.cpp material.cpp user_borrow_return_test.cpp choose_material.cpp -o test_user_borrow_return_test

test_material :
	g++ material.cpp material_test.cpp -o test_material

test_material_borrow_return_checkhistory :
	g++ material.cpp material_borrow_return_checkhistory_test.cpp -o test_material_borrow_return_checkhistory

test_user_staff :
	g++ material.cpp user.cpp choose_material.cpp user_staff_test.cpp -o test_user_staff



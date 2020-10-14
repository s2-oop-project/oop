FLAGS = -std=c++11

All: main.cpp material.o user.o log_in.cpp choose_material.cpp user_behavior.cpp list_of_materials.cpp tests
	g++ main.cpp material.o user.o log_in.cpp choose_material.cpp user_behavior.cpp list_of_materials.cpp -o test $(FLAGS)

material.o: material.h material.cpp
	g++ -c material.cpp $(FLAGS)

user.o: user.h user.cpp
	g++ -c user.cpp $(FLAGS)


tests: test_user_setup test_user_borrow_return_test test_material test_material_borrow_return_checkhistory test_user_staff test_choose_material


test_user_setup: material.o user.o user_setup_test.cpp choose_material.cpp
	g++ material.o user.o user_setup_test.cpp choose_material.cpp -o test_user_setup $(FLAGS)


test_user_borrow_return_test: material.o user.o user_borrow_return_test.cpp choose_material.cpp
	g++ user.o material.o user_borrow_return_test.cpp choose_material.cpp -o test_user_borrow_return_test $(FLAGS)


test_material: material.o material_test.cpp
	g++ material.o material_test.cpp -o test_material


test_material_borrow_return_checkhistory: material.o material_borrow_return_checkhistory_test.cpp
	g++ material.o material_borrow_return_checkhistory_test.cpp -o test_material_borrow_return_checkhistory $(FLAGS)


test_user_staff: material.o user.o choose_material.cpp user_staff_test.cpp
	g++ material.o user.o choose_material.cpp user_staff_test.cpp -o test_user_staff $(FLAGS)

test_choose_material: material.o choose_material.cpp choose_material_test.cpp
	g++ material.o choose_material.cpp choose_material_test.cpp -o test_choose_material $(FLAGS)

test_log_in: user.o log_in.cpp log_in_test.cpp material.o choose_material.cpp
	g++ user.o log_in.cpp log_in_test.cpp material.o choose_material.cpp -o test_log_in $(FLAGS)
FLAGS = -std=c++11

All: main.cpp material.o user.o log_in.cpp choose_material.cpp user_behavior.cpp list_of_materials.cpp tests
	g++ main.cpp material.o user.o log_in.cpp choose_material.cpp user_behavior.cpp list_of_materials.cpp -o test $(FLAGS)

material.o: material.h material.cpp
	g++ -c material.cpp $(FLAGS)

user.o: user.h user.cpp
	g++ -c user.cpp $(FLAGS)


tests: test_user_setup test_user_borrow_return_test test_material test_material_borrow_return_checkhistory test_user_staff test_choose_material

material_unit_testing: material.o user.o material_unit_testing.cpp choose_material.cpp
	g++ material.o user.o material_unit_testing.cpp choose_material.cpp -o material_unit_testing $(FLAGS)

user_unit_testing: material.o user.o user_unit_testing.cpp choose_material.cpp
	g++ material.o user.o user_unit_testing.cpp choose_material.cpp -o user_unit_testing $(FLAGS)

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


inout_test:
	./test < input01.txt | diff - output01.txt
	./test < input02.txt | diff - output02.txt
	./test < input03.txt | diff - output03.txt
	./test < input04.txt | diff - output04.txt
	./test < input05.txt | diff - output05.txt
	./test < input06.txt | diff - output06.txt
	./test < input07.txt | diff - output07.txt
	./test < input08.txt | diff - output08.txt
	./test < input_user.txt | diff - output_user.txt
	./test < input_newuser.txt | diff - output_newuser.txt
	./test < input_staff.txt | diff - output_staff.txt
	./test < input.txt | diff - output.txt


OBJ=obj
BIN=bin

setup: 
	mkdir -p $(BIN) $(OBJ)

test_cfm_list_files: $(OBJ)/cfm_list_files.o 
	gcc $(OBJ)/cfm_list_files.o -o $(BIN)/test_cfm_list_files -L../build/ -lCFileManager

$(OBJ)/cfm_list_files.o: cfm_list_files.c
	gcc -c cfm_list_files.c -o $(OBJ)/cfm_list_files.o


all: setup test_cfm_list_files

run_tests: test_cfm_list_files
	./$(BIN)/test_cfm_list_files ..
	find .. -type d -o -type f -exec basename {} \; > test_cfm_list_files_system.txt
	diff test_cfm_list_files_system.txt test_cfm_list_files_output.txt


clean: 
	rm $(OBJ)/*.o $(BIN)/*
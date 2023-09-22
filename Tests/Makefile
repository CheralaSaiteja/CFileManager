OBJ=obj
BIN=bin

setup: 
	mkdir -p $(BIN) $(OBJ)

test_cfm_list_files: $(OBJ)/cfm_list_files.o 
	gcc $(OBJ)/cfm_list_files.o -o $(BIN)/test_cfm_list_files -L../build/ -lCFileManager

$(OBJ)/cfm_list_files.o: cfm_list_files.c
	gcc -c cfm_list_files.c -o $(OBJ)/cfm_list_files.o


all: setup test_cfm_list_files
clean: 
	rm $(OBJ)/*.o $(BIN)/*
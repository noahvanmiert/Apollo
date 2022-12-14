#
#   Made by Noah Van Miert
#   6/12/2022
#
#   Apollo Compiler
#

EXEC = apollo
SRC = src
SOURCES = $(wildcard $(SRC)/*.c $(SRC)/**/*.c $(SRC)/**/**/*.c)
OBJECTS = $(SOURCES:.c=.o)
FLAGS = -g -Wall -Wextra -Werror -pedantic
COMPILER = clang
BIN = bin


$(BIN)/$(EXEC): $(OBJECTS)
	$(COMPILER) $(FLAGS) $(OBJECTS) -o $(BIN)/$(EXEC)


run:
	./$(BIN)/$(EXEC) Examples/hello_world.apo


clean:
	rm $(BIN)/apollo
	rm $(SRC)/*.o
	rm $(SRC)/lexer/token/*.o
	rm $(SRC)/lexer/lexer.o
	rm $(SRC)/parser/ast/*.o
	rm $(SRC)/parser/*.o
	rm $(SRC)/compiler/*.o
	rm $(SRC)/parser/logging/*.o
	rm $(SRC)/apollo/*.o
	rm $(SRC)/scope/*.o
	rm $(SRC)/parser/variables/*.o
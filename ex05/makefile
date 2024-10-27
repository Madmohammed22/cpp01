SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
BIN = main
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++98

all: $(BIN)

$(BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(BIN) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BIN)

fclean: clean
	rm -f $(BIN)
run: $(BIN)
.PHONY: all clean
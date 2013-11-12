#=======================================================================
# Simulateur de Robot
#=======================================================================

INCL_DIR = ./include
INCL = -I$(INCL_DIR) 
DEFS =

CXX = g++ 
LDFLAGS=
CXXFLAGS = -g -Wall -std=c++11 

CXX_COMPILE = $(CXX) $(CXXFLAGS) $(INCL) $(DEFS)
CXX_LINK = $(CXX)

#-------------------------------------------------

EXEC = simulateur
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)
ALL = $(EXEC)

# targets
all: $(EXEC)

simulateur : $(OBJ)
	@$(CXX_LINK) -o $@ $^ $(LDFLAGS)

%.o :	%.cpp
	@$(CXX_COMPILE) -o $*.o -c $*.cpp

# Clean
clean :
	-rm -f src/*.o

mrproper: clean
	-rm  -rf $(EXEC)

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


# targets
all: $(EXEC)

$(EXEC):
	@(cd ..	&& $(MAKE))

clean :
	-rm -f *.o

mrproper: clean
	-rm  -rf $(EXEC)

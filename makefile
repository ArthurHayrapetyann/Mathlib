export EXE := ./bin/lib
export S_Files := $(wildcard src/*.cpp)
export O_Files := $(patsubst src/%.cpp, src/%.o, $(S_Files))
$(EXE) : $(O_Files)
	g++ $^ -o $@
	rm src/*.o
src/%.o : src/%.cpp
	g++ -c $^ -o $@
clean :
	rm src/*.o $(EXE)

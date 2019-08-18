CC=g++
STD=-std=c++17

prob:
	$(CC) $(STD) src/$(PROB).cpp -o bin/$(PROB)

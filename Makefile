bin/guesser: src/low_latency.cpp
	@mkdir -p bin
	@g++ $^ -o bin/low_latency

run: bin/guesser
	@bin/low_latency

make clean:
	rm -rf bin
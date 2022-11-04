#SOURCES := $(shell find build/*.c -exec echo {} +)

scaffold:
	mkdir -p build out
	cp -r src/* include/* build/

compile: scaffold
	$(eval $@_SOURCES := $(shell find build/*.c -exec echo {} +))
	xc8-cc -mcpu=18f4550 $($@_SOURCES) -o out/main

clean:
	rm -rf build out

all: clean compile
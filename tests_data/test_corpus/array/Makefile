
CXX ?= g++
CXXFLAGS ?= -g -Wall

ifneq (${VERBOSE},1)
MUTE := @
endif

all:
	${MUTE} ${CXX} ${CXXFLAGS} -Wl,-E -fPIC -shared -o lib.so example.cpp

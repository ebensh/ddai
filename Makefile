CC=clang
CXX=clang++
RM=rm -f
CPPFLAGS=-g -Wall -std=c++11
LDFLAGS=-g
LDLIBS=-L/usr/lib/x86_64-linux-gnu -lm -ldl

SRCS=main.cc monster.cc
OBJS=$(subst .cc,.o,$(SRCS))

all: main

main: $(OBJS)
	g++ $(LDFLAGS) -o main $(OBJS) $(LDLIBS)

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) *~ .dependmain

include .depend

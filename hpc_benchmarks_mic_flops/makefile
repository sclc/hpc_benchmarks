#CXX ?= mpiFCCpx

########at52, macbookpro
CC = gcc
CXX= g++ 
# FC="mpifrtpx" 
CFLAGS= -O -Wall
CXXFLAGS= -fopenmp -O2 -Wall 

LDFLAGS = -fopenmp


program_NAME := hpc_benchmarks_mic_flops 
program_C_SRCS := $(wildcard ./*.c)
program_CXX_SRCS := $(wildcard ./*.cpp)
program_C_OBJS := ${program_C_SRCS:.c=.o}
program_CXX_OBJS := ${program_CXX_SRCS:.cpp=.o}
program_OBJS := $(program_C_OBJS) $(program_CXX_OBJS)
#program_INCLUDE_DIRS := /usr/local/PETSc/3.4.3/include /usr/local/PETSc/3.4.3/include /opt/FJSVfxlang/GM-1.2.1-08/include/mpi/fujitsu
#program_LIBRARY_DIRS :=
#program_LIBRARIES :=


.PHONY: all clean distclean

all: $(program_NAME)

$(program_NAME): $(program_OBJS)
	$(CXX) $(program_OBJS) -o $(program_NAME) $(LDFLAGS)

clean:
	@- $(RM) $(program_NAME)
	@- $(RM) $(program_OBJS)

distclean: clean


PROJ_NAME = Hospital_record_system
TEST_PROJ_NAME=Test_$(PROJ_NAME)
CC=gcc

SRC=src/add_patient.c\
	src/bgrp.c\
	src/delete.c\
	src/diagnosis.c\
	src/display.c\
	src/doctor.c\
	src/edit.c\
	src/log.c\
	src/print.c\
	src/printname_pid.c\
	src/search.c
TEST_SRC=test/test.c\
unity/unity.c
INC_H=inc
INC_T=unity

ifdef OS
   RM = del /q
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
	  EXEC = out
   endif
endif


all:
	$(CC) -I$(INC_H) $(SRC) main.c -o $(PROJ_NAME).$(EXEC)

run: 
	./$(PROJ_NAME).$(EXEC)

clean:
	$(RM) *.$(EXEC)
	
	

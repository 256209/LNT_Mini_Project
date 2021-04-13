PROJ_NAME = Hospital_record_system
# Output directory
BUILD = build


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
.PHONY: run clean test doc all
ifdef OS
   RM = del /q
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
	  EXEC = out
   endif
endif
TEST_OUTPUT = $(BUILD)/Test_$(PROJ_NAME).$(EXEC)
PROJECT_OUTPUT = $(BUILD)/$(PROJ_NAME).$(EXEC)

all:$(BUILD)
	$(CC) -I$(INC_H) $(SRC) main.c -o $(PROJECT_OUTPUT)

run: 
	./$(PROJ_OUTPUT).$(EXEC)

test:$(BUILD)
	gcc $(SRC) $(TEST_SRC) -I$(INC_T) -I$(INC_H) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)
clean:
	$(RM) *.$(EXEC)
	

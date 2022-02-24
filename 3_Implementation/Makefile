#Name Of the project
PROJECT_NAME=ATM_MACHINE
TEST_PROJ_NAME = Test_$(PROJECT_NAME)

# Output directory
BUILD= build


#SOURCE PATH
VPATH = SRC INCLUDE

#All source code files
SRC = main.c\
src/atm.c

# All test source files
TEST_SRC = src/atm.c\
test/test_atm.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out


# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)


# Call run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

	runtest:$(PROJECT_NAME)
	./$(TEST_OUTPUT)

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)


$(BUILD):
	mkdir build


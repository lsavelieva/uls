NAME = uls

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

INC = uls.h

INCS = $(addprefix inc/, $(INC))

LIB = libmx
LIBA := $(LIB)/libmx.a

SRC = main.c \

SRCS = $(addprefix src/, $(SRC))

OBJ = $(SRC:%.c=%.o)

all: install

install:
	@make install -sC $(LIB)
	@clang $(CFLAGS) -c $(SRCS) -I $(INCS)
	@clang $(CFLAGS) $(OBJ) $(LIBA) -o $(NAME)
	@mkdir -p obj
	@mv $(OBJ) obj

uninstall: clean
	@rm -rf $(NAME)
	@make uninstall -sC $(LIB)

clean:
	@make clean -sC $(LIB)
	@rm -rf $(OBJ)
	@rm -rf obj

reinstall: uninstall install

test:
	@clang $(CFLAGS) -c $(SRCS) -I $(INCS)
	@clang $(CFLAGS) $(OBJ) $(LIBA) -o $(NAME)
	@mkdir -p obj
	@mv $(OBJ) obj

source = $(patsubst %.c,%.out,$(wildcard *.c))
path = ./out
all: $(source)
	@echo "Compilation Completed"
%.out:%.c
	gcc $< -o $(path)/$@
clean:
	-rm $(path)/*.out
	

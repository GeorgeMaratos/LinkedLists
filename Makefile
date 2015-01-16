make: main.c lFunctions.c
	gcc main.c lFunctions.c -o debugger

clean: debugger
	rm debugger

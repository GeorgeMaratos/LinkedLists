make: main.c lFunctions.c dFunctions.c
	gcc main.c lFunctions.c dFunctions.c -o debugger

clean: debugger
	rm debugger

bin = list
obj = main.o
obj2 = stack.o
cc = g++

$(bin): $(obj) $(obj2)
	$(cc) $(obj) $(obj2) -o $(bin)

.cpp.o:
	$(cc) -c $<

clean:
	rm *.o $(bin)

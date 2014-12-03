bin = list
obj = main.o
obj2 = queue.o
obj3 = stack.o
cc = g++

$(bin): $(obj) $(obj2) $(obj3)
	$(cc) $(obj) $(obj2) $(obj3) -o $(bin)

.cpp.o:
	$(cc) -c $<

clean:
	rm *.o $(bin)

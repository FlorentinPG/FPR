# Creamos las reglas
# Regla que permite obtener el programa principal

DIR1 = ../src
DIR2 = ../include
COMP = g++
CFLAGS = -I$(DIR2) -std=c++14 -g

all: programa

programa: $(DIR1)/main.o $(DIR1)/null_function.o $(DIR1)/succesor_function.o $(DIR1)/projection_function.o $(DIR1)/addition_function.o $(DIR1)/product_function.o $(DIR1)/power_function.o
	$(COMP) -o power  $(DIR1)/main.o $(DIR1)/null_function.o $(DIR1)/succesor_function.o $(DIR1)/projection_function.o $(DIR1)/addition_function.o $(DIR1)/product_function.o $(DIR1)/power_function.o
$(DIR1)/null_function.o: $(DIR1)/null_function.cpp $(DIR2)/null_function.hpp $(DIR2)/fpr.hpp
	$(COMP) -c -o $@ $< $(CFLAGS)

$(DIR1)/succesor_function.o: $(DIR1)/succesor_function.cpp $(DIR2)/succesor_function.hpp $(DIR2)/fpr.hpp
	$(COMP) -c -o $@ $< $(CFLAGS)

$(DIR1)/projection_function.o: $(DIR1)/projection_function.cpp $(DIR2)/projection_function.hpp $(DIR2)/fpr.hpp
	$(COMP) -c -o $@ $< $(CFLAGS)

$(DIR1)/addition_function.o: $(DIR1)/addition_function.cpp $(DIR2)/addition_function.hpp $(DIR2)/succesor_function.hpp $(DIR2)/projection_function.hpp
	$(COMP) -c -o $@ $< $(CFLAGS)

$(DIR1)/product_function.o: $(DIR1)/product_function.cpp $(DIR2)/product_function.hpp $(DIR2)/addition_function.hpp $(DIR2)/null_function.hpp
	$(COMP) -c -o $@ $< $(CFLAGS)

$(DIR1)/power_function.o: $(DIR1)/power_function.cpp $(DIR2)/power_function.hpp $(DIR2)/product_function.hpp
	$(COMP) -c -o $@ $< $(CFLAGS)

$(DIR1)/main.o: $(DIR1)/main.cpp $(DIR2)/power_function.hpp
	$(COMP) -c -o $@ $< $(CFLAGS)	

clean: 
	rm -f programa $(DIR1)/*.o
JAVA=/usr/bin/java
OUTPUT=output
GENERATED=generated
GRAMMAR=modelica.g4
# here is where you plug in the runtime for your OS
RUNTIME=/usr/include
CC=g++
CCARGS=-c -I $(RUNTIME)/antlr4-runtime/ -I $(GENERATED) -std=c++11	
LDARGS=-g
LIBS=/usr/lib/x86_64-linux-gnu/libantlr4-runtime.a
all: hello
hello: dirs antlr4 hello.cpp
	$(CC) $(CCARGS) hello.cpp  -o $(OUTPUT)/hello.o 
	$(CC) $(CCARGS) $(GENERATED)/modelicaBaseVisitor.cpp -o $(OUTPUT)/modelicaBaseVisitor.o 
	$(CC) $(CCARGS) $(GENERATED)/modelicaLexer.cpp -o $(OUTPUT)/modelicaLexer.o 
	$(CC) $(CCARGS) $(GENERATED)/modelicaVisitor.cpp -o $(OUTPUT)/modelicaVisitor.o 
	$(CC) $(CCARGS) $(GENERATED)/modelicaParser.cpp -o $(OUTPUT)/modelicaParser.o 
	$(CC) $(LDARGS) $(OUTPUT)/hello.o $(OUTPUT)/modelicaBaseVisitor.o $(OUTPUT)/modelicaLexer.o $(OUTPUT)/modelicaVisitor.o $(OUTPUT)/modelicaParser.o $(LIBS) -o hello
antlr4: $(GRAMMAR)
	java -jar /usr/local/lib/antlr-4.7.2-complete.jar -Dlanguage=Cpp -no-listener -visitor -o $(GENERATED) $(GRAMMAR)
dirs:
	mkdir -p $(OUTPUT) 
	mkdir -p $(GENERATED) 
clean:
	rm -rf $(OUTPUT)
	rm -rf $(GENERATED)
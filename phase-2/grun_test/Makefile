ANTLR4=java -Xmx500M -cp "/usr/local/lib/antlr-4.7.2-complete.jar:$CLASSPATH" org.antlr.v4.Tool

antlr:	modelica.g4
		$(ANTLR4) -visitor modelica.g4
		javac *.java

clean:	
		rm -f *.java *.class *.tokens *.interp	

target: funcoes.c AFN.c
	gcc AFN.c funcoes.c -o AFN

run: ./afn

clean: rm -rf afn
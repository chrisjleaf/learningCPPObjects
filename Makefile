default: 
	gcc main.c rect.c -o rectRunner
	g++ main.cpp rect.cpp -o rectRunner2
	gcc valueVsRef.c -o valueVsRef

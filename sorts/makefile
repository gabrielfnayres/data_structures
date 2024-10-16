# Nome do compilador
CXX = g++

# Flags do compilador
CXXFLAGS = -std=c++17 -Wall

# Nome do executável
TARGET = sorting_app

# Arquivos de origem
SRC = main.cpp quicksort/quicksort.cpp mergersort/mergesort.cpp

# Arquivos de cabeçalho
HEADERS = quicksort/quicksort.h mergersort/mergesort.h

# Arquivos objeto
OBJS = $(SRC:.cpp=.o)

# Regra para construir o executável
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Regra para compilar arquivos fonte em arquivos objeto
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza dos arquivos de compilação
clean:
	rm -f $(OBJS) $(TARGET)

# Executar o programa com um arquivo de entrada
run: $(TARGET)
	./$(TARGET) input_file.txt

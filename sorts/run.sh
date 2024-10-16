#!/bin/bash

# Caminho para o diretório contendo os arquivos de entrada
INPUT_DIR="instancias-numericas/instancias-num"
# Caminho para o executável do programa
PROGRAM="./sorting_app"
# Arquivo de log para salvar os resultados
LOG_FILE="benchmark_results.txt"

# Limpar o arquivo de log anterior, se existir
> "$LOG_FILE"

# Verificar se o diretório de entrada existe
if [ ! -d "$INPUT_DIR" ]; then
    echo "Diretório de entrada '$INPUT_DIR' não encontrado."
    exit 1
fi

# Verificar se o programa executável existe
if [ ! -f "$PROGRAM" ]; then
    echo "Programa '$PROGRAM' não encontrado."
    exit 1
fi

# Passar por todos os arquivos no diretório de entrada
for FILE in "$INPUT_DIR"/*; do
    # Verificar se o arquivo é legível
    if [ ! -r "$FILE" ]; then
        echo "Arquivo '$FILE' não pode ser lido."
        continue
    fi

    # Executar o programa e capturar a saída
    echo "Executando benchmark para '$FILE'..."
    OUTPUT=$("$PROGRAM" "sort" "$FILE")

    # Verificar se a saída está vazia
    if [ -z "$OUTPUT" ]; then
        echo "Nenhuma saída gerada para o arquivo '$FILE'."
        echo "----------------------------------------" >> "$LOG_FILE"
        echo "Arquivo: $FILE" >> "$LOG_FILE"
        echo "Nenhuma saída gerada." >> "$LOG_FILE"
        echo "----------------------------------------" >> "$LOG_FILE"
        continue
    fi

    # Exibir a saída para depuração
    echo "Saída do programa para '$FILE':"
    echo "$OUTPUT"

    # Extrair os tempos e os resultados da verificação de ordenação do output
    MERGE_TIME=$(echo "$OUTPUT" | grep "Tempo de MERGESORT" | awk '{print $4}')
    QUICK_TIME=$(echo "$OUTPUT" | grep "Tempo de QUICKSORT" | awk '{print $4}')
    MERGE_SORTED=$(echo "$OUTPUT" | grep "merge Sorted" | awk '{print $3}')
    QUICK_SORTED=$(echo "$OUTPUT" | grep "quick Sorted" | awk '{print $3}')

    # Verificar se os tempos e as verificações de ordenação foram extraídos corretamente
    if [ -z "$MERGE_TIME" ] || [ -z "$QUICK_TIME" ] || [ -z "$MERGE_SORTED" ] || [ -z "$QUICK_SORTED" ]; then
        echo "Erro ao extrair os dados do arquivo '$FILE'."
        echo "----------------------------------------" >> "$LOG_FILE"
        echo "Arquivo: $FILE" >> "$LOG_FILE"
        echo "Erro ao extrair os dados." >> "$LOG_FILE"
        echo "Saída do programa:" >> "$LOG_FILE"
        echo "$OUTPUT" >> "$LOG_FILE"
        echo "----------------------------------------" >> "$LOG_FILE"
        continue
    fi

    # Salvar os resultados no arquivo de log
    echo "Arquivo: $FILE" >> "$LOG_FILE"
    echo "Tempo de MERGESORT: $MERGE_TIME segundos" >> "$LOG_FILE"
    echo "Tempo de QUICKSORT: $QUICK_TIME segundos" >> "$LOG_FILE"
    echo "Merge está ordenado: $MERGE_SORTED" >> "$LOG_FILE"
    echo "Quick está ordenado: $QUICK_SORTED" >> "$LOG_FILE"
    echo "----------------------------------------" >> "$LOG_FILE"
done

echo "Benchmark concluído. Resultados salvos em '$LOG_FILE'."

# Função para trocar dois elementos em uma lista
def swap(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i]

# Função para executar o algoritmo Bubble Sort
def bubble_sort(arr):
    n = len(arr)
    # Loop através de todos os elementos da lista
    for i in range(n):
        # Últimos i elementos já estão no lugar
        for j in range(0, n-i-1):
            # Trocar se o elemento encontrado for maior que o próximo elemento
            if arr[j] > arr[j+1]:
                swap(arr, j, j+1)

# Função para imprimir a lista
def print_list(arr):
    for i in arr:
        print(i, end=" ")
    print()

# Função principal para testar o Bubble Sort
if __name__ == "__main__":
    arr = [64, 34, 25, 12, 22, 11, 90]
    print("Lista original:")
    print_list(arr)
    
    bubble_sort(arr)
    
    print("Lista ordenada:")
    print_list(arr)

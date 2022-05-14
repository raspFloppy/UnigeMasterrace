### Sorting algorithms
Gli algoritmi di ordinamento sono quegli algoritmi che come dice il nome ordinano un set di elementi, in particolare noi ci occuperemo di ordinare determinate strutture dati che potete trovare nella sezione: [Strutture Dati](Strutture%20dati.md).

Esistono diversi tipi di algoritmi di ordinamento e ciascuno di essi ha un diverso livello di complessità temporale e spaziale come già spiegato in [[Calcolo Complessità]].

Osserviamo la complessità di alcuni algoritmi di ordinamento:
| Sorting Algorithm  | Time Complexity Best | Time Complexity Average | Time Complexity Worst | Space complexity |
| ------------------ | --------- | ------------ | ---------- | ---------------- |
| **Bubble Sort**    | $n$       | $n^2$        | $n^2$      | $1$                |
| **Selection Sort** | $n^2$     | $n^2$        | $n^2$      | $1$                 |
| **Insertion Sort** | $n$       | $n^2$        | $n^2$      | $1$                 |
| **Merge Sort**     | $n\log n$ | $n\log n$    | $n\log n$  | $n$                |
| **Quick Sort**      | $n\log n$ | $n\log n$    | $n^2$      | $\log n$         |



### Stabilità di un algoritmo di ordinamento
Quando ci riferiamo alla stabilità di un algoritmo di ordinamento, stiamo andando a definire se due o più elementi uguali mantengono la loro relativa posizione anche dopo l'ordinamento.
| Sorting Algorithm  | Stability |
| ------------------ | --------- |
| **Bubble Sort**    | Sì        |
| **Selection Sort** | No        |
| **Insertion Sort** | Sì        |
| **Merge Sort**     | Sì        |
| **Quick Sort**     | No          |

### Prima di iniziare
Ogni esempio verrà scritto in C/C++, la funzione $swap()$ è definita come segue:
```c++
// T è un tipo di dato non definito
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
```




### Bubble Sort
L'*insertion sort* 

 
<div style="page-break-after: always; visibility: hidden"> 
\pagebreak 
</div>


#### Best case
#### Worst case


<div style="page-break-after: always; visibility:hidden">\pagebreak</div>

### Selection sort



<div style="page-break-after: always; visibility: hidden"> 
\pagebreak 
</div>
### Insertion sort

<div style="page-break-after: always; visibility: hidden"> 
\pagebreak 
</div>
### Merge sort
Il principio del *merge sort* è quello di dividere un array in sottoarray da riordinare 
<div style="page-break-after: always; visibility: hidden"> 
\pagebreak 
</div>
### Quick Sort
Il quicksort è algoritmo che si basa sulla scelta di un **pivot** e sul partizionare l'array di numeri da ordinare.
Il **pivot** è quell'elemento dell'array da cui parte l'ordinamento di esso.
La scelta del **pivot:** può essere:
- randomica.
- con una regola base (es. primo/ultimo elemento).

L'implementazione del codice del quick sort si divide in due funzioni:
- `partition(int arr[], int low, int high)` ha il compito di swappare gli elementi partendo dal pivot e ritorna il nuovo pivot.

- `quicksort(int arr[], int low, int high)` esegue una doppia ricorsione utilizzando il pivot ottenuto con   `partition`.


Un esempio con il **pivot** impostato come ultimo elemento:
``` c++
int partitinon(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = (low - 1);

	for(int j = 0; j <= high; j++) {
		if(arr[j] < pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
    return` `(i + 1);
}
```

```c++
void quicksort(int arr[], int low, int high) {
	if(low < high){
		int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
	}
}
```


<div style="page-break-after: always; visibility: hidden"> 
\pagebreak 
</div>

### Summary

#### Sorting complexity
![[Pasted image 20220511104219.png|500]]
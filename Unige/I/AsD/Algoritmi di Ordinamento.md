### Insertion Sort
L'*insertion sort* è composto da:

- due indici:
	- `cur`
	- `prev` (`cur - 1`) 

 
<div style="page-break-after: always; visibility: hidden"> 
\pagebreak 
</div>

### Selection sort



<div style="page-break-after: always; visibility: hidden"> 
\pagebreak 
</div>


### Bubble sort

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
Il **pivot** è quell'elemento che +

La scelta del **pivot:** può essere:
- randomica
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
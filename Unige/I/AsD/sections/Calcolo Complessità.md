### Introduzione 

Ogni programma ha un costo economio per quanto riguarda le risorse del nostro pc
Esistono due tipi di complessità:

- **Complessità spaziale:** quante risorse hardware richiede il programma
- **Complessità temporale:** il tempo di esecuzione del programma (compiletime, runtime)

Per lo sviluppo di algoritmi è particolarmente importante calcolare la complessità temporale.



### Complesità temporale

Quando andiamo a valutare la **complessità temporale** dobbiamo considerare anche il nostro input, infatti all'aumentare dell'input aumenta la complessità dell'algoritmo.

![[Pasted image 20220513121034.png]]

Il tempo di esecuzione è legato al funzionamento dell'algoritmo stesso, con uno stesso input due algoritmi diversi avranno una complessità temporale differente.   

```ad-note
title: Nota Bene
Nel computo della complessità di un algoritmo non vanno considerati gli aspetti hardware, la velocità del processore (cpu), né le tecniche di compilazione, il compilatore o il linguaggi di programmazione utilizzato
```

<div style="page-break-after: always; visibility:hidden">\pagebreak</div>

### Analisi Asintotica 

**L'analisi asintotica** è il metodo per calcolare la complessità temporale di un algoritmo.
Essa consiste nel mettere una funzione $T(n)$, ovvero il numero di "comandi" eseguiti dall'algoritmo, in funzione della dimensione $n$ dell'input.

Un algoritmo può avere tre casi che descrivono il tempo di esecuzione;
- **Caso migliore** calcolato in $\Omega$
- **Caso medio:** da cosiderarsi come caso comune o comunque più ricorrente calcolato in $\Theta$
- **Caso peggiore** calcolato con $O$ (detto *Big-O Notation*)

In generale in un piano i tre casi con tempo $t$ sull'ordinata e il numero di input $n$  sulle ascisse viene rappresentato in questo modo:
![[Pasted image 20220513123408.png|500]]

``` ad-note
In generale un algoritmo si calcola nel suo caso peggiore $T(n) = O(f(n))$, questo perchè ci permette di comprendere meglio l'efficienza del nostro algoritmo.
```

#### Esempio 
Immaginiamo di avere un array di 1000 elementi e di cercare un elemento nel nostro array con un semplice algoritmo di ricerca lineare, avremo che:

- **Caso migliore:** l'elemento si trova nella prima posizione (1 iterazione).
- **Caso medio:** l'elemento si trova a metà dell'array ( ~500 iterazioni).
- **Caso peggiore:** l'elemento si trova in fondo all'array (1000 iterazioni).


### Scala della complessità

Sempre prendendo in cosiderazione il caso peggiore, si può definire una classifica di complessità (in ordine decrescente):
![[Pasted image 20220514100532.png]]


Graficamente è molto più intuitivo capire l'efficienza dei vari casi:
![[Pasted image 20220513124448.png]]


<div style="page-break-after: always; visibility:hidden">\pagebreak</div>

### P e NP

La complessità dei nostri algoritmi può avere due classi di problemi chiamati **P** e **NP**

#### P
La classe **P** contiene tutti i problemi trattabili e risolvibili da un algoritmo in tempo ragionevole, gli algoritmi che stanno sotto **P** sono considerati algoritmi **deterministici** ovvero che dato un input riceveremo lo stesso output.

#### NP
La classe **NP** sono tutti quegli algoritmi **non deterministici** ovvero che dato un input riceveremo un output non sempre uguale ma che verrà deciso durante l'esecuzione.
In particolare una classe **NP** 
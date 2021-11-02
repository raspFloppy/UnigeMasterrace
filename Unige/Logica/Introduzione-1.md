# Logica

La **logica** è lo studio del ragionamento.
La **logica matematica** è lo studio del ragionamento dei matematici.

Il ragionamento ci è utile per la risoluzione dei problemi.
Attraverso la logica noi studiamo il ragionamento, e attraverso il ragionamento noi produciamo la logica, si può dire che la **logica studia se stessa**.

<br>

In matematica ed informatica la logica la verità è stabilita da delle **dimostrazioni**.
Dimostrazioni che risultano vere vengono definiti **teoremi**.


# Teorema
Un teorema è composto da un'**ipotesi** o **assunzione** e una **tesi (o conclusione**),

#### esempio1: 
se valgono P1, P2 e .... Pn allora vale anche Q.
Quindi se l'ipotesi è vera anche la tesi è giusta, questo però solo se il teorema è vero.

SI dice quindi che le ipotesi hanno **conseguenza** della tesi

#### esempio2:
Se n è dispari e m è pari allora n + m è dispari

**Ipotesi:**
- n è un numero dispari
- m è un numero pari

**tesi:**
- *n+m è un numero dispari.*


Se le ipotesi sono false il teorema può essere comunque vero
#### esempio 3:
*Se 5<0 allora è Lunedi'*
il teorema risulta globalmente vero in quanto 5 non è mai minore di zero quindi la tesi può essere sempre vera.


Un teorema è sbagliato se almeno in un contesto le ipotesi non sono verificate.


# Dimostrazione

Una dimostrazione è un ragionamento logico che mostra che la tesi di un teorema vale, assumendo che valgono le ipotesi.

é una sequenza di affermazioni che seguono la validità della precedente.
Ovviamente ogni affermazione va intepretata in base la contesto

#### esempio 4

*n è un numero naturale dispari*: 
- **vero** se n=3
- **falso** se n=2
- Quindi il contesto in è necessario per una dimostrazione.


## Tipologie

- **dimostrazione diretta**
- **dimostrazione per assurdo**
- **dimostrazione per contrapposizione**
- **dimostrazione per composizione**
- **dimostrazione per casi**


### dimostrazione diretta 
Assumendo che ci troviamo in un qualunque contesto in cui le ipotesi sono verificate allora anche la tesi è vera

Se P1, P2 .... Pn allora Q.

(Aggiungere dimostrazione pari+dispari = dispari)


### dimostrazione per assurdo
Assumo l'ipotesi ma che la tesi sia falsa partendo da un teorema per ricercare una contraddizione.
Nel caso ritrovo una contraddizione allora il contesto non esite e quindi il teorema di partenza è vero


### contrapposizione
DImostrare un teorema attraverso il suo  contrario.
Per dimostrare *Se P allora Q*
si può dimostrare che *Se non P allora non Q*


#### esempio
*Se non piove mi bagno* ->  *se  piove non mi bagno*


### dimostrazione per composizione

Se si sono dimostrati i teoremi 
*Se P1,P2,... Pn allora Q*
*Se Q allora R*
Se P1,P2,..., Pn allora R
Infatti se valgono P1,.., Pn allora valendo Q e valendo Q vale anche R è possibile semplificare il teorema **sommando le dimostrazioni**.

### dimostrazione per casi 

Per dimostrare un teorema della forma 
<p align=center> *Se P allora Q* <p>
dove l'ipotesi P è:
<p align=center>*P1 o P2 o ... Pn.*</p>
è conveniente dividere in n teoremi la dimostrazione per semplificare il tutto in:
<p align=center> *Se P1 allora Q* <p/>
<p align=center> *Se P2 allora Q* <p/>
<p align=center> *...* <p/>
<p align=center> *...* <p/>
<p align=center> *Se Pn allora Q* <p/>

Perchè dividere permette di avere una dimostrazione "più forte" rispetto ad avere un generico P e siamo in grado di vedere ogni caso particolare di P per i quali il teorema è vero o falso.

La dimostrazione per casi è solitamente utilizzata per teoremi assenti di ipotesi
Per esempio supponiamo di voler dimostrare:
<p align=center> Q </p>

<strong>*(Aggiungere un esempio)* </strong>


## Equivalenza  

L'equivalenza significa da due affermazioni qualunque P e Q esse abbiano come conseguenza l'altra, quindi in qualunque contensto noi scegliamo esse saranno o vere o false entrambe:

*Se P allora Q*
*Se Q allora P*

Se cambiano il contesto le due affermazioni sono una vera e l'altra falsa allora non si ottiene l'equivalenza.

Inoltre ogni affermazione è equivalente a se stessa:

*P ha come conseguenza P*


# Glossario Proprietà

## Conseguenze

- **Riflessive**:
- **Transitive**: 
	- *Se P allora Q*.
	- *Se Q allora R* .
	- Si deduce che *Se P allora R*.

## Equivalenza

- **Riflessiva**: Qualunque sia P, si ha che:
	- *P è equivalente a P.*
- **Transitiva**: Qualunque siano P,Q e R:
	- *Se P è equivalente a Q e Q è equivalente a R, allora P è equivalente a R.*
- **Simmetrica**: Qualunque siano P e Q:
	- *Se P è equivalente a Q, allora Q è equivalente a P*.
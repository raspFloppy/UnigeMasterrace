Introduzione 

# 1. Insiemi 

Un insieme è una collezione di elementi 

Se A è un insieme e X un suo elemento si dice 
$$
X \in A  
$$

Mentre se X non è elemento dell'insieme A allora 

$$
X \notin A
$$

Mentre se X1,...,Xn sono tutti elementi di A allora:

$$
A = \{x1,...,Xn\}
$$


SI può anche descrivere un insieme A attraverso una proprietà P dove P deve essere oggettiva ovvero bisogna che essa soddisfi la proprietà descritta.
   
$$
A = \{x : P(x)\}
$$

#### esempio:

$$
A = \{x | X è un inumero intero pari \}
$$

$$
2 \in A
3 \notin A
$$

$$
Alessio \notin A
$$

Mentre:
$$
B = \{x | X è un libro interessante \}  
$$
non è un insieme

Poi si ha l'insieme vuoto scritto con:

$$
\not 0
$$
L'insieme vuoto è contenuto in tutti gli insiemi.

E infine si hanno elementi descritti da un solo elemento **Singoletto**

$$
\{* \}
$$

#### esempio 
{1}, {100}, {Genova} ecc...



## 1.1 Connettivi logici 

I **connettivi logici** sono necessari per svolgere operazioni tra insiemi.

Se P e D ssono affermazioni/proposizioni

Seguono i seguenti connettivi logici:

P ^ D	Entrabbe devono essere vere altrimenti l'affermazione è falsa **Congiunzione**..

P V D  Almeno una delle due deve essere vera affinchè l'affermazioni risulti vera (**Disgiunzione**).

!P **Negazione** dell'affermazione

 $$ P \Rightarrow D $$
 **Implicazione** solo se D è falsa allora l'implicazione è falsa

$$  P \Leftrightarrow D $$
**Equivalenza**  *P se e solo se D*  se entrambe abbiano lo stesso valore logico allora l'equivalenza è vera. 



## 1.2 Quantificatori universali

Avendo P come proposizione

$$
 \forall x \in A 
$$

La proposizione P vale per tutti (**per ogni**)  elemento di A


$$
\exists x \in A
$$

Esiste (**almeno un elemento di A**) per cui P vale.

#### esempio

Avendo A = {2,4,6,8}
e
P(X) = " x + 2 è pari"

$$
\forall x \in A \ \ \ P(x) \ è  \ vera
$$

$$
\exists x \in A  \ \ \ P(x)  \  è  \   vera
$$

---

$$
\exists!   \ esiste \ unico 
$$



## 1.3 Definizioni
Avendo due insiemi A,B:
 - A = {1, 2, b}
 - B = (0, 2, a)

<br>

Si dice che A è contenuto in B se:
$$
\{\forall x  \in A : x \in B \}
$$
*Per tutti gli elementi di A sono elementi di B:*

$$
A \subset B  \ oppure \ A \subseteq B \\
$$
*Ovvero A sottoinsieme di B  oppure A contenuto in B.*

<br>

A e B sono uguali se A=B:
$$
x \in A \Leftrightarrow  x \in B
$$
*Cioè se A e B hanno gli stessi elementi*


A è **contenuto strettamente** (o A  è **sottoinsieme proprio**) in B se 

$$
(A \subseteq B ) \wedge (A \not = B)
$$

---

*A inisieme delle parti di A  è l'insieme i cui elementi sono i sottoinsiemi di A si denota con P(A)*

####  esempio 1 

$$
A = \{1,2,3,4 \}
\\
P(A) = \{ \not 0, \{1 \}, \{2 \}, \{3 \}, \{1,2 \}, \{1, 3\}, \{2, 3 \}, A \}
$$

#### esempio 2

$$ 
P( \not 0 ) = \{ \not 0 \}
\\
ma \\
\not 0 \not = \{  \not 0 \}
$$

--- 

Dati due insiemi A,B **L'Unione di A e B** è l'insieme i cui elementi sono elementi di A o di B

$$
A \cup B  \\

A \cup B = \{ x : ( x \in A) \vee (x \in B) \}
$$

---

**L'intersezione** di A e B è l'insieme che si denota con 
$$ 
A \cap B 
$$
è l'insieme i cui elementi sono sia elementi di A che di B 

In formula:
$$
\{x : (x \in A) \wedge (x \in B) \}
$$

Inoltre si dice che A e B sono **Disgiunti** l'intersezione è l'insieme vuoto, ovvero non hanno elementi in comune.

--- 

La **differenza (o complementare** tra l'insieme B e A è costituita da tutit gli elementi di B che non sono elementi di A:
$$
B \setminus A = \{ x : (x \in B) \wedge (x \notin A) \}
$$ 

#### esempio 1

$$

B \setminus  A = \{0, b \} \\
A \setminus  B = \{0, a \} \\
A \setminus A = \not 0

$$
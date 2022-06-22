# Cheatsheet Algebroso



## Equazioni Lineari

### Algoritmo Euclideo
```ad-note
title: Definizione
Algoritmo euclideo è il metodo per trovare l'MCD tra due numeri, il che può tornare utile per **L'identità di Bezout**.
```

#### esempio 
$MCD(42, 68)= 2$
$$\begin{aligned}
& 68 = 42 * 1 + 26 \\
& 42 = 26 * 1 + 16 \\
& 26 = 16 * 1 + 10 \\
& 16 = 10 * 1 + 6 \\
& 10 = 6 * 1 + 4 \\
& 6 = 4 * 1 + \underline{2} \\
& 4 = 2 * 2 + 0
\end{aligned}$$


### Identità di Bezout
```ad-note
title: Definizione

I valori di $x,y$ per i quali l'equazione $ax + by = c$ dove $c = MCD(a,b)$, per trovare questi valori si ripercorre a ritroso l'**algoritmo euclieo**.

Una volta trovati $x,y$ deve essere applicata la formula:
$$\{x_{0}+bk, y_{0}-ak\}$$

Dove:
- $k$ costante $\in \mathbb{Z}$
```

#### esempio

$42x + 68y = 2$

$$\begin{aligned}
& 2 = 6 - 4 = \\
& = 6 - (10 - 6) = 2*6 - 10 = \\
& = 2*(16-10) - 10 = 2*16 - 3*10 = \\
& =  2*16 - 3*(26-16) = 5*16  - 3*26=  \\
& = 5 * (42-26)  - 3*26 = 5*42 - 8*26 = \\
& = 5*42 - 8 (68 - 42) = 13*42 - 8*68 \\

\\
\end{aligned}$$
- Abbiamo quindi che $(x,y) = (13, -8)$ 
- Perciò $\{13 + 68k, -8 - 42k\}$

### Equazioni Diofantee
```ad-note
title: Definizione
Un equazione diofantea è un equazione così composta:
$$ax + by = d$$

Questa equazione esiste quando:
$$MCD(a,b)=c \mid d$$
```

<div style="page-break-after: always; visibility:hidden">\pagebreak</div>

## Teorema fondamentale dell'algebra



<div style="page-break-after: always; visibility:hidden">\pagebreak</div>

## Numeri Complessi 

```ad-note
title: Equazione Numeri $\mathbb{C}$

$$\boxed{z = a + bi}$$ 

Con:
- $\mathcal{Re}(z) = a$
- $\mathcal{Im}(z) = b$
```


```ad-note
title: Potenze di $i$

$i$ può assumere i seguenti valori:
- $i^{0} = 1$
- $i = \sqrt{-1}$
- $i^{2} = -1$
- $i^{3} = -i$
- $i^{4} = 1$
```

```ad-note
title: Modulo di $z$

$$\boxed{|z| = \sqrt{a^{2} + b^{2}}}$$

```



```ad-note
title: Definizione

- $a = |z|\times\cos(\theta)$
- $b = |z|\times\sin(\theta)$
```




```ad-note
title: Argomento di $z$
- Intervallo $(-\pi, +\pi]$
$$\theta := \arg(z) = \cases{\dfrac{\pi}{2} \quad \mbox{se} \quad a=0, b>0 \\ 
        -\dfrac{\pi}{2} \quad \mbox{se} \quad a=0, b<0 \\ 
        \mbox{non definito se} \quad a=0, b=0 \\ 
        \arctan\left(\dfrac{b}{a}\right) \quad \mbox{se} \quad a>0, b \quad \mbox{qualsiasi} \\ 
        \arctan\left(\dfrac{b}{a}\right) + \pi \quad \mbox{se} \quad a<0, b \ge 0 \\ 
        \arctan\left(\dfrac{b}{a}\right) - \pi \quad \mbox{se} \quad a<0, b<0 \\ }$$

- Intervallo $[0, 2\pi)$
$$\theta := \arg(z) \cases{\dfrac{\pi}{2} \quad \mbox{se} \quad a=0, b>0 \\ 
        \dfrac{3\pi}{2} \quad \mbox{se} \quad a=0, b<0 \\ 
        \mbox{non definito se} \quad a=0, b=0 \\ 
        \arctan\left(\dfrac{b}{a}\right) \quad \mbox{se} \quad a>0, b \ge 0 \\ 
        \arctan\left(\dfrac{b}{a}\right) + 2\pi \quad \mbox{se} \quad a>0, b<0 \\ 
        \arctan\left(\dfrac{b}{a}\right) + \pi \quad \mbox{se} \quad a<0, b \quad \mbox{qualsiasi} }$$
```


![[Pasted image 20220621152945.png]]


```ad-note
title: **Forma Esponenziale**

$$|z|e^{i*\arg(z)}$$
```



 ```ad-note
title: Teorema **De Moivre**
icon: bullhorn

Per trovare le **radici n-esime** di un numero complesso 

$$z_{k} = \sqrt[n]{|z|}\left(\cos\left(\dfrac{\theta+2\pi k}{n}\right)+i \sin\left(\dfrac{\theta+2\pi k}{n}\right)\right)$$
```       

<div style="page-break-after: always; visibility:hidden">\pagebreak</div>

## Relazioni D'Ordine

### Ordine lessicale (LEX)

Passaggi:
- In un *Poset* $(X\times X)$ confrontiamo prima il valore di $x$ e:
	- Se è maggiore va messo sopra
	- Se è uguale verifichi la $y$ 
		- Se è maggiore va messo sopra 
		- Se è minore va messo sotto
	- Se è minore va messo sotto

### Ordine Prodotto (rel. $\times$ rel.)
Passaggi:
- In un*Poset* $(X\times X, \le \times \le)$ confrontiamo insieme i valori $(x,y)$ e:
	- Se è maggiore va messo sopra
	- Se è minore va messo sotto
	- Se uno elemento è maggiore e l'altro minore gli elementi **non sono confrontabili**, esempio: $(8,5), (7,9)$.

<div style="page-break-after: always; visibility:hidden">\pagebreak</div>

## Algebra Modulare



### Trovare l'ordine di una classe
Abbiamo un *POSET* $(\bigcup\mathbb{Z}_{n}, *, \overline{1})$ per trovare l'ordine di un elemento di $Z$
- Per trovare l'ordine di una classe dobbiamo prima trovare la $\varphi(n)$ di $\mathbb{Z}_{n}$ 
```ad-note
title: **Phi di Eulero**
Scomponiamo in fattori primi $n = a^{x} * b^{y}$, avremo che:
$$\varphi(n) = a^{x-1} * b^{y-1}*(a-1)(b-1)$$


Esempio:
Prendiamo $\mathbb{Z}_{24}$ 
Scomponiamo in fattori primi $n = 2^{3} * 3$, avremo che:
$$\varphi(n) = 2^{3-1} * 3^{1-1}*(2-1)(3-1) = 8$$
```


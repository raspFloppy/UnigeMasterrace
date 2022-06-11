## Esercizio 1

$$z = \frac{(6 + 12i)(4+12i)}{(\sqrt{3} + i)^{3}}$$

Scrivere $z$ in forma $a + ib$ con $a, b \in R$ e in forma esponenziale.
##### Forma Algebrica

**Numeratore:**
$$(6 + 12i)(4+12i) = 24 + 48i + 144i^{2} + 72i = 24 + 144(-1) + 120i = -120 + 120i$$
**Denominatore:**
$$(\sqrt{3} + i)^{2}(\sqrt{3} + i) = (2+2i\sqrt{3})(\sqrt{3} + i) = 2\sqrt{3} +2i +6i + 2i^{2}\sqrt{3} = 2\sqrt{3} + 8i - 2\sqrt{3} = 8i$$

**Completo**
$$z =\frac{-120 + 120i}{8i} = \frac{-15 + 15i}{i} =\frac{(-15 + 15i)}{i}\frac{i}{i} =\frac{-15i -15}{-1}= \boxed{15 + 15i}$$

##### Forma esponenziale

$$\theta = \arg(z) = \arctan\left(\frac{15}{15}\right)=\arctan(1) = \frac{\pi}{4}$$
$$|z| = \sqrt{x^{2} + y^{2}} = \sqrt{225 + 225} = \sqrt{450} = 15\sqrt{2}$$
$$|z|e^{i \times arg(z)} = |z|e^{\frac{\pi}{4}i} = \boxed{5\sqrt{14}e^{\frac{\pi}{4}i}}$$


<div style="page-break-after: always; visibility:hidden">\pagebreak</div>
## Esercizio 2
![[Pasted image 20220608160126.png]]


$$\frac{b}{a} = k \in \mathbb{Z}$$
*dove l'ordine ◁ procede dal basso verso l'alto*
![[Pasted image 20220608161747.png]]

**Massimo e Massimale:**
$100$ unico massimo e quindi unico massimale

**Minimo e Minimale:**
$5, 2$ sono due minimali, ma non essendo confrontabili (**non in relazione**) allora non esiste minimo.


<div style="page-break-after: always; visibility:hidden">\pagebreak</div>
## Esercizio 3
![[Pasted image 20220608162218.png]]



$$f(5,6) = 120 - 120 = 0$$
Calcoliamo il *massimo comune divisore*
$$MCD(24,20)=4$$
Percio' la funzione inversa esiste in quanto $MCD \not = 1$


- $$f^{-1}(10) = \{(x,y) \in \mathbb{Z}^{2} : 24x - 20y = 10\} = \{(x,y) \in \mathbb{Z}^{2} : 24x - 20y = 10\}$$
	- $$MCD(24,20) = 4 \nmid 10 $$ quindi $f^{-1}(10) = \emptyset$

- $$f^{-1}(8) = \{(x,y) \in \mathbb{Z}^{2} : 24x - 20y = 8\} = \{(x,y) \in \mathbb{Z}^{2} : 6x - 5y = 2\}$$
	- $$MCD(24,20) = 4 \mid 8 $$ quindi possiamo procedere con **L'algoritmo Euclideo:**
	- $$\begin{aligned}
		& 6 = 5 *1 + 1 \quad r=1 \\
		& 5 = 1 * 5 + 0 \quad r=0
\end{aligned}$$
	- Continuiamo con **Bezout:**
	- $$2(1) =  2(-6) - 2(5*1) = \boxed{2(6) - 2(5)}$$
	- Quindi i punti saranno:
	- $$\boxed{f^{-1}(8) = \{(2-6k,2-5k) \in \mathbb{Z}^{2} : k \in \mathbb{Z}\}}$$
- $$f^{-1}(0) = \{(x,y) \in \mathbb{Z}^{2} : 24x - 20y = 0\}$$
	- In quanto $f(5,6) = 0$
	- Una soluzione particolare e' $(x_{0,}y_{0}) = (20, 24)$:
		- $$f^{-1}(0) = \{(-20k,-24k) \in \mathbb{Z}^{2} : k \in \mathbb{Z}\}$$
		- $$f^{-1}(0) = \{(-5k,-6k) \in \mathbb{Z}^{2} : k \in \mathbb{Z}\}$$




## Esercizio 4

$$\mathbb{Z}_{8} = \{0,1,2,3,4,5,6,7\}$$

```ad-note
title: Nota
Per trovare $\bigcup\mathbb{Z}_{8}$ dobbiamo verificare:
$$\{\overline{x}\in \mathbb{Z}_{n}: MCD(x,n) = 1\}$$
```

Quindi:
$$\bigcup\mathbb{Z_{8}} = \{\overline{1},\overline{3},\overline{5},\overline{7}\}$$
Percio' sappiamo che:
$$\#\bigcup\mathbb{Z_{8}} = 4$$

- $$ \{\overline{1},\overline{3},\overline{5},\overline{7}\}$$
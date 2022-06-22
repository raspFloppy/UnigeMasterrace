## Esercizio 1

![[Pasted image 20220614144757.png]]

- $z = i \to z^{4} = 1$
- $z = i^{2} \to z^{8} = 1$
- $z = i^{3} \to z^{12} = i^{4}i^{3} = -i$
- $z = i^{4} \to z^{16} = i^{4}i^{4} = 1$

*Non iniettiva*
*Non surriettiva* in quanto non possono esserci $n < 0$ ma $n \in \mathbb{C}$

---


$$
\begin{aligned}
	f^{-1} = \mathbb{C} \to \mathbb{C} \\
	z^{4} \to z
\end{aligned}
$$
$$f^{-1} (-256) = \sqrt[4]{-256}=\sqrt[4]{256*-1}= 4\sqrt[4]{-1}=4\sqrt[2]{-1}\sqrt[2]{-1} = 4i^{2}=-4$$

```ad-note
title: Radici complesse
$$z_{k}= \sqrt[4]{|z|} = \left(\cos\left(\frac{\theta+2k\pi}{n}\right)+i\sin\left(\frac{\theta+2k\pi}{n}\right)\right)$$

$$\theta = \arg(z) = |z|e^{i*\arg(z)}$$

```

$$\theta = \arctan\left(\frac{b}{a}\right)+\pi = \arctan(0)+\pi = \pi$$


$\sqrt[4]{|-256|} = 4$

- $$z_{0}= 4\left(\cos\left(\frac{\pi+2k\pi}{4}\right)+i\sin\left(\frac{\pi+2k\pi}{4}\right)\right) = 4\left(\cos\left(\frac{\pi}{4}\right)+i\sin\left(\frac{\pi}{4}\right)\right)= \boxed{\frac{\sqrt{2}}{2} + i2\sqrt{2}}$$
- $$z_{1}= 4\left(\cos\left(\frac{\pi+2k\pi}{4}\right)+i\sin\left(\frac{\pi+2k\pi}{4}\right)\right) = 4\left(\cos\left(\frac{3\pi}{4}\right)+i\sin\left(\frac{3\pi}{4}\right)\right)= \boxed{-2\sqrt{2} + i2\sqrt{2}}$$
- $$z_{2}= 4\left(\cos\left(\frac{\pi+2k\pi}{4}\right)+i\sin\left(\frac{\pi+2k\pi}{4}\right)\right) = 4\left( \cos\left(\frac{5\pi}{4}\right)+i\sin\left(\frac{5\pi}{4}\right)\right) = \boxed{-2\sqrt{2} - i2\sqrt{2}}$$
- $$z_{3}= 4\left(\cos\left(\frac{\pi+2k\pi}{4}\right)+i\sin\left(\frac{\pi+2k\pi}{4}\right)\right) = 4\left(\cos\left(\frac{7\pi}{4}\right)+i\sin\left(\frac{7\pi}{4}\right)\right) = \boxed{2\sqrt{2} - i2\sqrt{2}}$$


## Esercizio 2

![[Pasted image 20220614153422.png]]

- $$\overline{[1,1]} = \{(1,1)\} \to \#\overline{(1,1)} = 1$$
- $$\overline{[6,6]} = \{(1,36), (2,18), (3,12), (4,9), (6,6), (9,4), (12,3), (18,2), (36,1)\} \to \#\overline{(6,6)} = 9$$
- $$\overline{[0,0]} = \{(x,y) \in \mathbb{N}^{2} : xy=0\} \to \#\overline{(0,0)} = \mathbb{\aleph_0}$$

## Esercizio 3
![[Pasted image 20220614155227.png]]
- $(10, 10)$ *Massimo* ed *Estremo superiore.*
- Non vi sono minimi in quanto $(8,2), (7,6)$ **non sono confrontabili.**
- *Estremo inferiore* $(7,2)$ in quanto sono i minimi calcolabili. 



## Esercizio 4
![[Pasted image 20220614160153.png]]

```ad-note
title: Svolgimento
**Devo trovare il numero positivo $n$ minore per cui $2*n=\overline{0}$**
Per trovarlo devo scomporre in fattori primi le classi e togliere tutti i fattori comuni, il risultato sarà **l'ordine**.
Se i numeri sono coprimi allora $ord=(26)$ (In generale sarà uguale a $n$ di $\mathbb{Z}_n$):

$$\begin{aligned}
& 2 = 2*1 \\
& 9 = 3*3*1 \\
& 13 = 13 \\
& 26 = 13*2
\end{aligned}$$
```

- $(\mathbb{Z}, +, 0) \ g = \overline{2} = \overline{2} + \overline{2} +\overline{2}+\ldots+\overline{2}_{13} \to ord(13)$
- $(\mathbb{Z}, +, 0) \ g = \overline{13} = \overline{13} + \overline{13} \to ord(2)$
- $(\mathbb{Z}, +, 0) \ g = \overline{9} = \to ord(26)$

---
```ad-note
title: Definizione

```

- $$MCD(9, 26) = 1$$
	- $$\begin{aligned}
			26 = 21*1 +  \\
			9 = 8 *1 + 1 \\
			8 = 1*8 + 0 
\end{aligned}$$

	- $$\varphi(26) = 13^{1-1} * 2^{1-1} * (13-1)(2-1) = 12$$
	- $$9^{\varphi(26)}\equiv 1 \mod{n}$$

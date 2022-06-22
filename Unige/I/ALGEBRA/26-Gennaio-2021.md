## Esercizio 1 

![[Pasted image 20220616164313.png]]


- $$\mathcal{P}(A) = 2^{5} \ \text{Elementi}$$ quindi $\boxed{|R| = 2^{5}*6}$.
- ![[Pasted image 20220616164949.png]]
Quindi $\boxed{|S| = 0}$.

-  $\boxed{|T| = 0}$ *vedi foglio esame per spiegazione*


## Esercizio 2 

![[Pasted image 20220616165545.png]]

- $$f(0,0) = f(-21,12) = f(21,-12) = 0$$ quindi **NON è iniettiva.**
- $$MCD(12, 21) = 3$$
	- $$\begin{aligned}
	21 = 12 * 1 + 9 \\
	12 = 9 * 1 + 3 \\
	9 = 3*3 + 0
	\end{aligned}$$
	- Tutti i risultati di $f$ saranno solo numeri divisibili per $3$ che sono un sottoinsieme di $\mathbb{Z}$ e quindi **la funzione NON è surriettiva.**
	- $$12x + 21y = 15$$
		- $$\begin{aligned}
				3 = 12 - 9 =  12 - (21-12) = 2*12 - 21 \\
				(5)3 = 5(2*12 - 21) \\
				15 = 10*12 - 5*21
			\end{aligned}$$
		- $\boxed{(10, -5) \in f^{-1}(15)}$
		- $$\{10-21k, -5+12k\}$$
- $\boxed{f^{-1}(0) = \infty}$



## Esercizio 3
![[Pasted image 20220616173637.png]]

Ricordiamo che:
- **$\overline{0} = \overline{4}$** 
Quindi :
- $\boxed{\overline{(0,0)}}$ **maggiorante**
- $\boxed{\overline{(1,1)}}$ **Elemento Minimale e Minimo**
- $\boxed{\overline{(3,3)}}$ **Estremo superiore**
- $\boxed{\overline{(13,13)}} = \boxed{\overline{(1,1)}}$ **Elemento minimale**


## Esercizio 4

```YAML
services:
	database:
		image: mariadb	
		
```

```ad-note
title: Teorema (**Integrale per sostituzione**)
Sia $f : I \to \mathbb{R}$, $g:J\to \mathbb{R}$ due funzioni con:
- $I, J$ sono intervalli.
- $f$ è **continua** su $I$.
- $g$ è **derivabile** su $J$ g^{I} continua e $g(x) \in I \quad \forall x \in J$ 
Allora $$ \int f(g(x)) + g^{I}(x) dx = \Bigg(\int f(t)dt\Bigg)|_{t=g(x)}$$
```

![[Pasted image 20220517163232.png]]

### Esempi

#### Esempio 1
$$\int x \ \underbrace{sin(x^{2}}_{t^{II}}) \ dx = \Bigg(\int sin(t) \frac{dt}{1}\Bigg)_{t=x^{2}} = \Bigg(\frac{1}{2}\int\sin(t)dt\Bigg)=\frac{-\cos(x^{2})}{2}+c$$ 

#### Esempio 2
$$\int \frac{1}{x}\sin(\log(x))dx = \int\sin(t)dt = -\cos(t) + c = \boxed{-\cos(\log(x)) + c}$$
- $t = \log(x) \ dt=\frac{1}{x}$
```ad-note
**Integrale per parti**
```
$$\int x^{3}e^{x^{2}}dx =  \frac{1}{2}\int te^{t}dt = \frac{e^{x^{2}} * x^{2} - e^{x^{2}}}{2} +c $$
- $t = x^{2} \quad dt = 2x \ dx \quad x = \sqrt{t}$
![[Pasted image 20220517174021.png]]


![[Pasted image 20220517174045.png]]
![[Pasted image 20220517174314.png]]
$$\int\frac{\sin(x)}{\cos(x)}dx = -\frac{1}{1}\int \frac{1}{t}dt = -1*\log(|t|) = \boxed{-1*\log(|\cos(x))|}$$
- $t = \cos(x) \quad dt = -\sin(x) dx$

$$\int \frac{\sin(x)+\cos(x)}{\sin(x)-\cos(x)}dx  = \int \frac{1}{t}dt = \boxed{\log(|\sin(x)-\cos(x)|)} + c$$
- $t = \sin(x) - \cos(x) \quad dt = \cos(x) + \sin(x) \ dx$ 
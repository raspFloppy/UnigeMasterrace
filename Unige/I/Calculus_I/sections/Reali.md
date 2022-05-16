Introduziam i sottoinsiemi di $\mathbb{R}$ sono:

-   $\mathbb{N} = \{0,1,2,3,\ldots\}$

-   $\mathbb{Z} = \{\ldots,-2,-1,0,1,2,\ldots\}$

-   $\mathbb{Q} = \{\frac{m}{n}: m \in \mathbb{Z} \wedge n \in \mathbb{N}^*\}$


```ad-quote
title: Osservazione
icon: 
In particolare $\mathbb{Q}$ è detto **denso** ovvero presi due qualunque
punti $x,y \in \mathbb{R}$ esiste sempre un razionale $\mathbb{Q}$ tra
di essi.
```

```ad-note
title: Proprietà
Fondamentale proprietà di $\mathbb{R}$ è un insieme **totalmente
ordinato**.
```

```ad-note
title: Lemma
$\forall x,y \in \mathbb{R}$ con $x < y$

```

## Sottoinsiemi particolari di $\mathbb{R}$ 
Esistono diversi tipi di intervalli, elenchiamoli per categoria

### Intervalli limitati

-   $(a,b) = \{x \in \mathbb{R} : x>a \wedge x<b\}$ intervallo aperto

-   $[a,b] = \{x \in \mathbb{R} : x\ge a \wedge x\le b\}$ intervallo
    chuso

-   $[a,b) = \{x \in \mathbb{R} : x\ge a \wedge x<b\}$ intervallo
    semi-aperti

-   $(a,b] = \{x \in \mathbb{R} : x>a \wedge x\le b\}$ itervallo
    semi-aperti

### Intervalli illimitati

Gli intervalli illimitati sono rappresentate geometricamente da
semirette

-   $(a,+\infty) = \{x \in \mathbb{R} : x>a \wedge x<+\infty\}$
    intervallo aperto

-   $[a,+\infty] = \{x \in \mathbb{R} : x\ge a \wedge x\le +\infty\}$
    intervallo chuso

-   $[-\infty,b) = \{x \in \mathbb{R} : x\ge -\infty \wedge x<b\}$
    intervallo semi-aperti

-   $(-\infty,b] = \{x \in \mathbb{R} : x>-\infty \wedge x\le b\}$
    itervallo semi-aperti

<div style="page-break-after: always; visibility:hidden">\pagebreak</div>

## Dominio e Codominio
Tratteremo funzioni $f$ che hanno un dominio $A \subseteq \mathbb{R}$ e
sottointendiamo che si parla di funzioni reali:
$$f : \mathbb{R} \to \mathbb{R}$$ e che quindi il dominio è il più
grande insieme di definizione.

```ad-note
title: Definizione
(Funzione) Una funzione $f:A \to R$ non è altro che una associazione
[univoca]{.underline} di un elemento di $A$ con uno di $\mathbb{R}$.

In particolare:
$$\forall x \in A \quad \exists! y\in\mathbb{R} : f(x) = g.$$
```
```ad-note
title: Proprietà
Una particolarità dei reali è che possiamo rappresentare il grafico
della funzione:

```

![](rappresentazione_grafica_reali.png){#fig:rappresentazione_grafica_reali.png
width="\\linewidth"}

Come la retta rappresenta l'insieme $\mathbb{R}$ il piano rappresenta
l'insieme:
$$\boxed{\mathbb{R}\times\mathbb{R} = \{(x,y): x\in \mathbb{R}, y \in \mathbb{R}\}}$$
Il grafico di $f$ non è altro che:
$$\boxed{graph(f) = \{(x, f(x)) : x \in A = dom(f)\}\le \mathbb{R}^2}$$

```ad-note
title: Osservazione
Data una curva $M \subseteq \mathbb{R}^2$, essa è grafico di una
funzione solo se $\forall x \in \mathbb{R}$ esiste al più un punto $y$
tale che $(x,y) \in M$, cioè $M$ intergetta le rette verticali al più di
un punto

Immaginiamo per esempio le parabole nella forma $ax^2 + bx + c$.
```


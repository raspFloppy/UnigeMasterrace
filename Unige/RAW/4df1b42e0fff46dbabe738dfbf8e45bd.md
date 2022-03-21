15/12

15/12
**Def**
$(G,*,\lambda)$ gruppo. Un *sottogruppo* di G è sottoinsieme $H\sube G$ tale che:
1) $\lambda\in H$
2) $a,b\in H\Longrightarrow a*b\in H$
3) $a\in H\Longrightarrow a^{-1}\in H$

$*:G\times G\longrightarrow G$
si restringe a
$*:H\times H\longrightarrow H$
quindi $(H,*,\lambda)$ è un gruppo

$\{0\}\sube\Z$ sottoinsieme di $(\Z,+,0)$
$2\Z=\text{\{numeri pari\} sottogruppo di}(\Z,+,0)$
$\{\text{numeri dispari}\}\sube\Z$ non è un sottoinsieme
fisso $k\in\N\hspace{1em}k\Z=\{k*n:n\in\Z\}$ è un sottogruppo di $(\Z,+,0)$
si può verificare che tutti i sottogruppi di $(\Z,+,0)$ sono di questa forma.

$U_n=\{x\in\cnums|x^n=1\}$ Radici n-esime dell'unità

$U_n$ è sottogruppo
1) $1\in U_n\hspace{1em}1^n=1$
2) $a,b\in U_n\Longrightarrow a^n=1\Longrightarrow(ab)^n=a^n*b^n=1\Longrightarrow ab\in U_n$
3) $a\in U_n\Longrightarrow a^n=1\Longrightarrow(a^{-1})^n=(a^n)^{-1}=1^{-1}=1\Longrightarrow a^-1\in U_n$

**Def**
$(G,*,\lambda)$ gruppo, $\backsim$ relaz. d'equivalenza su G
$\backsim$ è compatibile con $*$ se vale $\forall a,b,c,d\in G$
$(a\backsim b)\land(c\backsim d)\Longrightarrow(a*c)\backsim(b*d)$
Definiamo un'operazione $[*]$ sul quoziente $G/\backsim$
$[x][*][y]\coloneqq[x*y]\hspace{1em}\forall x,y\in G$
$(G/\backsim,[*],[\lambda])$ è un gruppo detto *gruppo quoziente*

$(G,*,\lambda)\text{ gruppo }, H\sube G$ sottogruppo induce la relazione
$g,g'\in G\hspace{3em}g\backsim_s g'\Longleftrightarrow g^{-1}*g'\in H$
verifichiamo che $\backsim_s$ è relaz. d'equiv.
1) *rilessiva* $g\backsim_s g?\Longleftrightarrow\underbrace {g^{-1}*g}_\lambda\in H?$
2) *simmetrica* $g\backsim_s g'\Longrightarrow g'\backsim_s g?$
$g\backsim_s g'\Longrightarrow g^{-1}*g'\in H\overset{\text{sottoins}}{\Longrightarrow}(g^{-1}*g')^{-1}\in H$
$(g')^{-1}*g\in H\Longrightarrow g'\backsim_s g$
3) *transitiva* $g\backsim_s g',g'\backsim_s g''\Longrightarrow g\backsim_s g''?$
$g^{-1}*g'\in H,(g')^{-1}*g''\in H\Longrightarrow g^{-1}*g''\in H?$
$g^{-1}*g''=g^{-1}*\lambda*g''=(g^{-1}*g')*((g')^{-1}*g'')\in H$ perchè H è sottogruppo

$\backsim_s$ rel. d'equiv.
$g\in G\hspace{2em}[g]=\{x\in G|x\backsim_s g\}$
$x\backsim_sg\Longleftrightarrow x^{-1}*g\in H\Longleftrightarrow\exist h\in H\hspace{1em}x^{-1}*g=h$
$x^{-1}*g=h\Longleftrightarrow x^{-1}*g*g^{-1}=h*g^{-1}\Longleftrightarrow x^{-1}=h*g^{-1}\Longleftrightarrow x=(x^{-1})^{-1}=(h*g^{-1})^{-1}=g*h^{-1}=g*k\hspace{1em}k\in H$

Il quoziente $G/\backsim_s=\{g*H:g\in G\}\eqqcolon G/H$
la cardinalità $\# G/H\text{ si denota }[G:H]$
e si chiama *indice* di H in G
analogamente definiamo
$g\backsim_d g'\Longleftrightarrow g*(g')^{-1}\in H\hspace{2em}\backsim_d$ è una relaz. d'equivalenza

Le classi d'equivalenza sono *classi laterali destre*
$H*g\coloneqq[g]=\{x\in G|x\backsim_d g\}=\{x=k*g|k\in H\}$
il quoziente $G/\backsim_d$ si denota con $H\setminus G$
$G/H\text{ e }H\setminus G$ sono equipotenti, ma sono in generale diversi



id: 4df1b42e0fff46dbabe738dfbf8e45bd
parent_id: 4b22862524694dfbb44041d5ca150bff
created_time: 2021-12-15T08:10:29.392Z
updated_time: 2021-12-15T10:00:10.150Z
is_conflict: 0
latitude: 0.00000000
longitude: 0.00000000
altitude: 0.0000
author: 
source_url: 
is_todo: 0
todo_due: 0
todo_completed: 0
source: joplin-desktop
source_application: net.cozic.joplin-desktop
application_data: 
order: 0
user_created_time: 2021-12-15T08:10:29.392Z
user_updated_time: 2021-12-15T10:00:10.150Z
encryption_cipher_text: 
encryption_applied: 0
markup_language: 1
is_shared: 0
share_id: 
conflict_original_id: 
master_key_id: 
type_: 1
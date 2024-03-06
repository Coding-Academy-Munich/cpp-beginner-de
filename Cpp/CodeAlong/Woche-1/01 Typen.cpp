// -*- coding: utf-8 -*-
// ---
// jupyter:
//   jupytext:
//     text_representation:
//       extension: .cpp
//       format_name: percent
//       format_version: '1.3'
//       jupytext_version: 1.16.1
//   kernelspec:
//     display_name: C++17
//     language: C++17
//     name: xcpp17
// ---

// %% [markdown] lang="de" tags=["slide"] slideshow={"slide_type": "slide"}
//
// <div style="text-align:center; font-size:200%;">
//  <b>Typen</b>
// </div>
// <br/>
// <div style="text-align:center; font-size:120%;">Dr. Matthias Hölzl</div>
// <br/>
// <div style="text-align:center;">Coding-Akademie München</div>
// <br/>
// <!-- 01 Typen.cpp -->
// <!-- slides/module_120_basics/topic_110_types_beginner.cpp -->

// %% [markdown] lang="de" tags=["slide"] slideshow={"slide_type": "slide"}
//
// # Einstieg in C++
//
// - Überblick über die wichtigsten Sprachkonstrukte
// - Konzentration auf die wichtigsten Aspekte
// - Etwas mehr Vorbereitung als in anderen Sprachen, bis wir interessante
//   Programme schreiben können


// %% [markdown] lang="de" tags=["slide"] slideshow={"slide_type": "slide"}
//
// ## Ziel: Berechnung von Pfadkosten
//
// Wir wollen folgendes Programm schreiben:
//
// - Gegeben: Liste von Koordinaten $(x, y, z)$ ($z$ ist Höhe).
// - Berechne die Kosten für eine Tour, die die Koordinaten der Reihe nach
//   besucht.
// - Die Kosten für ein Segment sind von der relativen Höhe des Start- und
//   Endpunkts sowie von den $(x, y)$-Koordinaten abhängig.
//
// Dabei gehen wir in kleinen Schritten vor und führen verschiedene
// Sprach-Features ein.

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ## Abstand zwischen zwei Punkten
//
// Wir wollen den Abstand zwischen zwei Punkten in der Ebene berechnen, die
// durch ihre $x$ und $y$ Koordinaten gegeben sind, z.B. $p_1 = (1, 2)$ und $p_2
// = (4, 6)$.
//
// Mit dem Satz des Pythagoras geht das so:
//
// $$
// \begin{align}
// d(p_1, p_2) &= \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2} \\
// &= \sqrt{(4 - 1)^2 + (6 - 2)^2} \\
// &= \sqrt{9 + 16} \\
// &= \sqrt{25} \\
// &= 5
// \end{align}
// $$

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Verwenden wir C++ als Taschenrechner:

// %%

// %% [markdown] lang="de" tags=["slide"] slideshow={"slide_type": "slide"}
//
// # Kommentare
//
// - `//` bis zum Ende der Zeile
// - `/*` bis zum nächsten `*/`
// - `/* ... */` Kommentare können nicht verschachtelt werden!

// %% lang="de" tags=["keep"]
// Dies ist ein Kommentar, der bis zum Ende der Zeile geht.
123
// Das auch.

// %% lang="de" tags=["keep"]
/*
    Dies ist
    ein mehrzeiliger
    Kommentar
*/
123
/* Das nicht. */

// %% lang="de" tags=["keep"]
// /* Dieser /* scheinbar verschachtelter Kommentar */ funktioniert nicht wie man denkt! */
123

// %% [markdown] lang="de" tags=["slide"] slideshow={"slide_type": "slide"}
//
// # Variablen und Datentypen
//
// - Wir wollen die Differenz der Koordinaten von $p_1$ und $p_2$ nicht immer wieder angeben.
// - Daher führen wir Variablen ein.
// - Variablen sind benannte Speicherbereiche.
// - Zu jeder Variablen müssen wir einen Datentyp angeben:

// %%

// %%

// %%

// %% [markdown] lang="de"
//
// - Damit können wir den Abstand kompakter berechnen:

// %%

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ### Core Guidelines
//
// - [ES.20: Always initialize an
//   object](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#es20-always-initialize-an-object)
// - [ES.21: Don’t introduce a variable (or constant) before you need to use
//   it](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#es21-dont-introduce-a-variable-or-constant-before-you-need-to-use-it)
// - [ES.22: Don’t declare a variable until you have a value to initialize it
//   with](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#es22-dont-declare-a-variable-until-you-have-a-value-to-initialize-it-with)
// - [ES.23: Prefer the {}-initializer
//   syntax](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#es23-prefer-the--initializer-syntax)

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Mit Daten vom Typ `int` können wir nur ganzzahlige Koordinaten angeben.
// - Es wäre besser, Gleitkommazahlen zu verwenden:

// %%

// %%

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ## Typen
//
// - In C++ hat jede Variable und jeder Ausdruck einen eindeutigen Typ.
// - Ein *Typ*
//     - hat eine Menge von möglichen Werten,
//     - definiert die Operationen, die auf diesen Werten möglich sind.

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ### Einige Fundamentale Typen
//
// | Typ         | Beschreibung      | Größe   | Werte     | &nbsp;   | Literale Syntax   |
// | :---------- | :---------------- | ------: | :-------: | :------: | ----------------- |
// | `bool`      | Boolesche Werte   | N/A     | `false`   | `true`   | `true`            |
// | `char`      | Zeichen           | 8 Bit   | 0         | 127      | `'a'`             |
// | `int`       | Zahlen            | 16 Bit  | -32768    | 32767    | `123`             |
// | `unsigned`  | positive Zahlen   | 16 Bit  | 0         | 65535    | `123u`            |
// | `long`      | große Zahlen      | 32 Bit  | -2^31     | 2^31 - 1 | `123L`            |
// | `long long` | sehr große Zahlen | 64 Bit  | -2^63     | 2^63 - 1 | `123LL`           |
// | `float`     | Gleitkommazahlen  | 6 SD    | 10.0^-38  | 10.0^38  | `1.0f`, `123e-2f` |
// | `double`    | Gleitkommazahlen  | 10 SD   | 10.0^-308 | 10.0^308 | `1.23`, `123e-2`  |
//
// - (SD = Significant Digits, Signifikante Stellen)
// - Typischerweise sind `int` und `unsigned` 32 Bit, aber das ist nicht vom Standard garantiert.

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ### Integrale Typen (ganze Zahlen und verwandte Typen)
//
// - Boolesche Werte: `bool`

// %%

// %% [markdown] lang="de"
//
// - Zeichen: `char`

// %%

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Ganze Zahlen: `int`

// %%

// %% [markdown] lang="de"
//
// - In hexadezimaler Darstellung:

// %%

// %% [markdown] lang="de"
//
// - Mit Apostroph zur Gruppierung:

// %%

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Große Zahlen: `long`

// %%

// %%

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Vorzeichenlose Zahlen: `unsigned`

// %%

// %% [markdown] lang="de"
//
// - Arithmetik für `unsigned` ist modulo $2^n$.

// %%

// %%

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ### Gleitkommazahlen
//
// - Schreibweise mit Dezimalpunkt: `double`
// - Beachten Sie, dass ein Punkt und kein Komma verwendet wird!

// %%

// %% [markdown] lang="de"
//
// - Schreibweise mit Exponent:

// %%

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Kleine Gleitkommazahlen: `float`

// %%

// %% [markdown] lang="de"
//
// - Schreibweise mit Exponent:

// %%

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Eine Null nach dem Dezimalpunkt kann weggelassen werden:

// %%


// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ## Workshop: Rechenoperationen
//
// In diesem sehr kurzen Workshop werden wir einige Literale in C++ auswerten.
// Der Hauptzweck ist, dass Sie im Umgang mit Notebooks vertraut werden.

// %% [markdown] lang="de"
//
// Was ist der Wert der Hexadezimalzahl `cafe` in Dezimaldarstellung?

// %%

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// Was passiert, wenn Sie 1 zum unsigned Wert `4'294'967'295` addieren?

// %%

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ## Workshop: Variablen
//
// - Definieren Sie eine Variable `n` vom Typ `int` und initialisieren Sie sie
//   mit dem Wert 123.
// - Definieren Sie eine Variable `x` vom Typ `double` und initialisieren Sie
//   sie mit dem Wert 1.23.
// - Definieren Sie eine Variable `m` vom Typ `unsigned` und initialisieren Sie
//   sie mit dem Wert 123.

// %%

// %%

// %%

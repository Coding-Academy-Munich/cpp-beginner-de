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
//  <b>Boolesche Operationen</b>
// </div>
// <br/>
// <div style="text-align:center; font-size:120%;">Dr. Matthias Hölzl</div>
// <br/>
// <div style="text-align:center;">Coding-Akademie München</div>
// <br/>
// <!-- 02 Boolesche Operationen.cpp -->
// <!-- slides/module_120_basics/topic_120_operations_beginner_1.cpp -->

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ## Operationen
//
// C++ bietet die üblichen Operationen an:
// - Vergleichsoperationen
// - Boolesche Operationen (und, oder, nicht)
// - Arithmetik
// - ...

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ### Vergleichsoperationen
//
// | Operation | Bedeutung      |
// | :-------: | :------------- |
// | `x == y`  | Gleichheit     |
// | `x != y`  | Ungleichheit   |
// | `x < y`   | Kleiner        |
// | `x <= y`  | Kleiner oder gleich |
// | `x > y`   | Größer         |
// | `x >= y`  | Größer oder gleich |

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// #### Gleichheit

// %%
1 == 2

// %%
1 == 1

// %%
1 != 2

// %%
1 != 1

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// #### Vergleiche

// %%
1 < 2

// %%
1 < 1

// %%
1 <= 1

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ### Boolesche Operationen
//
// | Operation   | Bedeutung          |
// | :---------: | :----------------- |
// | `x && y`    | Logisches Und      |
// | `x \|\| y`  | Logisches Oder     |
// | `!x`        | Negation           |

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// #### Negation

// %% lang="de" tags=["alt"]
// Verhindere, dass das Notebook `!` am Anfang einer Zelle als Shell-Escape interpretiert
!true

// %%
//
!false

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// #### Logisches Und

// %%
true && true

// %%
true && false

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// #### Logisches Oder

// %%
false || true

// %%
false || false

// %% [markdown] tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// <table border="1" style="border-collapse: collapse;">
//     <tr>
//         <th style="border-bottom: 2px solid black; border-right: 1px solid black;"><tt>x</tt></th>
//         <th style="border-bottom: 2px solid black; border-right: 1px solid black;"><tt>y</tt></th>
//         <th style="border-bottom: 2px solid black; border-right: 1px solid black;"><tt>!x</tt></th>
//         <th style="border-bottom: 2px solid black; border-right: 1px solid black;"><tt>x &amp;&amp; y</tt></th>
//         <th style="border-bottom: 2px solid black;"><tt>x || y</tt></th>
//     </tr>
//     <tr>
//         <td style="border-right: 1px solid black;"><tt>true</tt></td>
//         <td style="border-right: 1px solid black;"><tt>true</tt></td>
//         <td style="border-right: 1px solid black;"><tt>false</tt></td>
//         <td style="border-right: 1px solid black;"><tt>true</tt></td>
//         <td><tt>true</tt></td>
//     </tr>
//     <tr>
//         <td style="border-right: 1px solid black;"><tt>true</tt></td>
//         <td style="border-right: 1px solid black;"><tt>false</tt></td>
//         <td style="border-right: 1px solid black;"><tt>false</tt></td>
//         <td style="border-right: 1px solid black;"><tt>false</tt></td>
//         <td><tt>true</tt></td>
//     </tr>
//     <tr>
//         <td style="border-right: 1px solid black;"><tt>false</tt></td>
//         <td style="border-right: 1px solid black;"><tt>true</tt></td>
//         <td style="border-right: 1px solid black;"><tt>true</tt></td>
//         <td style="border-right: 1px solid black;"><tt>false</tt></td>
//         <td><tt>true</tt></td>
//     </tr>
//     <tr>
//         <td style="border-right: 1px solid black;"><tt>false</tt></td>
//         <td style="border-right: 1px solid black;"><tt>false</tt></td>
//         <td style="border-right: 1px solid black;"><tt>true</tt></td>
//         <td style="border-right: 1px solid black;"><tt>false</tt></td>
//         <td><tt>false</tt></td>
//     </tr>
// </table>

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Die Booleschen Operatoren können auch mit Werten verwendet werden, die
//   nicht den Typ `bool` haben.
// - Bei integralen Werten gilt `0` als falsch und jeder andere Wert als wahr.

// %% tags=["subslide"] slideshow={"slide_type": "subslide"}
1 || true

// %%
true || 2

// %%
true && 0

// %%
//
!-1

// %%
//
!0

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ## Workshop: Boolesche Operationen
//
// In diesem kurzen Workshop werden wir einige Boolesche Operationen
// ausprobieren. Der Hauptzweck ist, dass Sie im Umgang mit Notebooks und
// mit der Syntax von C++ vertraut werden.
//
// Wie können Sie in C++ testen, ob die Zahl 0 kleiner als die Zahl 1 ist?

// %%
0 < 1

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// Wie können Sie in C++ testen, ob die Zahl `1` im Intervall `[0, 10]` liegt,
// ob also gleichzeitig die Bedingungen `0 < 1` und `1 < 10` erfüllt sind?

// %%
0 < 1 && 1 < 10

// %% [markdown] lang="de" tags=["subslide", "alt"] slideshow={"slide_type": "subslide"}
//
// **Hinweis:** Sie können diese Operationen nicht in einen Ausdruck der Form `0
// < 1 < 10` schreiben. Dieser Ausdruck ist in C++ zwar syntaktisch erlaubt, hat
// aber eine andere Bedeutung.

// %% tags=["alt"]
0 < 1 < 10

// %% [markdown] lang="de" tags=["subslide", "alt"] slideshow={"slide_type": "subslide"}
//
// Dieser Ausdruck wird wie folgt ausgewertet:
// - `0 < 1` ist wahr, hat also den Wert `true`.
// - `true < 10` wird als `1 < 10` ausgewertet, ergibt also ebenfalls `true`.
//
// In diesem Fall ist das das selbe Ergebnis wie `0 < 1 && 1 < 10`.
//
// Wir sehen den Unterschied, wenn wir zwei andere Bedingungen verwenden:

// %% tags=["alt"]
10 > 5 && 5 > 2

// %% tags=["alt"]
10 > 5 > 2

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Was ist das Ergebnis von `!!true`?
// - Was ist das Ergebnis von `!!0`?
// - Was ist das Ergebnis von `!!1`?

// %%
//
!!true

// %%
//
!!0

// %%
//
!!1


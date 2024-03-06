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
//  <b>Arithmetische Operationen</b>
// </div>
// <br/>
// <div style="text-align:center; font-size:120%;">Dr. Matthias Hölzl</div>
// <br/>
// <div style="text-align:center;">Coding-Akademie München</div>
// <br/>
// <!-- 03 Arithmetische Operationen.cpp -->
// <!-- slides/module_120_basics/topic_122_operations_beginner_2.cpp -->

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ### Arithmetik
//
// | Operation | Bedeutung          |
// | :-------: | :----------------- |
// | `-x`      | Negation           |
// | `x + y`   | Addition           |
// | `x - y`   | Subtraktion        |
// | `x * y`   | Multiplikation     |
// | `x / y`   | Division           |
// | `x % y`   | Rest (Modulus)     |
//
// - Arithmetische Operatoren folgen den übliche Punkt vor Strich Regeln.
// - Mit Klammern kann die Präzedenz verändert werden.

// %% tags=["subslide"] slideshow={"slide_type": "subslide"}

// %%

// %%

// %%

// %%

// %%

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ### Gleitkommazahlen
//
// - Gleitkommazahlen können viele Werte nicht exakt darstellen
// - Das führt zu Rundungsfehlern!

// %%

// %%

// %%

// %%


// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ### Typkonversionen
//
// - C++ führt oft automatische Typkonversionen durch.
// - Dabei wird versucht in den Typ zu konvertieren, der die meisten Werte
//   darstellen kann.
// - Das führt manchmal zu unerwarteten Ergebnissen!

// %%

// %%

// %% tags=["subslide", "keep"] slideshow={"slide_type": "subslide"}
2'000'000'000 + 1 - 2'000'000'000

// %% tags=["keep"]
2'000'000'000 + 1.f - 2'000'000'000

// %% tags=["keep"]
2'000'000'000 + 1.0 - 2'000'000'000

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// Vorsicht bei Arithmetik zwischen `signed` und `unsigned` Typen:

// %%

// %%

// %%


// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ## Workshop: Rechenoperationen
//
// In diesem sehr kurzen Workshop werden wir einige Rechenoperationen in C++
// ausprobieren. Der Hauptzweck ist wieder, dass Sie im Umgang mit Notebooks
// vertraut werden.

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// Was ist das Ergebnis von `7 / 2`?

// %%

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// Welche Möglichkeiten gibt es, um das Ergebnis als Gleitkommazahl zu erhalten?

// %%

// %%

// %%

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// Was ist der Rest von `7 / 2`?

// %%

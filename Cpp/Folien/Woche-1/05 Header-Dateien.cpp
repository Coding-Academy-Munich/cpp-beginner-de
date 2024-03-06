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
//  <b>Header-Dateien</b>
// </div>
// <br/>
// <div style="text-align:center; font-size:120%;">Dr. Matthias Hölzl</div>
// <br/>
// <div style="text-align:center;">Coding-Akademie München</div>
// <br/>
// <!-- 05 Header-Dateien.cpp -->
// <!-- slides/module_120_basics/topic_140_header.cpp -->

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Um Funktionalität aus Bibliotheken zu verwenden, müssen wir dem Compiler
//   mitteilen, welche Typen und Funktionen wir verwenden wollen.
// - In C++ geschieht das durch die *Deklaration* von Typen und Funktionen.
// - Eine Deklaration ist eine Aussage über die Existenz eines Typs oder einer
//   Funktion.

// %%
int add(int a, int b);

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Deklarationen werden oft in sogenannten *Header-Dateien* gespeichert.
// - Sie werden mit der `#include`-Direktive in die aktuelle Datei eingefügt.
// - Der Code wird typischerweise beim Link-Vorgang zum Programm hinzugefügt.

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Header-Dateien haben die Endung `.h` oder `.hpp`.
// - Die `#include`-Direktive fügt den Inhalt der angegebenen Datei textuell in
//   die aktuelle Datei ein.
// - Es gibt zwei syntaktische Varianten der `#include`-Direktive.
// - `#include <...>`

// %%
#include <iostream>

// %% [markdown] lang="de"
//
// - `#include "..."`

// %%
#include "add.h"

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Header-Dateien können auch andere Header-Dateien einbinden.
// - Wir wollen verhindern, dass dabei der Inhalt einer Header-Datei mehrfach
//   eingebunden wird.
// - Dazu verwenden wir *Include Guards*.

// %% tags=["keep"]
#ifndef MY_INCLUDE_FILE_H
#define MY_INCLUDE_FILE_H

// ...

#endif

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Wir zeigen, wie die Definition des Präprozessor-Makros funktioniert.
// - Der Code im Include-Guard wäre in einer Header-Datei nicht zulässig.

// %% tags=["keep"]
#ifndef MY_PREPROCESSOR_MACRO_H
#define MY_PREPROCESSOR_MACRO_H
int i{1};
#endif

// %%
i

// %% tags=["keep"]
#ifndef MY_PREPROCESSOR_MACRO_H
#define MY_PREPROCESSOR_MACRO_H
i = 2;
#endif

// %%
i

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// Die `add.h` Header-Datei sieht also so aus:
//
// ```cpp
// #ifndef ADD_H
// #define ADD_H
//
// int add(int a, int b);
//
// #endif
// ```

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Wir werden später sehen, wie wir die zugehörige Definition der Funktion
//   `add` schreiben können.
// - Im Moment beschränken wir uns darauf, Header aus der Standardbibliothek
//   zu verwenden.
// - Für diese brauchen wir uns nicht um die Definitionen zu kümmern.
// - Header aus der Standardbibliothek haben keine Endung.

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Wir wollen die Funktion `std::abs()` aus der Standardbibliothek verwenden.
// - Signatur: `int abs(int)`
// - Deklariert in der Header-Datei `cstdlib`.

// %%
#include <cstdlib>

// %%
std::abs(-1)

// %%
std::abs(1)

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ## Core Guidelines für Header-Dateien
//
// [SF: Source
// files](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#sf-source-files)
//
// - [SF.1: Use a .cpp suffix for code files and .h for interface files if your
//   project doesn’t already follow another
//   convention](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rs-file-suffix)
// - [SF.2: A header file must not contain object definitions or non-inline
//   function
//   definitions](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rs-inline)
// - [SF.3: Use header files for all declarations used in multiple source
//   files](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rs-declaration-header)
// - [SF.8: Use #include guards for all header
//   files](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rs-guards)
// - [SF.12: Prefer the quoted form of #include for files relative to the
//   including file and the angle bracket form everywhere
//   else](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rs-incform)

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ## Workshop: Mathematische Funktionen
//
// - Der Header `cmath` enthält mathematische Funktionen.
// - Die Funktion `std::sqrt()` berechnet die Quadratwurzel einer Zahl.
// - Die Funktion `std::pow()` berechnet eine Potenz.
// - Die Funktion `std::sin()` berechnet den Sinus eines Winkels.

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Importieren Sie den Header `cmath`.

// %%
#include <cmath>

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Berechnen Sie die Quadratwurzel von 2.

// %%
std::sqrt(2)

// %% [markdown] lang="de"
//
// - Berechnen Sie 2 hoch 15.

// %%
std::pow(2, 15)

// %% [markdown] lang="de"
//
// - Berechnen Sie den Sinus von 1.

// %%
std::sin(1)

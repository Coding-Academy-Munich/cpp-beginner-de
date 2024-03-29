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
//  <b>Pointer als Parameter</b>
// </div>
// <br/>
// <div style="text-align:center; font-size:120%;">Dr. Matthias Hölzl</div>
// <br/>
// <div style="text-align:center;">Coding-Akademie München</div>
// <br/>
// <!-- 09 Pointer als Parameter.cpp -->
// <!-- slides/module_130_pointers/topic_220_pointer_args.cpp -->

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ## Pointer als Funktionsparameter
//
// - Pointer können als Funktionsparameter übergeben werden.
// - Damit sparen wir uns das Kopieren des Objekts.
// - Das ist eine Alternative zu Referenzen.

// %% tags=["subslide", "keep"] slideshow={"slide_type": "subslide"}
#include <iostream>

// %%
void pass_by_pointer_1(const int* pi)
{
    std::cout << *pi << "\n";
}

// %% tags=["keep"]
int i{1};

// %%
pass_by_pointer_1(&i);

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Wenn eine Funktion ein Pointer-Argument bekommt empfiehlt es sich
//   typischerweise, zu überprüfen, ob der Pointer `nullptr` ist.
// - Wenn der Pointer nicht `nullptr` sein kann ist es besser den Parameter als
//   Referenz zu übergeben.

// %%
void pass_by_pointer_2(const int* pi)
{
    if (pi) {
        std::cout << *pi << "\n";
    } else {
        std::cout << "Oops, got a null pointer!\n";
    }
}

// %% tags=["keep"]
int i{1};

// %%
pass_by_pointer_2(&i);

// %%
pass_by_pointer_2(nullptr);

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - [CG: F.16: For "in" parameters, pass cheaply-copied types by value and
//   others by reference to
//   `const`](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#f16-for-in-parameters-pass-cheaply-copied-types-by-value-and-others-by-reference-to-const)
// - [CG: F.60: Prefer `T*` over `T&` when "no argument" is a valid
//   option](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#f60-prefer-t-over-t-when-no-argument-is-a-valid-option)
// - [CG: F.23: Use a `not_null<T>` to indicate that "null" is not a valid
//   value](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value)

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Wenn wir einen (nicht-konstanten Pointer verwenden), können wir das
//   referenzierte Objekt verändern:

// %% tags=["subslide"] slideshow={"slide_type": "subslide"}
void pass_by_pointer(int* pi)
{
    ++(*pi);
    std::cout << *pi << "\n";
}

// %%
pass_by_pointer(&i);

// %%
i

// %% [markdown] tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// <img src="../img/call-21.png" width="30%">

// %% [markdown] tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// <img src="../img/call-22.png" width="80%">

// %% [markdown] tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// <img src="../img/call-23.png" width="80%">

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Pointer-Argumente werden häufig für Structs verwendet.
// - Dadurch können wir das Kopieren der Structs vermeiden.
// - Beim Zugriff auf Felder müssen wir den Pointer dereferenzieren.

// %% tags=["keep", "subslide"] slideshow={"slide_type": "subslide"}
#include <iostream>

// %% tags=["keep"]
struct Point {
    double x;
    double y;
};

// %% tags=["keep"]
Point my_point{1.0, 2.0};

// %% tags=["subslide"] slideshow={"slide_type": "subslide"}
void print(const Point* p)
{
    if (p) {
        std::cout << "Point{" << p->x << ", " << p->y << "}";
    } else {
        std::cout << "Cannot print a null pointer!";
    }
}

// %%
print(&my_point);

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// - Wenn wir Structs per Pointer übergeben, können wir ihre Felder verändern:

// %% tags=["subslide"] slideshow={"slide_type": "subslide"}
void pass_by_pointer(Point* p)
{
    p->x += 1.0;
    p->y += 2.0;
    print(p);
}

// %% tags=["subslide"] slideshow={"slide_type": "subslide"}
print(&my_point);

// %%
pass_by_pointer(&my_point);

// %%
print(&my_point);

// %% [markdown] tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// <img src="../img/call-31.png" width="40%">

// %% [markdown] tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// <img src="../img/call-32.png" width="60%">

// %% [markdown] tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// <img src="../img/call-33.png" width="60%">

// %% [markdown] lang="de" tags=["subslide"] slideshow={"slide_type": "subslide"}
//
// ## Mini-Workshop: Addition mit Pointern
//
// - Schreiben Sie eine Funktion `int add(const int* a, const int* b)` die die
//   von `a` und `b` referenzierten Objekte addiert und das Ergebnis zurückgibt.
// - Wenn einer der Pointer `nullptr` ist, soll die Funktion den anderen Wert
//   zurückgeben.
// - Wenn beide Pointer `nullptr` sind, soll die Funktion `0` zurückgeben.

// %% tags=["subslide"] slideshow={"slide_type": "subslide"}
int add(const int* a, const int* b)
{
    int a_value{a ? *a : 0};
    int b_value{b ? *b : 0};
    return a_value + b_value;
}

// %% tags=["subslide", "alt"] slideshow={"slide_type": "subslide"}
int add_1(const int* a, const int* b)
{
    if (a) {
        if (b) {
            return *a + *b;
        } else {
            return *a;
        }
    }
    else {
        if (b) {
            return *b;
        } else {
            return 0;
        }
    }
}

// %% tss=["subslide"]
int a{1};
int b{2};

// %%
add(&a, &b)

// %%
add(&a, nullptr)

// %%
add(nullptr, &b)

// %%
add(nullptr, nullptr)

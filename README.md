# Informatik 2

Material zur Vorlesung Informatik 2 im Kurs TEIT24A an der DHBW Mannheim.

## Benötigte Software

Wir verwenden in der Vorlesung die Programmiersprache `C++`.

Dafür wird ein Compiler sowie eine Reihe an weiteren Tools benötigt.

### Compiler und Build-Tools

Die folgenden Compiler eignen sich zum Beispiel:

| Compiler | Beschreibung                                    |
| -------- | ----------------------------------------------- |
| GCC      | Typischerweise unter Windows eingesetzt.        |
| Clang    | Standard bei MacOS, wird mit XCode installiert. |

Die Compiler können unter ihrem Namen im Netz gefunden werden.
Einfacher ist es aber, sie über das Betriebssystem, einen Paketmanager
oder als Teil einer Tool-Sammlung zu installieren.

- Unter Windows z.B. über [w64devkit](https://github.com/skeeto/w64devkit/releases)
- Unter MacOS kann XCode installiert werden oder Sie verwenden [Homebrew](https://brew.sh/)

Die folgenden weiteren Basis-Werkzeuge sind nützlich:

| Tool  | Link | Beschreibung                                                        |
| ----- | ---- | ------------------------------------------------------------------- |
| CMake | <https://cmake.org/> | Build-System, steuert den Compiler.                 |
| Conan | <https://conan.io/>  | Paket-Manager, installiert bei Bedarf Bibliotheken. |

### Entwicklungsumgebung

Als Entwicklungsumgebung wird wieder standardmäßig VsCode verwendet.
Für die C++-Entwicklung sollten mindestens folgende Erweiterungen installiert werden:

- C/Cpp
- Cmake-Tools

Empfehlenswert ist die Installation des "Cpp-Extension-Pack", der u.A. diese beiden enthält.

Alternativ kann auch eine vollständige IDE wie [CLion](https://www.jetbrains.com/clion/)
oder [Microsoft Visual Studio](https://visualstudio.microsoft.com/de/) verwendet werden.
Diese bringen alle benötigten Tools bereits mit oder bieten meist bequeme Installationsmöglichkeiten.
Allerdings sind diese IDEs proprietär und nicht für alle Betriebssysteme verfügbar.
Daher werden sie in der Prüfung nicht verwendet und sind hier auch nicht getestet.
Für den eigenen Gebrauch sind sie aber durchaus empfehlenswert.

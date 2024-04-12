
---

# Experimental Language: Write Your Own Compiler

## Source Code

The entire project code is hosted on GitHub: [ExpL Compiler](https://github.com/silcnitc)

## Release Version 1.0

This project aims to develop an online self-sufficient educational platform to help undergraduate Computer Science students understand the functioning of a compiler for a simple procedural language by writing a small toy compiler themselves. An object-oriented extension for the language has been added subsequently. The project provides students with a roadmap for the development process and guides them along the roadmap with supporting documentation.

## Overview of the Project

To design a compiler, one needs the following specifications:

- **Source Language Specification**: The source language for this compiler is called the Experimental Language (ExpL), designed solely for instructional purposes. An informal specification of the source language is provided [here](https://silcnitc.github.io/expl-docs/expl/) and an extension with support for object-oriented programming is provided [here](#).
  
- **Application Binary Interface (ABI)**: The ABI for this project is that of the Experimental Operating System (ExpOS) running on the Experimental String Machine (XSM). The ABI specification is provided [here](https://silcnitc.github.io/expl-docs/abi/).

The project follows a text book approach to compilation, logically dividing the process into several parts:

1. **Lexical Analysis**
2. **Syntax Analysis**
3. **Semantic Analysis**
4. **Abstract Syntax Tree (AST) Generation**
5. **Code Generation**

The road-map takes you through a "spiral" model of program development, gradually introducing more features to the language and increasing complexity. Each step involves lexical, syntax, and semantic analysis, as well as AST construction and code generation.

## Customizing the Project

If you wish to adapt the project to your own instructional requirements:

1. Download the ExpL source.
2. Create your own Git repository, e.g., "explabc.github.io".
3. Modify the specification, simulator, ABI, or any other component of the package, subject to the license conditions.
4. Encourage your students to contribute to the repository and help with administration.
5. Keep your repository in Git to benefit students elsewhere.

---

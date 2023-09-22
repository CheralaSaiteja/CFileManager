# CFileManager Library

[![Project Status](https://img.shields.io/badge/Status-Alpha-red.svg)](https://github.com/CheralaSaiteja/CFileManager)
[![Version](https://img.shields.io/badge/Version-v0.0.1-blue.svg)](https://github.com/CheralaSaiteja/CFileManager/releases/tag/v1.0.0)
[![Open Issues](https://img.shields.io/github/issues/CheralaSaiteja/CFileManager.svg)](https://github.com/CheralaSaiteja/CFileManager/issues)
[![Supported Build Environment](https://img.shields.io/badge/Build-Linux%20%7C%20Mac%20%7C%20Windows-brightgreen.svg)](https://github.com/CheralaSaiteja/CFileManager)

## Table of Contents

1. [Overview](#overview)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Documentation](#documentation)
6. [Examples](#examples)
7. [Contributing](#contribution-guide)
8. [License](#license)

## Overview

**CFileManager** is a lightweight C library that provides efficient file management tasks, allowing developers to quickly integrate robust file handling functionality into their projects.

**Why CFileManager?**

Developed to address the need for efficient file management, CFileManager empowers developers to expedite the setup of file-related features in their applications and projects.Simplify your project's file handling needs with CFileManager, enabling efficient and effective management of files and directories.

## Features

- **List:** Swiftly enumerate files within directories, including subdirectories.
- **Explore:** Efficiently store and update file information.
- **Sort:** Organize stored files based on various criteria.
- **Search:** Quickly locate specific files within the stored data.
- **No Dependencies:** CFileManager has no external dependencies, making it easy to integrate into your project.
- **Written in C:** Written in pure C for maximum compatibility.

## Installation

clone the project

```shell
git clone https://github.com/CheralaSaiteja/CFileManager.git
```

configure and build the library

```shell
cd CFileManager
cmake -S . -B build/
make -j4
```

or add this as dependency in your project

```cmake
add_subdirectory(path/to/CFileManagerRoot)
target_link_libraries(${PROJECT_NAME} CFileManager)
```

## Usage

## Documentation

For comprehensive API Reference please refer to the [documentation](Documentation.md) here.

## Examples

For reference examples please refer to the [Examples](examples/) directory within this repository.

## Contribution Guide

Thank you for considering contributing to CFileManager! We welcome contributions from the community, and your help can make this project even better.

### **Ways to Contribute**

There are several ways you can contribute to CFileManager:

1. **Reporting Issues:** If you encounter a bug, have a feature request, or have any questions about the project, please open an issue on our [GitHub repository](https://github.com/CheralaSaiteja/CFileManager/issues).

2. **Submitting Pull Requests (PRs):** If you'd like to contribute code, you can submit a pull request. Before doing so, please make sure to read our guidelines below.

### **Guidelines for Pull Requests**

To ensure that your pull request is accepted and to make the review process smoother, please follow these guidelines:

1. **Fork the Repository:** Before making changes, fork the [CFileManager repository](https://github.com/CheralaSaiteja/CFileManager) to your own GitHub account.

2. **Create a Branch:** Create a new branch for your changes with a descriptive name, e.g., `feature/new-feature` or `bugfix/issue-description`.

3. **Write Clean Code:** Follow the project's coding style and guidelines. If there are no specific guidelines, maintain consistency with the existing code.

4. **Document Your Code:** Ensure your code is well-documented and includes comments as necessary.

5. **Test Thoroughly:** Test your changes to ensure they work as expected. If applicable, add unit tests to cover new code.

6. **Keep Pull Requests Small:** If your contribution includes multiple changes, consider breaking them into smaller, focused pull requests.

7. **Use Clear Commit Messages:** Write clear and concise commit messages. Include details about the purpose of each commit.

8. **Be Responsive:** Be responsive to comments and feedback on your pull request. Be prepared to make additional changes as requested.

### **Code of Conduct**

Please note that we follow a [Code of Conduct](CODE_OF_CONDUCT.md) to ensure a welcoming and inclusive community. By participating, you are expected to adhere to this code.

## Licensing

By contributing to CFileManager, you agree that your contributions will be licensed under the project's [LICENSE](LICENSE.md).

Thank you for your contributions! Your help is invaluable to the project's growth and success.

## License

CFileManager is licensed under the MIT License. See the [LICENSE](LICENSE) file for the full text of the license.

### **MIT License Summary**

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software...

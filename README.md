# IRIS Communications Protocol - Version 1.0
Intra-Rocket Interface System
## Overview

This document provides information about the IRIS Communications Protocol, version 1.0. The IRIS Protocol is establishes a command and control interface used to allow communications between nodes within a rocket.

## Table of Contents

1. [Features](#features)
2. [Installation](#installation)
3. [Usage](#usage)
4. [Message Format](#message-format)
5. [Examples](#examples)
6. [Contributing](#contributing)
7. [License](#license)

## Features

- **Efficient Data Transfer:** Optimized for minimal bandwidth usage and low-latency communication.
- **Reliability:** Implements error detection and correction mechanisms to ensure reliable data transmission.
- **Scalability:** Designed to accommodate a growing number of devices in a network.
- **Flexibility:** Adaptable to various communication scenarios and use cases.

## Installation

To use the IRIS Communications Protocol in your project, follow these steps:
Using SSH:  
`git clone git@github.com:s-park21/CHIRP.git`  
Using HTTPS:  
`git clone https://github.com/s-park21/CHIRP.git`  

## Usage
### Packet encoding:  
1. Define payload struct and fill with relevent data
2. Define meta data fields
3. Fill buffer with data
4. Calculate 32-bit CRC
5. Transmit data  
### Packet decoding:
1. Receive incoming data into buffer
2. TODO: Add the other steps
## Message Format
TODO: Add image of message format


## Examples
[STM32 Implementation](https://github.com/s-park21/Strelka_FC_H7)
## Contributing
1. Make proposed changes to protocol specification document
2. Make pull request
3. Make changes to header files
4. Make pull request
## License
MIT License

Copyright (c) [2024] [Angus McLennan]

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

# XMSS Signature Scheme in C

This repository demonstrates a simplified implementation of the
eXtended Merkle Signature Scheme (XMSS).

XMSS is a hash-based digital signature scheme designed to be secure
against attacks from quantum computers.

The design uses:

- Merkle Trees
- Winternitz One-Time Signatures (WOTS)
- Cryptographic hash functions

The algorithm is standardized in RFC 8391.

Features

- XMSS key generation
- XMSS signing (simplified)
- XMSS verification (simplified)
- Educational implementation

Project Structure

xmss.c      XMSS core logic
xmss.h      header definitions
wots.c      Winternitz signature functions
merkle.c    Merkle tree construction
hash.c      simple hash implementation
main.c      example program
Makefile    build instructions

Build

gcc xmss.c wots.c merkle.c hash.c main.c -o xmss_test

Run

./xmss_test

Applications

XMSS is used in:

- post-quantum cryptography
- secure firmware updates
- long-term digital signatures
- secure boot systems

Author

Janani T  
Embedded Systems & Cryptography Developer

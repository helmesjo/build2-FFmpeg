#pragma once

// Check for AArch64 (64-bit ARM)
#if defined(__aarch64__)
#  define ARCH_AARCH64 1
#else
#  define ARCH_AARCH64 0
#endif

// Check for ARM (32-bit)
#if defined(__arm__) || defined(_M_ARM)
#  define ARCH_ARM 1
#else
#  define ARCH_ARM 0
#endif

// Check for PowerPC (PPC)
#if defined(__ppc__) || defined(__powerpc__) || defined(__PPC__) || defined(__POWERPC__)
#  define ARCH_PPC 1
#else
#  define ARCH_PPC 0
#endif

// Check for RISC-V
#if defined(__riscv)
#  define ARCH_RISCV 1
#else
#  define ARCH_RISCV 0
#endif

// Check for MIPS
#if defined(__mips__)
#  define ARCH_MIPS 1
#else
#  define ARCH_MIPS 0
#endif

// Check for x86 (32-bit)
#if defined(__i386__) || defined(_M_IX86)
#  define ARCH_X86 1
#  define ARCH_X86_32 1
#else
#  define ARCH_X86 0
#  define ARCH_X86_32 0
#endif

// Check for x86_64 (64-bit)
#if defined(__x86_64__) || defined(_M_X64)
#  define ARCH_X86_64 1
#else
#  define ARCH_X86_64 0
#endif

// Check for LoongArch
#if defined(__loongarch__) || defined(__loongarch64)
#  define ARCH_LOONGARCH 1
#else
#  define ARCH_LOONGARCH 0
#endif

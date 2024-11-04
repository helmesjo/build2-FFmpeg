#ifndef FFMPEG_CONFIG_CPU_H
#define FFMPEG_CONFIG_CPU_H

// Check for AArch64 (64-bit ARM)
#undef ARCH_AARCH64
#if defined(__aarch64__)
#  define ARCH_AARCH64 1
#else
#  define ARCH_AARCH64 0
#endif

// Check for ARM (32-bit)
#undef ARCH_ARM
#if defined(__arm__) || defined(_M_ARM)
#  define ARCH_ARM 1
#else
#  define ARCH_ARM 0
#endif

// Check for ARM versions
#undef HAVE_ARMV8
#if defined(__ARM_ARCH)
#  if __ARM_ARCH == 8
#    define HAVE_ARMV8 1
#  else
#    define HAVE_ARMV8 0
#  endif
#endif

// Check for PowerPC (PPC)
#undef ARCH_PPC
#if defined(__ppc__) || defined(__powerpc__) || defined(__PPC__) || defined(__POWERPC__)
#  define ARCH_PPC 1
#else
#  define ARCH_PPC 0
#endif

// Check for RISC-V
#undef ARCH_RISCV
#if defined(__riscv)
#  define ARCH_RISCV 1
#else
#  define ARCH_RISCV 0
#endif

// Check for MIPS
#undef ARCH_MIPS
#if defined(__mips__)
#  define ARCH_MIPS 1
#else
#  define ARCH_MIPS 0
#endif

// Check for either x86 (32-bit) or x64 (64-bit)
#undef ARCH_X86
#if defined(__i386__) || defined(_M_IX86) || defined(__x86_64__) || defined(_M_X64)
#  define ARCH_X86 1
#else
#  define ARCH_X86 0
#endif

// Check for x86 (32-bit)
#undef ARCH_X86_32
#if defined(__i386__) || defined(_M_IX86)
#  define ARCH_X86_32 1
#else
#  define ARCH_X86_32 0
#endif

// Check for x86_64 (64-bit)
#undef ARCH_X86_64
#if defined(__x86_64__) || defined(_M_X64)
#  define ARCH_X86_64 1
#else
#  define ARCH_X86_64 0
#endif

// Check for LoongArch
#undef ARCH_LOONGARCH
#if defined(__loongarch__) || defined(__loongarch64)
#  define ARCH_LOONGARCH 1
#else
#  define ARCH_LOONGARCH 0
#endif

#endif

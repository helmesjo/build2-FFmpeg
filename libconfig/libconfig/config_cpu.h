#ifndef FFMPEG_CONFIG_CPU_H
#define FFMPEG_CONFIG_CPU_H

  // Check for AArch64 (64-bit ARM)
  #undef ARCH_AARCH64
  #if defined(__aarch64__)
    #define ARCH_AARCH64 1
  #else
    #define ARCH_AARCH64 0
  #endif

  // Check for ARM (32-bit)
  #undef ARCH_ARM
  #if defined(__arm__) || defined(_M_ARM)
    #define ARCH_ARM 1
  #else
    #define ARCH_ARM 0
  #endif

  // Check for ARM versions
  #undef HAVE_ARMV8
  #if defined(__ARM_ARCH)
  #if __ARM_ARCH == 8
    #define HAVE_ARMV8 1
  #else
    #define HAVE_ARMV8 0
  #endif
  #endif

  // Check for PowerPC (PPC)
  #undef ARCH_PPC
  #if defined(__ppc__) || defined(__powerpc__) || defined(__PPC__) ||            \
      defined(__POWERPC__)
    #define ARCH_PPC 1
  #else
    #define ARCH_PPC 0
  #endif

  // Check for RISC-V
  #undef ARCH_RISCV
  #if defined(__riscv)
    #define ARCH_RISCV 1
  #else
    #define ARCH_RISCV 0
  #endif

  // Check for MIPS
  #undef ARCH_MIPS
  #if defined(__mips__)
    #define ARCH_MIPS 1
  #else
    #define ARCH_MIPS 0
  #endif

  // Check for either x86 (32-bit) or x64 (64-bit)
  #undef ARCH_X86
  #if defined(__i386__) || defined(_M_IX86) || defined(__x86_64__) ||            \
      defined(_M_X64)
  #define ARCH_X86 1
  #else
  #define ARCH_X86 0
  #endif

  // Check for x86 (32-bit)
  #undef ARCH_X86_32
  #if defined(__i386__) || defined(_M_IX86)
  #define ARCH_X86_32 1
  #else
  #define ARCH_X86_32 0
  #endif

  // Check for x86_64 (64-bit)
  #undef ARCH_X86_64
  #if defined(__x86_64__) || defined(_M_X64)
    #define ARCH_X86_64 1
  #else
    #define ARCH_X86_64 0
  #endif

  // Check for LoongArch
  #undef ARCH_LOONGARCH
  #if defined(__loongarch__) || defined(__loongarch64)
    #define ARCH_LOONGARCH 1
  #else
    #define ARCH_LOONGARCH 0
  #endif

  // examples:
  //   armv8.2-a
  //   armv8.6-a+crc
  #if !defined(AS_ARCH_LEVEL) && defined(__ARM_ARCH)

    // Start from a baseline version:
    #define AS_ARCH_VERSION_PREF armv
    #define AS_ARCH_VERSION_MAJ __ARM_ARCH
    #define AS_ARCH_VERSION_MIN 0
    #define AS_ARCH_EXT a

    // Upgrade baseline based on specific features:
    #if defined(__ARM_FEATURE_FP16_SCALAR_ARITHMETIC)
      #undef AS_ARCH_VERSION_MIN
      #define AS_ARCH_VERSION_MIN 2 // armv8.2-a introduces FP16
    #endif

    // DOTPROD introduced in armv8.2-a
    #if defined(__ARM_FEATURE_DOTPROD)
      #undef AS_ARCH_VERSION_MIN
      #define AS_ARCH_VERSION_MIN 4 // armv8.4-a introduces DOTPROD
    #endif

    // CRC32 support; we'll only update if it's not already at or beyond v8.6:
    #if defined(__ARM_FEATURE_CRC32)
      #undef AS_ARCH_EXT
      #define AS_ARCH_EXT a+crc
    #endif

    // #define M_STRINGIFY(x) #x
    // #define M_TOSTRING(x) STRINGIFY(x)
    #define M_VALUE(v) v
    // #define M_CONC4(A, B, C, D) M_CONC_(A, B)
    // #define M_CONC4_(A, B, C, D) A ## B ## C ## D
    // #define M_CONC(A, B) M_CONC_(A, B)
    // #define M_CONC_(A, B) A ## B
    // #define PRIMITIVE_CAT(x, y, z, w) x ## y ## z ## w
    // #define CAT(x, y, z, w) PRIMITIVE_CAT(x, y, z, w)
    // #define N_() 0
    // #define N_X() 1
    #define M() armv
    #define M1() AS_ARCH_VERSION_MAJ
    #define M2() M1()
    #define MX() AS_ARCH_VERSION_MIN
    #define M3() CATZ(M2().,MX())
    #define MX2() AS_ARCH_EXT
    #define M4() CATZ(M3(),MX2())
    #define M5() CATZ(M3()-MX2(),)

    #define CAT_(x, y) x ## y
    #define CATZ(x, y) CAT_(x, y)
    #define AS_ARCH_LEVEL CATZ(M(),M5())

    // #define AS_ARCH_LEVEL M_CONC(M(), FINAL_PLEB)()
  #endif
#endif

#include <libconfig/config.h>

#define XSTR(x) STR(x)
#define STR(x) #x

#ifdef ARCH_AARCH64
 #pragma message("#define ARCH_AARCH64 " XSTR(ARCH_AARCH64))
#endif
#ifdef ARCH_ALPHA
 #pragma message("#define ARCH_ALPHA " XSTR(ARCH_ALPHA))
#endif
#ifdef ARCH_ARM
 #pragma message("#define ARCH_ARM " XSTR(ARCH_ARM))
#endif
#ifdef ARCH_AVR32
 #pragma message("#define ARCH_AVR32 " XSTR(ARCH_AVR32))
#endif
#ifdef ARCH_AVR32_AP
 #pragma message("#define ARCH_AVR32_AP " XSTR(ARCH_AVR32_AP))
#endif
#ifdef ARCH_AVR32_UC
 #pragma message("#define ARCH_AVR32_UC " XSTR(ARCH_AVR32_UC))
#endif
#ifdef ARCH_BFIN
 #pragma message("#define ARCH_BFIN " XSTR(ARCH_BFIN))
#endif
#ifdef ARCH_IA64
 #pragma message("#define ARCH_IA64 " XSTR(ARCH_IA64))
#endif
#ifdef ARCH_LOONGARCH
 #pragma message("#define ARCH_LOONGARCH " XSTR(ARCH_LOONGARCH))
#endif
#ifdef ARCH_LOONGARCH32
 #pragma message("#define ARCH_LOONGARCH32 " XSTR(ARCH_LOONGARCH32))
#endif
#ifdef ARCH_LOONGARCH64
 #pragma message("#define ARCH_LOONGARCH64 " XSTR(ARCH_LOONGARCH64))
#endif
#ifdef ARCH_M68K
 #pragma message("#define ARCH_M68K " XSTR(ARCH_M68K))
#endif
#ifdef ARCH_MIPS
 #pragma message("#define ARCH_MIPS " XSTR(ARCH_MIPS))
#endif
#ifdef ARCH_MIPS64
 #pragma message("#define ARCH_MIPS64 " XSTR(ARCH_MIPS64))
#endif
#ifdef ARCH_PARISC
 #pragma message("#define ARCH_PARISC " XSTR(ARCH_PARISC))
#endif
#ifdef ARCH_PPC
 #pragma message("#define ARCH_PPC " XSTR(ARCH_PPC))
#endif
#ifdef ARCH_PPC64
 #pragma message("#define ARCH_PPC64 " XSTR(ARCH_PPC64))
#endif
#ifdef ARCH_RISCV
 #pragma message("#define ARCH_RISCV " XSTR(ARCH_RISCV))
#endif
#ifdef ARCH_S390
 #pragma message("#define ARCH_S390 " XSTR(ARCH_S390))
#endif
#ifdef ARCH_SH4
 #pragma message("#define ARCH_SH4 " XSTR(ARCH_SH4))
#endif
#ifdef ARCH_SPARC
 #pragma message("#define ARCH_SPARC " XSTR(ARCH_SPARC))
#endif
#ifdef ARCH_SPARC64
 #pragma message("#define ARCH_SPARC64 " XSTR(ARCH_SPARC64))
#endif
#ifdef ARCH_TILEGX
 #pragma message("#define ARCH_TILEGX " XSTR(ARCH_TILEGX))
#endif
#ifdef ARCH_TILEPRO
 #pragma message("#define ARCH_TILEPRO " XSTR(ARCH_TILEPRO))
#endif
#ifdef ARCH_X86
 #pragma message("#define ARCH_X86 " XSTR(ARCH_X86))
#endif
#ifdef ARCH_X86_32
 #pragma message("#define ARCH_X86_32 " XSTR(ARCH_X86_32))
#endif
#ifdef ARCH_X86_64
 #pragma message("#define ARCH_X86_64 " XSTR(ARCH_X86_64))
#endif
#ifdef HAVE_ARMV5TE
 #pragma message("#define HAVE_ARMV5TE " XSTR(HAVE_ARMV5TE))
#endif
#ifdef HAVE_ARMV6
 #pragma message("#define HAVE_ARMV6 " XSTR(HAVE_ARMV6))
#endif
#ifdef HAVE_ARMV6T2
 #pragma message("#define HAVE_ARMV6T2 " XSTR(HAVE_ARMV6T2))
#endif
#ifdef HAVE_ARMV8
 #pragma message("#define HAVE_ARMV8 " XSTR(HAVE_ARMV8))
#endif
#ifdef HAVE_DOTPROD
 #pragma message("#define HAVE_DOTPROD " XSTR(HAVE_DOTPROD))
#endif
#ifdef HAVE_I8MM
 #pragma message("#define HAVE_I8MM " XSTR(HAVE_I8MM))
#endif
#ifdef HAVE_NEON
 #pragma message("#define HAVE_NEON " XSTR(HAVE_NEON))
#endif
#ifdef HAVE_VFP
 #pragma message("#define HAVE_VFP " XSTR(HAVE_VFP))
#endif
#ifdef HAVE_VFPV3
 #pragma message("#define HAVE_VFPV3 " XSTR(HAVE_VFPV3))
#endif
#ifdef HAVE_SETEND
 #pragma message("#define HAVE_SETEND " XSTR(HAVE_SETEND))
#endif
#ifdef HAVE_ALTIVEC
 #pragma message("#define HAVE_ALTIVEC " XSTR(HAVE_ALTIVEC))
#endif
#ifdef HAVE_DCBZL
 #pragma message("#define HAVE_DCBZL " XSTR(HAVE_DCBZL))
#endif
#ifdef HAVE_LDBRX
 #pragma message("#define HAVE_LDBRX " XSTR(HAVE_LDBRX))
#endif
#ifdef HAVE_POWER8
 #pragma message("#define HAVE_POWER8 " XSTR(HAVE_POWER8))
#endif
#ifdef HAVE_PPC4XX
 #pragma message("#define HAVE_PPC4XX " XSTR(HAVE_PPC4XX))
#endif
#ifdef HAVE_VSX
 #pragma message("#define HAVE_VSX " XSTR(HAVE_VSX))
#endif
#ifdef HAVE_RV
 #pragma message("#define HAVE_RV " XSTR(HAVE_RV))
#endif
#ifdef HAVE_RVV
 #pragma message("#define HAVE_RVV " XSTR(HAVE_RVV))
#endif
#ifdef HAVE_AESNI
 #pragma message("#define HAVE_AESNI " XSTR(HAVE_AESNI))
#endif
#ifdef HAVE_AMD3DNOW
 #pragma message("#define HAVE_AMD3DNOW " XSTR(HAVE_AMD3DNOW))
#endif
#ifdef HAVE_AMD3DNOWEXT
 #pragma message("#define HAVE_AMD3DNOWEXT " XSTR(HAVE_AMD3DNOWEXT))
#endif
#ifdef HAVE_AVX
 #pragma message("#define HAVE_AVX " XSTR(HAVE_AVX))
#endif
#ifdef HAVE_AVX2
 #pragma message("#define HAVE_AVX2 " XSTR(HAVE_AVX2))
#endif
#ifdef HAVE_AVX512
 #pragma message("#define HAVE_AVX512 " XSTR(HAVE_AVX512))
#endif
#ifdef HAVE_AVX512ICL
 #pragma message("#define HAVE_AVX512ICL " XSTR(HAVE_AVX512ICL))
#endif
#ifdef HAVE_FMA3
 #pragma message("#define HAVE_FMA3 " XSTR(HAVE_FMA3))
#endif
#ifdef HAVE_FMA4
 #pragma message("#define HAVE_FMA4 " XSTR(HAVE_FMA4))
#endif
#ifdef HAVE_MMX
 #pragma message("#define HAVE_MMX " XSTR(HAVE_MMX))
#endif
#ifdef HAVE_MMXEXT
 #pragma message("#define HAVE_MMXEXT " XSTR(HAVE_MMXEXT))
#endif
#ifdef HAVE_SSE
 #pragma message("#define HAVE_SSE " XSTR(HAVE_SSE))
#endif
#ifdef HAVE_SSE2
 #pragma message("#define HAVE_SSE2 " XSTR(HAVE_SSE2))
#endif
#ifdef HAVE_SSE3
 #pragma message("#define HAVE_SSE3 " XSTR(HAVE_SSE3))
#endif
#ifdef HAVE_SSE4
 #pragma message("#define HAVE_SSE4 " XSTR(HAVE_SSE4))
#endif
#ifdef HAVE_SSE42
 #pragma message("#define HAVE_SSE42 " XSTR(HAVE_SSE42))
#endif
#ifdef HAVE_SSSE3
 #pragma message("#define HAVE_SSSE3 " XSTR(HAVE_SSSE3))
#endif
#ifdef HAVE_XOP
 #pragma message("#define HAVE_XOP " XSTR(HAVE_XOP))
#endif
#ifdef HAVE_I686
 #pragma message("#define HAVE_I686 " XSTR(HAVE_I686))
#endif
#ifdef HAVE_MIPSFPU
 #pragma message("#define HAVE_MIPSFPU " XSTR(HAVE_MIPSFPU))
#endif
#ifdef HAVE_MIPS32R2
 #pragma message("#define HAVE_MIPS32R2 " XSTR(HAVE_MIPS32R2))
#endif
#ifdef HAVE_MIPS32R5
 #pragma message("#define HAVE_MIPS32R5 " XSTR(HAVE_MIPS32R5))
#endif
#ifdef HAVE_MIPS64R2
 #pragma message("#define HAVE_MIPS64R2 " XSTR(HAVE_MIPS64R2))
#endif
#ifdef HAVE_MIPS32R6
 #pragma message("#define HAVE_MIPS32R6 " XSTR(HAVE_MIPS32R6))
#endif
#ifdef HAVE_MIPS64R6
 #pragma message("#define HAVE_MIPS64R6 " XSTR(HAVE_MIPS64R6))
#endif
#ifdef HAVE_MIPSDSP
 #pragma message("#define HAVE_MIPSDSP " XSTR(HAVE_MIPSDSP))
#endif
#ifdef HAVE_MIPSDSPR2
 #pragma message("#define HAVE_MIPSDSPR2 " XSTR(HAVE_MIPSDSPR2))
#endif
#ifdef HAVE_MSA
 #pragma message("#define HAVE_MSA " XSTR(HAVE_MSA))
#endif
#ifdef HAVE_LOONGSON2
 #pragma message("#define HAVE_LOONGSON2 " XSTR(HAVE_LOONGSON2))
#endif
#ifdef HAVE_LOONGSON3
 #pragma message("#define HAVE_LOONGSON3 " XSTR(HAVE_LOONGSON3))
#endif
#ifdef HAVE_MMI
 #pragma message("#define HAVE_MMI " XSTR(HAVE_MMI))
#endif
#ifdef HAVE_LSX
 #pragma message("#define HAVE_LSX " XSTR(HAVE_LSX))
#endif
#ifdef HAVE_LASX
 #pragma message("#define HAVE_LASX " XSTR(HAVE_LASX))
#endif
#ifdef HAVE_ARMV5TE_EXTERNAL
 #pragma message("#define HAVE_ARMV5TE_EXTERNAL " XSTR(HAVE_ARMV5TE_EXTERNAL))
#endif
#ifdef HAVE_ARMV6_EXTERNAL
 #pragma message("#define HAVE_ARMV6_EXTERNAL " XSTR(HAVE_ARMV6_EXTERNAL))
#endif
#ifdef HAVE_ARMV6T2_EXTERNAL
 #pragma message("#define HAVE_ARMV6T2_EXTERNAL " XSTR(HAVE_ARMV6T2_EXTERNAL))
#endif
#ifdef HAVE_ARMV8_EXTERNAL
 #pragma message("#define HAVE_ARMV8_EXTERNAL " XSTR(HAVE_ARMV8_EXTERNAL))
#endif
#ifdef HAVE_DOTPROD_EXTERNAL
 #pragma message("#define HAVE_DOTPROD_EXTERNAL " XSTR(HAVE_DOTPROD_EXTERNAL))
#endif
#ifdef HAVE_I8MM_EXTERNAL
 #pragma message("#define HAVE_I8MM_EXTERNAL " XSTR(HAVE_I8MM_EXTERNAL))
#endif
#ifdef HAVE_NEON_EXTERNAL
 #pragma message("#define HAVE_NEON_EXTERNAL " XSTR(HAVE_NEON_EXTERNAL))
#endif
#ifdef HAVE_VFP_EXTERNAL
 #pragma message("#define HAVE_VFP_EXTERNAL " XSTR(HAVE_VFP_EXTERNAL))
#endif
#ifdef HAVE_VFPV3_EXTERNAL
 #pragma message("#define HAVE_VFPV3_EXTERNAL " XSTR(HAVE_VFPV3_EXTERNAL))
#endif
#ifdef HAVE_SETEND_EXTERNAL
 #pragma message("#define HAVE_SETEND_EXTERNAL " XSTR(HAVE_SETEND_EXTERNAL))
#endif
#ifdef HAVE_ALTIVEC_EXTERNAL
 #pragma message("#define HAVE_ALTIVEC_EXTERNAL " XSTR(HAVE_ALTIVEC_EXTERNAL))
#endif
#ifdef HAVE_DCBZL_EXTERNAL
 #pragma message("#define HAVE_DCBZL_EXTERNAL " XSTR(HAVE_DCBZL_EXTERNAL))
#endif
#ifdef HAVE_LDBRX_EXTERNAL
 #pragma message("#define HAVE_LDBRX_EXTERNAL " XSTR(HAVE_LDBRX_EXTERNAL))
#endif
#ifdef HAVE_POWER8_EXTERNAL
 #pragma message("#define HAVE_POWER8_EXTERNAL " XSTR(HAVE_POWER8_EXTERNAL))
#endif
#ifdef HAVE_PPC4XX_EXTERNAL
 #pragma message("#define HAVE_PPC4XX_EXTERNAL " XSTR(HAVE_PPC4XX_EXTERNAL))
#endif
#ifdef HAVE_VSX_EXTERNAL
 #pragma message("#define HAVE_VSX_EXTERNAL " XSTR(HAVE_VSX_EXTERNAL))
#endif
#ifdef HAVE_RV_EXTERNAL
 #pragma message("#define HAVE_RV_EXTERNAL " XSTR(HAVE_RV_EXTERNAL))
#endif
#ifdef HAVE_RVV_EXTERNAL
 #pragma message("#define HAVE_RVV_EXTERNAL " XSTR(HAVE_RVV_EXTERNAL))
#endif
#ifdef HAVE_AESNI_EXTERNAL
 #pragma message("#define HAVE_AESNI_EXTERNAL " XSTR(HAVE_AESNI_EXTERNAL))
#endif
#ifdef HAVE_AMD3DNOW_EXTERNAL
 #pragma message("#define HAVE_AMD3DNOW_EXTERNAL " XSTR(HAVE_AMD3DNOW_EXTERNAL))
#endif
#ifdef HAVE_AMD3DNOWEXT_EXTERNAL
 #pragma message("#define HAVE_AMD3DNOWEXT_EXTERNAL " XSTR(HAVE_AMD3DNOWEXT_EXTERNAL))
#endif
#ifdef HAVE_AVX_EXTERNAL
 #pragma message("#define HAVE_AVX_EXTERNAL " XSTR(HAVE_AVX_EXTERNAL))
#endif
#ifdef HAVE_AVX2_EXTERNAL
 #pragma message("#define HAVE_AVX2_EXTERNAL " XSTR(HAVE_AVX2_EXTERNAL))
#endif
#ifdef HAVE_AVX512_EXTERNAL
 #pragma message("#define HAVE_AVX512_EXTERNAL " XSTR(HAVE_AVX512_EXTERNAL))
#endif
#ifdef HAVE_AVX512ICL_EXTERNAL
 #pragma message("#define HAVE_AVX512ICL_EXTERNAL " XSTR(HAVE_AVX512ICL_EXTERNAL))
#endif
#ifdef HAVE_FMA3_EXTERNAL
 #pragma message("#define HAVE_FMA3_EXTERNAL " XSTR(HAVE_FMA3_EXTERNAL))
#endif
#ifdef HAVE_FMA4_EXTERNAL
 #pragma message("#define HAVE_FMA4_EXTERNAL " XSTR(HAVE_FMA4_EXTERNAL))
#endif
#ifdef HAVE_MMX_EXTERNAL
 #pragma message("#define HAVE_MMX_EXTERNAL " XSTR(HAVE_MMX_EXTERNAL))
#endif
#ifdef HAVE_MMXEXT_EXTERNAL
 #pragma message("#define HAVE_MMXEXT_EXTERNAL " XSTR(HAVE_MMXEXT_EXTERNAL))
#endif
#ifdef HAVE_SSE_EXTERNAL
 #pragma message("#define HAVE_SSE_EXTERNAL " XSTR(HAVE_SSE_EXTERNAL))
#endif
#ifdef HAVE_SSE2_EXTERNAL
 #pragma message("#define HAVE_SSE2_EXTERNAL " XSTR(HAVE_SSE2_EXTERNAL))
#endif
#ifdef HAVE_SSE3_EXTERNAL
 #pragma message("#define HAVE_SSE3_EXTERNAL " XSTR(HAVE_SSE3_EXTERNAL))
#endif
#ifdef HAVE_SSE4_EXTERNAL
 #pragma message("#define HAVE_SSE4_EXTERNAL " XSTR(HAVE_SSE4_EXTERNAL))
#endif
#ifdef HAVE_SSE42_EXTERNAL
 #pragma message("#define HAVE_SSE42_EXTERNAL " XSTR(HAVE_SSE42_EXTERNAL))
#endif
#ifdef HAVE_SSSE3_EXTERNAL
 #pragma message("#define HAVE_SSSE3_EXTERNAL " XSTR(HAVE_SSSE3_EXTERNAL))
#endif
#ifdef HAVE_XOP_EXTERNAL
 #pragma message("#define HAVE_XOP_EXTERNAL " XSTR(HAVE_XOP_EXTERNAL))
#endif
#ifdef HAVE_I686_EXTERNAL
 #pragma message("#define HAVE_I686_EXTERNAL " XSTR(HAVE_I686_EXTERNAL))
#endif
#ifdef HAVE_MIPSFPU_EXTERNAL
 #pragma message("#define HAVE_MIPSFPU_EXTERNAL " XSTR(HAVE_MIPSFPU_EXTERNAL))
#endif
#ifdef HAVE_MIPS32R2_EXTERNAL
 #pragma message("#define HAVE_MIPS32R2_EXTERNAL " XSTR(HAVE_MIPS32R2_EXTERNAL))
#endif
#ifdef HAVE_MIPS32R5_EXTERNAL
 #pragma message("#define HAVE_MIPS32R5_EXTERNAL " XSTR(HAVE_MIPS32R5_EXTERNAL))
#endif
#ifdef HAVE_MIPS64R2_EXTERNAL
 #pragma message("#define HAVE_MIPS64R2_EXTERNAL " XSTR(HAVE_MIPS64R2_EXTERNAL))
#endif
#ifdef HAVE_MIPS32R6_EXTERNAL
 #pragma message("#define HAVE_MIPS32R6_EXTERNAL " XSTR(HAVE_MIPS32R6_EXTERNAL))
#endif
#ifdef HAVE_MIPS64R6_EXTERNAL
 #pragma message("#define HAVE_MIPS64R6_EXTERNAL " XSTR(HAVE_MIPS64R6_EXTERNAL))
#endif
#ifdef HAVE_MIPSDSP_EXTERNAL
 #pragma message("#define HAVE_MIPSDSP_EXTERNAL " XSTR(HAVE_MIPSDSP_EXTERNAL))
#endif
#ifdef HAVE_MIPSDSPR2_EXTERNAL
 #pragma message("#define HAVE_MIPSDSPR2_EXTERNAL " XSTR(HAVE_MIPSDSPR2_EXTERNAL))
#endif
#ifdef HAVE_MSA_EXTERNAL
 #pragma message("#define HAVE_MSA_EXTERNAL " XSTR(HAVE_MSA_EXTERNAL))
#endif
#ifdef HAVE_LOONGSON2_EXTERNAL
 #pragma message("#define HAVE_LOONGSON2_EXTERNAL " XSTR(HAVE_LOONGSON2_EXTERNAL))
#endif
#ifdef HAVE_LOONGSON3_EXTERNAL
 #pragma message("#define HAVE_LOONGSON3_EXTERNAL " XSTR(HAVE_LOONGSON3_EXTERNAL))
#endif
#ifdef HAVE_MMI_EXTERNAL
 #pragma message("#define HAVE_MMI_EXTERNAL " XSTR(HAVE_MMI_EXTERNAL))
#endif
#ifdef HAVE_LSX_EXTERNAL
 #pragma message("#define HAVE_LSX_EXTERNAL " XSTR(HAVE_LSX_EXTERNAL))
#endif
#ifdef HAVE_LASX_EXTERNAL
 #pragma message("#define HAVE_LASX_EXTERNAL " XSTR(HAVE_LASX_EXTERNAL))
#endif
#ifdef HAVE_ARMV5TE_INLINE
 #pragma message("#define HAVE_ARMV5TE_INLINE " XSTR(HAVE_ARMV5TE_INLINE))
#endif
#ifdef HAVE_ARMV6_INLINE
 #pragma message("#define HAVE_ARMV6_INLINE " XSTR(HAVE_ARMV6_INLINE))
#endif
#ifdef HAVE_ARMV6T2_INLINE
 #pragma message("#define HAVE_ARMV6T2_INLINE " XSTR(HAVE_ARMV6T2_INLINE))
#endif
#ifdef HAVE_ARMV8_INLINE
 #pragma message("#define HAVE_ARMV8_INLINE " XSTR(HAVE_ARMV8_INLINE))
#endif
#ifdef HAVE_DOTPROD_INLINE
 #pragma message("#define HAVE_DOTPROD_INLINE " XSTR(HAVE_DOTPROD_INLINE))
#endif
#ifdef HAVE_I8MM_INLINE
 #pragma message("#define HAVE_I8MM_INLINE " XSTR(HAVE_I8MM_INLINE))
#endif
#ifdef HAVE_NEON_INLINE
 #pragma message("#define HAVE_NEON_INLINE " XSTR(HAVE_NEON_INLINE))
#endif
#ifdef HAVE_VFP_INLINE
 #pragma message("#define HAVE_VFP_INLINE " XSTR(HAVE_VFP_INLINE))
#endif
#ifdef HAVE_VFPV3_INLINE
 #pragma message("#define HAVE_VFPV3_INLINE " XSTR(HAVE_VFPV3_INLINE))
#endif
#ifdef HAVE_SETEND_INLINE
 #pragma message("#define HAVE_SETEND_INLINE " XSTR(HAVE_SETEND_INLINE))
#endif
#ifdef HAVE_ALTIVEC_INLINE
 #pragma message("#define HAVE_ALTIVEC_INLINE " XSTR(HAVE_ALTIVEC_INLINE))
#endif
#ifdef HAVE_DCBZL_INLINE
 #pragma message("#define HAVE_DCBZL_INLINE " XSTR(HAVE_DCBZL_INLINE))
#endif
#ifdef HAVE_LDBRX_INLINE
 #pragma message("#define HAVE_LDBRX_INLINE " XSTR(HAVE_LDBRX_INLINE))
#endif
#ifdef HAVE_POWER8_INLINE
 #pragma message("#define HAVE_POWER8_INLINE " XSTR(HAVE_POWER8_INLINE))
#endif
#ifdef HAVE_PPC4XX_INLINE
 #pragma message("#define HAVE_PPC4XX_INLINE " XSTR(HAVE_PPC4XX_INLINE))
#endif
#ifdef HAVE_VSX_INLINE
 #pragma message("#define HAVE_VSX_INLINE " XSTR(HAVE_VSX_INLINE))
#endif
#ifdef HAVE_RV_INLINE
 #pragma message("#define HAVE_RV_INLINE " XSTR(HAVE_RV_INLINE))
#endif
#ifdef HAVE_RVV_INLINE
 #pragma message("#define HAVE_RVV_INLINE " XSTR(HAVE_RVV_INLINE))
#endif
#ifdef HAVE_AESNI_INLINE
 #pragma message("#define HAVE_AESNI_INLINE " XSTR(HAVE_AESNI_INLINE))
#endif
#ifdef HAVE_AMD3DNOW_INLINE
 #pragma message("#define HAVE_AMD3DNOW_INLINE " XSTR(HAVE_AMD3DNOW_INLINE))
#endif
#ifdef HAVE_AMD3DNOWEXT_INLINE
 #pragma message("#define HAVE_AMD3DNOWEXT_INLINE " XSTR(HAVE_AMD3DNOWEXT_INLINE))
#endif
#ifdef HAVE_AVX_INLINE
 #pragma message("#define HAVE_AVX_INLINE " XSTR(HAVE_AVX_INLINE))
#endif
#ifdef HAVE_AVX2_INLINE
 #pragma message("#define HAVE_AVX2_INLINE " XSTR(HAVE_AVX2_INLINE))
#endif
#ifdef HAVE_AVX512_INLINE
 #pragma message("#define HAVE_AVX512_INLINE " XSTR(HAVE_AVX512_INLINE))
#endif
#ifdef HAVE_AVX512ICL_INLINE
 #pragma message("#define HAVE_AVX512ICL_INLINE " XSTR(HAVE_AVX512ICL_INLINE))
#endif
#ifdef HAVE_FMA3_INLINE
 #pragma message("#define HAVE_FMA3_INLINE " XSTR(HAVE_FMA3_INLINE))
#endif
#ifdef HAVE_FMA4_INLINE
 #pragma message("#define HAVE_FMA4_INLINE " XSTR(HAVE_FMA4_INLINE))
#endif
#ifdef HAVE_MMX_INLINE
 #pragma message("#define HAVE_MMX_INLINE " XSTR(HAVE_MMX_INLINE))
#endif
#ifdef HAVE_MMXEXT_INLINE
 #pragma message("#define HAVE_MMXEXT_INLINE " XSTR(HAVE_MMXEXT_INLINE))
#endif
#ifdef HAVE_SSE_INLINE
 #pragma message("#define HAVE_SSE_INLINE " XSTR(HAVE_SSE_INLINE))
#endif
#ifdef HAVE_SSE2_INLINE
 #pragma message("#define HAVE_SSE2_INLINE " XSTR(HAVE_SSE2_INLINE))
#endif
#ifdef HAVE_SSE3_INLINE
 #pragma message("#define HAVE_SSE3_INLINE " XSTR(HAVE_SSE3_INLINE))
#endif
#ifdef HAVE_SSE4_INLINE
 #pragma message("#define HAVE_SSE4_INLINE " XSTR(HAVE_SSE4_INLINE))
#endif
#ifdef HAVE_SSE42_INLINE
 #pragma message("#define HAVE_SSE42_INLINE " XSTR(HAVE_SSE42_INLINE))
#endif
#ifdef HAVE_SSSE3_INLINE
 #pragma message("#define HAVE_SSSE3_INLINE " XSTR(HAVE_SSSE3_INLINE))
#endif
#ifdef HAVE_XOP_INLINE
 #pragma message("#define HAVE_XOP_INLINE " XSTR(HAVE_XOP_INLINE))
#endif
#ifdef HAVE_I686_INLINE
 #pragma message("#define HAVE_I686_INLINE " XSTR(HAVE_I686_INLINE))
#endif
#ifdef HAVE_MIPSFPU_INLINE
 #pragma message("#define HAVE_MIPSFPU_INLINE " XSTR(HAVE_MIPSFPU_INLINE))
#endif
#ifdef HAVE_MIPS32R2_INLINE
 #pragma message("#define HAVE_MIPS32R2_INLINE " XSTR(HAVE_MIPS32R2_INLINE))
#endif
#ifdef HAVE_MIPS32R5_INLINE
 #pragma message("#define HAVE_MIPS32R5_INLINE " XSTR(HAVE_MIPS32R5_INLINE))
#endif
#ifdef HAVE_MIPS64R2_INLINE
 #pragma message("#define HAVE_MIPS64R2_INLINE " XSTR(HAVE_MIPS64R2_INLINE))
#endif
#ifdef HAVE_MIPS32R6_INLINE
 #pragma message("#define HAVE_MIPS32R6_INLINE " XSTR(HAVE_MIPS32R6_INLINE))
#endif
#ifdef HAVE_MIPS64R6_INLINE
 #pragma message("#define HAVE_MIPS64R6_INLINE " XSTR(HAVE_MIPS64R6_INLINE))
#endif
#ifdef HAVE_MIPSDSP_INLINE
 #pragma message("#define HAVE_MIPSDSP_INLINE " XSTR(HAVE_MIPSDSP_INLINE))
#endif
#ifdef HAVE_MIPSDSPR2_INLINE
 #pragma message("#define HAVE_MIPSDSPR2_INLINE " XSTR(HAVE_MIPSDSPR2_INLINE))
#endif
#ifdef HAVE_MSA_INLINE
 #pragma message("#define HAVE_MSA_INLINE " XSTR(HAVE_MSA_INLINE))
#endif
#ifdef HAVE_LOONGSON2_INLINE
 #pragma message("#define HAVE_LOONGSON2_INLINE " XSTR(HAVE_LOONGSON2_INLINE))
#endif
#ifdef HAVE_LOONGSON3_INLINE
 #pragma message("#define HAVE_LOONGSON3_INLINE " XSTR(HAVE_LOONGSON3_INLINE))
#endif
#ifdef HAVE_MMI_INLINE
 #pragma message("#define HAVE_MMI_INLINE " XSTR(HAVE_MMI_INLINE))
#endif
#ifdef HAVE_LSX_INLINE
 #pragma message("#define HAVE_LSX_INLINE " XSTR(HAVE_LSX_INLINE))
#endif
#ifdef HAVE_LASX_INLINE
 #pragma message("#define HAVE_LASX_INLINE " XSTR(HAVE_LASX_INLINE))
#endif
#ifdef HAVE_ALIGNED_STACK
 #pragma message("#define HAVE_ALIGNED_STACK " XSTR(HAVE_ALIGNED_STACK))
#endif
#ifdef HAVE_FAST_64BIT
 #pragma message("#define HAVE_FAST_64BIT " XSTR(HAVE_FAST_64BIT))
#endif
#ifdef HAVE_FAST_CLZ
 #pragma message("#define HAVE_FAST_CLZ " XSTR(HAVE_FAST_CLZ))
#endif
#ifdef HAVE_FAST_CMOV
 #pragma message("#define HAVE_FAST_CMOV " XSTR(HAVE_FAST_CMOV))
#endif
#ifdef HAVE_FAST_FLOAT16
 #pragma message("#define HAVE_FAST_FLOAT16 " XSTR(HAVE_FAST_FLOAT16))
#endif
#ifdef HAVE_LOCAL_ALIGNED
 #pragma message("#define HAVE_LOCAL_ALIGNED " XSTR(HAVE_LOCAL_ALIGNED))
#endif
#ifdef HAVE_SIMD_ALIGN_16
 #pragma message("#define HAVE_SIMD_ALIGN_16 " XSTR(HAVE_SIMD_ALIGN_16))
#endif
#ifdef HAVE_SIMD_ALIGN_32
 #pragma message("#define HAVE_SIMD_ALIGN_32 " XSTR(HAVE_SIMD_ALIGN_32))
#endif
#ifdef HAVE_SIMD_ALIGN_64
 #pragma message("#define HAVE_SIMD_ALIGN_64 " XSTR(HAVE_SIMD_ALIGN_64))
#endif
#ifdef HAVE_ATOMIC_CAS_PTR
 #pragma message("#define HAVE_ATOMIC_CAS_PTR " XSTR(HAVE_ATOMIC_CAS_PTR))
#endif
#ifdef HAVE_MACHINE_RW_BARRIER
 #pragma message("#define HAVE_MACHINE_RW_BARRIER " XSTR(HAVE_MACHINE_RW_BARRIER))
#endif
#ifdef HAVE_MEMORYBARRIER
 #pragma message("#define HAVE_MEMORYBARRIER " XSTR(HAVE_MEMORYBARRIER))
#endif
#ifdef HAVE_MM_EMPTY
 #pragma message("#define HAVE_MM_EMPTY " XSTR(HAVE_MM_EMPTY))
#endif
#ifdef HAVE_RDTSC
 #pragma message("#define HAVE_RDTSC " XSTR(HAVE_RDTSC))
#endif
#ifdef HAVE_SEM_TIMEDWAIT
 #pragma message("#define HAVE_SEM_TIMEDWAIT " XSTR(HAVE_SEM_TIMEDWAIT))
#endif
#ifdef HAVE_SYNC_VAL_COMPARE_AND_SWAP
 #pragma message("#define HAVE_SYNC_VAL_COMPARE_AND_SWAP " XSTR(HAVE_SYNC_VAL_COMPARE_AND_SWAP))
#endif
#ifdef HAVE_INLINE_ASM
 #pragma message("#define HAVE_INLINE_ASM " XSTR(HAVE_INLINE_ASM))
#endif
#ifdef HAVE_SYMVER
 #pragma message("#define HAVE_SYMVER " XSTR(HAVE_SYMVER))
#endif
#ifdef HAVE_X86ASM
 #pragma message("#define HAVE_X86ASM " XSTR(HAVE_X86ASM))
#endif
#ifdef HAVE_BIGENDIAN
 #pragma message("#define HAVE_BIGENDIAN " XSTR(HAVE_BIGENDIAN))
#endif
#ifdef HAVE_FAST_UNALIGNED
 #pragma message("#define HAVE_FAST_UNALIGNED " XSTR(HAVE_FAST_UNALIGNED))
#endif
#ifdef HAVE_ARPA_INET_H
 #pragma message("#define HAVE_ARPA_INET_H " XSTR(HAVE_ARPA_INET_H))
#endif
#ifdef HAVE_ASM_TYPES_H
 #pragma message("#define HAVE_ASM_TYPES_H " XSTR(HAVE_ASM_TYPES_H))
#endif
#ifdef HAVE_CDIO_PARANOIA_H
 #pragma message("#define HAVE_CDIO_PARANOIA_H " XSTR(HAVE_CDIO_PARANOIA_H))
#endif
#ifdef HAVE_CDIO_PARANOIA_PARANOIA_H
 #pragma message("#define HAVE_CDIO_PARANOIA_PARANOIA_H " XSTR(HAVE_CDIO_PARANOIA_PARANOIA_H))
#endif
#ifdef HAVE_CUDA_H
 #pragma message("#define HAVE_CUDA_H " XSTR(HAVE_CUDA_H))
#endif
#ifdef HAVE_DISPATCH_DISPATCH_H
 #pragma message("#define HAVE_DISPATCH_DISPATCH_H " XSTR(HAVE_DISPATCH_DISPATCH_H))
#endif
#ifdef HAVE_DEV_BKTR_IOCTL_BT848_H
 #pragma message("#define HAVE_DEV_BKTR_IOCTL_BT848_H " XSTR(HAVE_DEV_BKTR_IOCTL_BT848_H))
#endif
#ifdef HAVE_DEV_BKTR_IOCTL_METEOR_H
 #pragma message("#define HAVE_DEV_BKTR_IOCTL_METEOR_H " XSTR(HAVE_DEV_BKTR_IOCTL_METEOR_H))
#endif
#ifdef HAVE_DEV_IC_BT8XX_H
 #pragma message("#define HAVE_DEV_IC_BT8XX_H " XSTR(HAVE_DEV_IC_BT8XX_H))
#endif
#ifdef HAVE_DEV_VIDEO_BKTR_IOCTL_BT848_H
 #pragma message("#define HAVE_DEV_VIDEO_BKTR_IOCTL_BT848_H " XSTR(HAVE_DEV_VIDEO_BKTR_IOCTL_BT848_H))
#endif
#ifdef HAVE_DEV_VIDEO_METEOR_IOCTL_METEOR_H
 #pragma message("#define HAVE_DEV_VIDEO_METEOR_IOCTL_METEOR_H " XSTR(HAVE_DEV_VIDEO_METEOR_IOCTL_METEOR_H))
#endif
#ifdef HAVE_DIRECT_H
 #pragma message("#define HAVE_DIRECT_H " XSTR(HAVE_DIRECT_H))
#endif
#ifdef HAVE_DIRENT_H
 #pragma message("#define HAVE_DIRENT_H " XSTR(HAVE_DIRENT_H))
#endif
#ifdef HAVE_DXGIDEBUG_H
 #pragma message("#define HAVE_DXGIDEBUG_H " XSTR(HAVE_DXGIDEBUG_H))
#endif
#ifdef HAVE_DXVA_H
 #pragma message("#define HAVE_DXVA_H " XSTR(HAVE_DXVA_H))
#endif
#ifdef HAVE_ES2_GL_H
 #pragma message("#define HAVE_ES2_GL_H " XSTR(HAVE_ES2_GL_H))
#endif
#ifdef HAVE_GSM_H
 #pragma message("#define HAVE_GSM_H " XSTR(HAVE_GSM_H))
#endif
#ifdef HAVE_IO_H
 #pragma message("#define HAVE_IO_H " XSTR(HAVE_IO_H))
#endif
#ifdef HAVE_LINUX_DMA_BUF_H
 #pragma message("#define HAVE_LINUX_DMA_BUF_H " XSTR(HAVE_LINUX_DMA_BUF_H))
#endif
#ifdef HAVE_LINUX_PERF_EVENT_H
 #pragma message("#define HAVE_LINUX_PERF_EVENT_H " XSTR(HAVE_LINUX_PERF_EVENT_H))
#endif
#ifdef HAVE_MACHINE_IOCTL_BT848_H
 #pragma message("#define HAVE_MACHINE_IOCTL_BT848_H " XSTR(HAVE_MACHINE_IOCTL_BT848_H))
#endif
#ifdef HAVE_MACHINE_IOCTL_METEOR_H
 #pragma message("#define HAVE_MACHINE_IOCTL_METEOR_H " XSTR(HAVE_MACHINE_IOCTL_METEOR_H))
#endif
#ifdef HAVE_MALLOC_H
 #pragma message("#define HAVE_MALLOC_H " XSTR(HAVE_MALLOC_H))
#endif
#ifdef HAVE_OPENCV2_CORE_CORE_C_H
 #pragma message("#define HAVE_OPENCV2_CORE_CORE_C_H " XSTR(HAVE_OPENCV2_CORE_CORE_C_H))
#endif
#ifdef HAVE_OPENGL_GL3_H
 #pragma message("#define HAVE_OPENGL_GL3_H " XSTR(HAVE_OPENGL_GL3_H))
#endif
#ifdef HAVE_POLL_H
 #pragma message("#define HAVE_POLL_H " XSTR(HAVE_POLL_H))
#endif
#ifdef HAVE_PTHREAD_NP_H
 #pragma message("#define HAVE_PTHREAD_NP_H " XSTR(HAVE_PTHREAD_NP_H))
#endif
#ifdef HAVE_SYS_PARAM_H
 #pragma message("#define HAVE_SYS_PARAM_H " XSTR(HAVE_SYS_PARAM_H))
#endif
#ifdef HAVE_SYS_RESOURCE_H
 #pragma message("#define HAVE_SYS_RESOURCE_H " XSTR(HAVE_SYS_RESOURCE_H))
#endif
#ifdef HAVE_SYS_SELECT_H
 #pragma message("#define HAVE_SYS_SELECT_H " XSTR(HAVE_SYS_SELECT_H))
#endif
#ifdef HAVE_SYS_SOUNDCARD_H
 #pragma message("#define HAVE_SYS_SOUNDCARD_H " XSTR(HAVE_SYS_SOUNDCARD_H))
#endif
#ifdef HAVE_SYS_TIME_H
 #pragma message("#define HAVE_SYS_TIME_H " XSTR(HAVE_SYS_TIME_H))
#endif
#ifdef HAVE_SYS_UN_H
 #pragma message("#define HAVE_SYS_UN_H " XSTR(HAVE_SYS_UN_H))
#endif
#ifdef HAVE_SYS_VIDEOIO_H
 #pragma message("#define HAVE_SYS_VIDEOIO_H " XSTR(HAVE_SYS_VIDEOIO_H))
#endif
#ifdef HAVE_TERMIOS_H
 #pragma message("#define HAVE_TERMIOS_H " XSTR(HAVE_TERMIOS_H))
#endif
#ifdef HAVE_UDPLITE_H
 #pragma message("#define HAVE_UDPLITE_H " XSTR(HAVE_UDPLITE_H))
#endif
#ifdef HAVE_UNISTD_H
 #pragma message("#define HAVE_UNISTD_H " XSTR(HAVE_UNISTD_H))
#endif
#ifdef HAVE_VALGRIND_VALGRIND_H
 #pragma message("#define HAVE_VALGRIND_VALGRIND_H " XSTR(HAVE_VALGRIND_VALGRIND_H))
#endif
#ifdef HAVE_WINDOWS_H
 #pragma message("#define HAVE_WINDOWS_H " XSTR(HAVE_WINDOWS_H))
#endif
#ifdef HAVE_WINSOCK2_H
 #pragma message("#define HAVE_WINSOCK2_H " XSTR(HAVE_WINSOCK2_H))
#endif
#ifdef HAVE_INTRINSICS_NEON
 #pragma message("#define HAVE_INTRINSICS_NEON " XSTR(HAVE_INTRINSICS_NEON))
#endif
#ifdef HAVE_ATANF
 #pragma message("#define HAVE_ATANF " XSTR(HAVE_ATANF))
#endif
#ifdef HAVE_ATAN2F
 #pragma message("#define HAVE_ATAN2F " XSTR(HAVE_ATAN2F))
#endif
#ifdef HAVE_CBRT
 #pragma message("#define HAVE_CBRT " XSTR(HAVE_CBRT))
#endif
#ifdef HAVE_CBRTF
 #pragma message("#define HAVE_CBRTF " XSTR(HAVE_CBRTF))
#endif
#ifdef HAVE_COPYSIGN
 #pragma message("#define HAVE_COPYSIGN " XSTR(HAVE_COPYSIGN))
#endif
#ifdef HAVE_COSF
 #pragma message("#define HAVE_COSF " XSTR(HAVE_COSF))
#endif
#ifdef HAVE_ERF
 #pragma message("#define HAVE_ERF " XSTR(HAVE_ERF))
#endif
#ifdef HAVE_EXP2
 #pragma message("#define HAVE_EXP2 " XSTR(HAVE_EXP2))
#endif
#ifdef HAVE_EXP2F
 #pragma message("#define HAVE_EXP2F " XSTR(HAVE_EXP2F))
#endif
#ifdef HAVE_EXPF
 #pragma message("#define HAVE_EXPF " XSTR(HAVE_EXPF))
#endif
#ifdef HAVE_HYPOT
 #pragma message("#define HAVE_HYPOT " XSTR(HAVE_HYPOT))
#endif
#ifdef HAVE_ISFINITE
 #pragma message("#define HAVE_ISFINITE " XSTR(HAVE_ISFINITE))
#endif
#ifdef HAVE_ISINF
 #pragma message("#define HAVE_ISINF " XSTR(HAVE_ISINF))
#endif
#ifdef HAVE_ISNAN
 #pragma message("#define HAVE_ISNAN " XSTR(HAVE_ISNAN))
#endif
#ifdef HAVE_LDEXPF
 #pragma message("#define HAVE_LDEXPF " XSTR(HAVE_LDEXPF))
#endif
#ifdef HAVE_LLRINT
 #pragma message("#define HAVE_LLRINT " XSTR(HAVE_LLRINT))
#endif
#ifdef HAVE_LLRINTF
 #pragma message("#define HAVE_LLRINTF " XSTR(HAVE_LLRINTF))
#endif
#ifdef HAVE_LOG2
 #pragma message("#define HAVE_LOG2 " XSTR(HAVE_LOG2))
#endif
#ifdef HAVE_LOG2F
 #pragma message("#define HAVE_LOG2F " XSTR(HAVE_LOG2F))
#endif
#ifdef HAVE_LOG10F
 #pragma message("#define HAVE_LOG10F " XSTR(HAVE_LOG10F))
#endif
#ifdef HAVE_LRINT
 #pragma message("#define HAVE_LRINT " XSTR(HAVE_LRINT))
#endif
#ifdef HAVE_LRINTF
 #pragma message("#define HAVE_LRINTF " XSTR(HAVE_LRINTF))
#endif
#ifdef HAVE_POWF
 #pragma message("#define HAVE_POWF " XSTR(HAVE_POWF))
#endif
#ifdef HAVE_RINT
 #pragma message("#define HAVE_RINT " XSTR(HAVE_RINT))
#endif
#ifdef HAVE_ROUND
 #pragma message("#define HAVE_ROUND " XSTR(HAVE_ROUND))
#endif
#ifdef HAVE_ROUNDF
 #pragma message("#define HAVE_ROUNDF " XSTR(HAVE_ROUNDF))
#endif
#ifdef HAVE_SINF
 #pragma message("#define HAVE_SINF " XSTR(HAVE_SINF))
#endif
#ifdef HAVE_TRUNC
 #pragma message("#define HAVE_TRUNC " XSTR(HAVE_TRUNC))
#endif
#ifdef HAVE_TRUNCF
 #pragma message("#define HAVE_TRUNCF " XSTR(HAVE_TRUNCF))
#endif
#ifdef HAVE_DOS_PATHS
 #pragma message("#define HAVE_DOS_PATHS " XSTR(HAVE_DOS_PATHS))
#endif
#ifdef HAVE_LIBC_MSVCRT
 #pragma message("#define HAVE_LIBC_MSVCRT " XSTR(HAVE_LIBC_MSVCRT))
#endif
#ifdef HAVE_MMAL_PARAMETER_VIDEO_MAX_NUM_CALLBACKS
 #pragma message("#define HAVE_MMAL_PARAMETER_VIDEO_MAX_NUM_CALLBACKS " XSTR(HAVE_MMAL_PARAMETER_VIDEO_MAX_NUM_CALLBACKS))
#endif
#ifdef HAVE_SECTION_DATA_REL_RO
 #pragma message("#define HAVE_SECTION_DATA_REL_RO " XSTR(HAVE_SECTION_DATA_REL_RO))
#endif
#ifdef HAVE_THREADS
 #pragma message("#define HAVE_THREADS " XSTR(HAVE_THREADS))
#endif
#ifdef HAVE_UWP
 #pragma message("#define HAVE_UWP " XSTR(HAVE_UWP))
#endif
#ifdef HAVE_WINRT
 #pragma message("#define HAVE_WINRT " XSTR(HAVE_WINRT))
#endif
#ifdef HAVE_ACCESS
 #pragma message("#define HAVE_ACCESS " XSTR(HAVE_ACCESS))
#endif
#ifdef HAVE_ALIGNED_MALLOC
 #pragma message("#define HAVE_ALIGNED_MALLOC " XSTR(HAVE_ALIGNED_MALLOC))
#endif
#ifdef HAVE_ARC4RANDOM_BUF
 #pragma message("#define HAVE_ARC4RANDOM_BUF " XSTR(HAVE_ARC4RANDOM_BUF))
#endif
#ifdef HAVE_CLOCK_GETTIME
 #pragma message("#define HAVE_CLOCK_GETTIME " XSTR(HAVE_CLOCK_GETTIME))
#endif
#ifdef HAVE_CLOSESOCKET
 #pragma message("#define HAVE_CLOSESOCKET " XSTR(HAVE_CLOSESOCKET))
#endif
#ifdef HAVE_COMMANDLINETOARGVW
 #pragma message("#define HAVE_COMMANDLINETOARGVW " XSTR(HAVE_COMMANDLINETOARGVW))
#endif
#ifdef HAVE_FCNTL
 #pragma message("#define HAVE_FCNTL " XSTR(HAVE_FCNTL))
#endif
#ifdef HAVE_GETADDRINFO
 #pragma message("#define HAVE_GETADDRINFO " XSTR(HAVE_GETADDRINFO))
#endif
#ifdef HAVE_GETAUXVAL
 #pragma message("#define HAVE_GETAUXVAL " XSTR(HAVE_GETAUXVAL))
#endif
#ifdef HAVE_GETENV
 #pragma message("#define HAVE_GETENV " XSTR(HAVE_GETENV))
#endif
#ifdef HAVE_GETHRTIME
 #pragma message("#define HAVE_GETHRTIME " XSTR(HAVE_GETHRTIME))
#endif
#ifdef HAVE_GETOPT
 #pragma message("#define HAVE_GETOPT " XSTR(HAVE_GETOPT))
#endif
#ifdef HAVE_GETMODULEHANDLE
 #pragma message("#define HAVE_GETMODULEHANDLE " XSTR(HAVE_GETMODULEHANDLE))
#endif
#ifdef HAVE_GETPROCESSAFFINITYMASK
 #pragma message("#define HAVE_GETPROCESSAFFINITYMASK " XSTR(HAVE_GETPROCESSAFFINITYMASK))
#endif
#ifdef HAVE_GETPROCESSMEMORYINFO
 #pragma message("#define HAVE_GETPROCESSMEMORYINFO " XSTR(HAVE_GETPROCESSMEMORYINFO))
#endif
#ifdef HAVE_GETPROCESSTIMES
 #pragma message("#define HAVE_GETPROCESSTIMES " XSTR(HAVE_GETPROCESSTIMES))
#endif
#ifdef HAVE_GETRUSAGE
 #pragma message("#define HAVE_GETRUSAGE " XSTR(HAVE_GETRUSAGE))
#endif
#ifdef HAVE_GETSTDHANDLE
 #pragma message("#define HAVE_GETSTDHANDLE " XSTR(HAVE_GETSTDHANDLE))
#endif
#ifdef HAVE_GETSYSTEMTIMEASFILETIME
 #pragma message("#define HAVE_GETSYSTEMTIMEASFILETIME " XSTR(HAVE_GETSYSTEMTIMEASFILETIME))
#endif
#ifdef HAVE_GETTIMEOFDAY
 #pragma message("#define HAVE_GETTIMEOFDAY " XSTR(HAVE_GETTIMEOFDAY))
#endif
#ifdef HAVE_GLOB
 #pragma message("#define HAVE_GLOB " XSTR(HAVE_GLOB))
#endif
#ifdef HAVE_GLXGETPROCADDRESS
 #pragma message("#define HAVE_GLXGETPROCADDRESS " XSTR(HAVE_GLXGETPROCADDRESS))
#endif
#ifdef HAVE_GMTIME_R
 #pragma message("#define HAVE_GMTIME_R " XSTR(HAVE_GMTIME_R))
#endif
#ifdef HAVE_INET_ATON
 #pragma message("#define HAVE_INET_ATON " XSTR(HAVE_INET_ATON))
#endif
#ifdef HAVE_ISATTY
 #pragma message("#define HAVE_ISATTY " XSTR(HAVE_ISATTY))
#endif
#ifdef HAVE_KBHIT
 #pragma message("#define HAVE_KBHIT " XSTR(HAVE_KBHIT))
#endif
#ifdef HAVE_LOCALTIME_R
 #pragma message("#define HAVE_LOCALTIME_R " XSTR(HAVE_LOCALTIME_R))
#endif
#ifdef HAVE_LSTAT
 #pragma message("#define HAVE_LSTAT " XSTR(HAVE_LSTAT))
#endif
#ifdef HAVE_LZO1X_999_COMPRESS
 #pragma message("#define HAVE_LZO1X_999_COMPRESS " XSTR(HAVE_LZO1X_999_COMPRESS))
#endif
#ifdef HAVE_MACH_ABSOLUTE_TIME
 #pragma message("#define HAVE_MACH_ABSOLUTE_TIME " XSTR(HAVE_MACH_ABSOLUTE_TIME))
#endif
#ifdef HAVE_MAPVIEWOFFILE
 #pragma message("#define HAVE_MAPVIEWOFFILE " XSTR(HAVE_MAPVIEWOFFILE))
#endif
#ifdef HAVE_MEMALIGN
 #pragma message("#define HAVE_MEMALIGN " XSTR(HAVE_MEMALIGN))
#endif
#ifdef HAVE_MKSTEMP
 #pragma message("#define HAVE_MKSTEMP " XSTR(HAVE_MKSTEMP))
#endif
#ifdef HAVE_MMAP
 #pragma message("#define HAVE_MMAP " XSTR(HAVE_MMAP))
#endif
#ifdef HAVE_MPROTECT
 #pragma message("#define HAVE_MPROTECT " XSTR(HAVE_MPROTECT))
#endif
#ifdef HAVE_NANOSLEEP
 #pragma message("#define HAVE_NANOSLEEP " XSTR(HAVE_NANOSLEEP))
#endif
#ifdef HAVE_PEEKNAMEDPIPE
 #pragma message("#define HAVE_PEEKNAMEDPIPE " XSTR(HAVE_PEEKNAMEDPIPE))
#endif
#ifdef HAVE_POSIX_MEMALIGN
 #pragma message("#define HAVE_POSIX_MEMALIGN " XSTR(HAVE_POSIX_MEMALIGN))
#endif
#ifdef HAVE_PRCTL
 #pragma message("#define HAVE_PRCTL " XSTR(HAVE_PRCTL))
#endif
#ifdef HAVE_PTHREAD_CANCEL
 #pragma message("#define HAVE_PTHREAD_CANCEL " XSTR(HAVE_PTHREAD_CANCEL))
#endif
#ifdef HAVE_PTHREAD_SET_NAME_NP
 #pragma message("#define HAVE_PTHREAD_SET_NAME_NP " XSTR(HAVE_PTHREAD_SET_NAME_NP))
#endif
#ifdef HAVE_PTHREAD_SETNAME_NP
 #pragma message("#define HAVE_PTHREAD_SETNAME_NP " XSTR(HAVE_PTHREAD_SETNAME_NP))
#endif
#ifdef HAVE_SCHED_GETAFFINITY
 #pragma message("#define HAVE_SCHED_GETAFFINITY " XSTR(HAVE_SCHED_GETAFFINITY))
#endif
#ifdef HAVE_SECITEMIMPORT
 #pragma message("#define HAVE_SECITEMIMPORT " XSTR(HAVE_SECITEMIMPORT))
#endif
#ifdef HAVE_SETCONSOLETEXTATTRIBUTE
 #pragma message("#define HAVE_SETCONSOLETEXTATTRIBUTE " XSTR(HAVE_SETCONSOLETEXTATTRIBUTE))
#endif
#ifdef HAVE_SETCONSOLECTRLHANDLER
 #pragma message("#define HAVE_SETCONSOLECTRLHANDLER " XSTR(HAVE_SETCONSOLECTRLHANDLER))
#endif
#ifdef HAVE_SETDLLDIRECTORY
 #pragma message("#define HAVE_SETDLLDIRECTORY " XSTR(HAVE_SETDLLDIRECTORY))
#endif
#ifdef HAVE_SETMODE
 #pragma message("#define HAVE_SETMODE " XSTR(HAVE_SETMODE))
#endif
#ifdef HAVE_SETRLIMIT
 #pragma message("#define HAVE_SETRLIMIT " XSTR(HAVE_SETRLIMIT))
#endif
#ifdef HAVE_SLEEP
 #pragma message("#define HAVE_SLEEP " XSTR(HAVE_SLEEP))
#endif
#ifdef HAVE_STRERROR_R
 #pragma message("#define HAVE_STRERROR_R " XSTR(HAVE_STRERROR_R))
#endif
#ifdef HAVE_SYSCONF
 #pragma message("#define HAVE_SYSCONF " XSTR(HAVE_SYSCONF))
#endif
#ifdef HAVE_SYSCTL
 #pragma message("#define HAVE_SYSCTL " XSTR(HAVE_SYSCTL))
#endif
#ifdef HAVE_SYSCTLBYNAME
 #pragma message("#define HAVE_SYSCTLBYNAME " XSTR(HAVE_SYSCTLBYNAME))
#endif
#ifdef HAVE_USLEEP
 #pragma message("#define HAVE_USLEEP " XSTR(HAVE_USLEEP))
#endif
#ifdef HAVE_UTGETOSTYPEFROMSTRING
 #pragma message("#define HAVE_UTGETOSTYPEFROMSTRING " XSTR(HAVE_UTGETOSTYPEFROMSTRING))
#endif
#ifdef HAVE_VIRTUALALLOC
 #pragma message("#define HAVE_VIRTUALALLOC " XSTR(HAVE_VIRTUALALLOC))
#endif
#ifdef HAVE_WGLGETPROCADDRESS
 #pragma message("#define HAVE_WGLGETPROCADDRESS " XSTR(HAVE_WGLGETPROCADDRESS))
#endif
#ifdef HAVE_BCRYPT
 #pragma message("#define HAVE_BCRYPT " XSTR(HAVE_BCRYPT))
#endif
#ifdef HAVE_VAAPI_DRM
 #pragma message("#define HAVE_VAAPI_DRM " XSTR(HAVE_VAAPI_DRM))
#endif
#ifdef HAVE_VAAPI_X11
 #pragma message("#define HAVE_VAAPI_X11 " XSTR(HAVE_VAAPI_X11))
#endif
#ifdef HAVE_VAAPI_WIN32
 #pragma message("#define HAVE_VAAPI_WIN32 " XSTR(HAVE_VAAPI_WIN32))
#endif
#ifdef HAVE_VDPAU_X11
 #pragma message("#define HAVE_VDPAU_X11 " XSTR(HAVE_VDPAU_X11))
#endif
#ifdef HAVE_PTHREAD
 #pragma message("#define HAVE_PTHREAD " XSTR(HAVE_PTHREAD))
#endif
#ifdef HAVE_OS2THREADS
 #pragma message("#define HAVE_OS2THREADS " XSTR(HAVE_OS2THREADS))
#endif
#ifdef HAVE_W32THREADS
 #pragma message("#define HAVE_W32THREADS " XSTR(HAVE_W32THREADS))
#endif
#ifdef HAVE_AS_ARCH_DIRECTIVE
 #pragma message("#define HAVE_AS_ARCH_DIRECTIVE " XSTR(HAVE_AS_ARCH_DIRECTIVE))
#endif
#ifdef HAVE_AS_ARCHEXT_DOTPROD_DIRECTIVE
 #pragma message("#define HAVE_AS_ARCHEXT_DOTPROD_DIRECTIVE " XSTR(HAVE_AS_ARCHEXT_DOTPROD_DIRECTIVE))
#endif
#ifdef HAVE_AS_ARCHEXT_I8MM_DIRECTIVE
 #pragma message("#define HAVE_AS_ARCHEXT_I8MM_DIRECTIVE " XSTR(HAVE_AS_ARCHEXT_I8MM_DIRECTIVE))
#endif
#ifdef HAVE_AS_DN_DIRECTIVE
 #pragma message("#define HAVE_AS_DN_DIRECTIVE " XSTR(HAVE_AS_DN_DIRECTIVE))
#endif
#ifdef HAVE_AS_FPU_DIRECTIVE
 #pragma message("#define HAVE_AS_FPU_DIRECTIVE " XSTR(HAVE_AS_FPU_DIRECTIVE))
#endif
#ifdef HAVE_AS_FUNC
 #pragma message("#define HAVE_AS_FUNC " XSTR(HAVE_AS_FUNC))
#endif
#ifdef HAVE_AS_OBJECT_ARCH
 #pragma message("#define HAVE_AS_OBJECT_ARCH " XSTR(HAVE_AS_OBJECT_ARCH))
#endif
#ifdef HAVE_ASM_MOD_Q
 #pragma message("#define HAVE_ASM_MOD_Q " XSTR(HAVE_ASM_MOD_Q))
#endif
#ifdef HAVE_BLOCKS_EXTENSION
 #pragma message("#define HAVE_BLOCKS_EXTENSION " XSTR(HAVE_BLOCKS_EXTENSION))
#endif
#ifdef HAVE_EBP_AVAILABLE
 #pragma message("#define HAVE_EBP_AVAILABLE " XSTR(HAVE_EBP_AVAILABLE))
#endif
#ifdef HAVE_EBX_AVAILABLE
 #pragma message("#define HAVE_EBX_AVAILABLE " XSTR(HAVE_EBX_AVAILABLE))
#endif
#ifdef HAVE_GNU_AS
 #pragma message("#define HAVE_GNU_AS " XSTR(HAVE_GNU_AS))
#endif
#ifdef HAVE_GNU_WINDRES
 #pragma message("#define HAVE_GNU_WINDRES " XSTR(HAVE_GNU_WINDRES))
#endif
#ifdef HAVE_IBM_ASM
 #pragma message("#define HAVE_IBM_ASM " XSTR(HAVE_IBM_ASM))
#endif
#ifdef HAVE_INLINE_ASM_DIRECT_SYMBOL_REFS
 #pragma message("#define HAVE_INLINE_ASM_DIRECT_SYMBOL_REFS " XSTR(HAVE_INLINE_ASM_DIRECT_SYMBOL_REFS))
#endif
#ifdef HAVE_INLINE_ASM_LABELS
 #pragma message("#define HAVE_INLINE_ASM_LABELS " XSTR(HAVE_INLINE_ASM_LABELS))
#endif
#ifdef HAVE_INLINE_ASM_NONLOCAL_LABELS
 #pragma message("#define HAVE_INLINE_ASM_NONLOCAL_LABELS " XSTR(HAVE_INLINE_ASM_NONLOCAL_LABELS))
#endif
#ifdef HAVE_PRAGMA_DEPRECATED
 #pragma message("#define HAVE_PRAGMA_DEPRECATED " XSTR(HAVE_PRAGMA_DEPRECATED))
#endif
#ifdef HAVE_RSYNC_CONTIMEOUT
 #pragma message("#define HAVE_RSYNC_CONTIMEOUT " XSTR(HAVE_RSYNC_CONTIMEOUT))
#endif
#ifdef HAVE_SYMVER_ASM_LABEL
 #pragma message("#define HAVE_SYMVER_ASM_LABEL " XSTR(HAVE_SYMVER_ASM_LABEL))
#endif
#ifdef HAVE_SYMVER_GNU_ASM
 #pragma message("#define HAVE_SYMVER_GNU_ASM " XSTR(HAVE_SYMVER_GNU_ASM))
#endif
#ifdef HAVE_VFP_ARGS
 #pragma message("#define HAVE_VFP_ARGS " XSTR(HAVE_VFP_ARGS))
#endif
#ifdef HAVE_XFORM_ASM
 #pragma message("#define HAVE_XFORM_ASM " XSTR(HAVE_XFORM_ASM))
#endif
#ifdef HAVE_XMM_CLOBBERS
 #pragma message("#define HAVE_XMM_CLOBBERS " XSTR(HAVE_XMM_CLOBBERS))
#endif
#ifdef HAVE_DPI_AWARENESS_CONTEXT
 #pragma message("#define HAVE_DPI_AWARENESS_CONTEXT " XSTR(HAVE_DPI_AWARENESS_CONTEXT))
#endif
#ifdef HAVE_IDXGIOUTPUT5
 #pragma message("#define HAVE_IDXGIOUTPUT5 " XSTR(HAVE_IDXGIOUTPUT5))
#endif
#ifdef HAVE_KCMVIDEOCODECTYPE_HEVC
 #pragma message("#define HAVE_KCMVIDEOCODECTYPE_HEVC " XSTR(HAVE_KCMVIDEOCODECTYPE_HEVC))
#endif
#ifdef HAVE_KCMVIDEOCODECTYPE_HEVCWITHALPHA
 #pragma message("#define HAVE_KCMVIDEOCODECTYPE_HEVCWITHALPHA " XSTR(HAVE_KCMVIDEOCODECTYPE_HEVCWITHALPHA))
#endif
#ifdef HAVE_KCMVIDEOCODECTYPE_VP9
 #pragma message("#define HAVE_KCMVIDEOCODECTYPE_VP9 " XSTR(HAVE_KCMVIDEOCODECTYPE_VP9))
#endif
#ifdef HAVE_KCVPIXELFORMATTYPE_420YPCBCR10BIPLANARVIDEORANGE
 #pragma message("#define HAVE_KCVPIXELFORMATTYPE_420YPCBCR10BIPLANARVIDEORANGE " XSTR(HAVE_KCVPIXELFORMATTYPE_420YPCBCR10BIPLANARVIDEORANGE))
#endif
#ifdef HAVE_KCVPIXELFORMATTYPE_422YPCBCR8BIPLANARVIDEORANGE
 #pragma message("#define HAVE_KCVPIXELFORMATTYPE_422YPCBCR8BIPLANARVIDEORANGE " XSTR(HAVE_KCVPIXELFORMATTYPE_422YPCBCR8BIPLANARVIDEORANGE))
#endif
#ifdef HAVE_KCVPIXELFORMATTYPE_422YPCBCR10BIPLANARVIDEORANGE
 #pragma message("#define HAVE_KCVPIXELFORMATTYPE_422YPCBCR10BIPLANARVIDEORANGE " XSTR(HAVE_KCVPIXELFORMATTYPE_422YPCBCR10BIPLANARVIDEORANGE))
#endif
#ifdef HAVE_KCVPIXELFORMATTYPE_422YPCBCR16BIPLANARVIDEORANGE
 #pragma message("#define HAVE_KCVPIXELFORMATTYPE_422YPCBCR16BIPLANARVIDEORANGE " XSTR(HAVE_KCVPIXELFORMATTYPE_422YPCBCR16BIPLANARVIDEORANGE))
#endif
#ifdef HAVE_KCVPIXELFORMATTYPE_444YPCBCR8BIPLANARVIDEORANGE
 #pragma message("#define HAVE_KCVPIXELFORMATTYPE_444YPCBCR8BIPLANARVIDEORANGE " XSTR(HAVE_KCVPIXELFORMATTYPE_444YPCBCR8BIPLANARVIDEORANGE))
#endif
#ifdef HAVE_KCVPIXELFORMATTYPE_444YPCBCR10BIPLANARVIDEORANGE
 #pragma message("#define HAVE_KCVPIXELFORMATTYPE_444YPCBCR10BIPLANARVIDEORANGE " XSTR(HAVE_KCVPIXELFORMATTYPE_444YPCBCR10BIPLANARVIDEORANGE))
#endif
#ifdef HAVE_KCVPIXELFORMATTYPE_444YPCBCR16BIPLANARVIDEORANGE
 #pragma message("#define HAVE_KCVPIXELFORMATTYPE_444YPCBCR16BIPLANARVIDEORANGE " XSTR(HAVE_KCVPIXELFORMATTYPE_444YPCBCR16BIPLANARVIDEORANGE))
#endif
#ifdef HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_SMPTE_ST_2084_PQ
 #pragma message("#define HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_SMPTE_ST_2084_PQ " XSTR(HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_SMPTE_ST_2084_PQ))
#endif
#ifdef HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_ITU_R_2100_HLG
 #pragma message("#define HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_ITU_R_2100_HLG " XSTR(HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_ITU_R_2100_HLG))
#endif
#ifdef HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_LINEAR
 #pragma message("#define HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_LINEAR " XSTR(HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_LINEAR))
#endif
#ifdef HAVE_KCVIMAGEBUFFERYCBCRMATRIX_ITU_R_2020
 #pragma message("#define HAVE_KCVIMAGEBUFFERYCBCRMATRIX_ITU_R_2020 " XSTR(HAVE_KCVIMAGEBUFFERYCBCRMATRIX_ITU_R_2020))
#endif
#ifdef HAVE_KCVIMAGEBUFFERCOLORPRIMARIES_ITU_R_2020
 #pragma message("#define HAVE_KCVIMAGEBUFFERCOLORPRIMARIES_ITU_R_2020 " XSTR(HAVE_KCVIMAGEBUFFERCOLORPRIMARIES_ITU_R_2020))
#endif
#ifdef HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_ITU_R_2020
 #pragma message("#define HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_ITU_R_2020 " XSTR(HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_ITU_R_2020))
#endif
#ifdef HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_SMPTE_ST_428_1
 #pragma message("#define HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_SMPTE_ST_428_1 " XSTR(HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_SMPTE_ST_428_1))
#endif
#ifdef HAVE_SOCKLEN_T
#pragma message("#define HAVE_SOCKLEN_T " XSTR(HAVE_SOCKLEN_T))
#endif
#ifdef HAVE_STRUCT_ADDRINFO
 #pragma message("#define HAVE_STRUCT_ADDRINFO " XSTR(HAVE_STRUCT_ADDRINFO))
#endif
#ifdef HAVE_STRUCT_GROUP_SOURCE_REQ
 #pragma message("#define HAVE_STRUCT_GROUP_SOURCE_REQ " XSTR(HAVE_STRUCT_GROUP_SOURCE_REQ))
#endif
#ifdef HAVE_STRUCT_IP_MREQ_SOURCE
 #pragma message("#define HAVE_STRUCT_IP_MREQ_SOURCE " XSTR(HAVE_STRUCT_IP_MREQ_SOURCE))
#endif
#ifdef HAVE_STRUCT_IPV6_MREQ
 #pragma message("#define HAVE_STRUCT_IPV6_MREQ " XSTR(HAVE_STRUCT_IPV6_MREQ))
#endif
#ifdef HAVE_STRUCT_MSGHDR_MSG_FLAGS
 #pragma message("#define HAVE_STRUCT_MSGHDR_MSG_FLAGS " XSTR(HAVE_STRUCT_MSGHDR_MSG_FLAGS))
#endif
#ifdef HAVE_STRUCT_POLLFD
 #pragma message("#define HAVE_STRUCT_POLLFD " XSTR(HAVE_STRUCT_POLLFD))
#endif
#ifdef HAVE_STRUCT_RUSAGE_RU_MAXRSS
 #pragma message("#define HAVE_STRUCT_RUSAGE_RU_MAXRSS " XSTR(HAVE_STRUCT_RUSAGE_RU_MAXRSS))
#endif
#ifdef HAVE_STRUCT_SCTP_EVENT_SUBSCRIBE
 #pragma message("#define HAVE_STRUCT_SCTP_EVENT_SUBSCRIBE " XSTR(HAVE_STRUCT_SCTP_EVENT_SUBSCRIBE))
#endif
#ifdef HAVE_STRUCT_SOCKADDR_IN6
 #pragma message("#define HAVE_STRUCT_SOCKADDR_IN6 " XSTR(HAVE_STRUCT_SOCKADDR_IN6))
#endif
#ifdef HAVE_STRUCT_SOCKADDR_SA_LEN
 #pragma message("#define HAVE_STRUCT_SOCKADDR_SA_LEN " XSTR(HAVE_STRUCT_SOCKADDR_SA_LEN))
#endif
#ifdef HAVE_STRUCT_SOCKADDR_STORAGE
 #pragma message("#define HAVE_STRUCT_SOCKADDR_STORAGE " XSTR(HAVE_STRUCT_SOCKADDR_STORAGE))
#endif
#ifdef HAVE_STRUCT_STAT_ST_MTIM_TV_NSEC
 #pragma message("#define HAVE_STRUCT_STAT_ST_MTIM_TV_NSEC " XSTR(HAVE_STRUCT_STAT_ST_MTIM_TV_NSEC))
#endif
#ifdef HAVE_STRUCT_V4L2_FRMIVALENUM_DISCRETE
 #pragma message("#define HAVE_STRUCT_V4L2_FRMIVALENUM_DISCRETE " XSTR(HAVE_STRUCT_V4L2_FRMIVALENUM_DISCRETE))
#endif
#ifdef HAVE_GZIP
 #pragma message("#define HAVE_GZIP " XSTR(HAVE_GZIP))
#endif
#ifdef HAVE_LIBDRM_GETFB2
 #pragma message("#define HAVE_LIBDRM_GETFB2 " XSTR(HAVE_LIBDRM_GETFB2))
#endif
#ifdef HAVE_MAKEINFO
 #pragma message("#define HAVE_MAKEINFO " XSTR(HAVE_MAKEINFO))
#endif
#ifdef HAVE_MAKEINFO_HTML
 #pragma message("#define HAVE_MAKEINFO_HTML " XSTR(HAVE_MAKEINFO_HTML))
#endif
#ifdef HAVE_OPENCL_D3D11
 #pragma message("#define HAVE_OPENCL_D3D11 " XSTR(HAVE_OPENCL_D3D11))
#endif
#ifdef HAVE_OPENCL_DRM_ARM
 #pragma message("#define HAVE_OPENCL_DRM_ARM " XSTR(HAVE_OPENCL_DRM_ARM))
#endif
#ifdef HAVE_OPENCL_DRM_BEIGNET
 #pragma message("#define HAVE_OPENCL_DRM_BEIGNET " XSTR(HAVE_OPENCL_DRM_BEIGNET))
#endif
#ifdef HAVE_OPENCL_DXVA2
 #pragma message("#define HAVE_OPENCL_DXVA2 " XSTR(HAVE_OPENCL_DXVA2))
#endif
#ifdef HAVE_OPENCL_VAAPI_BEIGNET
 #pragma message("#define HAVE_OPENCL_VAAPI_BEIGNET " XSTR(HAVE_OPENCL_VAAPI_BEIGNET))
#endif
#ifdef HAVE_OPENCL_VAAPI_INTEL_MEDIA
 #pragma message("#define HAVE_OPENCL_VAAPI_INTEL_MEDIA " XSTR(HAVE_OPENCL_VAAPI_INTEL_MEDIA))
#endif
#ifdef HAVE_OPENCL_VIDEOTOOLBOX
 #pragma message("#define HAVE_OPENCL_VIDEOTOOLBOX " XSTR(HAVE_OPENCL_VIDEOTOOLBOX))
#endif
#ifdef HAVE_PERL
 #pragma message("#define HAVE_PERL " XSTR(HAVE_PERL))
#endif
#ifdef HAVE_POD2MAN
 #pragma message("#define HAVE_POD2MAN " XSTR(HAVE_POD2MAN))
#endif
#ifdef HAVE_TEXI2HTML
 #pragma message("#define HAVE_TEXI2HTML " XSTR(HAVE_TEXI2HTML))
#endif
#ifdef HAVE_XMLLINT
 #pragma message("#define HAVE_XMLLINT " XSTR(HAVE_XMLLINT))
#endif
#ifdef HAVE_ZLIB_GZIP
 #pragma message("#define HAVE_ZLIB_GZIP " XSTR(HAVE_ZLIB_GZIP))
#endif
#ifdef HAVE_OPENVINO2
 #pragma message("#define HAVE_OPENVINO2 " XSTR(HAVE_OPENVINO2))
#endif
#ifdef CONFIG_DOC
 #pragma message("#define CONFIG_DOC " XSTR(CONFIG_DOC))
#endif
#ifdef CONFIG_HTMLPAGES
 #pragma message("#define CONFIG_HTMLPAGES " XSTR(CONFIG_HTMLPAGES))
#endif
#ifdef CONFIG_MANPAGES
 #pragma message("#define CONFIG_MANPAGES " XSTR(CONFIG_MANPAGES))
#endif
#ifdef CONFIG_PODPAGES
 #pragma message("#define CONFIG_PODPAGES " XSTR(CONFIG_PODPAGES))
#endif
#ifdef CONFIG_TXTPAGES
 #pragma message("#define CONFIG_TXTPAGES " XSTR(CONFIG_TXTPAGES))
#endif
#ifdef CONFIG_AVIO_HTTP_SERVE_FILES_EXAMPLE
 #pragma message("#define CONFIG_AVIO_HTTP_SERVE_FILES_EXAMPLE " XSTR(CONFIG_AVIO_HTTP_SERVE_FILES_EXAMPLE))
#endif
#ifdef CONFIG_AVIO_LIST_DIR_EXAMPLE
 #pragma message("#define CONFIG_AVIO_LIST_DIR_EXAMPLE " XSTR(CONFIG_AVIO_LIST_DIR_EXAMPLE))
#endif
#ifdef CONFIG_AVIO_READ_CALLBACK_EXAMPLE
 #pragma message("#define CONFIG_AVIO_READ_CALLBACK_EXAMPLE " XSTR(CONFIG_AVIO_READ_CALLBACK_EXAMPLE))
#endif
#ifdef CONFIG_DECODE_AUDIO_EXAMPLE
 #pragma message("#define CONFIG_DECODE_AUDIO_EXAMPLE " XSTR(CONFIG_DECODE_AUDIO_EXAMPLE))
#endif
#ifdef CONFIG_DECODE_FILTER_AUDIO_EXAMPLE
 #pragma message("#define CONFIG_DECODE_FILTER_AUDIO_EXAMPLE " XSTR(CONFIG_DECODE_FILTER_AUDIO_EXAMPLE))
#endif
#ifdef CONFIG_DECODE_FILTER_VIDEO_EXAMPLE
 #pragma message("#define CONFIG_DECODE_FILTER_VIDEO_EXAMPLE " XSTR(CONFIG_DECODE_FILTER_VIDEO_EXAMPLE))
#endif
#ifdef CONFIG_DECODE_VIDEO_EXAMPLE
 #pragma message("#define CONFIG_DECODE_VIDEO_EXAMPLE " XSTR(CONFIG_DECODE_VIDEO_EXAMPLE))
#endif
#ifdef CONFIG_DEMUX_DECODE_EXAMPLE
 #pragma message("#define CONFIG_DEMUX_DECODE_EXAMPLE " XSTR(CONFIG_DEMUX_DECODE_EXAMPLE))
#endif
#ifdef CONFIG_ENCODE_AUDIO_EXAMPLE
 #pragma message("#define CONFIG_ENCODE_AUDIO_EXAMPLE " XSTR(CONFIG_ENCODE_AUDIO_EXAMPLE))
#endif
#ifdef CONFIG_ENCODE_VIDEO_EXAMPLE
 #pragma message("#define CONFIG_ENCODE_VIDEO_EXAMPLE " XSTR(CONFIG_ENCODE_VIDEO_EXAMPLE))
#endif
#ifdef CONFIG_EXTRACT_MVS_EXAMPLE
 #pragma message("#define CONFIG_EXTRACT_MVS_EXAMPLE " XSTR(CONFIG_EXTRACT_MVS_EXAMPLE))
#endif
#ifdef CONFIG_FILTER_AUDIO_EXAMPLE
 #pragma message("#define CONFIG_FILTER_AUDIO_EXAMPLE " XSTR(CONFIG_FILTER_AUDIO_EXAMPLE))
#endif
#ifdef CONFIG_HW_DECODE_EXAMPLE
 #pragma message("#define CONFIG_HW_DECODE_EXAMPLE " XSTR(CONFIG_HW_DECODE_EXAMPLE))
#endif
#ifdef CONFIG_MUX_EXAMPLE
 #pragma message("#define CONFIG_MUX_EXAMPLE " XSTR(CONFIG_MUX_EXAMPLE))
#endif
#ifdef CONFIG_QSV_DECODE_EXAMPLE
 #pragma message("#define CONFIG_QSV_DECODE_EXAMPLE " XSTR(CONFIG_QSV_DECODE_EXAMPLE))
#endif
#ifdef CONFIG_REMUX_EXAMPLE
 #pragma message("#define CONFIG_REMUX_EXAMPLE " XSTR(CONFIG_REMUX_EXAMPLE))
#endif
#ifdef CONFIG_RESAMPLE_AUDIO_EXAMPLE
 #pragma message("#define CONFIG_RESAMPLE_AUDIO_EXAMPLE " XSTR(CONFIG_RESAMPLE_AUDIO_EXAMPLE))
#endif
#ifdef CONFIG_SCALE_VIDEO_EXAMPLE
 #pragma message("#define CONFIG_SCALE_VIDEO_EXAMPLE " XSTR(CONFIG_SCALE_VIDEO_EXAMPLE))
#endif
#ifdef CONFIG_SHOW_METADATA_EXAMPLE
 #pragma message("#define CONFIG_SHOW_METADATA_EXAMPLE " XSTR(CONFIG_SHOW_METADATA_EXAMPLE))
#endif
#ifdef CONFIG_TRANSCODE_AAC_EXAMPLE
 #pragma message("#define CONFIG_TRANSCODE_AAC_EXAMPLE " XSTR(CONFIG_TRANSCODE_AAC_EXAMPLE))
#endif
#ifdef CONFIG_TRANSCODE_EXAMPLE
 #pragma message("#define CONFIG_TRANSCODE_EXAMPLE " XSTR(CONFIG_TRANSCODE_EXAMPLE))
#endif
#ifdef CONFIG_VAAPI_ENCODE_EXAMPLE
 #pragma message("#define CONFIG_VAAPI_ENCODE_EXAMPLE " XSTR(CONFIG_VAAPI_ENCODE_EXAMPLE))
#endif
#ifdef CONFIG_VAAPI_TRANSCODE_EXAMPLE
 #pragma message("#define CONFIG_VAAPI_TRANSCODE_EXAMPLE " XSTR(CONFIG_VAAPI_TRANSCODE_EXAMPLE))
#endif
#ifdef CONFIG_QSV_TRANSCODE_EXAMPLE
 #pragma message("#define CONFIG_QSV_TRANSCODE_EXAMPLE " XSTR(CONFIG_QSV_TRANSCODE_EXAMPLE))
#endif
#ifdef CONFIG_AVISYNTH
 #pragma message("#define CONFIG_AVISYNTH " XSTR(CONFIG_AVISYNTH))
#endif
#ifdef CONFIG_FREI0R
 #pragma message("#define CONFIG_FREI0R " XSTR(CONFIG_FREI0R))
#endif
#ifdef CONFIG_LIBCDIO
 #pragma message("#define CONFIG_LIBCDIO " XSTR(CONFIG_LIBCDIO))
#endif
#ifdef CONFIG_LIBDAVS2
 #pragma message("#define CONFIG_LIBDAVS2 " XSTR(CONFIG_LIBDAVS2))
#endif
#ifdef CONFIG_LIBDVDNAV
 #pragma message("#define CONFIG_LIBDVDNAV " XSTR(CONFIG_LIBDVDNAV))
#endif
#ifdef CONFIG_LIBDVDREAD
 #pragma message("#define CONFIG_LIBDVDREAD " XSTR(CONFIG_LIBDVDREAD))
#endif
#ifdef CONFIG_LIBRUBBERBAND
 #pragma message("#define CONFIG_LIBRUBBERBAND " XSTR(CONFIG_LIBRUBBERBAND))
#endif
#ifdef CONFIG_LIBVIDSTAB
 #pragma message("#define CONFIG_LIBVIDSTAB " XSTR(CONFIG_LIBVIDSTAB))
#endif
#ifdef CONFIG_LIBX264
 #pragma message("#define CONFIG_LIBX264 " XSTR(CONFIG_LIBX264))
#endif
#ifdef CONFIG_LIBX265
 #pragma message("#define CONFIG_LIBX265 " XSTR(CONFIG_LIBX265))
#endif
#ifdef CONFIG_LIBXAVS
 #pragma message("#define CONFIG_LIBXAVS " XSTR(CONFIG_LIBXAVS))
#endif
#ifdef CONFIG_LIBXAVS2
 #pragma message("#define CONFIG_LIBXAVS2 " XSTR(CONFIG_LIBXAVS2))
#endif
#ifdef CONFIG_LIBXVID
 #pragma message("#define CONFIG_LIBXVID " XSTR(CONFIG_LIBXVID))
#endif
#ifdef CONFIG_DECKLINK
 #pragma message("#define CONFIG_DECKLINK " XSTR(CONFIG_DECKLINK))
#endif
#ifdef CONFIG_LIBFDK_AAC
 #pragma message("#define CONFIG_LIBFDK_AAC " XSTR(CONFIG_LIBFDK_AAC))
#endif
#ifdef CONFIG_LIBTLS
 #pragma message("#define CONFIG_LIBTLS " XSTR(CONFIG_LIBTLS))
#endif
#ifdef CONFIG_GMP
 #pragma message("#define CONFIG_GMP " XSTR(CONFIG_GMP))
#endif
#ifdef CONFIG_LIBARIBB24
 #pragma message("#define CONFIG_LIBARIBB24 " XSTR(CONFIG_LIBARIBB24))
#endif
#ifdef CONFIG_LIBLENSFUN
 #pragma message("#define CONFIG_LIBLENSFUN " XSTR(CONFIG_LIBLENSFUN))
#endif
#ifdef CONFIG_LIBOPENCORE_AMRNB
 #pragma message("#define CONFIG_LIBOPENCORE_AMRNB " XSTR(CONFIG_LIBOPENCORE_AMRNB))
#endif
#ifdef CONFIG_LIBOPENCORE_AMRWB
 #pragma message("#define CONFIG_LIBOPENCORE_AMRWB " XSTR(CONFIG_LIBOPENCORE_AMRWB))
#endif
#ifdef CONFIG_LIBVO_AMRWBENC
 #pragma message("#define CONFIG_LIBVO_AMRWBENC " XSTR(CONFIG_LIBVO_AMRWBENC))
#endif
#ifdef CONFIG_MBEDTLS
 #pragma message("#define CONFIG_MBEDTLS " XSTR(CONFIG_MBEDTLS))
#endif
#ifdef CONFIG_RKMPP
 #pragma message("#define CONFIG_RKMPP " XSTR(CONFIG_RKMPP))
#endif
#ifdef CONFIG_LIBSMBCLIENT
 #pragma message("#define CONFIG_LIBSMBCLIENT " XSTR(CONFIG_LIBSMBCLIENT))
#endif
#ifdef CONFIG_CHROMAPRINT
 #pragma message("#define CONFIG_CHROMAPRINT " XSTR(CONFIG_CHROMAPRINT))
#endif
#ifdef CONFIG_GCRYPT
 #pragma message("#define CONFIG_GCRYPT " XSTR(CONFIG_GCRYPT))
#endif
#ifdef CONFIG_GNUTLS
 #pragma message("#define CONFIG_GNUTLS " XSTR(CONFIG_GNUTLS))
#endif
#ifdef CONFIG_JNI
 #pragma message("#define CONFIG_JNI " XSTR(CONFIG_JNI))
#endif
#ifdef CONFIG_LADSPA
 #pragma message("#define CONFIG_LADSPA " XSTR(CONFIG_LADSPA))
#endif
#ifdef CONFIG_LCMS2
 #pragma message("#define CONFIG_LCMS2 " XSTR(CONFIG_LCMS2))
#endif
#ifdef CONFIG_LIBAOM
 #pragma message("#define CONFIG_LIBAOM " XSTR(CONFIG_LIBAOM))
#endif
#ifdef CONFIG_LIBARIBCAPTION
 #pragma message("#define CONFIG_LIBARIBCAPTION " XSTR(CONFIG_LIBARIBCAPTION))
#endif
#ifdef CONFIG_LIBASS
 #pragma message("#define CONFIG_LIBASS " XSTR(CONFIG_LIBASS))
#endif
#ifdef CONFIG_LIBBLURAY
 #pragma message("#define CONFIG_LIBBLURAY " XSTR(CONFIG_LIBBLURAY))
#endif
#ifdef CONFIG_LIBBS2B
 #pragma message("#define CONFIG_LIBBS2B " XSTR(CONFIG_LIBBS2B))
#endif
#ifdef CONFIG_LIBCACA
 #pragma message("#define CONFIG_LIBCACA " XSTR(CONFIG_LIBCACA))
#endif
#ifdef CONFIG_LIBCELT
 #pragma message("#define CONFIG_LIBCELT " XSTR(CONFIG_LIBCELT))
#endif
#ifdef CONFIG_LIBCODEC2
 #pragma message("#define CONFIG_LIBCODEC2 " XSTR(CONFIG_LIBCODEC2))
#endif
#ifdef CONFIG_LIBDAV1D
 #pragma message("#define CONFIG_LIBDAV1D " XSTR(CONFIG_LIBDAV1D))
#endif
#ifdef CONFIG_LIBDC1394
 #pragma message("#define CONFIG_LIBDC1394 " XSTR(CONFIG_LIBDC1394))
#endif
#ifdef CONFIG_LIBFLITE
 #pragma message("#define CONFIG_LIBFLITE " XSTR(CONFIG_LIBFLITE))
#endif
#ifdef CONFIG_LIBFONTCONFIG
 #pragma message("#define CONFIG_LIBFONTCONFIG " XSTR(CONFIG_LIBFONTCONFIG))
#endif
#ifdef CONFIG_LIBFREETYPE
 #pragma message("#define CONFIG_LIBFREETYPE " XSTR(CONFIG_LIBFREETYPE))
#endif
#ifdef CONFIG_LIBFRIBIDI
 #pragma message("#define CONFIG_LIBFRIBIDI " XSTR(CONFIG_LIBFRIBIDI))
#endif
#ifdef CONFIG_LIBHARFBUZZ
 #pragma message("#define CONFIG_LIBHARFBUZZ " XSTR(CONFIG_LIBHARFBUZZ))
#endif
#ifdef CONFIG_LIBGLSLANG
 #pragma message("#define CONFIG_LIBGLSLANG " XSTR(CONFIG_LIBGLSLANG))
#endif
#ifdef CONFIG_LIBGME
 #pragma message("#define CONFIG_LIBGME " XSTR(CONFIG_LIBGME))
#endif
#ifdef CONFIG_LIBGSM
 #pragma message("#define CONFIG_LIBGSM " XSTR(CONFIG_LIBGSM))
#endif
#ifdef CONFIG_LIBIEC61883
 #pragma message("#define CONFIG_LIBIEC61883 " XSTR(CONFIG_LIBIEC61883))
#endif
#ifdef CONFIG_LIBILBC
 #pragma message("#define CONFIG_LIBILBC " XSTR(CONFIG_LIBILBC))
#endif
#ifdef CONFIG_LIBJACK
 #pragma message("#define CONFIG_LIBJACK " XSTR(CONFIG_LIBJACK))
#endif
#ifdef CONFIG_LIBJXL
 #pragma message("#define CONFIG_LIBJXL " XSTR(CONFIG_LIBJXL))
#endif
#ifdef CONFIG_LIBKLVANC
 #pragma message("#define CONFIG_LIBKLVANC " XSTR(CONFIG_LIBKLVANC))
#endif
#ifdef CONFIG_LIBKVAZAAR
 #pragma message("#define CONFIG_LIBKVAZAAR " XSTR(CONFIG_LIBKVAZAAR))
#endif
#ifdef CONFIG_LIBMODPLUG
 #pragma message("#define CONFIG_LIBMODPLUG " XSTR(CONFIG_LIBMODPLUG))
#endif
#ifdef CONFIG_LIBMP3LAME
 #pragma message("#define CONFIG_LIBMP3LAME " XSTR(CONFIG_LIBMP3LAME))
#endif
#ifdef CONFIG_LIBMYSOFA
 #pragma message("#define CONFIG_LIBMYSOFA " XSTR(CONFIG_LIBMYSOFA))
#endif
#ifdef CONFIG_LIBOPENCV
 #pragma message("#define CONFIG_LIBOPENCV " XSTR(CONFIG_LIBOPENCV))
#endif
#ifdef CONFIG_LIBOPENH264
 #pragma message("#define CONFIG_LIBOPENH264 " XSTR(CONFIG_LIBOPENH264))
#endif
#ifdef CONFIG_LIBOPENJPEG
 #pragma message("#define CONFIG_LIBOPENJPEG " XSTR(CONFIG_LIBOPENJPEG))
#endif
#ifdef CONFIG_LIBOPENMPT
 #pragma message("#define CONFIG_LIBOPENMPT " XSTR(CONFIG_LIBOPENMPT))
#endif
#ifdef CONFIG_LIBOPENVINO
 #pragma message("#define CONFIG_LIBOPENVINO " XSTR(CONFIG_LIBOPENVINO))
#endif
#ifdef CONFIG_LIBOPUS
 #pragma message("#define CONFIG_LIBOPUS " XSTR(CONFIG_LIBOPUS))
#endif
#ifdef CONFIG_LIBPLACEBO
 #pragma message("#define CONFIG_LIBPLACEBO " XSTR(CONFIG_LIBPLACEBO))
#endif
#ifdef CONFIG_LIBPULSE
 #pragma message("#define CONFIG_LIBPULSE " XSTR(CONFIG_LIBPULSE))
#endif
#ifdef CONFIG_LIBQRENCODE
 #pragma message("#define CONFIG_LIBQRENCODE " XSTR(CONFIG_LIBQRENCODE))
#endif
#ifdef CONFIG_LIBQUIRC
 #pragma message("#define CONFIG_LIBQUIRC " XSTR(CONFIG_LIBQUIRC))
#endif
#ifdef CONFIG_LIBRABBITMQ
 #pragma message("#define CONFIG_LIBRABBITMQ " XSTR(CONFIG_LIBRABBITMQ))
#endif
#ifdef CONFIG_LIBRAV1E
 #pragma message("#define CONFIG_LIBRAV1E " XSTR(CONFIG_LIBRAV1E))
#endif
#ifdef CONFIG_LIBRIST
 #pragma message("#define CONFIG_LIBRIST " XSTR(CONFIG_LIBRIST))
#endif
#ifdef CONFIG_LIBRSVG
 #pragma message("#define CONFIG_LIBRSVG " XSTR(CONFIG_LIBRSVG))
#endif
#ifdef CONFIG_LIBRTMP
 #pragma message("#define CONFIG_LIBRTMP " XSTR(CONFIG_LIBRTMP))
#endif
#ifdef CONFIG_LIBSHADERC
 #pragma message("#define CONFIG_LIBSHADERC " XSTR(CONFIG_LIBSHADERC))
#endif
#ifdef CONFIG_LIBSHINE
 #pragma message("#define CONFIG_LIBSHINE " XSTR(CONFIG_LIBSHINE))
#endif
#ifdef CONFIG_LIBSMBCLIENT
 #pragma message("#define CONFIG_LIBSMBCLIENT " XSTR(CONFIG_LIBSMBCLIENT))
#endif
#ifdef CONFIG_LIBSNAPPY
 #pragma message("#define CONFIG_LIBSNAPPY " XSTR(CONFIG_LIBSNAPPY))
#endif
#ifdef CONFIG_LIBSOXR
 #pragma message("#define CONFIG_LIBSOXR " XSTR(CONFIG_LIBSOXR))
#endif
#ifdef CONFIG_LIBSPEEX
 #pragma message("#define CONFIG_LIBSPEEX " XSTR(CONFIG_LIBSPEEX))
#endif
#ifdef CONFIG_LIBSRT
 #pragma message("#define CONFIG_LIBSRT " XSTR(CONFIG_LIBSRT))
#endif
#ifdef CONFIG_LIBSSH
 #pragma message("#define CONFIG_LIBSSH " XSTR(CONFIG_LIBSSH))
#endif
#ifdef CONFIG_LIBSVTAV1
 #pragma message("#define CONFIG_LIBSVTAV1 " XSTR(CONFIG_LIBSVTAV1))
#endif
#ifdef CONFIG_LIBTENSORFLOW
 #pragma message("#define CONFIG_LIBTENSORFLOW " XSTR(CONFIG_LIBTENSORFLOW))
#endif
#ifdef CONFIG_LIBTESSERACT
 #pragma message("#define CONFIG_LIBTESSERACT " XSTR(CONFIG_LIBTESSERACT))
#endif
#ifdef CONFIG_LIBTHEORA
 #pragma message("#define CONFIG_LIBTHEORA " XSTR(CONFIG_LIBTHEORA))
#endif
#ifdef CONFIG_LIBTORCH
 #pragma message("#define CONFIG_LIBTORCH " XSTR(CONFIG_LIBTORCH))
#endif
#ifdef CONFIG_LIBTWOLAME
 #pragma message("#define CONFIG_LIBTWOLAME " XSTR(CONFIG_LIBTWOLAME))
#endif
#ifdef CONFIG_LIBUAVS3D
 #pragma message("#define CONFIG_LIBUAVS3D " XSTR(CONFIG_LIBUAVS3D))
#endif
#ifdef CONFIG_LIBV4L2
 #pragma message("#define CONFIG_LIBV4L2 " XSTR(CONFIG_LIBV4L2))
#endif
#ifdef CONFIG_LIBVMAF
 #pragma message("#define CONFIG_LIBVMAF " XSTR(CONFIG_LIBVMAF))
#endif
#ifdef CONFIG_LIBVORBIS
 #pragma message("#define CONFIG_LIBVORBIS " XSTR(CONFIG_LIBVORBIS))
#endif
#ifdef CONFIG_LIBVPX
 #pragma message("#define CONFIG_LIBVPX " XSTR(CONFIG_LIBVPX))
#endif
#ifdef CONFIG_LIBWEBP
 #pragma message("#define CONFIG_LIBWEBP " XSTR(CONFIG_LIBWEBP))
#endif
#ifdef CONFIG_LIBXEVD
 #pragma message("#define CONFIG_LIBXEVD " XSTR(CONFIG_LIBXEVD))
#endif
#ifdef CONFIG_LIBXEVE
 #pragma message("#define CONFIG_LIBXEVE " XSTR(CONFIG_LIBXEVE))
#endif
#ifdef CONFIG_LIBXML2
 #pragma message("#define CONFIG_LIBXML2 " XSTR(CONFIG_LIBXML2))
#endif
#ifdef CONFIG_LIBZIMG
 #pragma message("#define CONFIG_LIBZIMG " XSTR(CONFIG_LIBZIMG))
#endif
#ifdef CONFIG_LIBZMQ
 #pragma message("#define CONFIG_LIBZMQ " XSTR(CONFIG_LIBZMQ))
#endif
#ifdef CONFIG_LIBZVBI
 #pragma message("#define CONFIG_LIBZVBI " XSTR(CONFIG_LIBZVBI))
#endif
#ifdef CONFIG_LV2
 #pragma message("#define CONFIG_LV2 " XSTR(CONFIG_LV2))
#endif
#ifdef CONFIG_MEDIACODEC
 #pragma message("#define CONFIG_MEDIACODEC " XSTR(CONFIG_MEDIACODEC))
#endif
#ifdef CONFIG_OPENAL
 #pragma message("#define CONFIG_OPENAL " XSTR(CONFIG_OPENAL))
#endif
#ifdef CONFIG_OPENGL
 #pragma message("#define CONFIG_OPENGL " XSTR(CONFIG_OPENGL))
#endif
#ifdef CONFIG_OPENSSL
 #pragma message("#define CONFIG_OPENSSL " XSTR(CONFIG_OPENSSL))
#endif
#ifdef CONFIG_POCKETSPHINX
 #pragma message("#define CONFIG_POCKETSPHINX " XSTR(CONFIG_POCKETSPHINX))
#endif
#ifdef CONFIG_VAPOURSYNTH
 #pragma message("#define CONFIG_VAPOURSYNTH " XSTR(CONFIG_VAPOURSYNTH))
#endif
#ifdef CONFIG_ALSA
 #pragma message("#define CONFIG_ALSA " XSTR(CONFIG_ALSA))
#endif
#ifdef CONFIG_APPKIT
 #pragma message("#define CONFIG_APPKIT " XSTR(CONFIG_APPKIT))
#endif
#ifdef CONFIG_AVFOUNDATION
 #pragma message("#define CONFIG_AVFOUNDATION " XSTR(CONFIG_AVFOUNDATION))
#endif
#ifdef CONFIG_BZLIB
 #pragma message("#define CONFIG_BZLIB " XSTR(CONFIG_BZLIB))
#endif
#ifdef CONFIG_COREIMAGE
 #pragma message("#define CONFIG_COREIMAGE " XSTR(CONFIG_COREIMAGE))
#endif
#ifdef CONFIG_ICONV
 #pragma message("#define CONFIG_ICONV " XSTR(CONFIG_ICONV))
#endif
#ifdef CONFIG_LIBXCB
 #pragma message("#define CONFIG_LIBXCB " XSTR(CONFIG_LIBXCB))
#endif
#ifdef CONFIG_LIBXCB_SHM
 #pragma message("#define CONFIG_LIBXCB_SHM " XSTR(CONFIG_LIBXCB_SHM))
#endif
#ifdef CONFIG_LIBXCB_SHAPE
 #pragma message("#define CONFIG_LIBXCB_SHAPE " XSTR(CONFIG_LIBXCB_SHAPE))
#endif
#ifdef CONFIG_LIBXCB_XFIXES
 #pragma message("#define CONFIG_LIBXCB_XFIXES " XSTR(CONFIG_LIBXCB_XFIXES))
#endif
#ifdef CONFIG_LZMA
 #pragma message("#define CONFIG_LZMA " XSTR(CONFIG_LZMA))
#endif
#ifdef CONFIG_MEDIAFOUNDATION
 #pragma message("#define CONFIG_MEDIAFOUNDATION " XSTR(CONFIG_MEDIAFOUNDATION))
#endif
#ifdef CONFIG_METAL
 #pragma message("#define CONFIG_METAL " XSTR(CONFIG_METAL))
#endif
#ifdef CONFIG_SCHANNEL
 #pragma message("#define CONFIG_SCHANNEL " XSTR(CONFIG_SCHANNEL))
#endif
#ifdef CONFIG_SDL2
 #pragma message("#define CONFIG_SDL2 " XSTR(CONFIG_SDL2))
#endif
#ifdef CONFIG_SECURETRANSPORT
 #pragma message("#define CONFIG_SECURETRANSPORT " XSTR(CONFIG_SECURETRANSPORT))
#endif
#ifdef CONFIG_SNDIO
 #pragma message("#define CONFIG_SNDIO " XSTR(CONFIG_SNDIO))
#endif
#ifdef CONFIG_XLIB
 #pragma message("#define CONFIG_XLIB " XSTR(CONFIG_XLIB))
#endif
#ifdef CONFIG_ZLIB
 #pragma message("#define CONFIG_ZLIB " XSTR(CONFIG_ZLIB))
#endif
#ifdef CONFIG_CUDA_NVCC
 #pragma message("#define CONFIG_CUDA_NVCC " XSTR(CONFIG_CUDA_NVCC))
#endif
#ifdef CONFIG_CUDA_SDK
 #pragma message("#define CONFIG_CUDA_SDK " XSTR(CONFIG_CUDA_SDK))
#endif
#ifdef CONFIG_LIBNPP
 #pragma message("#define CONFIG_LIBNPP " XSTR(CONFIG_LIBNPP))
#endif
#ifdef CONFIG_LIBMFX
 #pragma message("#define CONFIG_LIBMFX " XSTR(CONFIG_LIBMFX))
#endif
#ifdef CONFIG_LIBVPL
 #pragma message("#define CONFIG_LIBVPL " XSTR(CONFIG_LIBVPL))
#endif
#ifdef CONFIG_MMAL
 #pragma message("#define CONFIG_MMAL " XSTR(CONFIG_MMAL))
#endif
#ifdef CONFIG_OMX
 #pragma message("#define CONFIG_OMX " XSTR(CONFIG_OMX))
#endif
#ifdef CONFIG_OPENCL
 #pragma message("#define CONFIG_OPENCL " XSTR(CONFIG_OPENCL))
#endif
#ifdef CONFIG_AMF
 #pragma message("#define CONFIG_AMF " XSTR(CONFIG_AMF))
#endif
#ifdef CONFIG_AUDIOTOOLBOX
 #pragma message("#define CONFIG_AUDIOTOOLBOX " XSTR(CONFIG_AUDIOTOOLBOX))
#endif
#ifdef CONFIG_CUDA
 #pragma message("#define CONFIG_CUDA " XSTR(CONFIG_CUDA))
#endif
#ifdef CONFIG_CUDA_LLVM
 #pragma message("#define CONFIG_CUDA_LLVM " XSTR(CONFIG_CUDA_LLVM))
#endif
#ifdef CONFIG_CUVID
 #pragma message("#define CONFIG_CUVID " XSTR(CONFIG_CUVID))
#endif
#ifdef CONFIG_D3D11VA
 #pragma message("#define CONFIG_D3D11VA " XSTR(CONFIG_D3D11VA))
#endif
#ifdef CONFIG_D3D12VA
 #pragma message("#define CONFIG_D3D12VA " XSTR(CONFIG_D3D12VA))
#endif
#ifdef CONFIG_DXVA2
 #pragma message("#define CONFIG_DXVA2 " XSTR(CONFIG_DXVA2))
#endif
#ifdef CONFIG_FFNVCODEC
 #pragma message("#define CONFIG_FFNVCODEC " XSTR(CONFIG_FFNVCODEC))
#endif
#ifdef CONFIG_LIBDRM
 #pragma message("#define CONFIG_LIBDRM " XSTR(CONFIG_LIBDRM))
#endif
#ifdef CONFIG_NVDEC
 #pragma message("#define CONFIG_NVDEC " XSTR(CONFIG_NVDEC))
#endif
#ifdef CONFIG_NVENC
 #pragma message("#define CONFIG_NVENC " XSTR(CONFIG_NVENC))
#endif
#ifdef CONFIG_VAAPI
 #pragma message("#define CONFIG_VAAPI " XSTR(CONFIG_VAAPI))
#endif
#ifdef CONFIG_VDPAU
 #pragma message("#define CONFIG_VDPAU " XSTR(CONFIG_VDPAU))
#endif
#ifdef CONFIG_VIDEOTOOLBOX
 #pragma message("#define CONFIG_VIDEOTOOLBOX " XSTR(CONFIG_VIDEOTOOLBOX))
#endif
#ifdef CONFIG_VULKAN
 #pragma message("#define CONFIG_VULKAN " XSTR(CONFIG_VULKAN))
#endif
#ifdef CONFIG_V4L2_M2M
 #pragma message("#define CONFIG_V4L2_M2M " XSTR(CONFIG_V4L2_M2M))
#endif
#ifdef CONFIG_FTRAPV
 #pragma message("#define CONFIG_FTRAPV " XSTR(CONFIG_FTRAPV))
#endif
#ifdef CONFIG_GRAY
 #pragma message("#define CONFIG_GRAY " XSTR(CONFIG_GRAY))
#endif
#ifdef CONFIG_HARDCODED_TABLES
 #pragma message("#define CONFIG_HARDCODED_TABLES " XSTR(CONFIG_HARDCODED_TABLES))
#endif
#ifdef CONFIG_OMX_RPI
 #pragma message("#define CONFIG_OMX_RPI " XSTR(CONFIG_OMX_RPI))
#endif
#ifdef CONFIG_RUNTIME_CPUDETECT
 #pragma message("#define CONFIG_RUNTIME_CPUDETECT " XSTR(CONFIG_RUNTIME_CPUDETECT))
#endif
#ifdef CONFIG_SAFE_BITSTREAM_READER
 #pragma message("#define CONFIG_SAFE_BITSTREAM_READER " XSTR(CONFIG_SAFE_BITSTREAM_READER))
#endif
#ifdef CONFIG_SHARED
 #pragma message("#define CONFIG_SHARED " XSTR(CONFIG_SHARED))
#endif
#ifdef CONFIG_SMALL
 #pragma message("#define CONFIG_SMALL " XSTR(CONFIG_SMALL))
#endif
#ifdef CONFIG_STATIC
 #pragma message("#define CONFIG_STATIC " XSTR(CONFIG_STATIC))
#endif
#ifdef CONFIG_SWSCALE_ALPHA
 #pragma message("#define CONFIG_SWSCALE_ALPHA " XSTR(CONFIG_SWSCALE_ALPHA))
#endif
#ifdef CONFIG_GPL
 #pragma message("#define CONFIG_GPL " XSTR(CONFIG_GPL))
#endif
#ifdef CONFIG_NONFREE
 #pragma message("#define CONFIG_NONFREE " XSTR(CONFIG_NONFREE))
#endif
#ifdef CONFIG_VERSION3
 #pragma message("#define CONFIG_VERSION3 " XSTR(CONFIG_VERSION3))
#endif
#ifdef CONFIG_AVDEVICE
 #pragma message("#define CONFIG_AVDEVICE " XSTR(CONFIG_AVDEVICE))
#endif
#ifdef CONFIG_AVFILTER
 #pragma message("#define CONFIG_AVFILTER " XSTR(CONFIG_AVFILTER))
#endif
#ifdef CONFIG_SWSCALE
 #pragma message("#define CONFIG_SWSCALE " XSTR(CONFIG_SWSCALE))
#endif
#ifdef CONFIG_POSTPROC
 #pragma message("#define CONFIG_POSTPROC " XSTR(CONFIG_POSTPROC))
#endif
#ifdef CONFIG_AVFORMAT
 #pragma message("#define CONFIG_AVFORMAT " XSTR(CONFIG_AVFORMAT))
#endif
#ifdef CONFIG_AVCODEC
 #pragma message("#define CONFIG_AVCODEC " XSTR(CONFIG_AVCODEC))
#endif
#ifdef CONFIG_SWRESAMPLE
 #pragma message("#define CONFIG_SWRESAMPLE " XSTR(CONFIG_SWRESAMPLE))
#endif
#ifdef CONFIG_AVUTIL
 #pragma message("#define CONFIG_AVUTIL " XSTR(CONFIG_AVUTIL))
#endif
#ifdef CONFIG_FFPLAY
 #pragma message("#define CONFIG_FFPLAY " XSTR(CONFIG_FFPLAY))
#endif
#ifdef CONFIG_FFPROBE
 #pragma message("#define CONFIG_FFPROBE " XSTR(CONFIG_FFPROBE))
#endif
#ifdef CONFIG_FFMPEG
 #pragma message("#define CONFIG_FFMPEG " XSTR(CONFIG_FFMPEG))
#endif
#ifdef CONFIG_DWT
 #pragma message("#define CONFIG_DWT " XSTR(CONFIG_DWT))
#endif
#ifdef CONFIG_ERROR_RESILIENCE
 #pragma message("#define CONFIG_ERROR_RESILIENCE " XSTR(CONFIG_ERROR_RESILIENCE))
#endif
#ifdef CONFIG_FAAN
 #pragma message("#define CONFIG_FAAN " XSTR(CONFIG_FAAN))
#endif
#ifdef CONFIG_FAST_UNALIGNED
 #pragma message("#define CONFIG_FAST_UNALIGNED " XSTR(CONFIG_FAST_UNALIGNED))
#endif
#ifdef CONFIG_LSP
 #pragma message("#define CONFIG_LSP " XSTR(CONFIG_LSP))
#endif
#ifdef CONFIG_PIXELUTILS
 #pragma message("#define CONFIG_PIXELUTILS " XSTR(CONFIG_PIXELUTILS))
#endif
#ifdef CONFIG_NETWORK
 #pragma message("#define CONFIG_NETWORK " XSTR(CONFIG_NETWORK))
#endif
#ifdef CONFIG_AUTODETECT
 #pragma message("#define CONFIG_AUTODETECT " XSTR(CONFIG_AUTODETECT))
#endif
#ifdef CONFIG_FONTCONFIG
 #pragma message("#define CONFIG_FONTCONFIG " XSTR(CONFIG_FONTCONFIG))
#endif
#ifdef CONFIG_LARGE_TESTS
 #pragma message("#define CONFIG_LARGE_TESTS " XSTR(CONFIG_LARGE_TESTS))
#endif
#ifdef CONFIG_LINUX_PERF
 #pragma message("#define CONFIG_LINUX_PERF " XSTR(CONFIG_LINUX_PERF))
#endif
#ifdef CONFIG_MACOS_KPERF
 #pragma message("#define CONFIG_MACOS_KPERF " XSTR(CONFIG_MACOS_KPERF))
#endif
#ifdef CONFIG_MEMORY_POISONING
 #pragma message("#define CONFIG_MEMORY_POISONING " XSTR(CONFIG_MEMORY_POISONING))
#endif
#ifdef CONFIG_NEON_CLOBBER_TEST
 #pragma message("#define CONFIG_NEON_CLOBBER_TEST " XSTR(CONFIG_NEON_CLOBBER_TEST))
#endif
#ifdef CONFIG_OSSFUZZ
 #pragma message("#define CONFIG_OSSFUZZ " XSTR(CONFIG_OSSFUZZ))
#endif
#ifdef CONFIG_PIC
 #pragma message("#define CONFIG_PIC " XSTR(CONFIG_PIC))
#endif
#ifdef CONFIG_PTX_COMPRESSION
 #pragma message("#define CONFIG_PTX_COMPRESSION " XSTR(CONFIG_PTX_COMPRESSION))
#endif
#ifdef CONFIG_THUMB
 #pragma message("#define CONFIG_THUMB " XSTR(CONFIG_THUMB))
#endif
#ifdef CONFIG_VALGRIND_BACKTRACE
 #pragma message("#define CONFIG_VALGRIND_BACKTRACE " XSTR(CONFIG_VALGRIND_BACKTRACE))
#endif
#ifdef CONFIG_XMM_CLOBBER_TEST
 #pragma message("#define CONFIG_XMM_CLOBBER_TEST " XSTR(CONFIG_XMM_CLOBBER_TEST))
#endif
#ifdef CONFIG_BSFS
 #pragma message("#define CONFIG_BSFS " XSTR(CONFIG_BSFS))
#endif
#ifdef CONFIG_DECODERS
 #pragma message("#define CONFIG_DECODERS " XSTR(CONFIG_DECODERS))
#endif
#ifdef CONFIG_ENCODERS
 #pragma message("#define CONFIG_ENCODERS " XSTR(CONFIG_ENCODERS))
#endif
#ifdef CONFIG_HWACCELS
 #pragma message("#define CONFIG_HWACCELS " XSTR(CONFIG_HWACCELS))
#endif
#ifdef CONFIG_PARSERS
 #pragma message("#define CONFIG_PARSERS " XSTR(CONFIG_PARSERS))
#endif
#ifdef CONFIG_INDEVS
 #pragma message("#define CONFIG_INDEVS " XSTR(CONFIG_INDEVS))
#endif
#ifdef CONFIG_OUTDEVS
 #pragma message("#define CONFIG_OUTDEVS " XSTR(CONFIG_OUTDEVS))
#endif
#ifdef CONFIG_FILTERS
 #pragma message("#define CONFIG_FILTERS " XSTR(CONFIG_FILTERS))
#endif
#ifdef CONFIG_DEMUXERS
 #pragma message("#define CONFIG_DEMUXERS " XSTR(CONFIG_DEMUXERS))
#endif
#ifdef CONFIG_MUXERS
 #pragma message("#define CONFIG_MUXERS " XSTR(CONFIG_MUXERS))
#endif
#ifdef CONFIG_PROTOCOLS
 #pragma message("#define CONFIG_PROTOCOLS " XSTR(CONFIG_PROTOCOLS))
#endif
#ifdef CONFIG_AANDCTTABLES
 #pragma message("#define CONFIG_AANDCTTABLES " XSTR(CONFIG_AANDCTTABLES))
#endif
#ifdef CONFIG_AC3DSP
 #pragma message("#define CONFIG_AC3DSP " XSTR(CONFIG_AC3DSP))
#endif
#ifdef CONFIG_ADTS_HEADER
 #pragma message("#define CONFIG_ADTS_HEADER " XSTR(CONFIG_ADTS_HEADER))
#endif
#ifdef CONFIG_ATSC_A53
 #pragma message("#define CONFIG_ATSC_A53 " XSTR(CONFIG_ATSC_A53))
#endif
#ifdef CONFIG_AUDIO_FRAME_QUEUE
 #pragma message("#define CONFIG_AUDIO_FRAME_QUEUE " XSTR(CONFIG_AUDIO_FRAME_QUEUE))
#endif
#ifdef CONFIG_AUDIODSP
 #pragma message("#define CONFIG_AUDIODSP " XSTR(CONFIG_AUDIODSP))
#endif
#ifdef CONFIG_BLOCKDSP
 #pragma message("#define CONFIG_BLOCKDSP " XSTR(CONFIG_BLOCKDSP))
#endif
#ifdef CONFIG_BSWAPDSP
 #pragma message("#define CONFIG_BSWAPDSP " XSTR(CONFIG_BSWAPDSP))
#endif
#ifdef CONFIG_CABAC
 #pragma message("#define CONFIG_CABAC " XSTR(CONFIG_CABAC))
#endif
#ifdef CONFIG_CBS
 #pragma message("#define CONFIG_CBS " XSTR(CONFIG_CBS))
#endif
#ifdef CONFIG_CBS_AV1
 #pragma message("#define CONFIG_CBS_AV1 " XSTR(CONFIG_CBS_AV1))
#endif
#ifdef CONFIG_CBS_H264
 #pragma message("#define CONFIG_CBS_H264 " XSTR(CONFIG_CBS_H264))
#endif
#ifdef CONFIG_CBS_H265
 #pragma message("#define CONFIG_CBS_H265 " XSTR(CONFIG_CBS_H265))
#endif
#ifdef CONFIG_CBS_H266
 #pragma message("#define CONFIG_CBS_H266 " XSTR(CONFIG_CBS_H266))
#endif
#ifdef CONFIG_CBS_JPEG
 #pragma message("#define CONFIG_CBS_JPEG " XSTR(CONFIG_CBS_JPEG))
#endif
#ifdef CONFIG_CBS_MPEG2
 #pragma message("#define CONFIG_CBS_MPEG2 " XSTR(CONFIG_CBS_MPEG2))
#endif
#ifdef CONFIG_CBS_VP8
 #pragma message("#define CONFIG_CBS_VP8 " XSTR(CONFIG_CBS_VP8))
#endif
#ifdef CONFIG_CBS_VP9
 #pragma message("#define CONFIG_CBS_VP9 " XSTR(CONFIG_CBS_VP9))
#endif
#ifdef CONFIG_DEFLATE_WRAPPER
 #pragma message("#define CONFIG_DEFLATE_WRAPPER " XSTR(CONFIG_DEFLATE_WRAPPER))
#endif
#ifdef CONFIG_DIRAC_PARSE
 #pragma message("#define CONFIG_DIRAC_PARSE " XSTR(CONFIG_DIRAC_PARSE))
#endif
#ifdef CONFIG_DNN
 #pragma message("#define CONFIG_DNN " XSTR(CONFIG_DNN))
#endif
#ifdef CONFIG_DOVI_RPU
 #pragma message("#define CONFIG_DOVI_RPU " XSTR(CONFIG_DOVI_RPU))
#endif
#ifdef CONFIG_DVPROFILE
 #pragma message("#define CONFIG_DVPROFILE " XSTR(CONFIG_DVPROFILE))
#endif
#ifdef CONFIG_EVCPARSE
 #pragma message("#define CONFIG_EVCPARSE " XSTR(CONFIG_EVCPARSE))
#endif
#ifdef CONFIG_EXIF
 #pragma message("#define CONFIG_EXIF " XSTR(CONFIG_EXIF))
#endif
#ifdef CONFIG_FAANDCT
 #pragma message("#define CONFIG_FAANDCT " XSTR(CONFIG_FAANDCT))
#endif
#ifdef CONFIG_FAANIDCT
 #pragma message("#define CONFIG_FAANIDCT " XSTR(CONFIG_FAANIDCT))
#endif
#ifdef CONFIG_FDCTDSP
 #pragma message("#define CONFIG_FDCTDSP " XSTR(CONFIG_FDCTDSP))
#endif
#ifdef CONFIG_FMTCONVERT
 #pragma message("#define CONFIG_FMTCONVERT " XSTR(CONFIG_FMTCONVERT))
#endif
#ifdef CONFIG_FRAME_THREAD_ENCODER
 #pragma message("#define CONFIG_FRAME_THREAD_ENCODER " XSTR(CONFIG_FRAME_THREAD_ENCODER))
#endif
#ifdef CONFIG_G722DSP
 #pragma message("#define CONFIG_G722DSP " XSTR(CONFIG_G722DSP))
#endif
#ifdef CONFIG_GOLOMB
 #pragma message("#define CONFIG_GOLOMB " XSTR(CONFIG_GOLOMB))
#endif
#ifdef CONFIG_GPLV3
 #pragma message("#define CONFIG_GPLV3 " XSTR(CONFIG_GPLV3))
#endif
#ifdef CONFIG_H263DSP
 #pragma message("#define CONFIG_H263DSP " XSTR(CONFIG_H263DSP))
#endif
#ifdef CONFIG_H264CHROMA
 #pragma message("#define CONFIG_H264CHROMA " XSTR(CONFIG_H264CHROMA))
#endif
#ifdef CONFIG_H264DSP
 #pragma message("#define CONFIG_H264DSP " XSTR(CONFIG_H264DSP))
#endif
#ifdef CONFIG_H264PARSE
 #pragma message("#define CONFIG_H264PARSE " XSTR(CONFIG_H264PARSE))
#endif
#ifdef CONFIG_H264PRED
 #pragma message("#define CONFIG_H264PRED " XSTR(CONFIG_H264PRED))
#endif
#ifdef CONFIG_H264QPEL
 #pragma message("#define CONFIG_H264QPEL " XSTR(CONFIG_H264QPEL))
#endif
#ifdef CONFIG_H264_SEI
 #pragma message("#define CONFIG_H264_SEI " XSTR(CONFIG_H264_SEI))
#endif
#ifdef CONFIG_HEVCPARSE
 #pragma message("#define CONFIG_HEVCPARSE " XSTR(CONFIG_HEVCPARSE))
#endif
#ifdef CONFIG_HEVC_SEI
 #pragma message("#define CONFIG_HEVC_SEI " XSTR(CONFIG_HEVC_SEI))
#endif
#ifdef CONFIG_HPELDSP
 #pragma message("#define CONFIG_HPELDSP " XSTR(CONFIG_HPELDSP))
#endif
#ifdef CONFIG_HUFFMAN
 #pragma message("#define CONFIG_HUFFMAN " XSTR(CONFIG_HUFFMAN))
#endif
#ifdef CONFIG_HUFFYUVDSP
 #pragma message("#define CONFIG_HUFFYUVDSP " XSTR(CONFIG_HUFFYUVDSP))
#endif
#ifdef CONFIG_HUFFYUVENCDSP
 #pragma message("#define CONFIG_HUFFYUVENCDSP " XSTR(CONFIG_HUFFYUVENCDSP))
#endif
#ifdef CONFIG_IAMFDEC
 #pragma message("#define CONFIG_IAMFDEC " XSTR(CONFIG_IAMFDEC))
#endif
#ifdef CONFIG_IAMFENC
 #pragma message("#define CONFIG_IAMFENC " XSTR(CONFIG_IAMFENC))
#endif
#ifdef CONFIG_IDCTDSP
 #pragma message("#define CONFIG_IDCTDSP " XSTR(CONFIG_IDCTDSP))
#endif
#ifdef CONFIG_IIRFILTER
 #pragma message("#define CONFIG_IIRFILTER " XSTR(CONFIG_IIRFILTER))
#endif
#ifdef CONFIG_INFLATE_WRAPPER
 #pragma message("#define CONFIG_INFLATE_WRAPPER " XSTR(CONFIG_INFLATE_WRAPPER))
#endif
#ifdef CONFIG_INTRAX8
 #pragma message("#define CONFIG_INTRAX8 " XSTR(CONFIG_INTRAX8))
#endif
#ifdef CONFIG_ISO_MEDIA
 #pragma message("#define CONFIG_ISO_MEDIA " XSTR(CONFIG_ISO_MEDIA))
#endif
#ifdef CONFIG_IVIDSP
 #pragma message("#define CONFIG_IVIDSP " XSTR(CONFIG_IVIDSP))
#endif
#ifdef CONFIG_JPEGTABLES
 #pragma message("#define CONFIG_JPEGTABLES " XSTR(CONFIG_JPEGTABLES))
#endif
#ifdef CONFIG_LGPLV3
 #pragma message("#define CONFIG_LGPLV3 " XSTR(CONFIG_LGPLV3))
#endif
#ifdef CONFIG_LIBX262
 #pragma message("#define CONFIG_LIBX262 " XSTR(CONFIG_LIBX262))
#endif
#ifdef CONFIG_LIBX264_HDR10
 #pragma message("#define CONFIG_LIBX264_HDR10 " XSTR(CONFIG_LIBX264_HDR10))
#endif
#ifdef CONFIG_LLAUDDSP
 #pragma message("#define CONFIG_LLAUDDSP " XSTR(CONFIG_LLAUDDSP))
#endif
#ifdef CONFIG_LLVIDDSP
 #pragma message("#define CONFIG_LLVIDDSP " XSTR(CONFIG_LLVIDDSP))
#endif
#ifdef CONFIG_LLVIDENCDSP
 #pragma message("#define CONFIG_LLVIDENCDSP " XSTR(CONFIG_LLVIDENCDSP))
#endif
#ifdef CONFIG_LPC
 #pragma message("#define CONFIG_LPC " XSTR(CONFIG_LPC))
#endif
#ifdef CONFIG_LZF
 #pragma message("#define CONFIG_LZF " XSTR(CONFIG_LZF))
#endif
#ifdef CONFIG_ME_CMP
 #pragma message("#define CONFIG_ME_CMP " XSTR(CONFIG_ME_CMP))
#endif
#ifdef CONFIG_MPEG_ER
 #pragma message("#define CONFIG_MPEG_ER " XSTR(CONFIG_MPEG_ER))
#endif
#ifdef CONFIG_MPEGAUDIO
 #pragma message("#define CONFIG_MPEGAUDIO " XSTR(CONFIG_MPEGAUDIO))
#endif
#ifdef CONFIG_MPEGAUDIODSP
 #pragma message("#define CONFIG_MPEGAUDIODSP " XSTR(CONFIG_MPEGAUDIODSP))
#endif
#ifdef CONFIG_MPEGAUDIOHEADER
 #pragma message("#define CONFIG_MPEGAUDIOHEADER " XSTR(CONFIG_MPEGAUDIOHEADER))
#endif
#ifdef CONFIG_MPEG4AUDIO
 #pragma message("#define CONFIG_MPEG4AUDIO " XSTR(CONFIG_MPEG4AUDIO))
#endif
#ifdef CONFIG_MPEGVIDEO
 #pragma message("#define CONFIG_MPEGVIDEO " XSTR(CONFIG_MPEGVIDEO))
#endif
#ifdef CONFIG_MPEGVIDEODEC
 #pragma message("#define CONFIG_MPEGVIDEODEC " XSTR(CONFIG_MPEGVIDEODEC))
#endif
#ifdef CONFIG_MPEGVIDEOENC
 #pragma message("#define CONFIG_MPEGVIDEOENC " XSTR(CONFIG_MPEGVIDEOENC))
#endif
#ifdef CONFIG_MSMPEG4DEC
 #pragma message("#define CONFIG_MSMPEG4DEC " XSTR(CONFIG_MSMPEG4DEC))
#endif
#ifdef CONFIG_MSMPEG4ENC
 #pragma message("#define CONFIG_MSMPEG4ENC " XSTR(CONFIG_MSMPEG4ENC))
#endif
#ifdef CONFIG_MSS34DSP
 #pragma message("#define CONFIG_MSS34DSP " XSTR(CONFIG_MSS34DSP))
#endif
#ifdef CONFIG_PIXBLOCKDSP
 #pragma message("#define CONFIG_PIXBLOCKDSP " XSTR(CONFIG_PIXBLOCKDSP))
#endif
#ifdef CONFIG_QPELDSP
 #pragma message("#define CONFIG_QPELDSP " XSTR(CONFIG_QPELDSP))
#endif
#ifdef CONFIG_QSV
 #pragma message("#define CONFIG_QSV " XSTR(CONFIG_QSV))
#endif
#ifdef CONFIG_QSVDEC
 #pragma message("#define CONFIG_QSVDEC " XSTR(CONFIG_QSVDEC))
#endif
#ifdef CONFIG_QSVENC
 #pragma message("#define CONFIG_QSVENC " XSTR(CONFIG_QSVENC))
#endif
#ifdef CONFIG_QSVVPP
 #pragma message("#define CONFIG_QSVVPP " XSTR(CONFIG_QSVVPP))
#endif
#ifdef CONFIG_RANGECODER
 #pragma message("#define CONFIG_RANGECODER " XSTR(CONFIG_RANGECODER))
#endif
#ifdef CONFIG_RIFFDEC
 #pragma message("#define CONFIG_RIFFDEC " XSTR(CONFIG_RIFFDEC))
#endif
#ifdef CONFIG_RIFFENC
 #pragma message("#define CONFIG_RIFFENC " XSTR(CONFIG_RIFFENC))
#endif
#ifdef CONFIG_RTPDEC
 #pragma message("#define CONFIG_RTPDEC " XSTR(CONFIG_RTPDEC))
#endif
#ifdef CONFIG_RTPENC_CHAIN
 #pragma message("#define CONFIG_RTPENC_CHAIN " XSTR(CONFIG_RTPENC_CHAIN))
#endif
#ifdef CONFIG_RV34DSP
 #pragma message("#define CONFIG_RV34DSP " XSTR(CONFIG_RV34DSP))
#endif
#ifdef CONFIG_SCENE_SAD
 #pragma message("#define CONFIG_SCENE_SAD " XSTR(CONFIG_SCENE_SAD))
#endif
#ifdef CONFIG_SINEWIN
 #pragma message("#define CONFIG_SINEWIN " XSTR(CONFIG_SINEWIN))
#endif
#ifdef CONFIG_SNAPPY
 #pragma message("#define CONFIG_SNAPPY " XSTR(CONFIG_SNAPPY))
#endif
#ifdef CONFIG_SRTP
 #pragma message("#define CONFIG_SRTP " XSTR(CONFIG_SRTP))
#endif
#ifdef CONFIG_STARTCODE
 #pragma message("#define CONFIG_STARTCODE " XSTR(CONFIG_STARTCODE))
#endif
#ifdef CONFIG_TEXTUREDSP
 #pragma message("#define CONFIG_TEXTUREDSP " XSTR(CONFIG_TEXTUREDSP))
#endif
#ifdef CONFIG_TEXTUREDSPENC
 #pragma message("#define CONFIG_TEXTUREDSPENC " XSTR(CONFIG_TEXTUREDSPENC))
#endif
#ifdef CONFIG_TPELDSP
 #pragma message("#define CONFIG_TPELDSP " XSTR(CONFIG_TPELDSP))
#endif
#ifdef CONFIG_VAAPI_1
 #pragma message("#define CONFIG_VAAPI_1 " XSTR(CONFIG_VAAPI_1))
#endif
#ifdef CONFIG_VAAPI_ENCODE
 #pragma message("#define CONFIG_VAAPI_ENCODE " XSTR(CONFIG_VAAPI_ENCODE))
#endif
#ifdef CONFIG_VC1DSP
 #pragma message("#define CONFIG_VC1DSP " XSTR(CONFIG_VC1DSP))
#endif
#ifdef CONFIG_VIDEODSP
 #pragma message("#define CONFIG_VIDEODSP " XSTR(CONFIG_VIDEODSP))
#endif
#ifdef CONFIG_VP3DSP
 #pragma message("#define CONFIG_VP3DSP " XSTR(CONFIG_VP3DSP))
#endif
#ifdef CONFIG_VP56DSP
 #pragma message("#define CONFIG_VP56DSP " XSTR(CONFIG_VP56DSP))
#endif
#ifdef CONFIG_VP8DSP
 #pragma message("#define CONFIG_VP8DSP " XSTR(CONFIG_VP8DSP))
#endif
#ifdef CONFIG_WMA_FREQS
 #pragma message("#define CONFIG_WMA_FREQS " XSTR(CONFIG_WMA_FREQS))
#endif
#ifdef CONFIG_WMV2DSP
 #pragma message("#define CONFIG_WMV2DSP " XSTR(CONFIG_WMV2DSP))
#endif
#ifdef CONFIG_AAC_ADTSTOASC_BSF
 #pragma message("#define CONFIG_AAC_ADTSTOASC_BSF " XSTR(CONFIG_AAC_ADTSTOASC_BSF))
#endif
#ifdef CONFIG_AV1_FRAME_MERGE_BSF
 #pragma message("#define CONFIG_AV1_FRAME_MERGE_BSF " XSTR(CONFIG_AV1_FRAME_MERGE_BSF))
#endif
#ifdef CONFIG_AV1_FRAME_SPLIT_BSF
 #pragma message("#define CONFIG_AV1_FRAME_SPLIT_BSF " XSTR(CONFIG_AV1_FRAME_SPLIT_BSF))
#endif
#ifdef CONFIG_AV1_METADATA_BSF
 #pragma message("#define CONFIG_AV1_METADATA_BSF " XSTR(CONFIG_AV1_METADATA_BSF))
#endif
#ifdef CONFIG_CHOMP_BSF
 #pragma message("#define CONFIG_CHOMP_BSF " XSTR(CONFIG_CHOMP_BSF))
#endif
#ifdef CONFIG_DUMP_EXTRADATA_BSF
 #pragma message("#define CONFIG_DUMP_EXTRADATA_BSF " XSTR(CONFIG_DUMP_EXTRADATA_BSF))
#endif
#ifdef CONFIG_DCA_CORE_BSF
 #pragma message("#define CONFIG_DCA_CORE_BSF " XSTR(CONFIG_DCA_CORE_BSF))
#endif
#ifdef CONFIG_DTS2PTS_BSF
 #pragma message("#define CONFIG_DTS2PTS_BSF " XSTR(CONFIG_DTS2PTS_BSF))
#endif
#ifdef CONFIG_DV_ERROR_MARKER_BSF
 #pragma message("#define CONFIG_DV_ERROR_MARKER_BSF " XSTR(CONFIG_DV_ERROR_MARKER_BSF))
#endif
#ifdef CONFIG_EAC3_CORE_BSF
 #pragma message("#define CONFIG_EAC3_CORE_BSF " XSTR(CONFIG_EAC3_CORE_BSF))
#endif
#ifdef CONFIG_EXTRACT_EXTRADATA_BSF
 #pragma message("#define CONFIG_EXTRACT_EXTRADATA_BSF " XSTR(CONFIG_EXTRACT_EXTRADATA_BSF))
#endif
#ifdef CONFIG_FILTER_UNITS_BSF
 #pragma message("#define CONFIG_FILTER_UNITS_BSF " XSTR(CONFIG_FILTER_UNITS_BSF))
#endif
#ifdef CONFIG_H264_METADATA_BSF
 #pragma message("#define CONFIG_H264_METADATA_BSF " XSTR(CONFIG_H264_METADATA_BSF))
#endif
#ifdef CONFIG_H264_MP4TOANNEXB_BSF
 #pragma message("#define CONFIG_H264_MP4TOANNEXB_BSF " XSTR(CONFIG_H264_MP4TOANNEXB_BSF))
#endif
#ifdef CONFIG_H264_REDUNDANT_PPS_BSF
 #pragma message("#define CONFIG_H264_REDUNDANT_PPS_BSF " XSTR(CONFIG_H264_REDUNDANT_PPS_BSF))
#endif
#ifdef CONFIG_HAPQA_EXTRACT_BSF
 #pragma message("#define CONFIG_HAPQA_EXTRACT_BSF " XSTR(CONFIG_HAPQA_EXTRACT_BSF))
#endif
#ifdef CONFIG_HEVC_METADATA_BSF
 #pragma message("#define CONFIG_HEVC_METADATA_BSF " XSTR(CONFIG_HEVC_METADATA_BSF))
#endif
#ifdef CONFIG_HEVC_MP4TOANNEXB_BSF
 #pragma message("#define CONFIG_HEVC_MP4TOANNEXB_BSF " XSTR(CONFIG_HEVC_MP4TOANNEXB_BSF))
#endif
#ifdef CONFIG_IMX_DUMP_HEADER_BSF
 #pragma message("#define CONFIG_IMX_DUMP_HEADER_BSF " XSTR(CONFIG_IMX_DUMP_HEADER_BSF))
#endif
#ifdef CONFIG_MEDIA100_TO_MJPEGB_BSF
 #pragma message("#define CONFIG_MEDIA100_TO_MJPEGB_BSF " XSTR(CONFIG_MEDIA100_TO_MJPEGB_BSF))
#endif
#ifdef CONFIG_MJPEG2JPEG_BSF
 #pragma message("#define CONFIG_MJPEG2JPEG_BSF " XSTR(CONFIG_MJPEG2JPEG_BSF))
#endif
#ifdef CONFIG_MJPEGA_DUMP_HEADER_BSF
 #pragma message("#define CONFIG_MJPEGA_DUMP_HEADER_BSF " XSTR(CONFIG_MJPEGA_DUMP_HEADER_BSF))
#endif
#ifdef CONFIG_MPEG2_METADATA_BSF
 #pragma message("#define CONFIG_MPEG2_METADATA_BSF " XSTR(CONFIG_MPEG2_METADATA_BSF))
#endif
#ifdef CONFIG_MPEG4_UNPACK_BFRAMES_BSF
 #pragma message("#define CONFIG_MPEG4_UNPACK_BFRAMES_BSF " XSTR(CONFIG_MPEG4_UNPACK_BFRAMES_BSF))
#endif
#ifdef CONFIG_MOV2TEXTSUB_BSF
 #pragma message("#define CONFIG_MOV2TEXTSUB_BSF " XSTR(CONFIG_MOV2TEXTSUB_BSF))
#endif
#ifdef CONFIG_NOISE_BSF
 #pragma message("#define CONFIG_NOISE_BSF " XSTR(CONFIG_NOISE_BSF))
#endif
#ifdef CONFIG_NULL_BSF
 #pragma message("#define CONFIG_NULL_BSF " XSTR(CONFIG_NULL_BSF))
#endif
#ifdef CONFIG_OPUS_METADATA_BSF
 #pragma message("#define CONFIG_OPUS_METADATA_BSF " XSTR(CONFIG_OPUS_METADATA_BSF))
#endif
#ifdef CONFIG_PCM_RECHUNK_BSF
 #pragma message("#define CONFIG_PCM_RECHUNK_BSF " XSTR(CONFIG_PCM_RECHUNK_BSF))
#endif
#ifdef CONFIG_PGS_FRAME_MERGE_BSF
 #pragma message("#define CONFIG_PGS_FRAME_MERGE_BSF " XSTR(CONFIG_PGS_FRAME_MERGE_BSF))
#endif
#ifdef CONFIG_PRORES_METADATA_BSF
 #pragma message("#define CONFIG_PRORES_METADATA_BSF " XSTR(CONFIG_PRORES_METADATA_BSF))
#endif
#ifdef CONFIG_REMOVE_EXTRADATA_BSF
 #pragma message("#define CONFIG_REMOVE_EXTRADATA_BSF " XSTR(CONFIG_REMOVE_EXTRADATA_BSF))
#endif
#ifdef CONFIG_SETTS_BSF
 #pragma message("#define CONFIG_SETTS_BSF " XSTR(CONFIG_SETTS_BSF))
#endif
#ifdef CONFIG_SHOWINFO_BSF
 #pragma message("#define CONFIG_SHOWINFO_BSF " XSTR(CONFIG_SHOWINFO_BSF))
#endif
#ifdef CONFIG_TEXT2MOVSUB_BSF
 #pragma message("#define CONFIG_TEXT2MOVSUB_BSF " XSTR(CONFIG_TEXT2MOVSUB_BSF))
#endif
#ifdef CONFIG_TRACE_HEADERS_BSF
 #pragma message("#define CONFIG_TRACE_HEADERS_BSF " XSTR(CONFIG_TRACE_HEADERS_BSF))
#endif
#ifdef CONFIG_TRUEHD_CORE_BSF
 #pragma message("#define CONFIG_TRUEHD_CORE_BSF " XSTR(CONFIG_TRUEHD_CORE_BSF))
#endif
#ifdef CONFIG_VP9_METADATA_BSF
 #pragma message("#define CONFIG_VP9_METADATA_BSF " XSTR(CONFIG_VP9_METADATA_BSF))
#endif
#ifdef CONFIG_VP9_RAW_REORDER_BSF
 #pragma message("#define CONFIG_VP9_RAW_REORDER_BSF " XSTR(CONFIG_VP9_RAW_REORDER_BSF))
#endif
#ifdef CONFIG_VP9_SUPERFRAME_BSF
 #pragma message("#define CONFIG_VP9_SUPERFRAME_BSF " XSTR(CONFIG_VP9_SUPERFRAME_BSF))
#endif
#ifdef CONFIG_VP9_SUPERFRAME_SPLIT_BSF
 #pragma message("#define CONFIG_VP9_SUPERFRAME_SPLIT_BSF " XSTR(CONFIG_VP9_SUPERFRAME_SPLIT_BSF))
#endif
#ifdef CONFIG_VVC_METADATA_BSF
 #pragma message("#define CONFIG_VVC_METADATA_BSF " XSTR(CONFIG_VVC_METADATA_BSF))
#endif
#ifdef CONFIG_VVC_MP4TOANNEXB_BSF
 #pragma message("#define CONFIG_VVC_MP4TOANNEXB_BSF " XSTR(CONFIG_VVC_MP4TOANNEXB_BSF))
#endif
#ifdef CONFIG_EVC_FRAME_MERGE_BSF
 #pragma message("#define CONFIG_EVC_FRAME_MERGE_BSF " XSTR(CONFIG_EVC_FRAME_MERGE_BSF))
#endif
#ifdef CONFIG_AASC_DECODER
 #pragma message("#define CONFIG_AASC_DECODER " XSTR(CONFIG_AASC_DECODER))
#endif
#ifdef CONFIG_AIC_DECODER
 #pragma message("#define CONFIG_AIC_DECODER " XSTR(CONFIG_AIC_DECODER))
#endif
#ifdef CONFIG_ALIAS_PIX_DECODER
 #pragma message("#define CONFIG_ALIAS_PIX_DECODER " XSTR(CONFIG_ALIAS_PIX_DECODER))
#endif
#ifdef CONFIG_AGM_DECODER
 #pragma message("#define CONFIG_AGM_DECODER " XSTR(CONFIG_AGM_DECODER))
#endif
#ifdef CONFIG_AMV_DECODER
 #pragma message("#define CONFIG_AMV_DECODER " XSTR(CONFIG_AMV_DECODER))
#endif
#ifdef CONFIG_ANM_DECODER
 #pragma message("#define CONFIG_ANM_DECODER " XSTR(CONFIG_ANM_DECODER))
#endif
#ifdef CONFIG_ANSI_DECODER
 #pragma message("#define CONFIG_ANSI_DECODER " XSTR(CONFIG_ANSI_DECODER))
#endif
#ifdef CONFIG_APNG_DECODER
 #pragma message("#define CONFIG_APNG_DECODER " XSTR(CONFIG_APNG_DECODER))
#endif
#ifdef CONFIG_ARBC_DECODER
 #pragma message("#define CONFIG_ARBC_DECODER " XSTR(CONFIG_ARBC_DECODER))
#endif
#ifdef CONFIG_ARGO_DECODER
 #pragma message("#define CONFIG_ARGO_DECODER " XSTR(CONFIG_ARGO_DECODER))
#endif
#ifdef CONFIG_ASV1_DECODER
 #pragma message("#define CONFIG_ASV1_DECODER " XSTR(CONFIG_ASV1_DECODER))
#endif
#ifdef CONFIG_ASV2_DECODER
 #pragma message("#define CONFIG_ASV2_DECODER " XSTR(CONFIG_ASV2_DECODER))
#endif
#ifdef CONFIG_AURA_DECODER
 #pragma message("#define CONFIG_AURA_DECODER " XSTR(CONFIG_AURA_DECODER))
#endif
#ifdef CONFIG_AURA2_DECODER
 #pragma message("#define CONFIG_AURA2_DECODER " XSTR(CONFIG_AURA2_DECODER))
#endif
#ifdef CONFIG_AVRP_DECODER
 #pragma message("#define CONFIG_AVRP_DECODER " XSTR(CONFIG_AVRP_DECODER))
#endif
#ifdef CONFIG_AVRN_DECODER
 #pragma message("#define CONFIG_AVRN_DECODER " XSTR(CONFIG_AVRN_DECODER))
#endif
#ifdef CONFIG_AVS_DECODER
 #pragma message("#define CONFIG_AVS_DECODER " XSTR(CONFIG_AVS_DECODER))
#endif
#ifdef CONFIG_AVUI_DECODER
 #pragma message("#define CONFIG_AVUI_DECODER " XSTR(CONFIG_AVUI_DECODER))
#endif
#ifdef CONFIG_BETHSOFTVID_DECODER
 #pragma message("#define CONFIG_BETHSOFTVID_DECODER " XSTR(CONFIG_BETHSOFTVID_DECODER))
#endif
#ifdef CONFIG_BFI_DECODER
 #pragma message("#define CONFIG_BFI_DECODER " XSTR(CONFIG_BFI_DECODER))
#endif
#ifdef CONFIG_BINK_DECODER
 #pragma message("#define CONFIG_BINK_DECODER " XSTR(CONFIG_BINK_DECODER))
#endif
#ifdef CONFIG_BITPACKED_DECODER
 #pragma message("#define CONFIG_BITPACKED_DECODER " XSTR(CONFIG_BITPACKED_DECODER))
#endif
#ifdef CONFIG_BMP_DECODER
 #pragma message("#define CONFIG_BMP_DECODER " XSTR(CONFIG_BMP_DECODER))
#endif
#ifdef CONFIG_BMV_VIDEO_DECODER
 #pragma message("#define CONFIG_BMV_VIDEO_DECODER " XSTR(CONFIG_BMV_VIDEO_DECODER))
#endif
#ifdef CONFIG_BRENDER_PIX_DECODER
 #pragma message("#define CONFIG_BRENDER_PIX_DECODER " XSTR(CONFIG_BRENDER_PIX_DECODER))
#endif
#ifdef CONFIG_C93_DECODER
 #pragma message("#define CONFIG_C93_DECODER " XSTR(CONFIG_C93_DECODER))
#endif
#ifdef CONFIG_CAVS_DECODER
 #pragma message("#define CONFIG_CAVS_DECODER " XSTR(CONFIG_CAVS_DECODER))
#endif
#ifdef CONFIG_CDGRAPHICS_DECODER
 #pragma message("#define CONFIG_CDGRAPHICS_DECODER " XSTR(CONFIG_CDGRAPHICS_DECODER))
#endif
#ifdef CONFIG_CDTOONS_DECODER
 #pragma message("#define CONFIG_CDTOONS_DECODER " XSTR(CONFIG_CDTOONS_DECODER))
#endif
#ifdef CONFIG_CDXL_DECODER
 #pragma message("#define CONFIG_CDXL_DECODER " XSTR(CONFIG_CDXL_DECODER))
#endif
#ifdef CONFIG_CFHD_DECODER
 #pragma message("#define CONFIG_CFHD_DECODER " XSTR(CONFIG_CFHD_DECODER))
#endif
#ifdef CONFIG_CINEPAK_DECODER
 #pragma message("#define CONFIG_CINEPAK_DECODER " XSTR(CONFIG_CINEPAK_DECODER))
#endif
#ifdef CONFIG_CLEARVIDEO_DECODER
 #pragma message("#define CONFIG_CLEARVIDEO_DECODER " XSTR(CONFIG_CLEARVIDEO_DECODER))
#endif
#ifdef CONFIG_CLJR_DECODER
 #pragma message("#define CONFIG_CLJR_DECODER " XSTR(CONFIG_CLJR_DECODER))
#endif
#ifdef CONFIG_CLLC_DECODER
 #pragma message("#define CONFIG_CLLC_DECODER " XSTR(CONFIG_CLLC_DECODER))
#endif
#ifdef CONFIG_COMFORTNOISE_DECODER
 #pragma message("#define CONFIG_COMFORTNOISE_DECODER " XSTR(CONFIG_COMFORTNOISE_DECODER))
#endif
#ifdef CONFIG_CPIA_DECODER
 #pragma message("#define CONFIG_CPIA_DECODER " XSTR(CONFIG_CPIA_DECODER))
#endif
#ifdef CONFIG_CRI_DECODER
 #pragma message("#define CONFIG_CRI_DECODER " XSTR(CONFIG_CRI_DECODER))
#endif
#ifdef CONFIG_CSCD_DECODER
 #pragma message("#define CONFIG_CSCD_DECODER " XSTR(CONFIG_CSCD_DECODER))
#endif
#ifdef CONFIG_CYUV_DECODER
 #pragma message("#define CONFIG_CYUV_DECODER " XSTR(CONFIG_CYUV_DECODER))
#endif
#ifdef CONFIG_DDS_DECODER
 #pragma message("#define CONFIG_DDS_DECODER " XSTR(CONFIG_DDS_DECODER))
#endif
#ifdef CONFIG_DFA_DECODER
 #pragma message("#define CONFIG_DFA_DECODER " XSTR(CONFIG_DFA_DECODER))
#endif
#ifdef CONFIG_DIRAC_DECODER
 #pragma message("#define CONFIG_DIRAC_DECODER " XSTR(CONFIG_DIRAC_DECODER))
#endif
#ifdef CONFIG_DNXHD_DECODER
 #pragma message("#define CONFIG_DNXHD_DECODER " XSTR(CONFIG_DNXHD_DECODER))
#endif
#ifdef CONFIG_DPX_DECODER
 #pragma message("#define CONFIG_DPX_DECODER " XSTR(CONFIG_DPX_DECODER))
#endif
#ifdef CONFIG_DSICINVIDEO_DECODER
 #pragma message("#define CONFIG_DSICINVIDEO_DECODER " XSTR(CONFIG_DSICINVIDEO_DECODER))
#endif
#ifdef CONFIG_DVAUDIO_DECODER
 #pragma message("#define CONFIG_DVAUDIO_DECODER " XSTR(CONFIG_DVAUDIO_DECODER))
#endif
#ifdef CONFIG_DVVIDEO_DECODER
 #pragma message("#define CONFIG_DVVIDEO_DECODER " XSTR(CONFIG_DVVIDEO_DECODER))
#endif
#ifdef CONFIG_DXA_DECODER
 #pragma message("#define CONFIG_DXA_DECODER " XSTR(CONFIG_DXA_DECODER))
#endif
#ifdef CONFIG_DXTORY_DECODER
 #pragma message("#define CONFIG_DXTORY_DECODER " XSTR(CONFIG_DXTORY_DECODER))
#endif
#ifdef CONFIG_DXV_DECODER
 #pragma message("#define CONFIG_DXV_DECODER " XSTR(CONFIG_DXV_DECODER))
#endif
#ifdef CONFIG_EACMV_DECODER
 #pragma message("#define CONFIG_EACMV_DECODER " XSTR(CONFIG_EACMV_DECODER))
#endif
#ifdef CONFIG_EAMAD_DECODER
 #pragma message("#define CONFIG_EAMAD_DECODER " XSTR(CONFIG_EAMAD_DECODER))
#endif
#ifdef CONFIG_EATGQ_DECODER
 #pragma message("#define CONFIG_EATGQ_DECODER " XSTR(CONFIG_EATGQ_DECODER))
#endif
#ifdef CONFIG_EATGV_DECODER
 #pragma message("#define CONFIG_EATGV_DECODER " XSTR(CONFIG_EATGV_DECODER))
#endif
#ifdef CONFIG_EATQI_DECODER
 #pragma message("#define CONFIG_EATQI_DECODER " XSTR(CONFIG_EATQI_DECODER))
#endif
#ifdef CONFIG_EIGHTBPS_DECODER
 #pragma message("#define CONFIG_EIGHTBPS_DECODER " XSTR(CONFIG_EIGHTBPS_DECODER))
#endif
#ifdef CONFIG_EIGHTSVX_EXP_DECODER
 #pragma message("#define CONFIG_EIGHTSVX_EXP_DECODER " XSTR(CONFIG_EIGHTSVX_EXP_DECODER))
#endif
#ifdef CONFIG_EIGHTSVX_FIB_DECODER
 #pragma message("#define CONFIG_EIGHTSVX_FIB_DECODER " XSTR(CONFIG_EIGHTSVX_FIB_DECODER))
#endif
#ifdef CONFIG_ESCAPE124_DECODER
 #pragma message("#define CONFIG_ESCAPE124_DECODER " XSTR(CONFIG_ESCAPE124_DECODER))
#endif
#ifdef CONFIG_ESCAPE130_DECODER
 #pragma message("#define CONFIG_ESCAPE130_DECODER " XSTR(CONFIG_ESCAPE130_DECODER))
#endif
#ifdef CONFIG_EXR_DECODER
 #pragma message("#define CONFIG_EXR_DECODER " XSTR(CONFIG_EXR_DECODER))
#endif
#ifdef CONFIG_FFV1_DECODER
 #pragma message("#define CONFIG_FFV1_DECODER " XSTR(CONFIG_FFV1_DECODER))
#endif
#ifdef CONFIG_FFVHUFF_DECODER
 #pragma message("#define CONFIG_FFVHUFF_DECODER " XSTR(CONFIG_FFVHUFF_DECODER))
#endif
#ifdef CONFIG_FIC_DECODER
 #pragma message("#define CONFIG_FIC_DECODER " XSTR(CONFIG_FIC_DECODER))
#endif
#ifdef CONFIG_FITS_DECODER
 #pragma message("#define CONFIG_FITS_DECODER " XSTR(CONFIG_FITS_DECODER))
#endif
#ifdef CONFIG_FLASHSV_DECODER
 #pragma message("#define CONFIG_FLASHSV_DECODER " XSTR(CONFIG_FLASHSV_DECODER))
#endif
#ifdef CONFIG_FLASHSV2_DECODER
 #pragma message("#define CONFIG_FLASHSV2_DECODER " XSTR(CONFIG_FLASHSV2_DECODER))
#endif
#ifdef CONFIG_FLIC_DECODER
 #pragma message("#define CONFIG_FLIC_DECODER " XSTR(CONFIG_FLIC_DECODER))
#endif
#ifdef CONFIG_FLV_DECODER
 #pragma message("#define CONFIG_FLV_DECODER " XSTR(CONFIG_FLV_DECODER))
#endif
#ifdef CONFIG_FMVC_DECODER
 #pragma message("#define CONFIG_FMVC_DECODER " XSTR(CONFIG_FMVC_DECODER))
#endif
#ifdef CONFIG_FOURXM_DECODER
 #pragma message("#define CONFIG_FOURXM_DECODER " XSTR(CONFIG_FOURXM_DECODER))
#endif
#ifdef CONFIG_FRAPS_DECODER
 #pragma message("#define CONFIG_FRAPS_DECODER " XSTR(CONFIG_FRAPS_DECODER))
#endif
#ifdef CONFIG_FRWU_DECODER
 #pragma message("#define CONFIG_FRWU_DECODER " XSTR(CONFIG_FRWU_DECODER))
#endif
#ifdef CONFIG_G2M_DECODER
 #pragma message("#define CONFIG_G2M_DECODER " XSTR(CONFIG_G2M_DECODER))
#endif
#ifdef CONFIG_GDV_DECODER
 #pragma message("#define CONFIG_GDV_DECODER " XSTR(CONFIG_GDV_DECODER))
#endif
#ifdef CONFIG_GEM_DECODER
 #pragma message("#define CONFIG_GEM_DECODER " XSTR(CONFIG_GEM_DECODER))
#endif
#ifdef CONFIG_GIF_DECODER
 #pragma message("#define CONFIG_GIF_DECODER " XSTR(CONFIG_GIF_DECODER))
#endif
#ifdef CONFIG_H261_DECODER
 #pragma message("#define CONFIG_H261_DECODER " XSTR(CONFIG_H261_DECODER))
#endif
#ifdef CONFIG_H263_DECODER
 #pragma message("#define CONFIG_H263_DECODER " XSTR(CONFIG_H263_DECODER))
#endif
#ifdef CONFIG_H263I_DECODER
 #pragma message("#define CONFIG_H263I_DECODER " XSTR(CONFIG_H263I_DECODER))
#endif
#ifdef CONFIG_H263P_DECODER
 #pragma message("#define CONFIG_H263P_DECODER " XSTR(CONFIG_H263P_DECODER))
#endif
#ifdef CONFIG_H263_V4L2M2M_DECODER
 #pragma message("#define CONFIG_H263_V4L2M2M_DECODER " XSTR(CONFIG_H263_V4L2M2M_DECODER))
#endif
#ifdef CONFIG_H264_DECODER
 #pragma message("#define CONFIG_H264_DECODER " XSTR(CONFIG_H264_DECODER))
#endif
#ifdef CONFIG_H264_V4L2M2M_DECODER
 #pragma message("#define CONFIG_H264_V4L2M2M_DECODER " XSTR(CONFIG_H264_V4L2M2M_DECODER))
#endif
#ifdef CONFIG_H264_MEDIACODEC_DECODER
 #pragma message("#define CONFIG_H264_MEDIACODEC_DECODER " XSTR(CONFIG_H264_MEDIACODEC_DECODER))
#endif
#ifdef CONFIG_H264_MMAL_DECODER
 #pragma message("#define CONFIG_H264_MMAL_DECODER " XSTR(CONFIG_H264_MMAL_DECODER))
#endif
#ifdef CONFIG_H264_QSV_DECODER
 #pragma message("#define CONFIG_H264_QSV_DECODER " XSTR(CONFIG_H264_QSV_DECODER))
#endif
#ifdef CONFIG_H264_RKMPP_DECODER
 #pragma message("#define CONFIG_H264_RKMPP_DECODER " XSTR(CONFIG_H264_RKMPP_DECODER))
#endif
#ifdef CONFIG_HAP_DECODER
 #pragma message("#define CONFIG_HAP_DECODER " XSTR(CONFIG_HAP_DECODER))
#endif
#ifdef CONFIG_HEVC_DECODER
 #pragma message("#define CONFIG_HEVC_DECODER " XSTR(CONFIG_HEVC_DECODER))
#endif
#ifdef CONFIG_HEVC_QSV_DECODER
 #pragma message("#define CONFIG_HEVC_QSV_DECODER " XSTR(CONFIG_HEVC_QSV_DECODER))
#endif
#ifdef CONFIG_HEVC_RKMPP_DECODER
 #pragma message("#define CONFIG_HEVC_RKMPP_DECODER " XSTR(CONFIG_HEVC_RKMPP_DECODER))
#endif
#ifdef CONFIG_HEVC_V4L2M2M_DECODER
 #pragma message("#define CONFIG_HEVC_V4L2M2M_DECODER " XSTR(CONFIG_HEVC_V4L2M2M_DECODER))
#endif
#ifdef CONFIG_HNM4_VIDEO_DECODER
 #pragma message("#define CONFIG_HNM4_VIDEO_DECODER " XSTR(CONFIG_HNM4_VIDEO_DECODER))
#endif
#ifdef CONFIG_HQ_HQA_DECODER
 #pragma message("#define CONFIG_HQ_HQA_DECODER " XSTR(CONFIG_HQ_HQA_DECODER))
#endif
#ifdef CONFIG_HQX_DECODER
 #pragma message("#define CONFIG_HQX_DECODER " XSTR(CONFIG_HQX_DECODER))
#endif
#ifdef CONFIG_HUFFYUV_DECODER
 #pragma message("#define CONFIG_HUFFYUV_DECODER " XSTR(CONFIG_HUFFYUV_DECODER))
#endif
#ifdef CONFIG_HYMT_DECODER
 #pragma message("#define CONFIG_HYMT_DECODER " XSTR(CONFIG_HYMT_DECODER))
#endif
#ifdef CONFIG_IDCIN_DECODER
 #pragma message("#define CONFIG_IDCIN_DECODER " XSTR(CONFIG_IDCIN_DECODER))
#endif
#ifdef CONFIG_IFF_ILBM_DECODER
 #pragma message("#define CONFIG_IFF_ILBM_DECODER " XSTR(CONFIG_IFF_ILBM_DECODER))
#endif
#ifdef CONFIG_IMM4_DECODER
 #pragma message("#define CONFIG_IMM4_DECODER " XSTR(CONFIG_IMM4_DECODER))
#endif
#ifdef CONFIG_IMM5_DECODER
 #pragma message("#define CONFIG_IMM5_DECODER " XSTR(CONFIG_IMM5_DECODER))
#endif
#ifdef CONFIG_INDEO2_DECODER
 #pragma message("#define CONFIG_INDEO2_DECODER " XSTR(CONFIG_INDEO2_DECODER))
#endif
#ifdef CONFIG_INDEO3_DECODER
 #pragma message("#define CONFIG_INDEO3_DECODER " XSTR(CONFIG_INDEO3_DECODER))
#endif
#ifdef CONFIG_INDEO4_DECODER
 #pragma message("#define CONFIG_INDEO4_DECODER " XSTR(CONFIG_INDEO4_DECODER))
#endif
#ifdef CONFIG_INDEO5_DECODER
 #pragma message("#define CONFIG_INDEO5_DECODER " XSTR(CONFIG_INDEO5_DECODER))
#endif
#ifdef CONFIG_INTERPLAY_VIDEO_DECODER
 #pragma message("#define CONFIG_INTERPLAY_VIDEO_DECODER " XSTR(CONFIG_INTERPLAY_VIDEO_DECODER))
#endif
#ifdef CONFIG_IPU_DECODER
 #pragma message("#define CONFIG_IPU_DECODER " XSTR(CONFIG_IPU_DECODER))
#endif
#ifdef CONFIG_JPEG2000_DECODER
 #pragma message("#define CONFIG_JPEG2000_DECODER " XSTR(CONFIG_JPEG2000_DECODER))
#endif
#ifdef CONFIG_JPEGLS_DECODER
 #pragma message("#define CONFIG_JPEGLS_DECODER " XSTR(CONFIG_JPEGLS_DECODER))
#endif
#ifdef CONFIG_JV_DECODER
 #pragma message("#define CONFIG_JV_DECODER " XSTR(CONFIG_JV_DECODER))
#endif
#ifdef CONFIG_KGV1_DECODER
 #pragma message("#define CONFIG_KGV1_DECODER " XSTR(CONFIG_KGV1_DECODER))
#endif
#ifdef CONFIG_KMVC_DECODER
 #pragma message("#define CONFIG_KMVC_DECODER " XSTR(CONFIG_KMVC_DECODER))
#endif
#ifdef CONFIG_LAGARITH_DECODER
 #pragma message("#define CONFIG_LAGARITH_DECODER " XSTR(CONFIG_LAGARITH_DECODER))
#endif
#ifdef CONFIG_LEAD_DECODER
 #pragma message("#define CONFIG_LEAD_DECODER " XSTR(CONFIG_LEAD_DECODER))
#endif
#ifdef CONFIG_LOCO_DECODER
 #pragma message("#define CONFIG_LOCO_DECODER " XSTR(CONFIG_LOCO_DECODER))
#endif
#ifdef CONFIG_LSCR_DECODER
 #pragma message("#define CONFIG_LSCR_DECODER " XSTR(CONFIG_LSCR_DECODER))
#endif
#ifdef CONFIG_M101_DECODER
 #pragma message("#define CONFIG_M101_DECODER " XSTR(CONFIG_M101_DECODER))
#endif
#ifdef CONFIG_MAGICYUV_DECODER
 #pragma message("#define CONFIG_MAGICYUV_DECODER " XSTR(CONFIG_MAGICYUV_DECODER))
#endif
#ifdef CONFIG_MDEC_DECODER
 #pragma message("#define CONFIG_MDEC_DECODER " XSTR(CONFIG_MDEC_DECODER))
#endif
#ifdef CONFIG_MEDIA100_DECODER
 #pragma message("#define CONFIG_MEDIA100_DECODER " XSTR(CONFIG_MEDIA100_DECODER))
#endif
#ifdef CONFIG_MIMIC_DECODER
 #pragma message("#define CONFIG_MIMIC_DECODER " XSTR(CONFIG_MIMIC_DECODER))
#endif
#ifdef CONFIG_MJPEG_DECODER
 #pragma message("#define CONFIG_MJPEG_DECODER " XSTR(CONFIG_MJPEG_DECODER))
#endif
#ifdef CONFIG_MJPEGB_DECODER
 #pragma message("#define CONFIG_MJPEGB_DECODER " XSTR(CONFIG_MJPEGB_DECODER))
#endif
#ifdef CONFIG_MMVIDEO_DECODER
 #pragma message("#define CONFIG_MMVIDEO_DECODER " XSTR(CONFIG_MMVIDEO_DECODER))
#endif
#ifdef CONFIG_MOBICLIP_DECODER
 #pragma message("#define CONFIG_MOBICLIP_DECODER " XSTR(CONFIG_MOBICLIP_DECODER))
#endif
#ifdef CONFIG_MOTIONPIXELS_DECODER
 #pragma message("#define CONFIG_MOTIONPIXELS_DECODER " XSTR(CONFIG_MOTIONPIXELS_DECODER))
#endif
#ifdef CONFIG_MPEG1VIDEO_DECODER
 #pragma message("#define CONFIG_MPEG1VIDEO_DECODER " XSTR(CONFIG_MPEG1VIDEO_DECODER))
#endif
#ifdef CONFIG_MPEG2VIDEO_DECODER
 #pragma message("#define CONFIG_MPEG2VIDEO_DECODER " XSTR(CONFIG_MPEG2VIDEO_DECODER))
#endif
#ifdef CONFIG_MPEG4_DECODER
 #pragma message("#define CONFIG_MPEG4_DECODER " XSTR(CONFIG_MPEG4_DECODER))
#endif
#ifdef CONFIG_MPEG4_V4L2M2M_DECODER
 #pragma message("#define CONFIG_MPEG4_V4L2M2M_DECODER " XSTR(CONFIG_MPEG4_V4L2M2M_DECODER))
#endif
#ifdef CONFIG_MPEG4_MMAL_DECODER
 #pragma message("#define CONFIG_MPEG4_MMAL_DECODER " XSTR(CONFIG_MPEG4_MMAL_DECODER))
#endif
#ifdef CONFIG_MPEGVIDEO_DECODER
 #pragma message("#define CONFIG_MPEGVIDEO_DECODER " XSTR(CONFIG_MPEGVIDEO_DECODER))
#endif
#ifdef CONFIG_MPEG1_V4L2M2M_DECODER
 #pragma message("#define CONFIG_MPEG1_V4L2M2M_DECODER " XSTR(CONFIG_MPEG1_V4L2M2M_DECODER))
#endif
#ifdef CONFIG_MPEG2_MMAL_DECODER
 #pragma message("#define CONFIG_MPEG2_MMAL_DECODER " XSTR(CONFIG_MPEG2_MMAL_DECODER))
#endif
#ifdef CONFIG_MPEG2_V4L2M2M_DECODER
 #pragma message("#define CONFIG_MPEG2_V4L2M2M_DECODER " XSTR(CONFIG_MPEG2_V4L2M2M_DECODER))
#endif
#ifdef CONFIG_MPEG2_QSV_DECODER
 #pragma message("#define CONFIG_MPEG2_QSV_DECODER " XSTR(CONFIG_MPEG2_QSV_DECODER))
#endif
#ifdef CONFIG_MPEG2_MEDIACODEC_DECODER
 #pragma message("#define CONFIG_MPEG2_MEDIACODEC_DECODER " XSTR(CONFIG_MPEG2_MEDIACODEC_DECODER))
#endif
#ifdef CONFIG_MSA1_DECODER
 #pragma message("#define CONFIG_MSA1_DECODER " XSTR(CONFIG_MSA1_DECODER))
#endif
#ifdef CONFIG_MSCC_DECODER
 #pragma message("#define CONFIG_MSCC_DECODER " XSTR(CONFIG_MSCC_DECODER))
#endif
#ifdef CONFIG_MSMPEG4V1_DECODER
 #pragma message("#define CONFIG_MSMPEG4V1_DECODER " XSTR(CONFIG_MSMPEG4V1_DECODER))
#endif
#ifdef CONFIG_MSMPEG4V2_DECODER
 #pragma message("#define CONFIG_MSMPEG4V2_DECODER " XSTR(CONFIG_MSMPEG4V2_DECODER))
#endif
#ifdef CONFIG_MSMPEG4V3_DECODER
 #pragma message("#define CONFIG_MSMPEG4V3_DECODER " XSTR(CONFIG_MSMPEG4V3_DECODER))
#endif
#ifdef CONFIG_MSP2_DECODER
 #pragma message("#define CONFIG_MSP2_DECODER " XSTR(CONFIG_MSP2_DECODER))
#endif
#ifdef CONFIG_MSRLE_DECODER
 #pragma message("#define CONFIG_MSRLE_DECODER " XSTR(CONFIG_MSRLE_DECODER))
#endif
#ifdef CONFIG_MSS1_DECODER
 #pragma message("#define CONFIG_MSS1_DECODER " XSTR(CONFIG_MSS1_DECODER))
#endif
#ifdef CONFIG_MSS2_DECODER
 #pragma message("#define CONFIG_MSS2_DECODER " XSTR(CONFIG_MSS2_DECODER))
#endif
#ifdef CONFIG_MSVIDEO1_DECODER
 #pragma message("#define CONFIG_MSVIDEO1_DECODER " XSTR(CONFIG_MSVIDEO1_DECODER))
#endif
#ifdef CONFIG_MSZH_DECODER
 #pragma message("#define CONFIG_MSZH_DECODER " XSTR(CONFIG_MSZH_DECODER))
#endif
#ifdef CONFIG_MTS2_DECODER
 #pragma message("#define CONFIG_MTS2_DECODER " XSTR(CONFIG_MTS2_DECODER))
#endif
#ifdef CONFIG_MV30_DECODER
 #pragma message("#define CONFIG_MV30_DECODER " XSTR(CONFIG_MV30_DECODER))
#endif
#ifdef CONFIG_MVC1_DECODER
 #pragma message("#define CONFIG_MVC1_DECODER " XSTR(CONFIG_MVC1_DECODER))
#endif
#ifdef CONFIG_MVC2_DECODER
 #pragma message("#define CONFIG_MVC2_DECODER " XSTR(CONFIG_MVC2_DECODER))
#endif
#ifdef CONFIG_MVDV_DECODER
 #pragma message("#define CONFIG_MVDV_DECODER " XSTR(CONFIG_MVDV_DECODER))
#endif
#ifdef CONFIG_MVHA_DECODER
 #pragma message("#define CONFIG_MVHA_DECODER " XSTR(CONFIG_MVHA_DECODER))
#endif
#ifdef CONFIG_MWSC_DECODER
 #pragma message("#define CONFIG_MWSC_DECODER " XSTR(CONFIG_MWSC_DECODER))
#endif
#ifdef CONFIG_MXPEG_DECODER
 #pragma message("#define CONFIG_MXPEG_DECODER " XSTR(CONFIG_MXPEG_DECODER))
#endif
#ifdef CONFIG_NOTCHLC_DECODER
 #pragma message("#define CONFIG_NOTCHLC_DECODER " XSTR(CONFIG_NOTCHLC_DECODER))
#endif
#ifdef CONFIG_NUV_DECODER
 #pragma message("#define CONFIG_NUV_DECODER " XSTR(CONFIG_NUV_DECODER))
#endif
#ifdef CONFIG_PAF_VIDEO_DECODER
 #pragma message("#define CONFIG_PAF_VIDEO_DECODER " XSTR(CONFIG_PAF_VIDEO_DECODER))
#endif
#ifdef CONFIG_PAM_DECODER
 #pragma message("#define CONFIG_PAM_DECODER " XSTR(CONFIG_PAM_DECODER))
#endif
#ifdef CONFIG_PBM_DECODER
 #pragma message("#define CONFIG_PBM_DECODER " XSTR(CONFIG_PBM_DECODER))
#endif
#ifdef CONFIG_PCX_DECODER
 #pragma message("#define CONFIG_PCX_DECODER " XSTR(CONFIG_PCX_DECODER))
#endif
#ifdef CONFIG_PDV_DECODER
 #pragma message("#define CONFIG_PDV_DECODER " XSTR(CONFIG_PDV_DECODER))
#endif
#ifdef CONFIG_PFM_DECODER
 #pragma message("#define CONFIG_PFM_DECODER " XSTR(CONFIG_PFM_DECODER))
#endif
#ifdef CONFIG_PGM_DECODER
 #pragma message("#define CONFIG_PGM_DECODER " XSTR(CONFIG_PGM_DECODER))
#endif
#ifdef CONFIG_PGMYUV_DECODER
 #pragma message("#define CONFIG_PGMYUV_DECODER " XSTR(CONFIG_PGMYUV_DECODER))
#endif
#ifdef CONFIG_PGX_DECODER
 #pragma message("#define CONFIG_PGX_DECODER " XSTR(CONFIG_PGX_DECODER))
#endif
#ifdef CONFIG_PHM_DECODER
 #pragma message("#define CONFIG_PHM_DECODER " XSTR(CONFIG_PHM_DECODER))
#endif
#ifdef CONFIG_PHOTOCD_DECODER
 #pragma message("#define CONFIG_PHOTOCD_DECODER " XSTR(CONFIG_PHOTOCD_DECODER))
#endif
#ifdef CONFIG_PICTOR_DECODER
 #pragma message("#define CONFIG_PICTOR_DECODER " XSTR(CONFIG_PICTOR_DECODER))
#endif
#ifdef CONFIG_PIXLET_DECODER
 #pragma message("#define CONFIG_PIXLET_DECODER " XSTR(CONFIG_PIXLET_DECODER))
#endif
#ifdef CONFIG_PNG_DECODER
 #pragma message("#define CONFIG_PNG_DECODER " XSTR(CONFIG_PNG_DECODER))
#endif
#ifdef CONFIG_PPM_DECODER
 #pragma message("#define CONFIG_PPM_DECODER " XSTR(CONFIG_PPM_DECODER))
#endif
#ifdef CONFIG_PRORES_DECODER
 #pragma message("#define CONFIG_PRORES_DECODER " XSTR(CONFIG_PRORES_DECODER))
#endif
#ifdef CONFIG_PROSUMER_DECODER
 #pragma message("#define CONFIG_PROSUMER_DECODER " XSTR(CONFIG_PROSUMER_DECODER))
#endif
#ifdef CONFIG_PSD_DECODER
 #pragma message("#define CONFIG_PSD_DECODER " XSTR(CONFIG_PSD_DECODER))
#endif
#ifdef CONFIG_PTX_DECODER
 #pragma message("#define CONFIG_PTX_DECODER " XSTR(CONFIG_PTX_DECODER))
#endif
#ifdef CONFIG_QDRAW_DECODER
 #pragma message("#define CONFIG_QDRAW_DECODER " XSTR(CONFIG_QDRAW_DECODER))
#endif
#ifdef CONFIG_QOI_DECODER
 #pragma message("#define CONFIG_QOI_DECODER " XSTR(CONFIG_QOI_DECODER))
#endif
#ifdef CONFIG_QPEG_DECODER
 #pragma message("#define CONFIG_QPEG_DECODER " XSTR(CONFIG_QPEG_DECODER))
#endif
#ifdef CONFIG_QTRLE_DECODER
 #pragma message("#define CONFIG_QTRLE_DECODER " XSTR(CONFIG_QTRLE_DECODER))
#endif
#ifdef CONFIG_R10K_DECODER
 #pragma message("#define CONFIG_R10K_DECODER " XSTR(CONFIG_R10K_DECODER))
#endif
#ifdef CONFIG_R210_DECODER
 #pragma message("#define CONFIG_R210_DECODER " XSTR(CONFIG_R210_DECODER))
#endif
#ifdef CONFIG_RASC_DECODER
 #pragma message("#define CONFIG_RASC_DECODER " XSTR(CONFIG_RASC_DECODER))
#endif
#ifdef CONFIG_RAWVIDEO_DECODER
 #pragma message("#define CONFIG_RAWVIDEO_DECODER " XSTR(CONFIG_RAWVIDEO_DECODER))
#endif
#ifdef CONFIG_RKA_DECODER
 #pragma message("#define CONFIG_RKA_DECODER " XSTR(CONFIG_RKA_DECODER))
#endif
#ifdef CONFIG_RL2_DECODER
 #pragma message("#define CONFIG_RL2_DECODER " XSTR(CONFIG_RL2_DECODER))
#endif
#ifdef CONFIG_ROQ_DECODER
 #pragma message("#define CONFIG_ROQ_DECODER " XSTR(CONFIG_ROQ_DECODER))
#endif
#ifdef CONFIG_RPZA_DECODER
 #pragma message("#define CONFIG_RPZA_DECODER " XSTR(CONFIG_RPZA_DECODER))
#endif
#ifdef CONFIG_RSCC_DECODER
 #pragma message("#define CONFIG_RSCC_DECODER " XSTR(CONFIG_RSCC_DECODER))
#endif
#ifdef CONFIG_RTV1_DECODER
 #pragma message("#define CONFIG_RTV1_DECODER " XSTR(CONFIG_RTV1_DECODER))
#endif
#ifdef CONFIG_RV10_DECODER
 #pragma message("#define CONFIG_RV10_DECODER " XSTR(CONFIG_RV10_DECODER))
#endif
#ifdef CONFIG_RV20_DECODER
 #pragma message("#define CONFIG_RV20_DECODER " XSTR(CONFIG_RV20_DECODER))
#endif
#ifdef CONFIG_RV30_DECODER
 #pragma message("#define CONFIG_RV30_DECODER " XSTR(CONFIG_RV30_DECODER))
#endif
#ifdef CONFIG_RV40_DECODER
 #pragma message("#define CONFIG_RV40_DECODER " XSTR(CONFIG_RV40_DECODER))
#endif
#ifdef CONFIG_S302M_DECODER
 #pragma message("#define CONFIG_S302M_DECODER " XSTR(CONFIG_S302M_DECODER))
#endif
#ifdef CONFIG_SANM_DECODER
 #pragma message("#define CONFIG_SANM_DECODER " XSTR(CONFIG_SANM_DECODER))
#endif
#ifdef CONFIG_SCPR_DECODER
 #pragma message("#define CONFIG_SCPR_DECODER " XSTR(CONFIG_SCPR_DECODER))
#endif
#ifdef CONFIG_SCREENPRESSO_DECODER
 #pragma message("#define CONFIG_SCREENPRESSO_DECODER " XSTR(CONFIG_SCREENPRESSO_DECODER))
#endif
#ifdef CONFIG_SGA_DECODER
 #pragma message("#define CONFIG_SGA_DECODER " XSTR(CONFIG_SGA_DECODER))
#endif
#ifdef CONFIG_SGI_DECODER
 #pragma message("#define CONFIG_SGI_DECODER " XSTR(CONFIG_SGI_DECODER))
#endif
#ifdef CONFIG_SGIRLE_DECODER
 #pragma message("#define CONFIG_SGIRLE_DECODER " XSTR(CONFIG_SGIRLE_DECODER))
#endif
#ifdef CONFIG_SHEERVIDEO_DECODER
 #pragma message("#define CONFIG_SHEERVIDEO_DECODER " XSTR(CONFIG_SHEERVIDEO_DECODER))
#endif
#ifdef CONFIG_SIMBIOSIS_IMX_DECODER
 #pragma message("#define CONFIG_SIMBIOSIS_IMX_DECODER " XSTR(CONFIG_SIMBIOSIS_IMX_DECODER))
#endif
#ifdef CONFIG_SMACKER_DECODER
 #pragma message("#define CONFIG_SMACKER_DECODER " XSTR(CONFIG_SMACKER_DECODER))
#endif
#ifdef CONFIG_SMC_DECODER
 #pragma message("#define CONFIG_SMC_DECODER " XSTR(CONFIG_SMC_DECODER))
#endif
#ifdef CONFIG_SMVJPEG_DECODER
 #pragma message("#define CONFIG_SMVJPEG_DECODER " XSTR(CONFIG_SMVJPEG_DECODER))
#endif
#ifdef CONFIG_SNOW_DECODER
 #pragma message("#define CONFIG_SNOW_DECODER " XSTR(CONFIG_SNOW_DECODER))
#endif
#ifdef CONFIG_SP5X_DECODER
 #pragma message("#define CONFIG_SP5X_DECODER " XSTR(CONFIG_SP5X_DECODER))
#endif
#ifdef CONFIG_SPEEDHQ_DECODER
 #pragma message("#define CONFIG_SPEEDHQ_DECODER " XSTR(CONFIG_SPEEDHQ_DECODER))
#endif
#ifdef CONFIG_SPEEX_DECODER
 #pragma message("#define CONFIG_SPEEX_DECODER " XSTR(CONFIG_SPEEX_DECODER))
#endif
#ifdef CONFIG_SRGC_DECODER
 #pragma message("#define CONFIG_SRGC_DECODER " XSTR(CONFIG_SRGC_DECODER))
#endif
#ifdef CONFIG_SUNRAST_DECODER
 #pragma message("#define CONFIG_SUNRAST_DECODER " XSTR(CONFIG_SUNRAST_DECODER))
#endif
#ifdef CONFIG_SVQ1_DECODER
 #pragma message("#define CONFIG_SVQ1_DECODER " XSTR(CONFIG_SVQ1_DECODER))
#endif
#ifdef CONFIG_SVQ3_DECODER
 #pragma message("#define CONFIG_SVQ3_DECODER " XSTR(CONFIG_SVQ3_DECODER))
#endif
#ifdef CONFIG_TARGA_DECODER
 #pragma message("#define CONFIG_TARGA_DECODER " XSTR(CONFIG_TARGA_DECODER))
#endif
#ifdef CONFIG_TARGA_Y216_DECODER
 #pragma message("#define CONFIG_TARGA_Y216_DECODER " XSTR(CONFIG_TARGA_Y216_DECODER))
#endif
#ifdef CONFIG_TDSC_DECODER
 #pragma message("#define CONFIG_TDSC_DECODER " XSTR(CONFIG_TDSC_DECODER))
#endif
#ifdef CONFIG_THEORA_DECODER
 #pragma message("#define CONFIG_THEORA_DECODER " XSTR(CONFIG_THEORA_DECODER))
#endif
#ifdef CONFIG_THP_DECODER
 #pragma message("#define CONFIG_THP_DECODER " XSTR(CONFIG_THP_DECODER))
#endif
#ifdef CONFIG_TIERTEXSEQVIDEO_DECODER
 #pragma message("#define CONFIG_TIERTEXSEQVIDEO_DECODER " XSTR(CONFIG_TIERTEXSEQVIDEO_DECODER))
#endif
#ifdef CONFIG_TIFF_DECODER
 #pragma message("#define CONFIG_TIFF_DECODER " XSTR(CONFIG_TIFF_DECODER))
#endif
#ifdef CONFIG_TMV_DECODER
 #pragma message("#define CONFIG_TMV_DECODER " XSTR(CONFIG_TMV_DECODER))
#endif
#ifdef CONFIG_TRUEMOTION1_DECODER
 #pragma message("#define CONFIG_TRUEMOTION1_DECODER " XSTR(CONFIG_TRUEMOTION1_DECODER))
#endif
#ifdef CONFIG_TRUEMOTION2_DECODER
 #pragma message("#define CONFIG_TRUEMOTION2_DECODER " XSTR(CONFIG_TRUEMOTION2_DECODER))
#endif
#ifdef CONFIG_TRUEMOTION2RT_DECODER
 #pragma message("#define CONFIG_TRUEMOTION2RT_DECODER " XSTR(CONFIG_TRUEMOTION2RT_DECODER))
#endif
#ifdef CONFIG_TSCC_DECODER
 #pragma message("#define CONFIG_TSCC_DECODER " XSTR(CONFIG_TSCC_DECODER))
#endif
#ifdef CONFIG_TSCC2_DECODER
 #pragma message("#define CONFIG_TSCC2_DECODER " XSTR(CONFIG_TSCC2_DECODER))
#endif
#ifdef CONFIG_TXD_DECODER
 #pragma message("#define CONFIG_TXD_DECODER " XSTR(CONFIG_TXD_DECODER))
#endif
#ifdef CONFIG_ULTI_DECODER
 #pragma message("#define CONFIG_ULTI_DECODER " XSTR(CONFIG_ULTI_DECODER))
#endif
#ifdef CONFIG_UTVIDEO_DECODER
 #pragma message("#define CONFIG_UTVIDEO_DECODER " XSTR(CONFIG_UTVIDEO_DECODER))
#endif
#ifdef CONFIG_V210_DECODER
 #pragma message("#define CONFIG_V210_DECODER " XSTR(CONFIG_V210_DECODER))
#endif
#ifdef CONFIG_V210X_DECODER
 #pragma message("#define CONFIG_V210X_DECODER " XSTR(CONFIG_V210X_DECODER))
#endif
#ifdef CONFIG_V308_DECODER
 #pragma message("#define CONFIG_V308_DECODER " XSTR(CONFIG_V308_DECODER))
#endif
#ifdef CONFIG_V408_DECODER
 #pragma message("#define CONFIG_V408_DECODER " XSTR(CONFIG_V408_DECODER))
#endif
#ifdef CONFIG_V410_DECODER
 #pragma message("#define CONFIG_V410_DECODER " XSTR(CONFIG_V410_DECODER))
#endif
#ifdef CONFIG_VB_DECODER
 #pragma message("#define CONFIG_VB_DECODER " XSTR(CONFIG_VB_DECODER))
#endif
#ifdef CONFIG_VBN_DECODER
 #pragma message("#define CONFIG_VBN_DECODER " XSTR(CONFIG_VBN_DECODER))
#endif
#ifdef CONFIG_VBLE_DECODER
 #pragma message("#define CONFIG_VBLE_DECODER " XSTR(CONFIG_VBLE_DECODER))
#endif
#ifdef CONFIG_VC1_DECODER
 #pragma message("#define CONFIG_VC1_DECODER " XSTR(CONFIG_VC1_DECODER))
#endif
#ifdef CONFIG_VC1IMAGE_DECODER
 #pragma message("#define CONFIG_VC1IMAGE_DECODER " XSTR(CONFIG_VC1IMAGE_DECODER))
#endif
#ifdef CONFIG_VC1_MMAL_DECODER
 #pragma message("#define CONFIG_VC1_MMAL_DECODER " XSTR(CONFIG_VC1_MMAL_DECODER))
#endif
#ifdef CONFIG_VC1_QSV_DECODER
 #pragma message("#define CONFIG_VC1_QSV_DECODER " XSTR(CONFIG_VC1_QSV_DECODER))
#endif
#ifdef CONFIG_VC1_V4L2M2M_DECODER
 #pragma message("#define CONFIG_VC1_V4L2M2M_DECODER " XSTR(CONFIG_VC1_V4L2M2M_DECODER))
#endif
#ifdef CONFIG_VCR1_DECODER
 #pragma message("#define CONFIG_VCR1_DECODER " XSTR(CONFIG_VCR1_DECODER))
#endif
#ifdef CONFIG_VMDVIDEO_DECODER
 #pragma message("#define CONFIG_VMDVIDEO_DECODER " XSTR(CONFIG_VMDVIDEO_DECODER))
#endif
#ifdef CONFIG_VMIX_DECODER
 #pragma message("#define CONFIG_VMIX_DECODER " XSTR(CONFIG_VMIX_DECODER))
#endif
#ifdef CONFIG_VMNC_DECODER
 #pragma message("#define CONFIG_VMNC_DECODER " XSTR(CONFIG_VMNC_DECODER))
#endif
#ifdef CONFIG_VP3_DECODER
 #pragma message("#define CONFIG_VP3_DECODER " XSTR(CONFIG_VP3_DECODER))
#endif
#ifdef CONFIG_VP4_DECODER
 #pragma message("#define CONFIG_VP4_DECODER " XSTR(CONFIG_VP4_DECODER))
#endif
#ifdef CONFIG_VP5_DECODER
 #pragma message("#define CONFIG_VP5_DECODER " XSTR(CONFIG_VP5_DECODER))
#endif
#ifdef CONFIG_VP6_DECODER
 #pragma message("#define CONFIG_VP6_DECODER " XSTR(CONFIG_VP6_DECODER))
#endif
#ifdef CONFIG_VP6A_DECODER
 #pragma message("#define CONFIG_VP6A_DECODER " XSTR(CONFIG_VP6A_DECODER))
#endif
#ifdef CONFIG_VP6F_DECODER
 #pragma message("#define CONFIG_VP6F_DECODER " XSTR(CONFIG_VP6F_DECODER))
#endif
#ifdef CONFIG_VP7_DECODER
 #pragma message("#define CONFIG_VP7_DECODER " XSTR(CONFIG_VP7_DECODER))
#endif
#ifdef CONFIG_VP8_DECODER
 #pragma message("#define CONFIG_VP8_DECODER " XSTR(CONFIG_VP8_DECODER))
#endif
#ifdef CONFIG_VP8_RKMPP_DECODER
 #pragma message("#define CONFIG_VP8_RKMPP_DECODER " XSTR(CONFIG_VP8_RKMPP_DECODER))
#endif
#ifdef CONFIG_VP8_V4L2M2M_DECODER
 #pragma message("#define CONFIG_VP8_V4L2M2M_DECODER " XSTR(CONFIG_VP8_V4L2M2M_DECODER))
#endif
#ifdef CONFIG_VP9_DECODER
 #pragma message("#define CONFIG_VP9_DECODER " XSTR(CONFIG_VP9_DECODER))
#endif
#ifdef CONFIG_VP9_RKMPP_DECODER
 #pragma message("#define CONFIG_VP9_RKMPP_DECODER " XSTR(CONFIG_VP9_RKMPP_DECODER))
#endif
#ifdef CONFIG_VP9_V4L2M2M_DECODER
 #pragma message("#define CONFIG_VP9_V4L2M2M_DECODER " XSTR(CONFIG_VP9_V4L2M2M_DECODER))
#endif
#ifdef CONFIG_VQA_DECODER
 #pragma message("#define CONFIG_VQA_DECODER " XSTR(CONFIG_VQA_DECODER))
#endif
#ifdef CONFIG_VQC_DECODER
 #pragma message("#define CONFIG_VQC_DECODER " XSTR(CONFIG_VQC_DECODER))
#endif
#ifdef CONFIG_VVC_DECODER
 #pragma message("#define CONFIG_VVC_DECODER " XSTR(CONFIG_VVC_DECODER))
#endif
#ifdef CONFIG_WBMP_DECODER
 #pragma message("#define CONFIG_WBMP_DECODER " XSTR(CONFIG_WBMP_DECODER))
#endif
#ifdef CONFIG_WEBP_DECODER
 #pragma message("#define CONFIG_WEBP_DECODER " XSTR(CONFIG_WEBP_DECODER))
#endif
#ifdef CONFIG_WCMV_DECODER
 #pragma message("#define CONFIG_WCMV_DECODER " XSTR(CONFIG_WCMV_DECODER))
#endif
#ifdef CONFIG_WRAPPED_AVFRAME_DECODER
 #pragma message("#define CONFIG_WRAPPED_AVFRAME_DECODER " XSTR(CONFIG_WRAPPED_AVFRAME_DECODER))
#endif
#ifdef CONFIG_WMV1_DECODER
 #pragma message("#define CONFIG_WMV1_DECODER " XSTR(CONFIG_WMV1_DECODER))
#endif
#ifdef CONFIG_WMV2_DECODER
 #pragma message("#define CONFIG_WMV2_DECODER " XSTR(CONFIG_WMV2_DECODER))
#endif
#ifdef CONFIG_WMV3_DECODER
 #pragma message("#define CONFIG_WMV3_DECODER " XSTR(CONFIG_WMV3_DECODER))
#endif
#ifdef CONFIG_WMV3IMAGE_DECODER
 #pragma message("#define CONFIG_WMV3IMAGE_DECODER " XSTR(CONFIG_WMV3IMAGE_DECODER))
#endif
#ifdef CONFIG_WNV1_DECODER
 #pragma message("#define CONFIG_WNV1_DECODER " XSTR(CONFIG_WNV1_DECODER))
#endif
#ifdef CONFIG_XAN_WC3_DECODER
 #pragma message("#define CONFIG_XAN_WC3_DECODER " XSTR(CONFIG_XAN_WC3_DECODER))
#endif
#ifdef CONFIG_XAN_WC4_DECODER
 #pragma message("#define CONFIG_XAN_WC4_DECODER " XSTR(CONFIG_XAN_WC4_DECODER))
#endif
#ifdef CONFIG_XBM_DECODER
 #pragma message("#define CONFIG_XBM_DECODER " XSTR(CONFIG_XBM_DECODER))
#endif
#ifdef CONFIG_XFACE_DECODER
 #pragma message("#define CONFIG_XFACE_DECODER " XSTR(CONFIG_XFACE_DECODER))
#endif
#ifdef CONFIG_XL_DECODER
 #pragma message("#define CONFIG_XL_DECODER " XSTR(CONFIG_XL_DECODER))
#endif
#ifdef CONFIG_XPM_DECODER
 #pragma message("#define CONFIG_XPM_DECODER " XSTR(CONFIG_XPM_DECODER))
#endif
#ifdef CONFIG_XWD_DECODER
 #pragma message("#define CONFIG_XWD_DECODER " XSTR(CONFIG_XWD_DECODER))
#endif
#ifdef CONFIG_Y41P_DECODER
 #pragma message("#define CONFIG_Y41P_DECODER " XSTR(CONFIG_Y41P_DECODER))
#endif
#ifdef CONFIG_YLC_DECODER
 #pragma message("#define CONFIG_YLC_DECODER " XSTR(CONFIG_YLC_DECODER))
#endif
#ifdef CONFIG_YOP_DECODER
 #pragma message("#define CONFIG_YOP_DECODER " XSTR(CONFIG_YOP_DECODER))
#endif
#ifdef CONFIG_YUV4_DECODER
 #pragma message("#define CONFIG_YUV4_DECODER " XSTR(CONFIG_YUV4_DECODER))
#endif
#ifdef CONFIG_ZERO12V_DECODER
 #pragma message("#define CONFIG_ZERO12V_DECODER " XSTR(CONFIG_ZERO12V_DECODER))
#endif
#ifdef CONFIG_ZEROCODEC_DECODER
 #pragma message("#define CONFIG_ZEROCODEC_DECODER " XSTR(CONFIG_ZEROCODEC_DECODER))
#endif
#ifdef CONFIG_ZLIB_DECODER
 #pragma message("#define CONFIG_ZLIB_DECODER " XSTR(CONFIG_ZLIB_DECODER))
#endif
#ifdef CONFIG_ZMBV_DECODER
 #pragma message("#define CONFIG_ZMBV_DECODER " XSTR(CONFIG_ZMBV_DECODER))
#endif
#ifdef CONFIG_AAC_DECODER
 #pragma message("#define CONFIG_AAC_DECODER " XSTR(CONFIG_AAC_DECODER))
#endif
#ifdef CONFIG_AAC_FIXED_DECODER
 #pragma message("#define CONFIG_AAC_FIXED_DECODER " XSTR(CONFIG_AAC_FIXED_DECODER))
#endif
#ifdef CONFIG_AAC_LATM_DECODER
 #pragma message("#define CONFIG_AAC_LATM_DECODER " XSTR(CONFIG_AAC_LATM_DECODER))
#endif
#ifdef CONFIG_AC3_DECODER
 #pragma message("#define CONFIG_AC3_DECODER " XSTR(CONFIG_AC3_DECODER))
#endif
#ifdef CONFIG_AC3_FIXED_DECODER
 #pragma message("#define CONFIG_AC3_FIXED_DECODER " XSTR(CONFIG_AC3_FIXED_DECODER))
#endif
#ifdef CONFIG_ACELP_KELVIN_DECODER
 #pragma message("#define CONFIG_ACELP_KELVIN_DECODER " XSTR(CONFIG_ACELP_KELVIN_DECODER))
#endif
#ifdef CONFIG_ALAC_DECODER
 #pragma message("#define CONFIG_ALAC_DECODER " XSTR(CONFIG_ALAC_DECODER))
#endif
#ifdef CONFIG_ALS_DECODER
 #pragma message("#define CONFIG_ALS_DECODER " XSTR(CONFIG_ALS_DECODER))
#endif
#ifdef CONFIG_AMRNB_DECODER
 #pragma message("#define CONFIG_AMRNB_DECODER " XSTR(CONFIG_AMRNB_DECODER))
#endif
#ifdef CONFIG_AMRWB_DECODER
 #pragma message("#define CONFIG_AMRWB_DECODER " XSTR(CONFIG_AMRWB_DECODER))
#endif
#ifdef CONFIG_APAC_DECODER
 #pragma message("#define CONFIG_APAC_DECODER " XSTR(CONFIG_APAC_DECODER))
#endif
#ifdef CONFIG_APE_DECODER
 #pragma message("#define CONFIG_APE_DECODER " XSTR(CONFIG_APE_DECODER))
#endif
#ifdef CONFIG_APTX_DECODER
 #pragma message("#define CONFIG_APTX_DECODER " XSTR(CONFIG_APTX_DECODER))
#endif
#ifdef CONFIG_APTX_HD_DECODER
 #pragma message("#define CONFIG_APTX_HD_DECODER " XSTR(CONFIG_APTX_HD_DECODER))
#endif
#ifdef CONFIG_ATRAC1_DECODER
 #pragma message("#define CONFIG_ATRAC1_DECODER " XSTR(CONFIG_ATRAC1_DECODER))
#endif
#ifdef CONFIG_ATRAC3_DECODER
 #pragma message("#define CONFIG_ATRAC3_DECODER " XSTR(CONFIG_ATRAC3_DECODER))
#endif
#ifdef CONFIG_ATRAC3AL_DECODER
 #pragma message("#define CONFIG_ATRAC3AL_DECODER " XSTR(CONFIG_ATRAC3AL_DECODER))
#endif
#ifdef CONFIG_ATRAC3P_DECODER
 #pragma message("#define CONFIG_ATRAC3P_DECODER " XSTR(CONFIG_ATRAC3P_DECODER))
#endif
#ifdef CONFIG_ATRAC3PAL_DECODER
 #pragma message("#define CONFIG_ATRAC3PAL_DECODER " XSTR(CONFIG_ATRAC3PAL_DECODER))
#endif
#ifdef CONFIG_ATRAC9_DECODER
 #pragma message("#define CONFIG_ATRAC9_DECODER " XSTR(CONFIG_ATRAC9_DECODER))
#endif
#ifdef CONFIG_BINKAUDIO_DCT_DECODER
 #pragma message("#define CONFIG_BINKAUDIO_DCT_DECODER " XSTR(CONFIG_BINKAUDIO_DCT_DECODER))
#endif
#ifdef CONFIG_BINKAUDIO_RDFT_DECODER
 #pragma message("#define CONFIG_BINKAUDIO_RDFT_DECODER " XSTR(CONFIG_BINKAUDIO_RDFT_DECODER))
#endif
#ifdef CONFIG_BMV_AUDIO_DECODER
 #pragma message("#define CONFIG_BMV_AUDIO_DECODER " XSTR(CONFIG_BMV_AUDIO_DECODER))
#endif
#ifdef CONFIG_BONK_DECODER
 #pragma message("#define CONFIG_BONK_DECODER " XSTR(CONFIG_BONK_DECODER))
#endif
#ifdef CONFIG_COOK_DECODER
 #pragma message("#define CONFIG_COOK_DECODER " XSTR(CONFIG_COOK_DECODER))
#endif
#ifdef CONFIG_DCA_DECODER
 #pragma message("#define CONFIG_DCA_DECODER " XSTR(CONFIG_DCA_DECODER))
#endif
#ifdef CONFIG_DFPWM_DECODER
 #pragma message("#define CONFIG_DFPWM_DECODER " XSTR(CONFIG_DFPWM_DECODER))
#endif
#ifdef CONFIG_DOLBY_E_DECODER
 #pragma message("#define CONFIG_DOLBY_E_DECODER " XSTR(CONFIG_DOLBY_E_DECODER))
#endif
#ifdef CONFIG_DSD_LSBF_DECODER
 #pragma message("#define CONFIG_DSD_LSBF_DECODER " XSTR(CONFIG_DSD_LSBF_DECODER))
#endif
#ifdef CONFIG_DSD_MSBF_DECODER
 #pragma message("#define CONFIG_DSD_MSBF_DECODER " XSTR(CONFIG_DSD_MSBF_DECODER))
#endif
#ifdef CONFIG_DSD_LSBF_PLANAR_DECODER
 #pragma message("#define CONFIG_DSD_LSBF_PLANAR_DECODER " XSTR(CONFIG_DSD_LSBF_PLANAR_DECODER))
#endif
#ifdef CONFIG_DSD_MSBF_PLANAR_DECODER
 #pragma message("#define CONFIG_DSD_MSBF_PLANAR_DECODER " XSTR(CONFIG_DSD_MSBF_PLANAR_DECODER))
#endif
#ifdef CONFIG_DSICINAUDIO_DECODER
 #pragma message("#define CONFIG_DSICINAUDIO_DECODER " XSTR(CONFIG_DSICINAUDIO_DECODER))
#endif
#ifdef CONFIG_DSS_SP_DECODER
 #pragma message("#define CONFIG_DSS_SP_DECODER " XSTR(CONFIG_DSS_SP_DECODER))
#endif
#ifdef CONFIG_DST_DECODER
 #pragma message("#define CONFIG_DST_DECODER " XSTR(CONFIG_DST_DECODER))
#endif
#ifdef CONFIG_EAC3_DECODER
 #pragma message("#define CONFIG_EAC3_DECODER " XSTR(CONFIG_EAC3_DECODER))
#endif
#ifdef CONFIG_EVRC_DECODER
 #pragma message("#define CONFIG_EVRC_DECODER " XSTR(CONFIG_EVRC_DECODER))
#endif
#ifdef CONFIG_FASTAUDIO_DECODER
 #pragma message("#define CONFIG_FASTAUDIO_DECODER " XSTR(CONFIG_FASTAUDIO_DECODER))
#endif
#ifdef CONFIG_FFWAVESYNTH_DECODER
 #pragma message("#define CONFIG_FFWAVESYNTH_DECODER " XSTR(CONFIG_FFWAVESYNTH_DECODER))
#endif
#ifdef CONFIG_FLAC_DECODER
 #pragma message("#define CONFIG_FLAC_DECODER " XSTR(CONFIG_FLAC_DECODER))
#endif
#ifdef CONFIG_FTR_DECODER
 #pragma message("#define CONFIG_FTR_DECODER " XSTR(CONFIG_FTR_DECODER))
#endif
#ifdef CONFIG_G723_1_DECODER
 #pragma message("#define CONFIG_G723_1_DECODER " XSTR(CONFIG_G723_1_DECODER))
#endif
#ifdef CONFIG_G729_DECODER
 #pragma message("#define CONFIG_G729_DECODER " XSTR(CONFIG_G729_DECODER))
#endif
#ifdef CONFIG_GSM_DECODER
 #pragma message("#define CONFIG_GSM_DECODER " XSTR(CONFIG_GSM_DECODER))
#endif
#ifdef CONFIG_GSM_MS_DECODER
 #pragma message("#define CONFIG_GSM_MS_DECODER " XSTR(CONFIG_GSM_MS_DECODER))
#endif
#ifdef CONFIG_HCA_DECODER
 #pragma message("#define CONFIG_HCA_DECODER " XSTR(CONFIG_HCA_DECODER))
#endif
#ifdef CONFIG_HCOM_DECODER
 #pragma message("#define CONFIG_HCOM_DECODER " XSTR(CONFIG_HCOM_DECODER))
#endif
#ifdef CONFIG_HDR_DECODER
 #pragma message("#define CONFIG_HDR_DECODER " XSTR(CONFIG_HDR_DECODER))
#endif
#ifdef CONFIG_IAC_DECODER
 #pragma message("#define CONFIG_IAC_DECODER " XSTR(CONFIG_IAC_DECODER))
#endif
#ifdef CONFIG_ILBC_DECODER
 #pragma message("#define CONFIG_ILBC_DECODER " XSTR(CONFIG_ILBC_DECODER))
#endif
#ifdef CONFIG_IMC_DECODER
 #pragma message("#define CONFIG_IMC_DECODER " XSTR(CONFIG_IMC_DECODER))
#endif
#ifdef CONFIG_INTERPLAY_ACM_DECODER
 #pragma message("#define CONFIG_INTERPLAY_ACM_DECODER " XSTR(CONFIG_INTERPLAY_ACM_DECODER))
#endif
#ifdef CONFIG_MACE3_DECODER
 #pragma message("#define CONFIG_MACE3_DECODER " XSTR(CONFIG_MACE3_DECODER))
#endif
#ifdef CONFIG_MACE6_DECODER
 #pragma message("#define CONFIG_MACE6_DECODER " XSTR(CONFIG_MACE6_DECODER))
#endif
#ifdef CONFIG_METASOUND_DECODER
 #pragma message("#define CONFIG_METASOUND_DECODER " XSTR(CONFIG_METASOUND_DECODER))
#endif
#ifdef CONFIG_MISC4_DECODER
 #pragma message("#define CONFIG_MISC4_DECODER " XSTR(CONFIG_MISC4_DECODER))
#endif
#ifdef CONFIG_MLP_DECODER
 #pragma message("#define CONFIG_MLP_DECODER " XSTR(CONFIG_MLP_DECODER))
#endif
#ifdef CONFIG_MP1_DECODER
 #pragma message("#define CONFIG_MP1_DECODER " XSTR(CONFIG_MP1_DECODER))
#endif
#ifdef CONFIG_MP1FLOAT_DECODER
 #pragma message("#define CONFIG_MP1FLOAT_DECODER " XSTR(CONFIG_MP1FLOAT_DECODER))
#endif
#ifdef CONFIG_MP2_DECODER
 #pragma message("#define CONFIG_MP2_DECODER " XSTR(CONFIG_MP2_DECODER))
#endif
#ifdef CONFIG_MP2FLOAT_DECODER
 #pragma message("#define CONFIG_MP2FLOAT_DECODER " XSTR(CONFIG_MP2FLOAT_DECODER))
#endif
#ifdef CONFIG_MP3FLOAT_DECODER
 #pragma message("#define CONFIG_MP3FLOAT_DECODER " XSTR(CONFIG_MP3FLOAT_DECODER))
#endif
#ifdef CONFIG_MP3_DECODER
 #pragma message("#define CONFIG_MP3_DECODER " XSTR(CONFIG_MP3_DECODER))
#endif
#ifdef CONFIG_MP3ADUFLOAT_DECODER
 #pragma message("#define CONFIG_MP3ADUFLOAT_DECODER " XSTR(CONFIG_MP3ADUFLOAT_DECODER))
#endif
#ifdef CONFIG_MP3ADU_DECODER
 #pragma message("#define CONFIG_MP3ADU_DECODER " XSTR(CONFIG_MP3ADU_DECODER))
#endif
#ifdef CONFIG_MP3ON4FLOAT_DECODER
 #pragma message("#define CONFIG_MP3ON4FLOAT_DECODER " XSTR(CONFIG_MP3ON4FLOAT_DECODER))
#endif
#ifdef CONFIG_MP3ON4_DECODER
 #pragma message("#define CONFIG_MP3ON4_DECODER " XSTR(CONFIG_MP3ON4_DECODER))
#endif
#ifdef CONFIG_MPC7_DECODER
 #pragma message("#define CONFIG_MPC7_DECODER " XSTR(CONFIG_MPC7_DECODER))
#endif
#ifdef CONFIG_MPC8_DECODER
 #pragma message("#define CONFIG_MPC8_DECODER " XSTR(CONFIG_MPC8_DECODER))
#endif
#ifdef CONFIG_MSNSIREN_DECODER
 #pragma message("#define CONFIG_MSNSIREN_DECODER " XSTR(CONFIG_MSNSIREN_DECODER))
#endif
#ifdef CONFIG_NELLYMOSER_DECODER
 #pragma message("#define CONFIG_NELLYMOSER_DECODER " XSTR(CONFIG_NELLYMOSER_DECODER))
#endif
#ifdef CONFIG_ON2AVC_DECODER
 #pragma message("#define CONFIG_ON2AVC_DECODER " XSTR(CONFIG_ON2AVC_DECODER))
#endif
#ifdef CONFIG_OPUS_DECODER
 #pragma message("#define CONFIG_OPUS_DECODER " XSTR(CONFIG_OPUS_DECODER))
#endif
#ifdef CONFIG_OSQ_DECODER
 #pragma message("#define CONFIG_OSQ_DECODER " XSTR(CONFIG_OSQ_DECODER))
#endif
#ifdef CONFIG_PAF_AUDIO_DECODER
 #pragma message("#define CONFIG_PAF_AUDIO_DECODER " XSTR(CONFIG_PAF_AUDIO_DECODER))
#endif
#ifdef CONFIG_QCELP_DECODER
 #pragma message("#define CONFIG_QCELP_DECODER " XSTR(CONFIG_QCELP_DECODER))
#endif
#ifdef CONFIG_QDM2_DECODER
 #pragma message("#define CONFIG_QDM2_DECODER " XSTR(CONFIG_QDM2_DECODER))
#endif
#ifdef CONFIG_QDMC_DECODER
 #pragma message("#define CONFIG_QDMC_DECODER " XSTR(CONFIG_QDMC_DECODER))
#endif
#ifdef CONFIG_QOA_DECODER
 #pragma message("#define CONFIG_QOA_DECODER " XSTR(CONFIG_QOA_DECODER))
#endif
#ifdef CONFIG_RA_144_DECODER
 #pragma message("#define CONFIG_RA_144_DECODER " XSTR(CONFIG_RA_144_DECODER))
#endif
#ifdef CONFIG_RA_288_DECODER
 #pragma message("#define CONFIG_RA_288_DECODER " XSTR(CONFIG_RA_288_DECODER))
#endif
#ifdef CONFIG_RALF_DECODER
 #pragma message("#define CONFIG_RALF_DECODER " XSTR(CONFIG_RALF_DECODER))
#endif
#ifdef CONFIG_SBC_DECODER
 #pragma message("#define CONFIG_SBC_DECODER " XSTR(CONFIG_SBC_DECODER))
#endif
#ifdef CONFIG_SHORTEN_DECODER
 #pragma message("#define CONFIG_SHORTEN_DECODER " XSTR(CONFIG_SHORTEN_DECODER))
#endif
#ifdef CONFIG_SIPR_DECODER
 #pragma message("#define CONFIG_SIPR_DECODER " XSTR(CONFIG_SIPR_DECODER))
#endif
#ifdef CONFIG_SIREN_DECODER
 #pragma message("#define CONFIG_SIREN_DECODER " XSTR(CONFIG_SIREN_DECODER))
#endif
#ifdef CONFIG_SMACKAUD_DECODER
 #pragma message("#define CONFIG_SMACKAUD_DECODER " XSTR(CONFIG_SMACKAUD_DECODER))
#endif
#ifdef CONFIG_SONIC_DECODER
 #pragma message("#define CONFIG_SONIC_DECODER " XSTR(CONFIG_SONIC_DECODER))
#endif
#ifdef CONFIG_TAK_DECODER
 #pragma message("#define CONFIG_TAK_DECODER " XSTR(CONFIG_TAK_DECODER))
#endif
#ifdef CONFIG_TRUEHD_DECODER
 #pragma message("#define CONFIG_TRUEHD_DECODER " XSTR(CONFIG_TRUEHD_DECODER))
#endif
#ifdef CONFIG_TRUESPEECH_DECODER
 #pragma message("#define CONFIG_TRUESPEECH_DECODER " XSTR(CONFIG_TRUESPEECH_DECODER))
#endif
#ifdef CONFIG_TTA_DECODER
 #pragma message("#define CONFIG_TTA_DECODER " XSTR(CONFIG_TTA_DECODER))
#endif
#ifdef CONFIG_TWINVQ_DECODER
 #pragma message("#define CONFIG_TWINVQ_DECODER " XSTR(CONFIG_TWINVQ_DECODER))
#endif
#ifdef CONFIG_VMDAUDIO_DECODER
 #pragma message("#define CONFIG_VMDAUDIO_DECODER " XSTR(CONFIG_VMDAUDIO_DECODER))
#endif
#ifdef CONFIG_VORBIS_DECODER
 #pragma message("#define CONFIG_VORBIS_DECODER " XSTR(CONFIG_VORBIS_DECODER))
#endif
#ifdef CONFIG_WAVARC_DECODER
 #pragma message("#define CONFIG_WAVARC_DECODER " XSTR(CONFIG_WAVARC_DECODER))
#endif
#ifdef CONFIG_WAVPACK_DECODER
 #pragma message("#define CONFIG_WAVPACK_DECODER " XSTR(CONFIG_WAVPACK_DECODER))
#endif
#ifdef CONFIG_WMALOSSLESS_DECODER
 #pragma message("#define CONFIG_WMALOSSLESS_DECODER " XSTR(CONFIG_WMALOSSLESS_DECODER))
#endif
#ifdef CONFIG_WMAPRO_DECODER
 #pragma message("#define CONFIG_WMAPRO_DECODER " XSTR(CONFIG_WMAPRO_DECODER))
#endif
#ifdef CONFIG_WMAV1_DECODER
 #pragma message("#define CONFIG_WMAV1_DECODER " XSTR(CONFIG_WMAV1_DECODER))
#endif
#ifdef CONFIG_WMAV2_DECODER
 #pragma message("#define CONFIG_WMAV2_DECODER " XSTR(CONFIG_WMAV2_DECODER))
#endif
#ifdef CONFIG_WMAVOICE_DECODER
 #pragma message("#define CONFIG_WMAVOICE_DECODER " XSTR(CONFIG_WMAVOICE_DECODER))
#endif
#ifdef CONFIG_WS_SND1_DECODER
 #pragma message("#define CONFIG_WS_SND1_DECODER " XSTR(CONFIG_WS_SND1_DECODER))
#endif
#ifdef CONFIG_XMA1_DECODER
 #pragma message("#define CONFIG_XMA1_DECODER " XSTR(CONFIG_XMA1_DECODER))
#endif
#ifdef CONFIG_XMA2_DECODER
 #pragma message("#define CONFIG_XMA2_DECODER " XSTR(CONFIG_XMA2_DECODER))
#endif
#ifdef CONFIG_PCM_ALAW_DECODER
 #pragma message("#define CONFIG_PCM_ALAW_DECODER " XSTR(CONFIG_PCM_ALAW_DECODER))
#endif
#ifdef CONFIG_PCM_BLURAY_DECODER
 #pragma message("#define CONFIG_PCM_BLURAY_DECODER " XSTR(CONFIG_PCM_BLURAY_DECODER))
#endif
#ifdef CONFIG_PCM_DVD_DECODER
 #pragma message("#define CONFIG_PCM_DVD_DECODER " XSTR(CONFIG_PCM_DVD_DECODER))
#endif
#ifdef CONFIG_PCM_F16LE_DECODER
 #pragma message("#define CONFIG_PCM_F16LE_DECODER " XSTR(CONFIG_PCM_F16LE_DECODER))
#endif
#ifdef CONFIG_PCM_F24LE_DECODER
 #pragma message("#define CONFIG_PCM_F24LE_DECODER " XSTR(CONFIG_PCM_F24LE_DECODER))
#endif
#ifdef CONFIG_PCM_F32BE_DECODER
 #pragma message("#define CONFIG_PCM_F32BE_DECODER " XSTR(CONFIG_PCM_F32BE_DECODER))
#endif
#ifdef CONFIG_PCM_F32LE_DECODER
 #pragma message("#define CONFIG_PCM_F32LE_DECODER " XSTR(CONFIG_PCM_F32LE_DECODER))
#endif
#ifdef CONFIG_PCM_F64BE_DECODER
 #pragma message("#define CONFIG_PCM_F64BE_DECODER " XSTR(CONFIG_PCM_F64BE_DECODER))
#endif
#ifdef CONFIG_PCM_F64LE_DECODER
 #pragma message("#define CONFIG_PCM_F64LE_DECODER " XSTR(CONFIG_PCM_F64LE_DECODER))
#endif
#ifdef CONFIG_PCM_LXF_DECODER
 #pragma message("#define CONFIG_PCM_LXF_DECODER " XSTR(CONFIG_PCM_LXF_DECODER))
#endif
#ifdef CONFIG_PCM_MULAW_DECODER
 #pragma message("#define CONFIG_PCM_MULAW_DECODER " XSTR(CONFIG_PCM_MULAW_DECODER))
#endif
#ifdef CONFIG_PCM_S8_DECODER
 #pragma message("#define CONFIG_PCM_S8_DECODER " XSTR(CONFIG_PCM_S8_DECODER))
#endif
#ifdef CONFIG_PCM_S8_PLANAR_DECODER
 #pragma message("#define CONFIG_PCM_S8_PLANAR_DECODER " XSTR(CONFIG_PCM_S8_PLANAR_DECODER))
#endif
#ifdef CONFIG_PCM_S16BE_DECODER
 #pragma message("#define CONFIG_PCM_S16BE_DECODER " XSTR(CONFIG_PCM_S16BE_DECODER))
#endif
#ifdef CONFIG_PCM_S16BE_PLANAR_DECODER
 #pragma message("#define CONFIG_PCM_S16BE_PLANAR_DECODER " XSTR(CONFIG_PCM_S16BE_PLANAR_DECODER))
#endif
#ifdef CONFIG_PCM_S16LE_DECODER
 #pragma message("#define CONFIG_PCM_S16LE_DECODER " XSTR(CONFIG_PCM_S16LE_DECODER))
#endif
#ifdef CONFIG_PCM_S16LE_PLANAR_DECODER
 #pragma message("#define CONFIG_PCM_S16LE_PLANAR_DECODER " XSTR(CONFIG_PCM_S16LE_PLANAR_DECODER))
#endif
#ifdef CONFIG_PCM_S24BE_DECODER
 #pragma message("#define CONFIG_PCM_S24BE_DECODER " XSTR(CONFIG_PCM_S24BE_DECODER))
#endif
#ifdef CONFIG_PCM_S24DAUD_DECODER
 #pragma message("#define CONFIG_PCM_S24DAUD_DECODER " XSTR(CONFIG_PCM_S24DAUD_DECODER))
#endif
#ifdef CONFIG_PCM_S24LE_DECODER
 #pragma message("#define CONFIG_PCM_S24LE_DECODER " XSTR(CONFIG_PCM_S24LE_DECODER))
#endif
#ifdef CONFIG_PCM_S24LE_PLANAR_DECODER
 #pragma message("#define CONFIG_PCM_S24LE_PLANAR_DECODER " XSTR(CONFIG_PCM_S24LE_PLANAR_DECODER))
#endif
#ifdef CONFIG_PCM_S32BE_DECODER
 #pragma message("#define CONFIG_PCM_S32BE_DECODER " XSTR(CONFIG_PCM_S32BE_DECODER))
#endif
#ifdef CONFIG_PCM_S32LE_DECODER
 #pragma message("#define CONFIG_PCM_S32LE_DECODER " XSTR(CONFIG_PCM_S32LE_DECODER))
#endif
#ifdef CONFIG_PCM_S32LE_PLANAR_DECODER
 #pragma message("#define CONFIG_PCM_S32LE_PLANAR_DECODER " XSTR(CONFIG_PCM_S32LE_PLANAR_DECODER))
#endif
#ifdef CONFIG_PCM_S64BE_DECODER
 #pragma message("#define CONFIG_PCM_S64BE_DECODER " XSTR(CONFIG_PCM_S64BE_DECODER))
#endif
#ifdef CONFIG_PCM_S64LE_DECODER
 #pragma message("#define CONFIG_PCM_S64LE_DECODER " XSTR(CONFIG_PCM_S64LE_DECODER))
#endif
#ifdef CONFIG_PCM_SGA_DECODER
 #pragma message("#define CONFIG_PCM_SGA_DECODER " XSTR(CONFIG_PCM_SGA_DECODER))
#endif
#ifdef CONFIG_PCM_U8_DECODER
 #pragma message("#define CONFIG_PCM_U8_DECODER " XSTR(CONFIG_PCM_U8_DECODER))
#endif
#ifdef CONFIG_PCM_U16BE_DECODER
 #pragma message("#define CONFIG_PCM_U16BE_DECODER " XSTR(CONFIG_PCM_U16BE_DECODER))
#endif
#ifdef CONFIG_PCM_U16LE_DECODER
 #pragma message("#define CONFIG_PCM_U16LE_DECODER " XSTR(CONFIG_PCM_U16LE_DECODER))
#endif
#ifdef CONFIG_PCM_U24BE_DECODER
 #pragma message("#define CONFIG_PCM_U24BE_DECODER " XSTR(CONFIG_PCM_U24BE_DECODER))
#endif
#ifdef CONFIG_PCM_U24LE_DECODER
 #pragma message("#define CONFIG_PCM_U24LE_DECODER " XSTR(CONFIG_PCM_U24LE_DECODER))
#endif
#ifdef CONFIG_PCM_U32BE_DECODER
 #pragma message("#define CONFIG_PCM_U32BE_DECODER " XSTR(CONFIG_PCM_U32BE_DECODER))
#endif
#ifdef CONFIG_PCM_U32LE_DECODER
 #pragma message("#define CONFIG_PCM_U32LE_DECODER " XSTR(CONFIG_PCM_U32LE_DECODER))
#endif
#ifdef CONFIG_PCM_VIDC_DECODER
 #pragma message("#define CONFIG_PCM_VIDC_DECODER " XSTR(CONFIG_PCM_VIDC_DECODER))
#endif
#ifdef CONFIG_CBD2_DPCM_DECODER
 #pragma message("#define CONFIG_CBD2_DPCM_DECODER " XSTR(CONFIG_CBD2_DPCM_DECODER))
#endif
#ifdef CONFIG_DERF_DPCM_DECODER
 #pragma message("#define CONFIG_DERF_DPCM_DECODER " XSTR(CONFIG_DERF_DPCM_DECODER))
#endif
#ifdef CONFIG_GREMLIN_DPCM_DECODER
 #pragma message("#define CONFIG_GREMLIN_DPCM_DECODER " XSTR(CONFIG_GREMLIN_DPCM_DECODER))
#endif
#ifdef CONFIG_INTERPLAY_DPCM_DECODER
 #pragma message("#define CONFIG_INTERPLAY_DPCM_DECODER " XSTR(CONFIG_INTERPLAY_DPCM_DECODER))
#endif
#ifdef CONFIG_ROQ_DPCM_DECODER
 #pragma message("#define CONFIG_ROQ_DPCM_DECODER " XSTR(CONFIG_ROQ_DPCM_DECODER))
#endif
#ifdef CONFIG_SDX2_DPCM_DECODER
 #pragma message("#define CONFIG_SDX2_DPCM_DECODER " XSTR(CONFIG_SDX2_DPCM_DECODER))
#endif
#ifdef CONFIG_SOL_DPCM_DECODER
 #pragma message("#define CONFIG_SOL_DPCM_DECODER " XSTR(CONFIG_SOL_DPCM_DECODER))
#endif
#ifdef CONFIG_XAN_DPCM_DECODER
 #pragma message("#define CONFIG_XAN_DPCM_DECODER " XSTR(CONFIG_XAN_DPCM_DECODER))
#endif
#ifdef CONFIG_WADY_DPCM_DECODER
 #pragma message("#define CONFIG_WADY_DPCM_DECODER " XSTR(CONFIG_WADY_DPCM_DECODER))
#endif
#ifdef CONFIG_ADPCM_4XM_DECODER
 #pragma message("#define CONFIG_ADPCM_4XM_DECODER " XSTR(CONFIG_ADPCM_4XM_DECODER))
#endif
#ifdef CONFIG_ADPCM_ADX_DECODER
 #pragma message("#define CONFIG_ADPCM_ADX_DECODER " XSTR(CONFIG_ADPCM_ADX_DECODER))
#endif
#ifdef CONFIG_ADPCM_AFC_DECODER
 #pragma message("#define CONFIG_ADPCM_AFC_DECODER " XSTR(CONFIG_ADPCM_AFC_DECODER))
#endif
#ifdef CONFIG_ADPCM_AGM_DECODER
 #pragma message("#define CONFIG_ADPCM_AGM_DECODER " XSTR(CONFIG_ADPCM_AGM_DECODER))
#endif
#ifdef CONFIG_ADPCM_AICA_DECODER
 #pragma message("#define CONFIG_ADPCM_AICA_DECODER " XSTR(CONFIG_ADPCM_AICA_DECODER))
#endif
#ifdef CONFIG_ADPCM_ARGO_DECODER
 #pragma message("#define CONFIG_ADPCM_ARGO_DECODER " XSTR(CONFIG_ADPCM_ARGO_DECODER))
#endif
#ifdef CONFIG_ADPCM_CT_DECODER
 #pragma message("#define CONFIG_ADPCM_CT_DECODER " XSTR(CONFIG_ADPCM_CT_DECODER))
#endif
#ifdef CONFIG_ADPCM_DTK_DECODER
 #pragma message("#define CONFIG_ADPCM_DTK_DECODER " XSTR(CONFIG_ADPCM_DTK_DECODER))
#endif
#ifdef CONFIG_ADPCM_EA_DECODER
 #pragma message("#define CONFIG_ADPCM_EA_DECODER " XSTR(CONFIG_ADPCM_EA_DECODER))
#endif
#ifdef CONFIG_ADPCM_EA_MAXIS_XA_DECODER
 #pragma message("#define CONFIG_ADPCM_EA_MAXIS_XA_DECODER " XSTR(CONFIG_ADPCM_EA_MAXIS_XA_DECODER))
#endif
#ifdef CONFIG_ADPCM_EA_R1_DECODER
 #pragma message("#define CONFIG_ADPCM_EA_R1_DECODER " XSTR(CONFIG_ADPCM_EA_R1_DECODER))
#endif
#ifdef CONFIG_ADPCM_EA_R2_DECODER
 #pragma message("#define CONFIG_ADPCM_EA_R2_DECODER " XSTR(CONFIG_ADPCM_EA_R2_DECODER))
#endif
#ifdef CONFIG_ADPCM_EA_R3_DECODER
 #pragma message("#define CONFIG_ADPCM_EA_R3_DECODER " XSTR(CONFIG_ADPCM_EA_R3_DECODER))
#endif
#ifdef CONFIG_ADPCM_EA_XAS_DECODER
 #pragma message("#define CONFIG_ADPCM_EA_XAS_DECODER " XSTR(CONFIG_ADPCM_EA_XAS_DECODER))
#endif
#ifdef CONFIG_ADPCM_G722_DECODER
 #pragma message("#define CONFIG_ADPCM_G722_DECODER " XSTR(CONFIG_ADPCM_G722_DECODER))
#endif
#ifdef CONFIG_ADPCM_G726_DECODER
 #pragma message("#define CONFIG_ADPCM_G726_DECODER " XSTR(CONFIG_ADPCM_G726_DECODER))
#endif
#ifdef CONFIG_ADPCM_G726LE_DECODER
 #pragma message("#define CONFIG_ADPCM_G726LE_DECODER " XSTR(CONFIG_ADPCM_G726LE_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_ACORN_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_ACORN_DECODER " XSTR(CONFIG_ADPCM_IMA_ACORN_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_AMV_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_AMV_DECODER " XSTR(CONFIG_ADPCM_IMA_AMV_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_ALP_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_ALP_DECODER " XSTR(CONFIG_ADPCM_IMA_ALP_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_APC_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_APC_DECODER " XSTR(CONFIG_ADPCM_IMA_APC_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_APM_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_APM_DECODER " XSTR(CONFIG_ADPCM_IMA_APM_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_CUNNING_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_CUNNING_DECODER " XSTR(CONFIG_ADPCM_IMA_CUNNING_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_DAT4_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_DAT4_DECODER " XSTR(CONFIG_ADPCM_IMA_DAT4_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_DK3_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_DK3_DECODER " XSTR(CONFIG_ADPCM_IMA_DK3_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_DK4_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_DK4_DECODER " XSTR(CONFIG_ADPCM_IMA_DK4_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_EA_EACS_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_EA_EACS_DECODER " XSTR(CONFIG_ADPCM_IMA_EA_EACS_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_EA_SEAD_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_EA_SEAD_DECODER " XSTR(CONFIG_ADPCM_IMA_EA_SEAD_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_ISS_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_ISS_DECODER " XSTR(CONFIG_ADPCM_IMA_ISS_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_MOFLEX_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_MOFLEX_DECODER " XSTR(CONFIG_ADPCM_IMA_MOFLEX_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_MTF_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_MTF_DECODER " XSTR(CONFIG_ADPCM_IMA_MTF_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_OKI_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_OKI_DECODER " XSTR(CONFIG_ADPCM_IMA_OKI_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_QT_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_QT_DECODER " XSTR(CONFIG_ADPCM_IMA_QT_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_RAD_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_RAD_DECODER " XSTR(CONFIG_ADPCM_IMA_RAD_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_SSI_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_SSI_DECODER " XSTR(CONFIG_ADPCM_IMA_SSI_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_SMJPEG_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_SMJPEG_DECODER " XSTR(CONFIG_ADPCM_IMA_SMJPEG_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_WAV_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_WAV_DECODER " XSTR(CONFIG_ADPCM_IMA_WAV_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_WS_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_WS_DECODER " XSTR(CONFIG_ADPCM_IMA_WS_DECODER))
#endif
#ifdef CONFIG_ADPCM_MS_DECODER
 #pragma message("#define CONFIG_ADPCM_MS_DECODER " XSTR(CONFIG_ADPCM_MS_DECODER))
#endif
#ifdef CONFIG_ADPCM_MTAF_DECODER
 #pragma message("#define CONFIG_ADPCM_MTAF_DECODER " XSTR(CONFIG_ADPCM_MTAF_DECODER))
#endif
#ifdef CONFIG_ADPCM_PSX_DECODER
 #pragma message("#define CONFIG_ADPCM_PSX_DECODER " XSTR(CONFIG_ADPCM_PSX_DECODER))
#endif
#ifdef CONFIG_ADPCM_SBPRO_2_DECODER
 #pragma message("#define CONFIG_ADPCM_SBPRO_2_DECODER " XSTR(CONFIG_ADPCM_SBPRO_2_DECODER))
#endif
#ifdef CONFIG_ADPCM_SBPRO_3_DECODER
 #pragma message("#define CONFIG_ADPCM_SBPRO_3_DECODER " XSTR(CONFIG_ADPCM_SBPRO_3_DECODER))
#endif
#ifdef CONFIG_ADPCM_SBPRO_4_DECODER
 #pragma message("#define CONFIG_ADPCM_SBPRO_4_DECODER " XSTR(CONFIG_ADPCM_SBPRO_4_DECODER))
#endif
#ifdef CONFIG_ADPCM_SWF_DECODER
 #pragma message("#define CONFIG_ADPCM_SWF_DECODER " XSTR(CONFIG_ADPCM_SWF_DECODER))
#endif
#ifdef CONFIG_ADPCM_THP_DECODER
 #pragma message("#define CONFIG_ADPCM_THP_DECODER " XSTR(CONFIG_ADPCM_THP_DECODER))
#endif
#ifdef CONFIG_ADPCM_THP_LE_DECODER
 #pragma message("#define CONFIG_ADPCM_THP_LE_DECODER " XSTR(CONFIG_ADPCM_THP_LE_DECODER))
#endif
#ifdef CONFIG_ADPCM_VIMA_DECODER
 #pragma message("#define CONFIG_ADPCM_VIMA_DECODER " XSTR(CONFIG_ADPCM_VIMA_DECODER))
#endif
#ifdef CONFIG_ADPCM_XA_DECODER
 #pragma message("#define CONFIG_ADPCM_XA_DECODER " XSTR(CONFIG_ADPCM_XA_DECODER))
#endif
#ifdef CONFIG_ADPCM_XMD_DECODER
 #pragma message("#define CONFIG_ADPCM_XMD_DECODER " XSTR(CONFIG_ADPCM_XMD_DECODER))
#endif
#ifdef CONFIG_ADPCM_YAMAHA_DECODER
 #pragma message("#define CONFIG_ADPCM_YAMAHA_DECODER " XSTR(CONFIG_ADPCM_YAMAHA_DECODER))
#endif
#ifdef CONFIG_ADPCM_ZORK_DECODER
 #pragma message("#define CONFIG_ADPCM_ZORK_DECODER " XSTR(CONFIG_ADPCM_ZORK_DECODER))
#endif
#ifdef CONFIG_SSA_DECODER
 #pragma message("#define CONFIG_SSA_DECODER " XSTR(CONFIG_SSA_DECODER))
#endif
#ifdef CONFIG_ASS_DECODER
 #pragma message("#define CONFIG_ASS_DECODER " XSTR(CONFIG_ASS_DECODER))
#endif
#ifdef CONFIG_CCAPTION_DECODER
 #pragma message("#define CONFIG_CCAPTION_DECODER " XSTR(CONFIG_CCAPTION_DECODER))
#endif
#ifdef CONFIG_DVBSUB_DECODER
 #pragma message("#define CONFIG_DVBSUB_DECODER " XSTR(CONFIG_DVBSUB_DECODER))
#endif
#ifdef CONFIG_DVDSUB_DECODER
 #pragma message("#define CONFIG_DVDSUB_DECODER " XSTR(CONFIG_DVDSUB_DECODER))
#endif
#ifdef CONFIG_JACOSUB_DECODER
 #pragma message("#define CONFIG_JACOSUB_DECODER " XSTR(CONFIG_JACOSUB_DECODER))
#endif
#ifdef CONFIG_MICRODVD_DECODER
 #pragma message("#define CONFIG_MICRODVD_DECODER " XSTR(CONFIG_MICRODVD_DECODER))
#endif
#ifdef CONFIG_MOVTEXT_DECODER
 #pragma message("#define CONFIG_MOVTEXT_DECODER " XSTR(CONFIG_MOVTEXT_DECODER))
#endif
#ifdef CONFIG_MPL2_DECODER
 #pragma message("#define CONFIG_MPL2_DECODER " XSTR(CONFIG_MPL2_DECODER))
#endif
#ifdef CONFIG_PGSSUB_DECODER
 #pragma message("#define CONFIG_PGSSUB_DECODER " XSTR(CONFIG_PGSSUB_DECODER))
#endif
#ifdef CONFIG_PJS_DECODER
 #pragma message("#define CONFIG_PJS_DECODER " XSTR(CONFIG_PJS_DECODER))
#endif
#ifdef CONFIG_REALTEXT_DECODER
 #pragma message("#define CONFIG_REALTEXT_DECODER " XSTR(CONFIG_REALTEXT_DECODER))
#endif
#ifdef CONFIG_SAMI_DECODER
 #pragma message("#define CONFIG_SAMI_DECODER " XSTR(CONFIG_SAMI_DECODER))
#endif
#ifdef CONFIG_SRT_DECODER
 #pragma message("#define CONFIG_SRT_DECODER " XSTR(CONFIG_SRT_DECODER))
#endif
#ifdef CONFIG_STL_DECODER
 #pragma message("#define CONFIG_STL_DECODER " XSTR(CONFIG_STL_DECODER))
#endif
#ifdef CONFIG_SUBRIP_DECODER
 #pragma message("#define CONFIG_SUBRIP_DECODER " XSTR(CONFIG_SUBRIP_DECODER))
#endif
#ifdef CONFIG_SUBVIEWER_DECODER
 #pragma message("#define CONFIG_SUBVIEWER_DECODER " XSTR(CONFIG_SUBVIEWER_DECODER))
#endif
#ifdef CONFIG_SUBVIEWER1_DECODER
 #pragma message("#define CONFIG_SUBVIEWER1_DECODER " XSTR(CONFIG_SUBVIEWER1_DECODER))
#endif
#ifdef CONFIG_TEXT_DECODER
 #pragma message("#define CONFIG_TEXT_DECODER " XSTR(CONFIG_TEXT_DECODER))
#endif
#ifdef CONFIG_VPLAYER_DECODER
 #pragma message("#define CONFIG_VPLAYER_DECODER " XSTR(CONFIG_VPLAYER_DECODER))
#endif
#ifdef CONFIG_WEBVTT_DECODER
 #pragma message("#define CONFIG_WEBVTT_DECODER " XSTR(CONFIG_WEBVTT_DECODER))
#endif
#ifdef CONFIG_XSUB_DECODER
 #pragma message("#define CONFIG_XSUB_DECODER " XSTR(CONFIG_XSUB_DECODER))
#endif
#ifdef CONFIG_AAC_AT_DECODER
 #pragma message("#define CONFIG_AAC_AT_DECODER " XSTR(CONFIG_AAC_AT_DECODER))
#endif
#ifdef CONFIG_AC3_AT_DECODER
 #pragma message("#define CONFIG_AC3_AT_DECODER " XSTR(CONFIG_AC3_AT_DECODER))
#endif
#ifdef CONFIG_ADPCM_IMA_QT_AT_DECODER
 #pragma message("#define CONFIG_ADPCM_IMA_QT_AT_DECODER " XSTR(CONFIG_ADPCM_IMA_QT_AT_DECODER))
#endif
#ifdef CONFIG_ALAC_AT_DECODER
 #pragma message("#define CONFIG_ALAC_AT_DECODER " XSTR(CONFIG_ALAC_AT_DECODER))
#endif
#ifdef CONFIG_AMR_NB_AT_DECODER
 #pragma message("#define CONFIG_AMR_NB_AT_DECODER " XSTR(CONFIG_AMR_NB_AT_DECODER))
#endif
#ifdef CONFIG_EAC3_AT_DECODER
 #pragma message("#define CONFIG_EAC3_AT_DECODER " XSTR(CONFIG_EAC3_AT_DECODER))
#endif
#ifdef CONFIG_GSM_MS_AT_DECODER
 #pragma message("#define CONFIG_GSM_MS_AT_DECODER " XSTR(CONFIG_GSM_MS_AT_DECODER))
#endif
#ifdef CONFIG_ILBC_AT_DECODER
 #pragma message("#define CONFIG_ILBC_AT_DECODER " XSTR(CONFIG_ILBC_AT_DECODER))
#endif
#ifdef CONFIG_MP1_AT_DECODER
 #pragma message("#define CONFIG_MP1_AT_DECODER " XSTR(CONFIG_MP1_AT_DECODER))
#endif
#ifdef CONFIG_MP2_AT_DECODER
 #pragma message("#define CONFIG_MP2_AT_DECODER " XSTR(CONFIG_MP2_AT_DECODER))
#endif
#ifdef CONFIG_MP3_AT_DECODER
 #pragma message("#define CONFIG_MP3_AT_DECODER " XSTR(CONFIG_MP3_AT_DECODER))
#endif
#ifdef CONFIG_PCM_ALAW_AT_DECODER
 #pragma message("#define CONFIG_PCM_ALAW_AT_DECODER " XSTR(CONFIG_PCM_ALAW_AT_DECODER))
#endif
#ifdef CONFIG_PCM_MULAW_AT_DECODER
 #pragma message("#define CONFIG_PCM_MULAW_AT_DECODER " XSTR(CONFIG_PCM_MULAW_AT_DECODER))
#endif
#ifdef CONFIG_QDMC_AT_DECODER
 #pragma message("#define CONFIG_QDMC_AT_DECODER " XSTR(CONFIG_QDMC_AT_DECODER))
#endif
#ifdef CONFIG_QDM2_AT_DECODER
 #pragma message("#define CONFIG_QDM2_AT_DECODER " XSTR(CONFIG_QDM2_AT_DECODER))
#endif
#ifdef CONFIG_LIBARIBCAPTION_DECODER
 #pragma message("#define CONFIG_LIBARIBCAPTION_DECODER " XSTR(CONFIG_LIBARIBCAPTION_DECODER))
#endif
#ifdef CONFIG_LIBARIBB24_DECODER
 #pragma message("#define CONFIG_LIBARIBB24_DECODER " XSTR(CONFIG_LIBARIBB24_DECODER))
#endif
#ifdef CONFIG_LIBCELT_DECODER
 #pragma message("#define CONFIG_LIBCELT_DECODER " XSTR(CONFIG_LIBCELT_DECODER))
#endif
#ifdef CONFIG_LIBCODEC2_DECODER
 #pragma message("#define CONFIG_LIBCODEC2_DECODER " XSTR(CONFIG_LIBCODEC2_DECODER))
#endif
#ifdef CONFIG_LIBDAV1D_DECODER
 #pragma message("#define CONFIG_LIBDAV1D_DECODER " XSTR(CONFIG_LIBDAV1D_DECODER))
#endif
#ifdef CONFIG_LIBDAVS2_DECODER
 #pragma message("#define CONFIG_LIBDAVS2_DECODER " XSTR(CONFIG_LIBDAVS2_DECODER))
#endif
#ifdef CONFIG_LIBFDK_AAC_DECODER
 #pragma message("#define CONFIG_LIBFDK_AAC_DECODER " XSTR(CONFIG_LIBFDK_AAC_DECODER))
#endif
#ifdef CONFIG_LIBGSM_DECODER
 #pragma message("#define CONFIG_LIBGSM_DECODER " XSTR(CONFIG_LIBGSM_DECODER))
#endif
#ifdef CONFIG_LIBGSM_MS_DECODER
 #pragma message("#define CONFIG_LIBGSM_MS_DECODER " XSTR(CONFIG_LIBGSM_MS_DECODER))
#endif
#ifdef CONFIG_LIBILBC_DECODER
 #pragma message("#define CONFIG_LIBILBC_DECODER " XSTR(CONFIG_LIBILBC_DECODER))
#endif
#ifdef CONFIG_LIBJXL_DECODER
 #pragma message("#define CONFIG_LIBJXL_DECODER " XSTR(CONFIG_LIBJXL_DECODER))
#endif
#ifdef CONFIG_LIBOPENCORE_AMRNB_DECODER
 #pragma message("#define CONFIG_LIBOPENCORE_AMRNB_DECODER " XSTR(CONFIG_LIBOPENCORE_AMRNB_DECODER))
#endif
#ifdef CONFIG_LIBOPENCORE_AMRWB_DECODER
 #pragma message("#define CONFIG_LIBOPENCORE_AMRWB_DECODER " XSTR(CONFIG_LIBOPENCORE_AMRWB_DECODER))
#endif
#ifdef CONFIG_LIBOPUS_DECODER
 #pragma message("#define CONFIG_LIBOPUS_DECODER " XSTR(CONFIG_LIBOPUS_DECODER))
#endif
#ifdef CONFIG_LIBRSVG_DECODER
 #pragma message("#define CONFIG_LIBRSVG_DECODER " XSTR(CONFIG_LIBRSVG_DECODER))
#endif
#ifdef CONFIG_LIBSPEEX_DECODER
 #pragma message("#define CONFIG_LIBSPEEX_DECODER " XSTR(CONFIG_LIBSPEEX_DECODER))
#endif
#ifdef CONFIG_LIBUAVS3D_DECODER
 #pragma message("#define CONFIG_LIBUAVS3D_DECODER " XSTR(CONFIG_LIBUAVS3D_DECODER))
#endif
#ifdef CONFIG_LIBVORBIS_DECODER
 #pragma message("#define CONFIG_LIBVORBIS_DECODER " XSTR(CONFIG_LIBVORBIS_DECODER))
#endif
#ifdef CONFIG_LIBVPX_VP8_DECODER
 #pragma message("#define CONFIG_LIBVPX_VP8_DECODER " XSTR(CONFIG_LIBVPX_VP8_DECODER))
#endif
#ifdef CONFIG_LIBVPX_VP9_DECODER
 #pragma message("#define CONFIG_LIBVPX_VP9_DECODER " XSTR(CONFIG_LIBVPX_VP9_DECODER))
#endif
#ifdef CONFIG_LIBXEVD_DECODER
 #pragma message("#define CONFIG_LIBXEVD_DECODER " XSTR(CONFIG_LIBXEVD_DECODER))
#endif
#ifdef CONFIG_LIBZVBI_TELETEXT_DECODER
 #pragma message("#define CONFIG_LIBZVBI_TELETEXT_DECODER " XSTR(CONFIG_LIBZVBI_TELETEXT_DECODER))
#endif
#ifdef CONFIG_BINTEXT_DECODER
 #pragma message("#define CONFIG_BINTEXT_DECODER " XSTR(CONFIG_BINTEXT_DECODER))
#endif
#ifdef CONFIG_XBIN_DECODER
 #pragma message("#define CONFIG_XBIN_DECODER " XSTR(CONFIG_XBIN_DECODER))
#endif
#ifdef CONFIG_IDF_DECODER
 #pragma message("#define CONFIG_IDF_DECODER " XSTR(CONFIG_IDF_DECODER))
#endif
#ifdef CONFIG_LIBAOM_AV1_DECODER
 #pragma message("#define CONFIG_LIBAOM_AV1_DECODER " XSTR(CONFIG_LIBAOM_AV1_DECODER))
#endif
#ifdef CONFIG_AV1_DECODER
 #pragma message("#define CONFIG_AV1_DECODER " XSTR(CONFIG_AV1_DECODER))
#endif
#ifdef CONFIG_AV1_CUVID_DECODER
 #pragma message("#define CONFIG_AV1_CUVID_DECODER " XSTR(CONFIG_AV1_CUVID_DECODER))
#endif
#ifdef CONFIG_AV1_MEDIACODEC_DECODER
 #pragma message("#define CONFIG_AV1_MEDIACODEC_DECODER " XSTR(CONFIG_AV1_MEDIACODEC_DECODER))
#endif
#ifdef CONFIG_AV1_QSV_DECODER
 #pragma message("#define CONFIG_AV1_QSV_DECODER " XSTR(CONFIG_AV1_QSV_DECODER))
#endif
#ifdef CONFIG_LIBOPENH264_DECODER
 #pragma message("#define CONFIG_LIBOPENH264_DECODER " XSTR(CONFIG_LIBOPENH264_DECODER))
#endif
#ifdef CONFIG_H264_CUVID_DECODER
 #pragma message("#define CONFIG_H264_CUVID_DECODER " XSTR(CONFIG_H264_CUVID_DECODER))
#endif
#ifdef CONFIG_HEVC_CUVID_DECODER
 #pragma message("#define CONFIG_HEVC_CUVID_DECODER " XSTR(CONFIG_HEVC_CUVID_DECODER))
#endif
#ifdef CONFIG_HEVC_MEDIACODEC_DECODER
 #pragma message("#define CONFIG_HEVC_MEDIACODEC_DECODER " XSTR(CONFIG_HEVC_MEDIACODEC_DECODER))
#endif
#ifdef CONFIG_MJPEG_CUVID_DECODER
 #pragma message("#define CONFIG_MJPEG_CUVID_DECODER " XSTR(CONFIG_MJPEG_CUVID_DECODER))
#endif
#ifdef CONFIG_MJPEG_QSV_DECODER
 #pragma message("#define CONFIG_MJPEG_QSV_DECODER " XSTR(CONFIG_MJPEG_QSV_DECODER))
#endif
#ifdef CONFIG_MPEG1_CUVID_DECODER
 #pragma message("#define CONFIG_MPEG1_CUVID_DECODER " XSTR(CONFIG_MPEG1_CUVID_DECODER))
#endif
#ifdef CONFIG_MPEG2_CUVID_DECODER
 #pragma message("#define CONFIG_MPEG2_CUVID_DECODER " XSTR(CONFIG_MPEG2_CUVID_DECODER))
#endif
#ifdef CONFIG_MPEG4_CUVID_DECODER
 #pragma message("#define CONFIG_MPEG4_CUVID_DECODER " XSTR(CONFIG_MPEG4_CUVID_DECODER))
#endif
#ifdef CONFIG_MPEG4_MEDIACODEC_DECODER
 #pragma message("#define CONFIG_MPEG4_MEDIACODEC_DECODER " XSTR(CONFIG_MPEG4_MEDIACODEC_DECODER))
#endif
#ifdef CONFIG_VC1_CUVID_DECODER
 #pragma message("#define CONFIG_VC1_CUVID_DECODER " XSTR(CONFIG_VC1_CUVID_DECODER))
#endif
#ifdef CONFIG_VP8_CUVID_DECODER
 #pragma message("#define CONFIG_VP8_CUVID_DECODER " XSTR(CONFIG_VP8_CUVID_DECODER))
#endif
#ifdef CONFIG_VP8_MEDIACODEC_DECODER
 #pragma message("#define CONFIG_VP8_MEDIACODEC_DECODER " XSTR(CONFIG_VP8_MEDIACODEC_DECODER))
#endif
#ifdef CONFIG_VP8_QSV_DECODER
 #pragma message("#define CONFIG_VP8_QSV_DECODER " XSTR(CONFIG_VP8_QSV_DECODER))
#endif
#ifdef CONFIG_VP9_CUVID_DECODER
 #pragma message("#define CONFIG_VP9_CUVID_DECODER " XSTR(CONFIG_VP9_CUVID_DECODER))
#endif
#ifdef CONFIG_VP9_MEDIACODEC_DECODER
 #pragma message("#define CONFIG_VP9_MEDIACODEC_DECODER " XSTR(CONFIG_VP9_MEDIACODEC_DECODER))
#endif
#ifdef CONFIG_VP9_QSV_DECODER
 #pragma message("#define CONFIG_VP9_QSV_DECODER " XSTR(CONFIG_VP9_QSV_DECODER))
#endif
#ifdef CONFIG_VNULL_DECODER
 #pragma message("#define CONFIG_VNULL_DECODER " XSTR(CONFIG_VNULL_DECODER))
#endif
#ifdef CONFIG_ANULL_DECODER
 #pragma message("#define CONFIG_ANULL_DECODER " XSTR(CONFIG_ANULL_DECODER))
#endif
#ifdef CONFIG_A64MULTI_ENCODER
 #pragma message("#define CONFIG_A64MULTI_ENCODER " XSTR(CONFIG_A64MULTI_ENCODER))
#endif
#ifdef CONFIG_A64MULTI5_ENCODER
 #pragma message("#define CONFIG_A64MULTI5_ENCODER " XSTR(CONFIG_A64MULTI5_ENCODER))
#endif
#ifdef CONFIG_ALIAS_PIX_ENCODER
 #pragma message("#define CONFIG_ALIAS_PIX_ENCODER " XSTR(CONFIG_ALIAS_PIX_ENCODER))
#endif
#ifdef CONFIG_AMV_ENCODER
 #pragma message("#define CONFIG_AMV_ENCODER " XSTR(CONFIG_AMV_ENCODER))
#endif
#ifdef CONFIG_APNG_ENCODER
 #pragma message("#define CONFIG_APNG_ENCODER " XSTR(CONFIG_APNG_ENCODER))
#endif
#ifdef CONFIG_ASV1_ENCODER
 #pragma message("#define CONFIG_ASV1_ENCODER " XSTR(CONFIG_ASV1_ENCODER))
#endif
#ifdef CONFIG_ASV2_ENCODER
 #pragma message("#define CONFIG_ASV2_ENCODER " XSTR(CONFIG_ASV2_ENCODER))
#endif
#ifdef CONFIG_AVRP_ENCODER
 #pragma message("#define CONFIG_AVRP_ENCODER " XSTR(CONFIG_AVRP_ENCODER))
#endif
#ifdef CONFIG_AVUI_ENCODER
 #pragma message("#define CONFIG_AVUI_ENCODER " XSTR(CONFIG_AVUI_ENCODER))
#endif
#ifdef CONFIG_BITPACKED_ENCODER
 #pragma message("#define CONFIG_BITPACKED_ENCODER " XSTR(CONFIG_BITPACKED_ENCODER))
#endif
#ifdef CONFIG_BMP_ENCODER
 #pragma message("#define CONFIG_BMP_ENCODER " XSTR(CONFIG_BMP_ENCODER))
#endif
#ifdef CONFIG_CFHD_ENCODER
 #pragma message("#define CONFIG_CFHD_ENCODER " XSTR(CONFIG_CFHD_ENCODER))
#endif
#ifdef CONFIG_CINEPAK_ENCODER
 #pragma message("#define CONFIG_CINEPAK_ENCODER " XSTR(CONFIG_CINEPAK_ENCODER))
#endif
#ifdef CONFIG_CLJR_ENCODER
 #pragma message("#define CONFIG_CLJR_ENCODER " XSTR(CONFIG_CLJR_ENCODER))
#endif
#ifdef CONFIG_COMFORTNOISE_ENCODER
 #pragma message("#define CONFIG_COMFORTNOISE_ENCODER " XSTR(CONFIG_COMFORTNOISE_ENCODER))
#endif
#ifdef CONFIG_DNXHD_ENCODER
 #pragma message("#define CONFIG_DNXHD_ENCODER " XSTR(CONFIG_DNXHD_ENCODER))
#endif
#ifdef CONFIG_DPX_ENCODER
 #pragma message("#define CONFIG_DPX_ENCODER " XSTR(CONFIG_DPX_ENCODER))
#endif
#ifdef CONFIG_DVVIDEO_ENCODER
 #pragma message("#define CONFIG_DVVIDEO_ENCODER " XSTR(CONFIG_DVVIDEO_ENCODER))
#endif
#ifdef CONFIG_DXV_ENCODER
 #pragma message("#define CONFIG_DXV_ENCODER " XSTR(CONFIG_DXV_ENCODER))
#endif
#ifdef CONFIG_EXR_ENCODER
 #pragma message("#define CONFIG_EXR_ENCODER " XSTR(CONFIG_EXR_ENCODER))
#endif
#ifdef CONFIG_FFV1_ENCODER
 #pragma message("#define CONFIG_FFV1_ENCODER " XSTR(CONFIG_FFV1_ENCODER))
#endif
#ifdef CONFIG_FFVHUFF_ENCODER
 #pragma message("#define CONFIG_FFVHUFF_ENCODER " XSTR(CONFIG_FFVHUFF_ENCODER))
#endif
#ifdef CONFIG_FITS_ENCODER
 #pragma message("#define CONFIG_FITS_ENCODER " XSTR(CONFIG_FITS_ENCODER))
#endif
#ifdef CONFIG_FLASHSV_ENCODER
 #pragma message("#define CONFIG_FLASHSV_ENCODER " XSTR(CONFIG_FLASHSV_ENCODER))
#endif
#ifdef CONFIG_FLASHSV2_ENCODER
 #pragma message("#define CONFIG_FLASHSV2_ENCODER " XSTR(CONFIG_FLASHSV2_ENCODER))
#endif
#ifdef CONFIG_FLV_ENCODER
 #pragma message("#define CONFIG_FLV_ENCODER " XSTR(CONFIG_FLV_ENCODER))
#endif
#ifdef CONFIG_GIF_ENCODER
 #pragma message("#define CONFIG_GIF_ENCODER " XSTR(CONFIG_GIF_ENCODER))
#endif
#ifdef CONFIG_H261_ENCODER
 #pragma message("#define CONFIG_H261_ENCODER " XSTR(CONFIG_H261_ENCODER))
#endif
#ifdef CONFIG_H263_ENCODER
 #pragma message("#define CONFIG_H263_ENCODER " XSTR(CONFIG_H263_ENCODER))
#endif
#ifdef CONFIG_H263P_ENCODER
 #pragma message("#define CONFIG_H263P_ENCODER " XSTR(CONFIG_H263P_ENCODER))
#endif
#ifdef CONFIG_H264_MEDIACODEC_ENCODER
 #pragma message("#define CONFIG_H264_MEDIACODEC_ENCODER " XSTR(CONFIG_H264_MEDIACODEC_ENCODER))
#endif
#ifdef CONFIG_HAP_ENCODER
 #pragma message("#define CONFIG_HAP_ENCODER " XSTR(CONFIG_HAP_ENCODER))
#endif
#ifdef CONFIG_HUFFYUV_ENCODER
 #pragma message("#define CONFIG_HUFFYUV_ENCODER " XSTR(CONFIG_HUFFYUV_ENCODER))
#endif
#ifdef CONFIG_JPEG2000_ENCODER
 #pragma message("#define CONFIG_JPEG2000_ENCODER " XSTR(CONFIG_JPEG2000_ENCODER))
#endif
#ifdef CONFIG_JPEGLS_ENCODER
 #pragma message("#define CONFIG_JPEGLS_ENCODER " XSTR(CONFIG_JPEGLS_ENCODER))
#endif
#ifdef CONFIG_LJPEG_ENCODER
 #pragma message("#define CONFIG_LJPEG_ENCODER " XSTR(CONFIG_LJPEG_ENCODER))
#endif
#ifdef CONFIG_MAGICYUV_ENCODER
 #pragma message("#define CONFIG_MAGICYUV_ENCODER " XSTR(CONFIG_MAGICYUV_ENCODER))
#endif
#ifdef CONFIG_MJPEG_ENCODER
 #pragma message("#define CONFIG_MJPEG_ENCODER " XSTR(CONFIG_MJPEG_ENCODER))
#endif
#ifdef CONFIG_MPEG1VIDEO_ENCODER
 #pragma message("#define CONFIG_MPEG1VIDEO_ENCODER " XSTR(CONFIG_MPEG1VIDEO_ENCODER))
#endif
#ifdef CONFIG_MPEG2VIDEO_ENCODER
 #pragma message("#define CONFIG_MPEG2VIDEO_ENCODER " XSTR(CONFIG_MPEG2VIDEO_ENCODER))
#endif
#ifdef CONFIG_MPEG4_ENCODER
 #pragma message("#define CONFIG_MPEG4_ENCODER " XSTR(CONFIG_MPEG4_ENCODER))
#endif
#ifdef CONFIG_MSMPEG4V2_ENCODER
 #pragma message("#define CONFIG_MSMPEG4V2_ENCODER " XSTR(CONFIG_MSMPEG4V2_ENCODER))
#endif
#ifdef CONFIG_MSMPEG4V3_ENCODER
 #pragma message("#define CONFIG_MSMPEG4V3_ENCODER " XSTR(CONFIG_MSMPEG4V3_ENCODER))
#endif
#ifdef CONFIG_MSRLE_ENCODER
 #pragma message("#define CONFIG_MSRLE_ENCODER " XSTR(CONFIG_MSRLE_ENCODER))
#endif
#ifdef CONFIG_MSVIDEO1_ENCODER
 #pragma message("#define CONFIG_MSVIDEO1_ENCODER " XSTR(CONFIG_MSVIDEO1_ENCODER))
#endif
#ifdef CONFIG_PAM_ENCODER
 #pragma message("#define CONFIG_PAM_ENCODER " XSTR(CONFIG_PAM_ENCODER))
#endif
#ifdef CONFIG_PBM_ENCODER
 #pragma message("#define CONFIG_PBM_ENCODER " XSTR(CONFIG_PBM_ENCODER))
#endif
#ifdef CONFIG_PCX_ENCODER
 #pragma message("#define CONFIG_PCX_ENCODER " XSTR(CONFIG_PCX_ENCODER))
#endif
#ifdef CONFIG_PFM_ENCODER
 #pragma message("#define CONFIG_PFM_ENCODER " XSTR(CONFIG_PFM_ENCODER))
#endif
#ifdef CONFIG_PGM_ENCODER
 #pragma message("#define CONFIG_PGM_ENCODER " XSTR(CONFIG_PGM_ENCODER))
#endif
#ifdef CONFIG_PGMYUV_ENCODER
 #pragma message("#define CONFIG_PGMYUV_ENCODER " XSTR(CONFIG_PGMYUV_ENCODER))
#endif
#ifdef CONFIG_PHM_ENCODER
 #pragma message("#define CONFIG_PHM_ENCODER " XSTR(CONFIG_PHM_ENCODER))
#endif
#ifdef CONFIG_PNG_ENCODER
 #pragma message("#define CONFIG_PNG_ENCODER " XSTR(CONFIG_PNG_ENCODER))
#endif
#ifdef CONFIG_PPM_ENCODER
 #pragma message("#define CONFIG_PPM_ENCODER " XSTR(CONFIG_PPM_ENCODER))
#endif
#ifdef CONFIG_PRORES_ENCODER
 #pragma message("#define CONFIG_PRORES_ENCODER " XSTR(CONFIG_PRORES_ENCODER))
#endif
#ifdef CONFIG_PRORES_AW_ENCODER
 #pragma message("#define CONFIG_PRORES_AW_ENCODER " XSTR(CONFIG_PRORES_AW_ENCODER))
#endif
#ifdef CONFIG_PRORES_KS_ENCODER
 #pragma message("#define CONFIG_PRORES_KS_ENCODER " XSTR(CONFIG_PRORES_KS_ENCODER))
#endif
#ifdef CONFIG_QOI_ENCODER
 #pragma message("#define CONFIG_QOI_ENCODER " XSTR(CONFIG_QOI_ENCODER))
#endif
#ifdef CONFIG_QTRLE_ENCODER
 #pragma message("#define CONFIG_QTRLE_ENCODER " XSTR(CONFIG_QTRLE_ENCODER))
#endif
#ifdef CONFIG_R10K_ENCODER
 #pragma message("#define CONFIG_R10K_ENCODER " XSTR(CONFIG_R10K_ENCODER))
#endif
#ifdef CONFIG_R210_ENCODER
 #pragma message("#define CONFIG_R210_ENCODER " XSTR(CONFIG_R210_ENCODER))
#endif
#ifdef CONFIG_RAWVIDEO_ENCODER
 #pragma message("#define CONFIG_RAWVIDEO_ENCODER " XSTR(CONFIG_RAWVIDEO_ENCODER))
#endif
#ifdef CONFIG_ROQ_ENCODER
 #pragma message("#define CONFIG_ROQ_ENCODER " XSTR(CONFIG_ROQ_ENCODER))
#endif
#ifdef CONFIG_RPZA_ENCODER
 #pragma message("#define CONFIG_RPZA_ENCODER " XSTR(CONFIG_RPZA_ENCODER))
#endif
#ifdef CONFIG_RV10_ENCODER
 #pragma message("#define CONFIG_RV10_ENCODER " XSTR(CONFIG_RV10_ENCODER))
#endif
#ifdef CONFIG_RV20_ENCODER
 #pragma message("#define CONFIG_RV20_ENCODER " XSTR(CONFIG_RV20_ENCODER))
#endif
#ifdef CONFIG_S302M_ENCODER
 #pragma message("#define CONFIG_S302M_ENCODER " XSTR(CONFIG_S302M_ENCODER))
#endif
#ifdef CONFIG_SGI_ENCODER
 #pragma message("#define CONFIG_SGI_ENCODER " XSTR(CONFIG_SGI_ENCODER))
#endif
#ifdef CONFIG_SMC_ENCODER
 #pragma message("#define CONFIG_SMC_ENCODER " XSTR(CONFIG_SMC_ENCODER))
#endif
#ifdef CONFIG_SNOW_ENCODER
 #pragma message("#define CONFIG_SNOW_ENCODER " XSTR(CONFIG_SNOW_ENCODER))
#endif
#ifdef CONFIG_SPEEDHQ_ENCODER
 #pragma message("#define CONFIG_SPEEDHQ_ENCODER " XSTR(CONFIG_SPEEDHQ_ENCODER))
#endif
#ifdef CONFIG_SUNRAST_ENCODER
 #pragma message("#define CONFIG_SUNRAST_ENCODER " XSTR(CONFIG_SUNRAST_ENCODER))
#endif
#ifdef CONFIG_SVQ1_ENCODER
 #pragma message("#define CONFIG_SVQ1_ENCODER " XSTR(CONFIG_SVQ1_ENCODER))
#endif
#ifdef CONFIG_TARGA_ENCODER
 #pragma message("#define CONFIG_TARGA_ENCODER " XSTR(CONFIG_TARGA_ENCODER))
#endif
#ifdef CONFIG_TIFF_ENCODER
 #pragma message("#define CONFIG_TIFF_ENCODER " XSTR(CONFIG_TIFF_ENCODER))
#endif
#ifdef CONFIG_UTVIDEO_ENCODER
 #pragma message("#define CONFIG_UTVIDEO_ENCODER " XSTR(CONFIG_UTVIDEO_ENCODER))
#endif
#ifdef CONFIG_V210_ENCODER
 #pragma message("#define CONFIG_V210_ENCODER " XSTR(CONFIG_V210_ENCODER))
#endif
#ifdef CONFIG_V308_ENCODER
 #pragma message("#define CONFIG_V308_ENCODER " XSTR(CONFIG_V308_ENCODER))
#endif
#ifdef CONFIG_V408_ENCODER
 #pragma message("#define CONFIG_V408_ENCODER " XSTR(CONFIG_V408_ENCODER))
#endif
#ifdef CONFIG_V410_ENCODER
 #pragma message("#define CONFIG_V410_ENCODER " XSTR(CONFIG_V410_ENCODER))
#endif
#ifdef CONFIG_VBN_ENCODER
 #pragma message("#define CONFIG_VBN_ENCODER " XSTR(CONFIG_VBN_ENCODER))
#endif
#ifdef CONFIG_VC2_ENCODER
 #pragma message("#define CONFIG_VC2_ENCODER " XSTR(CONFIG_VC2_ENCODER))
#endif
#ifdef CONFIG_WBMP_ENCODER
 #pragma message("#define CONFIG_WBMP_ENCODER " XSTR(CONFIG_WBMP_ENCODER))
#endif
#ifdef CONFIG_WRAPPED_AVFRAME_ENCODER
 #pragma message("#define CONFIG_WRAPPED_AVFRAME_ENCODER " XSTR(CONFIG_WRAPPED_AVFRAME_ENCODER))
#endif
#ifdef CONFIG_WMV1_ENCODER
 #pragma message("#define CONFIG_WMV1_ENCODER " XSTR(CONFIG_WMV1_ENCODER))
#endif
#ifdef CONFIG_WMV2_ENCODER
 #pragma message("#define CONFIG_WMV2_ENCODER " XSTR(CONFIG_WMV2_ENCODER))
#endif
#ifdef CONFIG_XBM_ENCODER
 #pragma message("#define CONFIG_XBM_ENCODER " XSTR(CONFIG_XBM_ENCODER))
#endif
#ifdef CONFIG_XFACE_ENCODER
 #pragma message("#define CONFIG_XFACE_ENCODER " XSTR(CONFIG_XFACE_ENCODER))
#endif
#ifdef CONFIG_XWD_ENCODER
 #pragma message("#define CONFIG_XWD_ENCODER " XSTR(CONFIG_XWD_ENCODER))
#endif
#ifdef CONFIG_Y41P_ENCODER
 #pragma message("#define CONFIG_Y41P_ENCODER " XSTR(CONFIG_Y41P_ENCODER))
#endif
#ifdef CONFIG_YUV4_ENCODER
 #pragma message("#define CONFIG_YUV4_ENCODER " XSTR(CONFIG_YUV4_ENCODER))
#endif
#ifdef CONFIG_ZLIB_ENCODER
 #pragma message("#define CONFIG_ZLIB_ENCODER " XSTR(CONFIG_ZLIB_ENCODER))
#endif
#ifdef CONFIG_ZMBV_ENCODER
 #pragma message("#define CONFIG_ZMBV_ENCODER " XSTR(CONFIG_ZMBV_ENCODER))
#endif
#ifdef CONFIG_AAC_ENCODER
 #pragma message("#define CONFIG_AAC_ENCODER " XSTR(CONFIG_AAC_ENCODER))
#endif
#ifdef CONFIG_AC3_ENCODER
 #pragma message("#define CONFIG_AC3_ENCODER " XSTR(CONFIG_AC3_ENCODER))
#endif
#ifdef CONFIG_AC3_FIXED_ENCODER
 #pragma message("#define CONFIG_AC3_FIXED_ENCODER " XSTR(CONFIG_AC3_FIXED_ENCODER))
#endif
#ifdef CONFIG_ALAC_ENCODER
 #pragma message("#define CONFIG_ALAC_ENCODER " XSTR(CONFIG_ALAC_ENCODER))
#endif
#ifdef CONFIG_APTX_ENCODER
 #pragma message("#define CONFIG_APTX_ENCODER " XSTR(CONFIG_APTX_ENCODER))
#endif
#ifdef CONFIG_APTX_HD_ENCODER
 #pragma message("#define CONFIG_APTX_HD_ENCODER " XSTR(CONFIG_APTX_HD_ENCODER))
#endif
#ifdef CONFIG_DCA_ENCODER
 #pragma message("#define CONFIG_DCA_ENCODER " XSTR(CONFIG_DCA_ENCODER))
#endif
#ifdef CONFIG_DFPWM_ENCODER
 #pragma message("#define CONFIG_DFPWM_ENCODER " XSTR(CONFIG_DFPWM_ENCODER))
#endif
#ifdef CONFIG_EAC3_ENCODER
 #pragma message("#define CONFIG_EAC3_ENCODER " XSTR(CONFIG_EAC3_ENCODER))
#endif
#ifdef CONFIG_FLAC_ENCODER
 #pragma message("#define CONFIG_FLAC_ENCODER " XSTR(CONFIG_FLAC_ENCODER))
#endif
#ifdef CONFIG_G723_1_ENCODER
 #pragma message("#define CONFIG_G723_1_ENCODER " XSTR(CONFIG_G723_1_ENCODER))
#endif
#ifdef CONFIG_HDR_ENCODER
 #pragma message("#define CONFIG_HDR_ENCODER " XSTR(CONFIG_HDR_ENCODER))
#endif
#ifdef CONFIG_MLP_ENCODER
 #pragma message("#define CONFIG_MLP_ENCODER " XSTR(CONFIG_MLP_ENCODER))
#endif
#ifdef CONFIG_MP2_ENCODER
 #pragma message("#define CONFIG_MP2_ENCODER " XSTR(CONFIG_MP2_ENCODER))
#endif
#ifdef CONFIG_MP2FIXED_ENCODER
 #pragma message("#define CONFIG_MP2FIXED_ENCODER " XSTR(CONFIG_MP2FIXED_ENCODER))
#endif
#ifdef CONFIG_NELLYMOSER_ENCODER
 #pragma message("#define CONFIG_NELLYMOSER_ENCODER " XSTR(CONFIG_NELLYMOSER_ENCODER))
#endif
#ifdef CONFIG_OPUS_ENCODER
 #pragma message("#define CONFIG_OPUS_ENCODER " XSTR(CONFIG_OPUS_ENCODER))
#endif
#ifdef CONFIG_RA_144_ENCODER
 #pragma message("#define CONFIG_RA_144_ENCODER " XSTR(CONFIG_RA_144_ENCODER))
#endif
#ifdef CONFIG_SBC_ENCODER
 #pragma message("#define CONFIG_SBC_ENCODER " XSTR(CONFIG_SBC_ENCODER))
#endif
#ifdef CONFIG_SONIC_ENCODER
 #pragma message("#define CONFIG_SONIC_ENCODER " XSTR(CONFIG_SONIC_ENCODER))
#endif
#ifdef CONFIG_SONIC_LS_ENCODER
 #pragma message("#define CONFIG_SONIC_LS_ENCODER " XSTR(CONFIG_SONIC_LS_ENCODER))
#endif
#ifdef CONFIG_TRUEHD_ENCODER
 #pragma message("#define CONFIG_TRUEHD_ENCODER " XSTR(CONFIG_TRUEHD_ENCODER))
#endif
#ifdef CONFIG_TTA_ENCODER
 #pragma message("#define CONFIG_TTA_ENCODER " XSTR(CONFIG_TTA_ENCODER))
#endif
#ifdef CONFIG_VORBIS_ENCODER
 #pragma message("#define CONFIG_VORBIS_ENCODER " XSTR(CONFIG_VORBIS_ENCODER))
#endif
#ifdef CONFIG_WAVPACK_ENCODER
 #pragma message("#define CONFIG_WAVPACK_ENCODER " XSTR(CONFIG_WAVPACK_ENCODER))
#endif
#ifdef CONFIG_WMAV1_ENCODER
 #pragma message("#define CONFIG_WMAV1_ENCODER " XSTR(CONFIG_WMAV1_ENCODER))
#endif
#ifdef CONFIG_WMAV2_ENCODER
 #pragma message("#define CONFIG_WMAV2_ENCODER " XSTR(CONFIG_WMAV2_ENCODER))
#endif
#ifdef CONFIG_PCM_ALAW_ENCODER
 #pragma message("#define CONFIG_PCM_ALAW_ENCODER " XSTR(CONFIG_PCM_ALAW_ENCODER))
#endif
#ifdef CONFIG_PCM_BLURAY_ENCODER
 #pragma message("#define CONFIG_PCM_BLURAY_ENCODER " XSTR(CONFIG_PCM_BLURAY_ENCODER))
#endif
#ifdef CONFIG_PCM_DVD_ENCODER
 #pragma message("#define CONFIG_PCM_DVD_ENCODER " XSTR(CONFIG_PCM_DVD_ENCODER))
#endif
#ifdef CONFIG_PCM_F32BE_ENCODER
 #pragma message("#define CONFIG_PCM_F32BE_ENCODER " XSTR(CONFIG_PCM_F32BE_ENCODER))
#endif
#ifdef CONFIG_PCM_F32LE_ENCODER
 #pragma message("#define CONFIG_PCM_F32LE_ENCODER " XSTR(CONFIG_PCM_F32LE_ENCODER))
#endif
#ifdef CONFIG_PCM_F64BE_ENCODER
 #pragma message("#define CONFIG_PCM_F64BE_ENCODER " XSTR(CONFIG_PCM_F64BE_ENCODER))
#endif
#ifdef CONFIG_PCM_F64LE_ENCODER
 #pragma message("#define CONFIG_PCM_F64LE_ENCODER " XSTR(CONFIG_PCM_F64LE_ENCODER))
#endif
#ifdef CONFIG_PCM_MULAW_ENCODER
 #pragma message("#define CONFIG_PCM_MULAW_ENCODER " XSTR(CONFIG_PCM_MULAW_ENCODER))
#endif
#ifdef CONFIG_PCM_S8_ENCODER
 #pragma message("#define CONFIG_PCM_S8_ENCODER " XSTR(CONFIG_PCM_S8_ENCODER))
#endif
#ifdef CONFIG_PCM_S8_PLANAR_ENCODER
 #pragma message("#define CONFIG_PCM_S8_PLANAR_ENCODER " XSTR(CONFIG_PCM_S8_PLANAR_ENCODER))
#endif
#ifdef CONFIG_PCM_S16BE_ENCODER
 #pragma message("#define CONFIG_PCM_S16BE_ENCODER " XSTR(CONFIG_PCM_S16BE_ENCODER))
#endif
#ifdef CONFIG_PCM_S16BE_PLANAR_ENCODER
 #pragma message("#define CONFIG_PCM_S16BE_PLANAR_ENCODER " XSTR(CONFIG_PCM_S16BE_PLANAR_ENCODER))
#endif
#ifdef CONFIG_PCM_S16LE_ENCODER
 #pragma message("#define CONFIG_PCM_S16LE_ENCODER " XSTR(CONFIG_PCM_S16LE_ENCODER))
#endif
#ifdef CONFIG_PCM_S16LE_PLANAR_ENCODER
 #pragma message("#define CONFIG_PCM_S16LE_PLANAR_ENCODER " XSTR(CONFIG_PCM_S16LE_PLANAR_ENCODER))
#endif
#ifdef CONFIG_PCM_S24BE_ENCODER
 #pragma message("#define CONFIG_PCM_S24BE_ENCODER " XSTR(CONFIG_PCM_S24BE_ENCODER))
#endif
#ifdef CONFIG_PCM_S24DAUD_ENCODER
 #pragma message("#define CONFIG_PCM_S24DAUD_ENCODER " XSTR(CONFIG_PCM_S24DAUD_ENCODER))
#endif
#ifdef CONFIG_PCM_S24LE_ENCODER
 #pragma message("#define CONFIG_PCM_S24LE_ENCODER " XSTR(CONFIG_PCM_S24LE_ENCODER))
#endif
#ifdef CONFIG_PCM_S24LE_PLANAR_ENCODER
 #pragma message("#define CONFIG_PCM_S24LE_PLANAR_ENCODER " XSTR(CONFIG_PCM_S24LE_PLANAR_ENCODER))
#endif
#ifdef CONFIG_PCM_S32BE_ENCODER
 #pragma message("#define CONFIG_PCM_S32BE_ENCODER " XSTR(CONFIG_PCM_S32BE_ENCODER))
#endif
#ifdef CONFIG_PCM_S32LE_ENCODER
 #pragma message("#define CONFIG_PCM_S32LE_ENCODER " XSTR(CONFIG_PCM_S32LE_ENCODER))
#endif
#ifdef CONFIG_PCM_S32LE_PLANAR_ENCODER
 #pragma message("#define CONFIG_PCM_S32LE_PLANAR_ENCODER " XSTR(CONFIG_PCM_S32LE_PLANAR_ENCODER))
#endif
#ifdef CONFIG_PCM_S64BE_ENCODER
 #pragma message("#define CONFIG_PCM_S64BE_ENCODER " XSTR(CONFIG_PCM_S64BE_ENCODER))
#endif
#ifdef CONFIG_PCM_S64LE_ENCODER
 #pragma message("#define CONFIG_PCM_S64LE_ENCODER " XSTR(CONFIG_PCM_S64LE_ENCODER))
#endif
#ifdef CONFIG_PCM_U8_ENCODER
 #pragma message("#define CONFIG_PCM_U8_ENCODER " XSTR(CONFIG_PCM_U8_ENCODER))
#endif
#ifdef CONFIG_PCM_U16BE_ENCODER
 #pragma message("#define CONFIG_PCM_U16BE_ENCODER " XSTR(CONFIG_PCM_U16BE_ENCODER))
#endif
#ifdef CONFIG_PCM_U16LE_ENCODER
 #pragma message("#define CONFIG_PCM_U16LE_ENCODER " XSTR(CONFIG_PCM_U16LE_ENCODER))
#endif
#ifdef CONFIG_PCM_U24BE_ENCODER
 #pragma message("#define CONFIG_PCM_U24BE_ENCODER " XSTR(CONFIG_PCM_U24BE_ENCODER))
#endif
#ifdef CONFIG_PCM_U24LE_ENCODER
 #pragma message("#define CONFIG_PCM_U24LE_ENCODER " XSTR(CONFIG_PCM_U24LE_ENCODER))
#endif
#ifdef CONFIG_PCM_U32BE_ENCODER
 #pragma message("#define CONFIG_PCM_U32BE_ENCODER " XSTR(CONFIG_PCM_U32BE_ENCODER))
#endif
#ifdef CONFIG_PCM_U32LE_ENCODER
 #pragma message("#define CONFIG_PCM_U32LE_ENCODER " XSTR(CONFIG_PCM_U32LE_ENCODER))
#endif
#ifdef CONFIG_PCM_VIDC_ENCODER
 #pragma message("#define CONFIG_PCM_VIDC_ENCODER " XSTR(CONFIG_PCM_VIDC_ENCODER))
#endif
#ifdef CONFIG_ROQ_DPCM_ENCODER
 #pragma message("#define CONFIG_ROQ_DPCM_ENCODER " XSTR(CONFIG_ROQ_DPCM_ENCODER))
#endif
#ifdef CONFIG_ADPCM_ADX_ENCODER
 #pragma message("#define CONFIG_ADPCM_ADX_ENCODER " XSTR(CONFIG_ADPCM_ADX_ENCODER))
#endif
#ifdef CONFIG_ADPCM_ARGO_ENCODER
 #pragma message("#define CONFIG_ADPCM_ARGO_ENCODER " XSTR(CONFIG_ADPCM_ARGO_ENCODER))
#endif
#ifdef CONFIG_ADPCM_G722_ENCODER
 #pragma message("#define CONFIG_ADPCM_G722_ENCODER " XSTR(CONFIG_ADPCM_G722_ENCODER))
#endif
#ifdef CONFIG_ADPCM_G726_ENCODER
 #pragma message("#define CONFIG_ADPCM_G726_ENCODER " XSTR(CONFIG_ADPCM_G726_ENCODER))
#endif
#ifdef CONFIG_ADPCM_G726LE_ENCODER
 #pragma message("#define CONFIG_ADPCM_G726LE_ENCODER " XSTR(CONFIG_ADPCM_G726LE_ENCODER))
#endif
#ifdef CONFIG_ADPCM_IMA_AMV_ENCODER
 #pragma message("#define CONFIG_ADPCM_IMA_AMV_ENCODER " XSTR(CONFIG_ADPCM_IMA_AMV_ENCODER))
#endif
#ifdef CONFIG_ADPCM_IMA_ALP_ENCODER
 #pragma message("#define CONFIG_ADPCM_IMA_ALP_ENCODER " XSTR(CONFIG_ADPCM_IMA_ALP_ENCODER))
#endif
#ifdef CONFIG_ADPCM_IMA_APM_ENCODER
 #pragma message("#define CONFIG_ADPCM_IMA_APM_ENCODER " XSTR(CONFIG_ADPCM_IMA_APM_ENCODER))
#endif
#ifdef CONFIG_ADPCM_IMA_QT_ENCODER
 #pragma message("#define CONFIG_ADPCM_IMA_QT_ENCODER " XSTR(CONFIG_ADPCM_IMA_QT_ENCODER))
#endif
#ifdef CONFIG_ADPCM_IMA_SSI_ENCODER
 #pragma message("#define CONFIG_ADPCM_IMA_SSI_ENCODER " XSTR(CONFIG_ADPCM_IMA_SSI_ENCODER))
#endif
#ifdef CONFIG_ADPCM_IMA_WAV_ENCODER
 #pragma message("#define CONFIG_ADPCM_IMA_WAV_ENCODER " XSTR(CONFIG_ADPCM_IMA_WAV_ENCODER))
#endif
#ifdef CONFIG_ADPCM_IMA_WS_ENCODER
 #pragma message("#define CONFIG_ADPCM_IMA_WS_ENCODER " XSTR(CONFIG_ADPCM_IMA_WS_ENCODER))
#endif
#ifdef CONFIG_ADPCM_MS_ENCODER
 #pragma message("#define CONFIG_ADPCM_MS_ENCODER " XSTR(CONFIG_ADPCM_MS_ENCODER))
#endif
#ifdef CONFIG_ADPCM_SWF_ENCODER
 #pragma message("#define CONFIG_ADPCM_SWF_ENCODER " XSTR(CONFIG_ADPCM_SWF_ENCODER))
#endif
#ifdef CONFIG_ADPCM_YAMAHA_ENCODER
 #pragma message("#define CONFIG_ADPCM_YAMAHA_ENCODER " XSTR(CONFIG_ADPCM_YAMAHA_ENCODER))
#endif
#ifdef CONFIG_SSA_ENCODER
 #pragma message("#define CONFIG_SSA_ENCODER " XSTR(CONFIG_SSA_ENCODER))
#endif
#ifdef CONFIG_ASS_ENCODER
 #pragma message("#define CONFIG_ASS_ENCODER " XSTR(CONFIG_ASS_ENCODER))
#endif
#ifdef CONFIG_DVBSUB_ENCODER
 #pragma message("#define CONFIG_DVBSUB_ENCODER " XSTR(CONFIG_DVBSUB_ENCODER))
#endif
#ifdef CONFIG_DVDSUB_ENCODER
 #pragma message("#define CONFIG_DVDSUB_ENCODER " XSTR(CONFIG_DVDSUB_ENCODER))
#endif
#ifdef CONFIG_MOVTEXT_ENCODER
 #pragma message("#define CONFIG_MOVTEXT_ENCODER " XSTR(CONFIG_MOVTEXT_ENCODER))
#endif
#ifdef CONFIG_SRT_ENCODER
 #pragma message("#define CONFIG_SRT_ENCODER " XSTR(CONFIG_SRT_ENCODER))
#endif
#ifdef CONFIG_SUBRIP_ENCODER
 #pragma message("#define CONFIG_SUBRIP_ENCODER " XSTR(CONFIG_SUBRIP_ENCODER))
#endif
#ifdef CONFIG_TEXT_ENCODER
 #pragma message("#define CONFIG_TEXT_ENCODER " XSTR(CONFIG_TEXT_ENCODER))
#endif
#ifdef CONFIG_TTML_ENCODER
 #pragma message("#define CONFIG_TTML_ENCODER " XSTR(CONFIG_TTML_ENCODER))
#endif
#ifdef CONFIG_WEBVTT_ENCODER
 #pragma message("#define CONFIG_WEBVTT_ENCODER " XSTR(CONFIG_WEBVTT_ENCODER))
#endif
#ifdef CONFIG_XSUB_ENCODER
 #pragma message("#define CONFIG_XSUB_ENCODER " XSTR(CONFIG_XSUB_ENCODER))
#endif
#ifdef CONFIG_AAC_AT_ENCODER
 #pragma message("#define CONFIG_AAC_AT_ENCODER " XSTR(CONFIG_AAC_AT_ENCODER))
#endif
#ifdef CONFIG_ALAC_AT_ENCODER
 #pragma message("#define CONFIG_ALAC_AT_ENCODER " XSTR(CONFIG_ALAC_AT_ENCODER))
#endif
#ifdef CONFIG_ILBC_AT_ENCODER
 #pragma message("#define CONFIG_ILBC_AT_ENCODER " XSTR(CONFIG_ILBC_AT_ENCODER))
#endif
#ifdef CONFIG_PCM_ALAW_AT_ENCODER
 #pragma message("#define CONFIG_PCM_ALAW_AT_ENCODER " XSTR(CONFIG_PCM_ALAW_AT_ENCODER))
#endif
#ifdef CONFIG_PCM_MULAW_AT_ENCODER
 #pragma message("#define CONFIG_PCM_MULAW_AT_ENCODER " XSTR(CONFIG_PCM_MULAW_AT_ENCODER))
#endif
#ifdef CONFIG_LIBAOM_AV1_ENCODER
 #pragma message("#define CONFIG_LIBAOM_AV1_ENCODER " XSTR(CONFIG_LIBAOM_AV1_ENCODER))
#endif
#ifdef CONFIG_LIBCODEC2_ENCODER
 #pragma message("#define CONFIG_LIBCODEC2_ENCODER " XSTR(CONFIG_LIBCODEC2_ENCODER))
#endif
#ifdef CONFIG_LIBFDK_AAC_ENCODER
 #pragma message("#define CONFIG_LIBFDK_AAC_ENCODER " XSTR(CONFIG_LIBFDK_AAC_ENCODER))
#endif
#ifdef CONFIG_LIBGSM_ENCODER
 #pragma message("#define CONFIG_LIBGSM_ENCODER " XSTR(CONFIG_LIBGSM_ENCODER))
#endif
#ifdef CONFIG_LIBGSM_MS_ENCODER
 #pragma message("#define CONFIG_LIBGSM_MS_ENCODER " XSTR(CONFIG_LIBGSM_MS_ENCODER))
#endif
#ifdef CONFIG_LIBILBC_ENCODER
 #pragma message("#define CONFIG_LIBILBC_ENCODER " XSTR(CONFIG_LIBILBC_ENCODER))
#endif
#ifdef CONFIG_LIBJXL_ENCODER
 #pragma message("#define CONFIG_LIBJXL_ENCODER " XSTR(CONFIG_LIBJXL_ENCODER))
#endif
#ifdef CONFIG_LIBMP3LAME_ENCODER
 #pragma message("#define CONFIG_LIBMP3LAME_ENCODER " XSTR(CONFIG_LIBMP3LAME_ENCODER))
#endif
#ifdef CONFIG_LIBOPENCORE_AMRNB_ENCODER
 #pragma message("#define CONFIG_LIBOPENCORE_AMRNB_ENCODER " XSTR(CONFIG_LIBOPENCORE_AMRNB_ENCODER))
#endif
#ifdef CONFIG_LIBOPENJPEG_ENCODER
 #pragma message("#define CONFIG_LIBOPENJPEG_ENCODER " XSTR(CONFIG_LIBOPENJPEG_ENCODER))
#endif
#ifdef CONFIG_LIBOPUS_ENCODER
 #pragma message("#define CONFIG_LIBOPUS_ENCODER " XSTR(CONFIG_LIBOPUS_ENCODER))
#endif
#ifdef CONFIG_LIBRAV1E_ENCODER
 #pragma message("#define CONFIG_LIBRAV1E_ENCODER " XSTR(CONFIG_LIBRAV1E_ENCODER))
#endif
#ifdef CONFIG_LIBSHINE_ENCODER
 #pragma message("#define CONFIG_LIBSHINE_ENCODER " XSTR(CONFIG_LIBSHINE_ENCODER))
#endif
#ifdef CONFIG_LIBSPEEX_ENCODER
 #pragma message("#define CONFIG_LIBSPEEX_ENCODER " XSTR(CONFIG_LIBSPEEX_ENCODER))
#endif
#ifdef CONFIG_LIBSVTAV1_ENCODER
 #pragma message("#define CONFIG_LIBSVTAV1_ENCODER " XSTR(CONFIG_LIBSVTAV1_ENCODER))
#endif
#ifdef CONFIG_LIBTHEORA_ENCODER
 #pragma message("#define CONFIG_LIBTHEORA_ENCODER " XSTR(CONFIG_LIBTHEORA_ENCODER))
#endif
#ifdef CONFIG_LIBTWOLAME_ENCODER
 #pragma message("#define CONFIG_LIBTWOLAME_ENCODER " XSTR(CONFIG_LIBTWOLAME_ENCODER))
#endif
#ifdef CONFIG_LIBVO_AMRWBENC_ENCODER
 #pragma message("#define CONFIG_LIBVO_AMRWBENC_ENCODER " XSTR(CONFIG_LIBVO_AMRWBENC_ENCODER))
#endif
#ifdef CONFIG_LIBVORBIS_ENCODER
 #pragma message("#define CONFIG_LIBVORBIS_ENCODER " XSTR(CONFIG_LIBVORBIS_ENCODER))
#endif
#ifdef CONFIG_LIBVPX_VP8_ENCODER
 #pragma message("#define CONFIG_LIBVPX_VP8_ENCODER " XSTR(CONFIG_LIBVPX_VP8_ENCODER))
#endif
#ifdef CONFIG_LIBVPX_VP9_ENCODER
 #pragma message("#define CONFIG_LIBVPX_VP9_ENCODER " XSTR(CONFIG_LIBVPX_VP9_ENCODER))
#endif
#ifdef CONFIG_LIBWEBP_ANIM_ENCODER
 #pragma message("#define CONFIG_LIBWEBP_ANIM_ENCODER " XSTR(CONFIG_LIBWEBP_ANIM_ENCODER))
#endif
#ifdef CONFIG_LIBWEBP_ENCODER
 #pragma message("#define CONFIG_LIBWEBP_ENCODER " XSTR(CONFIG_LIBWEBP_ENCODER))
#endif
#ifdef CONFIG_LIBX262_ENCODER
 #pragma message("#define CONFIG_LIBX262_ENCODER " XSTR(CONFIG_LIBX262_ENCODER))
#endif
#ifdef CONFIG_LIBX264_ENCODER
 #pragma message("#define CONFIG_LIBX264_ENCODER " XSTR(CONFIG_LIBX264_ENCODER))
#endif
#ifdef CONFIG_LIBX264RGB_ENCODER
 #pragma message("#define CONFIG_LIBX264RGB_ENCODER " XSTR(CONFIG_LIBX264RGB_ENCODER))
#endif
#ifdef CONFIG_LIBX265_ENCODER
 #pragma message("#define CONFIG_LIBX265_ENCODER " XSTR(CONFIG_LIBX265_ENCODER))
#endif
#ifdef CONFIG_LIBXEVE_ENCODER
 #pragma message("#define CONFIG_LIBXEVE_ENCODER " XSTR(CONFIG_LIBXEVE_ENCODER))
#endif
#ifdef CONFIG_LIBXAVS_ENCODER
 #pragma message("#define CONFIG_LIBXAVS_ENCODER " XSTR(CONFIG_LIBXAVS_ENCODER))
#endif
#ifdef CONFIG_LIBXAVS2_ENCODER
 #pragma message("#define CONFIG_LIBXAVS2_ENCODER " XSTR(CONFIG_LIBXAVS2_ENCODER))
#endif
#ifdef CONFIG_LIBXVID_ENCODER
 #pragma message("#define CONFIG_LIBXVID_ENCODER " XSTR(CONFIG_LIBXVID_ENCODER))
#endif
#ifdef CONFIG_AAC_MF_ENCODER
 #pragma message("#define CONFIG_AAC_MF_ENCODER " XSTR(CONFIG_AAC_MF_ENCODER))
#endif
#ifdef CONFIG_AC3_MF_ENCODER
 #pragma message("#define CONFIG_AC3_MF_ENCODER " XSTR(CONFIG_AC3_MF_ENCODER))
#endif
#ifdef CONFIG_H263_V4L2M2M_ENCODER
 #pragma message("#define CONFIG_H263_V4L2M2M_ENCODER " XSTR(CONFIG_H263_V4L2M2M_ENCODER))
#endif
#ifdef CONFIG_AV1_MEDIACODEC_ENCODER
 #pragma message("#define CONFIG_AV1_MEDIACODEC_ENCODER " XSTR(CONFIG_AV1_MEDIACODEC_ENCODER))
#endif
#ifdef CONFIG_AV1_NVENC_ENCODER
 #pragma message("#define CONFIG_AV1_NVENC_ENCODER " XSTR(CONFIG_AV1_NVENC_ENCODER))
#endif
#ifdef CONFIG_AV1_QSV_ENCODER
 #pragma message("#define CONFIG_AV1_QSV_ENCODER " XSTR(CONFIG_AV1_QSV_ENCODER))
#endif
#ifdef CONFIG_AV1_AMF_ENCODER
 #pragma message("#define CONFIG_AV1_AMF_ENCODER " XSTR(CONFIG_AV1_AMF_ENCODER))
#endif
#ifdef CONFIG_AV1_VAAPI_ENCODER
 #pragma message("#define CONFIG_AV1_VAAPI_ENCODER " XSTR(CONFIG_AV1_VAAPI_ENCODER))
#endif
#ifdef CONFIG_LIBOPENH264_ENCODER
 #pragma message("#define CONFIG_LIBOPENH264_ENCODER " XSTR(CONFIG_LIBOPENH264_ENCODER))
#endif
#ifdef CONFIG_H264_AMF_ENCODER
 #pragma message("#define CONFIG_H264_AMF_ENCODER " XSTR(CONFIG_H264_AMF_ENCODER))
#endif
#ifdef CONFIG_H264_MF_ENCODER
 #pragma message("#define CONFIG_H264_MF_ENCODER " XSTR(CONFIG_H264_MF_ENCODER))
#endif
#ifdef CONFIG_H264_NVENC_ENCODER
 #pragma message("#define CONFIG_H264_NVENC_ENCODER " XSTR(CONFIG_H264_NVENC_ENCODER))
#endif
#ifdef CONFIG_H264_OMX_ENCODER
 #pragma message("#define CONFIG_H264_OMX_ENCODER " XSTR(CONFIG_H264_OMX_ENCODER))
#endif
#ifdef CONFIG_H264_QSV_ENCODER
 #pragma message("#define CONFIG_H264_QSV_ENCODER " XSTR(CONFIG_H264_QSV_ENCODER))
#endif
#ifdef CONFIG_H264_V4L2M2M_ENCODER
 #pragma message("#define CONFIG_H264_V4L2M2M_ENCODER " XSTR(CONFIG_H264_V4L2M2M_ENCODER))
#endif
#ifdef CONFIG_H264_VAAPI_ENCODER
 #pragma message("#define CONFIG_H264_VAAPI_ENCODER " XSTR(CONFIG_H264_VAAPI_ENCODER))
#endif
#ifdef CONFIG_H264_VIDEOTOOLBOX_ENCODER
 #pragma message("#define CONFIG_H264_VIDEOTOOLBOX_ENCODER " XSTR(CONFIG_H264_VIDEOTOOLBOX_ENCODER))
#endif
#ifdef CONFIG_HEVC_AMF_ENCODER
 #pragma message("#define CONFIG_HEVC_AMF_ENCODER " XSTR(CONFIG_HEVC_AMF_ENCODER))
#endif
#ifdef CONFIG_HEVC_MEDIACODEC_ENCODER
 #pragma message("#define CONFIG_HEVC_MEDIACODEC_ENCODER " XSTR(CONFIG_HEVC_MEDIACODEC_ENCODER))
#endif
#ifdef CONFIG_HEVC_MF_ENCODER
 #pragma message("#define CONFIG_HEVC_MF_ENCODER " XSTR(CONFIG_HEVC_MF_ENCODER))
#endif
#ifdef CONFIG_HEVC_NVENC_ENCODER
 #pragma message("#define CONFIG_HEVC_NVENC_ENCODER " XSTR(CONFIG_HEVC_NVENC_ENCODER))
#endif
#ifdef CONFIG_HEVC_QSV_ENCODER
 #pragma message("#define CONFIG_HEVC_QSV_ENCODER " XSTR(CONFIG_HEVC_QSV_ENCODER))
#endif
#ifdef CONFIG_HEVC_V4L2M2M_ENCODER
 #pragma message("#define CONFIG_HEVC_V4L2M2M_ENCODER " XSTR(CONFIG_HEVC_V4L2M2M_ENCODER))
#endif
#ifdef CONFIG_HEVC_VAAPI_ENCODER
 #pragma message("#define CONFIG_HEVC_VAAPI_ENCODER " XSTR(CONFIG_HEVC_VAAPI_ENCODER))
#endif
#ifdef CONFIG_HEVC_VIDEOTOOLBOX_ENCODER
 #pragma message("#define CONFIG_HEVC_VIDEOTOOLBOX_ENCODER " XSTR(CONFIG_HEVC_VIDEOTOOLBOX_ENCODER))
#endif
#ifdef CONFIG_LIBKVAZAAR_ENCODER
 #pragma message("#define CONFIG_LIBKVAZAAR_ENCODER " XSTR(CONFIG_LIBKVAZAAR_ENCODER))
#endif
#ifdef CONFIG_MJPEG_QSV_ENCODER
 #pragma message("#define CONFIG_MJPEG_QSV_ENCODER " XSTR(CONFIG_MJPEG_QSV_ENCODER))
#endif
#ifdef CONFIG_MJPEG_VAAPI_ENCODER
 #pragma message("#define CONFIG_MJPEG_VAAPI_ENCODER " XSTR(CONFIG_MJPEG_VAAPI_ENCODER))
#endif
#ifdef CONFIG_MP3_MF_ENCODER
 #pragma message("#define CONFIG_MP3_MF_ENCODER " XSTR(CONFIG_MP3_MF_ENCODER))
#endif
#ifdef CONFIG_MPEG2_QSV_ENCODER
 #pragma message("#define CONFIG_MPEG2_QSV_ENCODER " XSTR(CONFIG_MPEG2_QSV_ENCODER))
#endif
#ifdef CONFIG_MPEG2_VAAPI_ENCODER
 #pragma message("#define CONFIG_MPEG2_VAAPI_ENCODER " XSTR(CONFIG_MPEG2_VAAPI_ENCODER))
#endif
#ifdef CONFIG_MPEG4_MEDIACODEC_ENCODER
 #pragma message("#define CONFIG_MPEG4_MEDIACODEC_ENCODER " XSTR(CONFIG_MPEG4_MEDIACODEC_ENCODER))
#endif
#ifdef CONFIG_MPEG4_OMX_ENCODER
 #pragma message("#define CONFIG_MPEG4_OMX_ENCODER " XSTR(CONFIG_MPEG4_OMX_ENCODER))
#endif
#ifdef CONFIG_MPEG4_V4L2M2M_ENCODER
 #pragma message("#define CONFIG_MPEG4_V4L2M2M_ENCODER " XSTR(CONFIG_MPEG4_V4L2M2M_ENCODER))
#endif
#ifdef CONFIG_PRORES_VIDEOTOOLBOX_ENCODER
 #pragma message("#define CONFIG_PRORES_VIDEOTOOLBOX_ENCODER " XSTR(CONFIG_PRORES_VIDEOTOOLBOX_ENCODER))
#endif
#ifdef CONFIG_VP8_MEDIACODEC_ENCODER
 #pragma message("#define CONFIG_VP8_MEDIACODEC_ENCODER " XSTR(CONFIG_VP8_MEDIACODEC_ENCODER))
#endif
#ifdef CONFIG_VP8_V4L2M2M_ENCODER
 #pragma message("#define CONFIG_VP8_V4L2M2M_ENCODER " XSTR(CONFIG_VP8_V4L2M2M_ENCODER))
#endif
#ifdef CONFIG_VP8_VAAPI_ENCODER
 #pragma message("#define CONFIG_VP8_VAAPI_ENCODER " XSTR(CONFIG_VP8_VAAPI_ENCODER))
#endif
#ifdef CONFIG_VP9_MEDIACODEC_ENCODER
 #pragma message("#define CONFIG_VP9_MEDIACODEC_ENCODER " XSTR(CONFIG_VP9_MEDIACODEC_ENCODER))
#endif
#ifdef CONFIG_VP9_VAAPI_ENCODER
 #pragma message("#define CONFIG_VP9_VAAPI_ENCODER " XSTR(CONFIG_VP9_VAAPI_ENCODER))
#endif
#ifdef CONFIG_VP9_QSV_ENCODER
 #pragma message("#define CONFIG_VP9_QSV_ENCODER " XSTR(CONFIG_VP9_QSV_ENCODER))
#endif
#ifdef CONFIG_VNULL_ENCODER
 #pragma message("#define CONFIG_VNULL_ENCODER " XSTR(CONFIG_VNULL_ENCODER))
#endif
#ifdef CONFIG_ANULL_ENCODER
 #pragma message("#define CONFIG_ANULL_ENCODER " XSTR(CONFIG_ANULL_ENCODER))
#endif
#ifdef CONFIG_AV1_D3D11VA_HWACCEL
 #pragma message("#define CONFIG_AV1_D3D11VA_HWACCEL " XSTR(CONFIG_AV1_D3D11VA_HWACCEL))
#endif
#ifdef CONFIG_AV1_D3D11VA2_HWACCEL
 #pragma message("#define CONFIG_AV1_D3D11VA2_HWACCEL " XSTR(CONFIG_AV1_D3D11VA2_HWACCEL))
#endif
#ifdef CONFIG_AV1_D3D12VA_HWACCEL
 #pragma message("#define CONFIG_AV1_D3D12VA_HWACCEL " XSTR(CONFIG_AV1_D3D12VA_HWACCEL))
#endif
#ifdef CONFIG_AV1_DXVA2_HWACCEL
 #pragma message("#define CONFIG_AV1_DXVA2_HWACCEL " XSTR(CONFIG_AV1_DXVA2_HWACCEL))
#endif
#ifdef CONFIG_AV1_NVDEC_HWACCEL
 #pragma message("#define CONFIG_AV1_NVDEC_HWACCEL " XSTR(CONFIG_AV1_NVDEC_HWACCEL))
#endif
#ifdef CONFIG_AV1_VAAPI_HWACCEL
 #pragma message("#define CONFIG_AV1_VAAPI_HWACCEL " XSTR(CONFIG_AV1_VAAPI_HWACCEL))
#endif
#ifdef CONFIG_AV1_VDPAU_HWACCEL
 #pragma message("#define CONFIG_AV1_VDPAU_HWACCEL " XSTR(CONFIG_AV1_VDPAU_HWACCEL))
#endif
#ifdef CONFIG_AV1_VULKAN_HWACCEL
 #pragma message("#define CONFIG_AV1_VULKAN_HWACCEL " XSTR(CONFIG_AV1_VULKAN_HWACCEL))
#endif
#ifdef CONFIG_H263_VAAPI_HWACCEL
 #pragma message("#define CONFIG_H263_VAAPI_HWACCEL " XSTR(CONFIG_H263_VAAPI_HWACCEL))
#endif
#ifdef CONFIG_H263_VIDEOTOOLBOX_HWACCEL
 #pragma message("#define CONFIG_H263_VIDEOTOOLBOX_HWACCEL " XSTR(CONFIG_H263_VIDEOTOOLBOX_HWACCEL))
#endif
#ifdef CONFIG_H264_D3D11VA_HWACCEL
 #pragma message("#define CONFIG_H264_D3D11VA_HWACCEL " XSTR(CONFIG_H264_D3D11VA_HWACCEL))
#endif
#ifdef CONFIG_H264_D3D11VA2_HWACCEL
 #pragma message("#define CONFIG_H264_D3D11VA2_HWACCEL " XSTR(CONFIG_H264_D3D11VA2_HWACCEL))
#endif
#ifdef CONFIG_H264_D3D12VA_HWACCEL
 #pragma message("#define CONFIG_H264_D3D12VA_HWACCEL " XSTR(CONFIG_H264_D3D12VA_HWACCEL))
#endif
#ifdef CONFIG_H264_DXVA2_HWACCEL
 #pragma message("#define CONFIG_H264_DXVA2_HWACCEL " XSTR(CONFIG_H264_DXVA2_HWACCEL))
#endif
#ifdef CONFIG_H264_NVDEC_HWACCEL
 #pragma message("#define CONFIG_H264_NVDEC_HWACCEL " XSTR(CONFIG_H264_NVDEC_HWACCEL))
#endif
#ifdef CONFIG_H264_VAAPI_HWACCEL
 #pragma message("#define CONFIG_H264_VAAPI_HWACCEL " XSTR(CONFIG_H264_VAAPI_HWACCEL))
#endif
#ifdef CONFIG_H264_VDPAU_HWACCEL
 #pragma message("#define CONFIG_H264_VDPAU_HWACCEL " XSTR(CONFIG_H264_VDPAU_HWACCEL))
#endif
#ifdef CONFIG_H264_VIDEOTOOLBOX_HWACCEL
 #pragma message("#define CONFIG_H264_VIDEOTOOLBOX_HWACCEL " XSTR(CONFIG_H264_VIDEOTOOLBOX_HWACCEL))
#endif
#ifdef CONFIG_H264_VULKAN_HWACCEL
 #pragma message("#define CONFIG_H264_VULKAN_HWACCEL " XSTR(CONFIG_H264_VULKAN_HWACCEL))
#endif
#ifdef CONFIG_HEVC_D3D11VA_HWACCEL
 #pragma message("#define CONFIG_HEVC_D3D11VA_HWACCEL " XSTR(CONFIG_HEVC_D3D11VA_HWACCEL))
#endif
#ifdef CONFIG_HEVC_D3D11VA2_HWACCEL
 #pragma message("#define CONFIG_HEVC_D3D11VA2_HWACCEL " XSTR(CONFIG_HEVC_D3D11VA2_HWACCEL))
#endif
#ifdef CONFIG_HEVC_D3D12VA_HWACCEL
 #pragma message("#define CONFIG_HEVC_D3D12VA_HWACCEL " XSTR(CONFIG_HEVC_D3D12VA_HWACCEL))
#endif
#ifdef CONFIG_HEVC_DXVA2_HWACCEL
 #pragma message("#define CONFIG_HEVC_DXVA2_HWACCEL " XSTR(CONFIG_HEVC_DXVA2_HWACCEL))
#endif
#ifdef CONFIG_HEVC_NVDEC_HWACCEL
 #pragma message("#define CONFIG_HEVC_NVDEC_HWACCEL " XSTR(CONFIG_HEVC_NVDEC_HWACCEL))
#endif
#ifdef CONFIG_HEVC_VAAPI_HWACCEL
 #pragma message("#define CONFIG_HEVC_VAAPI_HWACCEL " XSTR(CONFIG_HEVC_VAAPI_HWACCEL))
#endif
#ifdef CONFIG_HEVC_VDPAU_HWACCEL
 #pragma message("#define CONFIG_HEVC_VDPAU_HWACCEL " XSTR(CONFIG_HEVC_VDPAU_HWACCEL))
#endif
#ifdef CONFIG_HEVC_VIDEOTOOLBOX_HWACCEL
 #pragma message("#define CONFIG_HEVC_VIDEOTOOLBOX_HWACCEL " XSTR(CONFIG_HEVC_VIDEOTOOLBOX_HWACCEL))
#endif
#ifdef CONFIG_HEVC_VULKAN_HWACCEL
 #pragma message("#define CONFIG_HEVC_VULKAN_HWACCEL " XSTR(CONFIG_HEVC_VULKAN_HWACCEL))
#endif
#ifdef CONFIG_MJPEG_NVDEC_HWACCEL
 #pragma message("#define CONFIG_MJPEG_NVDEC_HWACCEL " XSTR(CONFIG_MJPEG_NVDEC_HWACCEL))
#endif
#ifdef CONFIG_MJPEG_VAAPI_HWACCEL
 #pragma message("#define CONFIG_MJPEG_VAAPI_HWACCEL " XSTR(CONFIG_MJPEG_VAAPI_HWACCEL))
#endif
#ifdef CONFIG_MPEG1_NVDEC_HWACCEL
 #pragma message("#define CONFIG_MPEG1_NVDEC_HWACCEL " XSTR(CONFIG_MPEG1_NVDEC_HWACCEL))
#endif
#ifdef CONFIG_MPEG1_VDPAU_HWACCEL
 #pragma message("#define CONFIG_MPEG1_VDPAU_HWACCEL " XSTR(CONFIG_MPEG1_VDPAU_HWACCEL))
#endif
#ifdef CONFIG_MPEG1_VIDEOTOOLBOX_HWACCEL
 #pragma message("#define CONFIG_MPEG1_VIDEOTOOLBOX_HWACCEL " XSTR(CONFIG_MPEG1_VIDEOTOOLBOX_HWACCEL))
#endif
#ifdef CONFIG_MPEG2_D3D11VA_HWACCEL
 #pragma message("#define CONFIG_MPEG2_D3D11VA_HWACCEL " XSTR(CONFIG_MPEG2_D3D11VA_HWACCEL))
#endif
#ifdef CONFIG_MPEG2_D3D11VA2_HWACCEL
 #pragma message("#define CONFIG_MPEG2_D3D11VA2_HWACCEL " XSTR(CONFIG_MPEG2_D3D11VA2_HWACCEL))
#endif
#ifdef CONFIG_MPEG2_D3D12VA_HWACCEL
 #pragma message("#define CONFIG_MPEG2_D3D12VA_HWACCEL " XSTR(CONFIG_MPEG2_D3D12VA_HWACCEL))
#endif
#ifdef CONFIG_MPEG2_DXVA2_HWACCEL
 #pragma message("#define CONFIG_MPEG2_DXVA2_HWACCEL " XSTR(CONFIG_MPEG2_DXVA2_HWACCEL))
#endif
#ifdef CONFIG_MPEG2_NVDEC_HWACCEL
 #pragma message("#define CONFIG_MPEG2_NVDEC_HWACCEL " XSTR(CONFIG_MPEG2_NVDEC_HWACCEL))
#endif
#ifdef CONFIG_MPEG2_VAAPI_HWACCEL
 #pragma message("#define CONFIG_MPEG2_VAAPI_HWACCEL " XSTR(CONFIG_MPEG2_VAAPI_HWACCEL))
#endif
#ifdef CONFIG_MPEG2_VDPAU_HWACCEL
 #pragma message("#define CONFIG_MPEG2_VDPAU_HWACCEL " XSTR(CONFIG_MPEG2_VDPAU_HWACCEL))
#endif
#ifdef CONFIG_MPEG2_VIDEOTOOLBOX_HWACCEL
 #pragma message("#define CONFIG_MPEG2_VIDEOTOOLBOX_HWACCEL " XSTR(CONFIG_MPEG2_VIDEOTOOLBOX_HWACCEL))
#endif
#ifdef CONFIG_MPEG4_NVDEC_HWACCEL
 #pragma message("#define CONFIG_MPEG4_NVDEC_HWACCEL " XSTR(CONFIG_MPEG4_NVDEC_HWACCEL))
#endif
#ifdef CONFIG_MPEG4_VAAPI_HWACCEL
 #pragma message("#define CONFIG_MPEG4_VAAPI_HWACCEL " XSTR(CONFIG_MPEG4_VAAPI_HWACCEL))
#endif
#ifdef CONFIG_MPEG4_VDPAU_HWACCEL
 #pragma message("#define CONFIG_MPEG4_VDPAU_HWACCEL " XSTR(CONFIG_MPEG4_VDPAU_HWACCEL))
#endif
#ifdef CONFIG_MPEG4_VIDEOTOOLBOX_HWACCEL
 #pragma message("#define CONFIG_MPEG4_VIDEOTOOLBOX_HWACCEL " XSTR(CONFIG_MPEG4_VIDEOTOOLBOX_HWACCEL))
#endif
#ifdef CONFIG_PRORES_VIDEOTOOLBOX_HWACCEL
 #pragma message("#define CONFIG_PRORES_VIDEOTOOLBOX_HWACCEL " XSTR(CONFIG_PRORES_VIDEOTOOLBOX_HWACCEL))
#endif
#ifdef CONFIG_VC1_D3D11VA_HWACCEL
 #pragma message("#define CONFIG_VC1_D3D11VA_HWACCEL " XSTR(CONFIG_VC1_D3D11VA_HWACCEL))
#endif
#ifdef CONFIG_VC1_D3D11VA2_HWACCEL
 #pragma message("#define CONFIG_VC1_D3D11VA2_HWACCEL " XSTR(CONFIG_VC1_D3D11VA2_HWACCEL))
#endif
#ifdef CONFIG_VC1_D3D12VA_HWACCEL
 #pragma message("#define CONFIG_VC1_D3D12VA_HWACCEL " XSTR(CONFIG_VC1_D3D12VA_HWACCEL))
#endif
#ifdef CONFIG_VC1_DXVA2_HWACCEL
 #pragma message("#define CONFIG_VC1_DXVA2_HWACCEL " XSTR(CONFIG_VC1_DXVA2_HWACCEL))
#endif
#ifdef CONFIG_VC1_NVDEC_HWACCEL
 #pragma message("#define CONFIG_VC1_NVDEC_HWACCEL " XSTR(CONFIG_VC1_NVDEC_HWACCEL))
#endif
#ifdef CONFIG_VC1_VAAPI_HWACCEL
 #pragma message("#define CONFIG_VC1_VAAPI_HWACCEL " XSTR(CONFIG_VC1_VAAPI_HWACCEL))
#endif
#ifdef CONFIG_VC1_VDPAU_HWACCEL
 #pragma message("#define CONFIG_VC1_VDPAU_HWACCEL " XSTR(CONFIG_VC1_VDPAU_HWACCEL))
#endif
#ifdef CONFIG_VP8_NVDEC_HWACCEL
 #pragma message("#define CONFIG_VP8_NVDEC_HWACCEL " XSTR(CONFIG_VP8_NVDEC_HWACCEL))
#endif
#ifdef CONFIG_VP8_VAAPI_HWACCEL
 #pragma message("#define CONFIG_VP8_VAAPI_HWACCEL " XSTR(CONFIG_VP8_VAAPI_HWACCEL))
#endif
#ifdef CONFIG_VP9_D3D11VA_HWACCEL
 #pragma message("#define CONFIG_VP9_D3D11VA_HWACCEL " XSTR(CONFIG_VP9_D3D11VA_HWACCEL))
#endif
#ifdef CONFIG_VP9_D3D11VA2_HWACCEL
 #pragma message("#define CONFIG_VP9_D3D11VA2_HWACCEL " XSTR(CONFIG_VP9_D3D11VA2_HWACCEL))
#endif
#ifdef CONFIG_VP9_D3D12VA_HWACCEL
 #pragma message("#define CONFIG_VP9_D3D12VA_HWACCEL " XSTR(CONFIG_VP9_D3D12VA_HWACCEL))
#endif
#ifdef CONFIG_VP9_DXVA2_HWACCEL
 #pragma message("#define CONFIG_VP9_DXVA2_HWACCEL " XSTR(CONFIG_VP9_DXVA2_HWACCEL))
#endif
#ifdef CONFIG_VP9_NVDEC_HWACCEL
 #pragma message("#define CONFIG_VP9_NVDEC_HWACCEL " XSTR(CONFIG_VP9_NVDEC_HWACCEL))
#endif
#ifdef CONFIG_VP9_VAAPI_HWACCEL
 #pragma message("#define CONFIG_VP9_VAAPI_HWACCEL " XSTR(CONFIG_VP9_VAAPI_HWACCEL))
#endif
#ifdef CONFIG_VP9_VDPAU_HWACCEL
 #pragma message("#define CONFIG_VP9_VDPAU_HWACCEL " XSTR(CONFIG_VP9_VDPAU_HWACCEL))
#endif
#ifdef CONFIG_VP9_VIDEOTOOLBOX_HWACCEL
 #pragma message("#define CONFIG_VP9_VIDEOTOOLBOX_HWACCEL " XSTR(CONFIG_VP9_VIDEOTOOLBOX_HWACCEL))
#endif
#ifdef CONFIG_WMV3_D3D11VA_HWACCEL
 #pragma message("#define CONFIG_WMV3_D3D11VA_HWACCEL " XSTR(CONFIG_WMV3_D3D11VA_HWACCEL))
#endif
#ifdef CONFIG_WMV3_D3D11VA2_HWACCEL
 #pragma message("#define CONFIG_WMV3_D3D11VA2_HWACCEL " XSTR(CONFIG_WMV3_D3D11VA2_HWACCEL))
#endif
#ifdef CONFIG_WMV3_D3D12VA_HWACCEL
 #pragma message("#define CONFIG_WMV3_D3D12VA_HWACCEL " XSTR(CONFIG_WMV3_D3D12VA_HWACCEL))
#endif
#ifdef CONFIG_WMV3_DXVA2_HWACCEL
 #pragma message("#define CONFIG_WMV3_DXVA2_HWACCEL " XSTR(CONFIG_WMV3_DXVA2_HWACCEL))
#endif
#ifdef CONFIG_WMV3_NVDEC_HWACCEL
 #pragma message("#define CONFIG_WMV3_NVDEC_HWACCEL " XSTR(CONFIG_WMV3_NVDEC_HWACCEL))
#endif
#ifdef CONFIG_WMV3_VAAPI_HWACCEL
 #pragma message("#define CONFIG_WMV3_VAAPI_HWACCEL " XSTR(CONFIG_WMV3_VAAPI_HWACCEL))
#endif
#ifdef CONFIG_WMV3_VDPAU_HWACCEL
 #pragma message("#define CONFIG_WMV3_VDPAU_HWACCEL " XSTR(CONFIG_WMV3_VDPAU_HWACCEL))
#endif
#ifdef CONFIG_AAC_PARSER
 #pragma message("#define CONFIG_AAC_PARSER " XSTR(CONFIG_AAC_PARSER))
#endif
#ifdef CONFIG_AAC_LATM_PARSER
 #pragma message("#define CONFIG_AAC_LATM_PARSER " XSTR(CONFIG_AAC_LATM_PARSER))
#endif
#ifdef CONFIG_AC3_PARSER
 #pragma message("#define CONFIG_AC3_PARSER " XSTR(CONFIG_AC3_PARSER))
#endif
#ifdef CONFIG_ADX_PARSER
 #pragma message("#define CONFIG_ADX_PARSER " XSTR(CONFIG_ADX_PARSER))
#endif
#ifdef CONFIG_AMR_PARSER
 #pragma message("#define CONFIG_AMR_PARSER " XSTR(CONFIG_AMR_PARSER))
#endif
#ifdef CONFIG_AV1_PARSER
 #pragma message("#define CONFIG_AV1_PARSER " XSTR(CONFIG_AV1_PARSER))
#endif
#ifdef CONFIG_AVS2_PARSER
 #pragma message("#define CONFIG_AVS2_PARSER " XSTR(CONFIG_AVS2_PARSER))
#endif
#ifdef CONFIG_AVS3_PARSER
 #pragma message("#define CONFIG_AVS3_PARSER " XSTR(CONFIG_AVS3_PARSER))
#endif
#ifdef CONFIG_BMP_PARSER
 #pragma message("#define CONFIG_BMP_PARSER " XSTR(CONFIG_BMP_PARSER))
#endif
#ifdef CONFIG_CAVSVIDEO_PARSER
 #pragma message("#define CONFIG_CAVSVIDEO_PARSER " XSTR(CONFIG_CAVSVIDEO_PARSER))
#endif
#ifdef CONFIG_COOK_PARSER
 #pragma message("#define CONFIG_COOK_PARSER " XSTR(CONFIG_COOK_PARSER))
#endif
#ifdef CONFIG_CRI_PARSER
 #pragma message("#define CONFIG_CRI_PARSER " XSTR(CONFIG_CRI_PARSER))
#endif
#ifdef CONFIG_DCA_PARSER
 #pragma message("#define CONFIG_DCA_PARSER " XSTR(CONFIG_DCA_PARSER))
#endif
#ifdef CONFIG_DIRAC_PARSER
 #pragma message("#define CONFIG_DIRAC_PARSER " XSTR(CONFIG_DIRAC_PARSER))
#endif
#ifdef CONFIG_DNXHD_PARSER
 #pragma message("#define CONFIG_DNXHD_PARSER " XSTR(CONFIG_DNXHD_PARSER))
#endif
#ifdef CONFIG_DOLBY_E_PARSER
 #pragma message("#define CONFIG_DOLBY_E_PARSER " XSTR(CONFIG_DOLBY_E_PARSER))
#endif
#ifdef CONFIG_DPX_PARSER
 #pragma message("#define CONFIG_DPX_PARSER " XSTR(CONFIG_DPX_PARSER))
#endif
#ifdef CONFIG_DVAUDIO_PARSER
 #pragma message("#define CONFIG_DVAUDIO_PARSER " XSTR(CONFIG_DVAUDIO_PARSER))
#endif
#ifdef CONFIG_DVBSUB_PARSER
 #pragma message("#define CONFIG_DVBSUB_PARSER " XSTR(CONFIG_DVBSUB_PARSER))
#endif
#ifdef CONFIG_DVDSUB_PARSER
 #pragma message("#define CONFIG_DVDSUB_PARSER " XSTR(CONFIG_DVDSUB_PARSER))
#endif
#ifdef CONFIG_DVD_NAV_PARSER
 #pragma message("#define CONFIG_DVD_NAV_PARSER " XSTR(CONFIG_DVD_NAV_PARSER))
#endif
#ifdef CONFIG_EVC_PARSER
 #pragma message("#define CONFIG_EVC_PARSER " XSTR(CONFIG_EVC_PARSER))
#endif
#ifdef CONFIG_FLAC_PARSER
 #pragma message("#define CONFIG_FLAC_PARSER " XSTR(CONFIG_FLAC_PARSER))
#endif
#ifdef CONFIG_FTR_PARSER
 #pragma message("#define CONFIG_FTR_PARSER " XSTR(CONFIG_FTR_PARSER))
#endif
#ifdef CONFIG_G723_1_PARSER
 #pragma message("#define CONFIG_G723_1_PARSER " XSTR(CONFIG_G723_1_PARSER))
#endif
#ifdef CONFIG_G729_PARSER
 #pragma message("#define CONFIG_G729_PARSER " XSTR(CONFIG_G729_PARSER))
#endif
#ifdef CONFIG_GIF_PARSER
 #pragma message("#define CONFIG_GIF_PARSER " XSTR(CONFIG_GIF_PARSER))
#endif
#ifdef CONFIG_GSM_PARSER
 #pragma message("#define CONFIG_GSM_PARSER " XSTR(CONFIG_GSM_PARSER))
#endif
#ifdef CONFIG_H261_PARSER
 #pragma message("#define CONFIG_H261_PARSER " XSTR(CONFIG_H261_PARSER))
#endif
#ifdef CONFIG_H263_PARSER
 #pragma message("#define CONFIG_H263_PARSER " XSTR(CONFIG_H263_PARSER))
#endif
#ifdef CONFIG_H264_PARSER
 #pragma message("#define CONFIG_H264_PARSER " XSTR(CONFIG_H264_PARSER))
#endif
#ifdef CONFIG_HEVC_PARSER
 #pragma message("#define CONFIG_HEVC_PARSER " XSTR(CONFIG_HEVC_PARSER))
#endif
#ifdef CONFIG_HDR_PARSER
 #pragma message("#define CONFIG_HDR_PARSER " XSTR(CONFIG_HDR_PARSER))
#endif
#ifdef CONFIG_IPU_PARSER
 #pragma message("#define CONFIG_IPU_PARSER " XSTR(CONFIG_IPU_PARSER))
#endif
#ifdef CONFIG_JPEG2000_PARSER
 #pragma message("#define CONFIG_JPEG2000_PARSER " XSTR(CONFIG_JPEG2000_PARSER))
#endif
#ifdef CONFIG_JPEGXL_PARSER
 #pragma message("#define CONFIG_JPEGXL_PARSER " XSTR(CONFIG_JPEGXL_PARSER))
#endif
#ifdef CONFIG_MISC4_PARSER
 #pragma message("#define CONFIG_MISC4_PARSER " XSTR(CONFIG_MISC4_PARSER))
#endif
#ifdef CONFIG_MJPEG_PARSER
 #pragma message("#define CONFIG_MJPEG_PARSER " XSTR(CONFIG_MJPEG_PARSER))
#endif
#ifdef CONFIG_MLP_PARSER
 #pragma message("#define CONFIG_MLP_PARSER " XSTR(CONFIG_MLP_PARSER))
#endif
#ifdef CONFIG_MPEG4VIDEO_PARSER
 #pragma message("#define CONFIG_MPEG4VIDEO_PARSER " XSTR(CONFIG_MPEG4VIDEO_PARSER))
#endif
#ifdef CONFIG_MPEGAUDIO_PARSER
 #pragma message("#define CONFIG_MPEGAUDIO_PARSER " XSTR(CONFIG_MPEGAUDIO_PARSER))
#endif
#ifdef CONFIG_MPEGVIDEO_PARSER
 #pragma message("#define CONFIG_MPEGVIDEO_PARSER " XSTR(CONFIG_MPEGVIDEO_PARSER))
#endif
#ifdef CONFIG_OPUS_PARSER
 #pragma message("#define CONFIG_OPUS_PARSER " XSTR(CONFIG_OPUS_PARSER))
#endif
#ifdef CONFIG_PNG_PARSER
 #pragma message("#define CONFIG_PNG_PARSER " XSTR(CONFIG_PNG_PARSER))
#endif
#ifdef CONFIG_PNM_PARSER
 #pragma message("#define CONFIG_PNM_PARSER " XSTR(CONFIG_PNM_PARSER))
#endif
#ifdef CONFIG_QOI_PARSER
 #pragma message("#define CONFIG_QOI_PARSER " XSTR(CONFIG_QOI_PARSER))
#endif
#ifdef CONFIG_RV34_PARSER
 #pragma message("#define CONFIG_RV34_PARSER " XSTR(CONFIG_RV34_PARSER))
#endif
#ifdef CONFIG_SBC_PARSER
 #pragma message("#define CONFIG_SBC_PARSER " XSTR(CONFIG_SBC_PARSER))
#endif
#ifdef CONFIG_SIPR_PARSER
 #pragma message("#define CONFIG_SIPR_PARSER " XSTR(CONFIG_SIPR_PARSER))
#endif
#ifdef CONFIG_TAK_PARSER
 #pragma message("#define CONFIG_TAK_PARSER " XSTR(CONFIG_TAK_PARSER))
#endif
#ifdef CONFIG_VC1_PARSER
 #pragma message("#define CONFIG_VC1_PARSER " XSTR(CONFIG_VC1_PARSER))
#endif
#ifdef CONFIG_VORBIS_PARSER
 #pragma message("#define CONFIG_VORBIS_PARSER " XSTR(CONFIG_VORBIS_PARSER))
#endif
#ifdef CONFIG_VP3_PARSER
 #pragma message("#define CONFIG_VP3_PARSER " XSTR(CONFIG_VP3_PARSER))
#endif
#ifdef CONFIG_VP8_PARSER
 #pragma message("#define CONFIG_VP8_PARSER " XSTR(CONFIG_VP8_PARSER))
#endif
#ifdef CONFIG_VP9_PARSER
 #pragma message("#define CONFIG_VP9_PARSER " XSTR(CONFIG_VP9_PARSER))
#endif
#ifdef CONFIG_VVC_PARSER
 #pragma message("#define CONFIG_VVC_PARSER " XSTR(CONFIG_VVC_PARSER))
#endif
#ifdef CONFIG_WEBP_PARSER
 #pragma message("#define CONFIG_WEBP_PARSER " XSTR(CONFIG_WEBP_PARSER))
#endif
#ifdef CONFIG_XBM_PARSER
 #pragma message("#define CONFIG_XBM_PARSER " XSTR(CONFIG_XBM_PARSER))
#endif
#ifdef CONFIG_XMA_PARSER
 #pragma message("#define CONFIG_XMA_PARSER " XSTR(CONFIG_XMA_PARSER))
#endif
#ifdef CONFIG_XWD_PARSER
 #pragma message("#define CONFIG_XWD_PARSER " XSTR(CONFIG_XWD_PARSER))
#endif
#ifdef CONFIG_ALSA_INDEV
 #pragma message("#define CONFIG_ALSA_INDEV " XSTR(CONFIG_ALSA_INDEV))
#endif
#ifdef CONFIG_ANDROID_CAMERA_INDEV
 #pragma message("#define CONFIG_ANDROID_CAMERA_INDEV " XSTR(CONFIG_ANDROID_CAMERA_INDEV))
#endif
#ifdef CONFIG_AVFOUNDATION_INDEV
 #pragma message("#define CONFIG_AVFOUNDATION_INDEV " XSTR(CONFIG_AVFOUNDATION_INDEV))
#endif
#ifdef CONFIG_BKTR_INDEV
 #pragma message("#define CONFIG_BKTR_INDEV " XSTR(CONFIG_BKTR_INDEV))
#endif
#ifdef CONFIG_DECKLINK_INDEV
 #pragma message("#define CONFIG_DECKLINK_INDEV " XSTR(CONFIG_DECKLINK_INDEV))
#endif
#ifdef CONFIG_DSHOW_INDEV
 #pragma message("#define CONFIG_DSHOW_INDEV " XSTR(CONFIG_DSHOW_INDEV))
#endif
#ifdef CONFIG_FBDEV_INDEV
 #pragma message("#define CONFIG_FBDEV_INDEV " XSTR(CONFIG_FBDEV_INDEV))
#endif
#ifdef CONFIG_GDIGRAB_INDEV
 #pragma message("#define CONFIG_GDIGRAB_INDEV " XSTR(CONFIG_GDIGRAB_INDEV))
#endif
#ifdef CONFIG_IEC61883_INDEV
 #pragma message("#define CONFIG_IEC61883_INDEV " XSTR(CONFIG_IEC61883_INDEV))
#endif
#ifdef CONFIG_JACK_INDEV
 #pragma message("#define CONFIG_JACK_INDEV " XSTR(CONFIG_JACK_INDEV))
#endif
#ifdef CONFIG_KMSGRAB_INDEV
 #pragma message("#define CONFIG_KMSGRAB_INDEV " XSTR(CONFIG_KMSGRAB_INDEV))
#endif
#ifdef CONFIG_LAVFI_INDEV
 #pragma message("#define CONFIG_LAVFI_INDEV " XSTR(CONFIG_LAVFI_INDEV))
#endif
#ifdef CONFIG_OPENAL_INDEV
 #pragma message("#define CONFIG_OPENAL_INDEV " XSTR(CONFIG_OPENAL_INDEV))
#endif
#ifdef CONFIG_OSS_INDEV
 #pragma message("#define CONFIG_OSS_INDEV " XSTR(CONFIG_OSS_INDEV))
#endif
#ifdef CONFIG_PULSE_INDEV
 #pragma message("#define CONFIG_PULSE_INDEV " XSTR(CONFIG_PULSE_INDEV))
#endif
#ifdef CONFIG_SNDIO_INDEV
 #pragma message("#define CONFIG_SNDIO_INDEV " XSTR(CONFIG_SNDIO_INDEV))
#endif
#ifdef CONFIG_V4L2_INDEV
 #pragma message("#define CONFIG_V4L2_INDEV " XSTR(CONFIG_V4L2_INDEV))
#endif
#ifdef CONFIG_VFWCAP_INDEV
 #pragma message("#define CONFIG_VFWCAP_INDEV " XSTR(CONFIG_VFWCAP_INDEV))
#endif
#ifdef CONFIG_XCBGRAB_INDEV
 #pragma message("#define CONFIG_XCBGRAB_INDEV " XSTR(CONFIG_XCBGRAB_INDEV))
#endif
#ifdef CONFIG_LIBCDIO_INDEV
 #pragma message("#define CONFIG_LIBCDIO_INDEV " XSTR(CONFIG_LIBCDIO_INDEV))
#endif
#ifdef CONFIG_LIBDC1394_INDEV
 #pragma message("#define CONFIG_LIBDC1394_INDEV " XSTR(CONFIG_LIBDC1394_INDEV))
#endif
#ifdef CONFIG_ALSA_OUTDEV
 #pragma message("#define CONFIG_ALSA_OUTDEV " XSTR(CONFIG_ALSA_OUTDEV))
#endif
#ifdef CONFIG_AUDIOTOOLBOX_OUTDEV
 #pragma message("#define CONFIG_AUDIOTOOLBOX_OUTDEV " XSTR(CONFIG_AUDIOTOOLBOX_OUTDEV))
#endif
#ifdef CONFIG_CACA_OUTDEV
 #pragma message("#define CONFIG_CACA_OUTDEV " XSTR(CONFIG_CACA_OUTDEV))
#endif
#ifdef CONFIG_DECKLINK_OUTDEV
 #pragma message("#define CONFIG_DECKLINK_OUTDEV " XSTR(CONFIG_DECKLINK_OUTDEV))
#endif
#ifdef CONFIG_FBDEV_OUTDEV
 #pragma message("#define CONFIG_FBDEV_OUTDEV " XSTR(CONFIG_FBDEV_OUTDEV))
#endif
#ifdef CONFIG_OPENGL_OUTDEV
 #pragma message("#define CONFIG_OPENGL_OUTDEV " XSTR(CONFIG_OPENGL_OUTDEV))
#endif
#ifdef CONFIG_OSS_OUTDEV
 #pragma message("#define CONFIG_OSS_OUTDEV " XSTR(CONFIG_OSS_OUTDEV))
#endif
#ifdef CONFIG_PULSE_OUTDEV
 #pragma message("#define CONFIG_PULSE_OUTDEV " XSTR(CONFIG_PULSE_OUTDEV))
#endif
#ifdef CONFIG_SDL2_OUTDEV
 #pragma message("#define CONFIG_SDL2_OUTDEV " XSTR(CONFIG_SDL2_OUTDEV))
#endif
#ifdef CONFIG_SNDIO_OUTDEV
 #pragma message("#define CONFIG_SNDIO_OUTDEV " XSTR(CONFIG_SNDIO_OUTDEV))
#endif
#ifdef CONFIG_V4L2_OUTDEV
 #pragma message("#define CONFIG_V4L2_OUTDEV " XSTR(CONFIG_V4L2_OUTDEV))
#endif
#ifdef CONFIG_XV_OUTDEV
 #pragma message("#define CONFIG_XV_OUTDEV " XSTR(CONFIG_XV_OUTDEV))
#endif
#ifdef CONFIG_AAP_FILTER
 #pragma message("#define CONFIG_AAP_FILTER " XSTR(CONFIG_AAP_FILTER))
#endif
#ifdef CONFIG_ABENCH_FILTER
 #pragma message("#define CONFIG_ABENCH_FILTER " XSTR(CONFIG_ABENCH_FILTER))
#endif
#ifdef CONFIG_ACOMPRESSOR_FILTER
 #pragma message("#define CONFIG_ACOMPRESSOR_FILTER " XSTR(CONFIG_ACOMPRESSOR_FILTER))
#endif
#ifdef CONFIG_ACONTRAST_FILTER
 #pragma message("#define CONFIG_ACONTRAST_FILTER " XSTR(CONFIG_ACONTRAST_FILTER))
#endif
#ifdef CONFIG_ACOPY_FILTER
 #pragma message("#define CONFIG_ACOPY_FILTER " XSTR(CONFIG_ACOPY_FILTER))
#endif
#ifdef CONFIG_ACUE_FILTER
 #pragma message("#define CONFIG_ACUE_FILTER " XSTR(CONFIG_ACUE_FILTER))
#endif
#ifdef CONFIG_ACROSSFADE_FILTER
 #pragma message("#define CONFIG_ACROSSFADE_FILTER " XSTR(CONFIG_ACROSSFADE_FILTER))
#endif
#ifdef CONFIG_ACROSSOVER_FILTER
 #pragma message("#define CONFIG_ACROSSOVER_FILTER " XSTR(CONFIG_ACROSSOVER_FILTER))
#endif
#ifdef CONFIG_ACRUSHER_FILTER
 #pragma message("#define CONFIG_ACRUSHER_FILTER " XSTR(CONFIG_ACRUSHER_FILTER))
#endif
#ifdef CONFIG_ADECLICK_FILTER
 #pragma message("#define CONFIG_ADECLICK_FILTER " XSTR(CONFIG_ADECLICK_FILTER))
#endif
#ifdef CONFIG_ADECLIP_FILTER
 #pragma message("#define CONFIG_ADECLIP_FILTER " XSTR(CONFIG_ADECLIP_FILTER))
#endif
#ifdef CONFIG_ADECORRELATE_FILTER
 #pragma message("#define CONFIG_ADECORRELATE_FILTER " XSTR(CONFIG_ADECORRELATE_FILTER))
#endif
#ifdef CONFIG_ADELAY_FILTER
 #pragma message("#define CONFIG_ADELAY_FILTER " XSTR(CONFIG_ADELAY_FILTER))
#endif
#ifdef CONFIG_ADENORM_FILTER
 #pragma message("#define CONFIG_ADENORM_FILTER " XSTR(CONFIG_ADENORM_FILTER))
#endif
#ifdef CONFIG_ADERIVATIVE_FILTER
 #pragma message("#define CONFIG_ADERIVATIVE_FILTER " XSTR(CONFIG_ADERIVATIVE_FILTER))
#endif
#ifdef CONFIG_ADRC_FILTER
 #pragma message("#define CONFIG_ADRC_FILTER " XSTR(CONFIG_ADRC_FILTER))
#endif
#ifdef CONFIG_ADYNAMICEQUALIZER_FILTER
 #pragma message("#define CONFIG_ADYNAMICEQUALIZER_FILTER " XSTR(CONFIG_ADYNAMICEQUALIZER_FILTER))
#endif
#ifdef CONFIG_ADYNAMICSMOOTH_FILTER
 #pragma message("#define CONFIG_ADYNAMICSMOOTH_FILTER " XSTR(CONFIG_ADYNAMICSMOOTH_FILTER))
#endif
#ifdef CONFIG_AECHO_FILTER
 #pragma message("#define CONFIG_AECHO_FILTER " XSTR(CONFIG_AECHO_FILTER))
#endif
#ifdef CONFIG_AEMPHASIS_FILTER
 #pragma message("#define CONFIG_AEMPHASIS_FILTER " XSTR(CONFIG_AEMPHASIS_FILTER))
#endif
#ifdef CONFIG_AEVAL_FILTER
 #pragma message("#define CONFIG_AEVAL_FILTER " XSTR(CONFIG_AEVAL_FILTER))
#endif
#ifdef CONFIG_AEXCITER_FILTER
 #pragma message("#define CONFIG_AEXCITER_FILTER " XSTR(CONFIG_AEXCITER_FILTER))
#endif
#ifdef CONFIG_AFADE_FILTER
 #pragma message("#define CONFIG_AFADE_FILTER " XSTR(CONFIG_AFADE_FILTER))
#endif
#ifdef CONFIG_AFFTDN_FILTER
 #pragma message("#define CONFIG_AFFTDN_FILTER " XSTR(CONFIG_AFFTDN_FILTER))
#endif
#ifdef CONFIG_AFFTFILT_FILTER
 #pragma message("#define CONFIG_AFFTFILT_FILTER " XSTR(CONFIG_AFFTFILT_FILTER))
#endif
#ifdef CONFIG_AFIR_FILTER
 #pragma message("#define CONFIG_AFIR_FILTER " XSTR(CONFIG_AFIR_FILTER))
#endif
#ifdef CONFIG_AFORMAT_FILTER
 #pragma message("#define CONFIG_AFORMAT_FILTER " XSTR(CONFIG_AFORMAT_FILTER))
#endif
#ifdef CONFIG_AFREQSHIFT_FILTER
 #pragma message("#define CONFIG_AFREQSHIFT_FILTER " XSTR(CONFIG_AFREQSHIFT_FILTER))
#endif
#ifdef CONFIG_AFWTDN_FILTER
 #pragma message("#define CONFIG_AFWTDN_FILTER " XSTR(CONFIG_AFWTDN_FILTER))
#endif
#ifdef CONFIG_AGATE_FILTER
 #pragma message("#define CONFIG_AGATE_FILTER " XSTR(CONFIG_AGATE_FILTER))
#endif
#ifdef CONFIG_AIIR_FILTER
 #pragma message("#define CONFIG_AIIR_FILTER " XSTR(CONFIG_AIIR_FILTER))
#endif
#ifdef CONFIG_AINTEGRAL_FILTER
 #pragma message("#define CONFIG_AINTEGRAL_FILTER " XSTR(CONFIG_AINTEGRAL_FILTER))
#endif
#ifdef CONFIG_AINTERLEAVE_FILTER
 #pragma message("#define CONFIG_AINTERLEAVE_FILTER " XSTR(CONFIG_AINTERLEAVE_FILTER))
#endif
#ifdef CONFIG_ALATENCY_FILTER
 #pragma message("#define CONFIG_ALATENCY_FILTER " XSTR(CONFIG_ALATENCY_FILTER))
#endif
#ifdef CONFIG_ALIMITER_FILTER
 #pragma message("#define CONFIG_ALIMITER_FILTER " XSTR(CONFIG_ALIMITER_FILTER))
#endif
#ifdef CONFIG_ALLPASS_FILTER
 #pragma message("#define CONFIG_ALLPASS_FILTER " XSTR(CONFIG_ALLPASS_FILTER))
#endif
#ifdef CONFIG_ALOOP_FILTER
 #pragma message("#define CONFIG_ALOOP_FILTER " XSTR(CONFIG_ALOOP_FILTER))
#endif
#ifdef CONFIG_AMERGE_FILTER
 #pragma message("#define CONFIG_AMERGE_FILTER " XSTR(CONFIG_AMERGE_FILTER))
#endif
#ifdef CONFIG_AMETADATA_FILTER
 #pragma message("#define CONFIG_AMETADATA_FILTER " XSTR(CONFIG_AMETADATA_FILTER))
#endif
#ifdef CONFIG_AMIX_FILTER
 #pragma message("#define CONFIG_AMIX_FILTER " XSTR(CONFIG_AMIX_FILTER))
#endif
#ifdef CONFIG_AMULTIPLY_FILTER
 #pragma message("#define CONFIG_AMULTIPLY_FILTER " XSTR(CONFIG_AMULTIPLY_FILTER))
#endif
#ifdef CONFIG_ANEQUALIZER_FILTER
 #pragma message("#define CONFIG_ANEQUALIZER_FILTER " XSTR(CONFIG_ANEQUALIZER_FILTER))
#endif
#ifdef CONFIG_ANLMDN_FILTER
 #pragma message("#define CONFIG_ANLMDN_FILTER " XSTR(CONFIG_ANLMDN_FILTER))
#endif
#ifdef CONFIG_ANLMF_FILTER
 #pragma message("#define CONFIG_ANLMF_FILTER " XSTR(CONFIG_ANLMF_FILTER))
#endif
#ifdef CONFIG_ANLMS_FILTER
 #pragma message("#define CONFIG_ANLMS_FILTER " XSTR(CONFIG_ANLMS_FILTER))
#endif
#ifdef CONFIG_ANULL_FILTER
 #pragma message("#define CONFIG_ANULL_FILTER " XSTR(CONFIG_ANULL_FILTER))
#endif
#ifdef CONFIG_APAD_FILTER
 #pragma message("#define CONFIG_APAD_FILTER " XSTR(CONFIG_APAD_FILTER))
#endif
#ifdef CONFIG_APERMS_FILTER
 #pragma message("#define CONFIG_APERMS_FILTER " XSTR(CONFIG_APERMS_FILTER))
#endif
#ifdef CONFIG_APHASER_FILTER
 #pragma message("#define CONFIG_APHASER_FILTER " XSTR(CONFIG_APHASER_FILTER))
#endif
#ifdef CONFIG_APHASESHIFT_FILTER
 #pragma message("#define CONFIG_APHASESHIFT_FILTER " XSTR(CONFIG_APHASESHIFT_FILTER))
#endif
#ifdef CONFIG_APSNR_FILTER
 #pragma message("#define CONFIG_APSNR_FILTER " XSTR(CONFIG_APSNR_FILTER))
#endif
#ifdef CONFIG_APSYCLIP_FILTER
 #pragma message("#define CONFIG_APSYCLIP_FILTER " XSTR(CONFIG_APSYCLIP_FILTER))
#endif
#ifdef CONFIG_APULSATOR_FILTER
 #pragma message("#define CONFIG_APULSATOR_FILTER " XSTR(CONFIG_APULSATOR_FILTER))
#endif
#ifdef CONFIG_AREALTIME_FILTER
 #pragma message("#define CONFIG_AREALTIME_FILTER " XSTR(CONFIG_AREALTIME_FILTER))
#endif
#ifdef CONFIG_ARESAMPLE_FILTER
 #pragma message("#define CONFIG_ARESAMPLE_FILTER " XSTR(CONFIG_ARESAMPLE_FILTER))
#endif
#ifdef CONFIG_AREVERSE_FILTER
 #pragma message("#define CONFIG_AREVERSE_FILTER " XSTR(CONFIG_AREVERSE_FILTER))
#endif
#ifdef CONFIG_ARLS_FILTER
 #pragma message("#define CONFIG_ARLS_FILTER " XSTR(CONFIG_ARLS_FILTER))
#endif
#ifdef CONFIG_ARNNDN_FILTER
 #pragma message("#define CONFIG_ARNNDN_FILTER " XSTR(CONFIG_ARNNDN_FILTER))
#endif
#ifdef CONFIG_ASDR_FILTER
 #pragma message("#define CONFIG_ASDR_FILTER " XSTR(CONFIG_ASDR_FILTER))
#endif
#ifdef CONFIG_ASEGMENT_FILTER
 #pragma message("#define CONFIG_ASEGMENT_FILTER " XSTR(CONFIG_ASEGMENT_FILTER))
#endif
#ifdef CONFIG_ASELECT_FILTER
 #pragma message("#define CONFIG_ASELECT_FILTER " XSTR(CONFIG_ASELECT_FILTER))
#endif
#ifdef CONFIG_ASENDCMD_FILTER
 #pragma message("#define CONFIG_ASENDCMD_FILTER " XSTR(CONFIG_ASENDCMD_FILTER))
#endif
#ifdef CONFIG_ASETNSAMPLES_FILTER
 #pragma message("#define CONFIG_ASETNSAMPLES_FILTER " XSTR(CONFIG_ASETNSAMPLES_FILTER))
#endif
#ifdef CONFIG_ASETPTS_FILTER
 #pragma message("#define CONFIG_ASETPTS_FILTER " XSTR(CONFIG_ASETPTS_FILTER))
#endif
#ifdef CONFIG_ASETRATE_FILTER
 #pragma message("#define CONFIG_ASETRATE_FILTER " XSTR(CONFIG_ASETRATE_FILTER))
#endif
#ifdef CONFIG_ASETTB_FILTER
 #pragma message("#define CONFIG_ASETTB_FILTER " XSTR(CONFIG_ASETTB_FILTER))
#endif
#ifdef CONFIG_ASHOWINFO_FILTER
 #pragma message("#define CONFIG_ASHOWINFO_FILTER " XSTR(CONFIG_ASHOWINFO_FILTER))
#endif
#ifdef CONFIG_ASIDEDATA_FILTER
 #pragma message("#define CONFIG_ASIDEDATA_FILTER " XSTR(CONFIG_ASIDEDATA_FILTER))
#endif
#ifdef CONFIG_ASISDR_FILTER
 #pragma message("#define CONFIG_ASISDR_FILTER " XSTR(CONFIG_ASISDR_FILTER))
#endif
#ifdef CONFIG_ASOFTCLIP_FILTER
 #pragma message("#define CONFIG_ASOFTCLIP_FILTER " XSTR(CONFIG_ASOFTCLIP_FILTER))
#endif
#ifdef CONFIG_ASPECTRALSTATS_FILTER
 #pragma message("#define CONFIG_ASPECTRALSTATS_FILTER " XSTR(CONFIG_ASPECTRALSTATS_FILTER))
#endif
#ifdef CONFIG_ASPLIT_FILTER
 #pragma message("#define CONFIG_ASPLIT_FILTER " XSTR(CONFIG_ASPLIT_FILTER))
#endif
#ifdef CONFIG_ASR_FILTER
 #pragma message("#define CONFIG_ASR_FILTER " XSTR(CONFIG_ASR_FILTER))
#endif
#ifdef CONFIG_ASTATS_FILTER
 #pragma message("#define CONFIG_ASTATS_FILTER " XSTR(CONFIG_ASTATS_FILTER))
#endif
#ifdef CONFIG_ASTREAMSELECT_FILTER
 #pragma message("#define CONFIG_ASTREAMSELECT_FILTER " XSTR(CONFIG_ASTREAMSELECT_FILTER))
#endif
#ifdef CONFIG_ASUBBOOST_FILTER
 #pragma message("#define CONFIG_ASUBBOOST_FILTER " XSTR(CONFIG_ASUBBOOST_FILTER))
#endif
#ifdef CONFIG_ASUBCUT_FILTER
 #pragma message("#define CONFIG_ASUBCUT_FILTER " XSTR(CONFIG_ASUBCUT_FILTER))
#endif
#ifdef CONFIG_ASUPERCUT_FILTER
 #pragma message("#define CONFIG_ASUPERCUT_FILTER " XSTR(CONFIG_ASUPERCUT_FILTER))
#endif
#ifdef CONFIG_ASUPERPASS_FILTER
 #pragma message("#define CONFIG_ASUPERPASS_FILTER " XSTR(CONFIG_ASUPERPASS_FILTER))
#endif
#ifdef CONFIG_ASUPERSTOP_FILTER
 #pragma message("#define CONFIG_ASUPERSTOP_FILTER " XSTR(CONFIG_ASUPERSTOP_FILTER))
#endif
#ifdef CONFIG_ATEMPO_FILTER
 #pragma message("#define CONFIG_ATEMPO_FILTER " XSTR(CONFIG_ATEMPO_FILTER))
#endif
#ifdef CONFIG_ATILT_FILTER
 #pragma message("#define CONFIG_ATILT_FILTER " XSTR(CONFIG_ATILT_FILTER))
#endif
#ifdef CONFIG_ATRIM_FILTER
 #pragma message("#define CONFIG_ATRIM_FILTER " XSTR(CONFIG_ATRIM_FILTER))
#endif
#ifdef CONFIG_AXCORRELATE_FILTER
 #pragma message("#define CONFIG_AXCORRELATE_FILTER " XSTR(CONFIG_AXCORRELATE_FILTER))
#endif
#ifdef CONFIG_AZMQ_FILTER
 #pragma message("#define CONFIG_AZMQ_FILTER " XSTR(CONFIG_AZMQ_FILTER))
#endif
#ifdef CONFIG_BANDPASS_FILTER
 #pragma message("#define CONFIG_BANDPASS_FILTER " XSTR(CONFIG_BANDPASS_FILTER))
#endif
#ifdef CONFIG_BANDREJECT_FILTER
 #pragma message("#define CONFIG_BANDREJECT_FILTER " XSTR(CONFIG_BANDREJECT_FILTER))
#endif
#ifdef CONFIG_BASS_FILTER
 #pragma message("#define CONFIG_BASS_FILTER " XSTR(CONFIG_BASS_FILTER))
#endif
#ifdef CONFIG_BIQUAD_FILTER
 #pragma message("#define CONFIG_BIQUAD_FILTER " XSTR(CONFIG_BIQUAD_FILTER))
#endif
#ifdef CONFIG_BS2B_FILTER
 #pragma message("#define CONFIG_BS2B_FILTER " XSTR(CONFIG_BS2B_FILTER))
#endif
#ifdef CONFIG_CHANNELMAP_FILTER
 #pragma message("#define CONFIG_CHANNELMAP_FILTER " XSTR(CONFIG_CHANNELMAP_FILTER))
#endif
#ifdef CONFIG_CHANNELSPLIT_FILTER
 #pragma message("#define CONFIG_CHANNELSPLIT_FILTER " XSTR(CONFIG_CHANNELSPLIT_FILTER))
#endif
#ifdef CONFIG_CHORUS_FILTER
 #pragma message("#define CONFIG_CHORUS_FILTER " XSTR(CONFIG_CHORUS_FILTER))
#endif
#ifdef CONFIG_COMPAND_FILTER
 #pragma message("#define CONFIG_COMPAND_FILTER " XSTR(CONFIG_COMPAND_FILTER))
#endif
#ifdef CONFIG_COMPENSATIONDELAY_FILTER
 #pragma message("#define CONFIG_COMPENSATIONDELAY_FILTER " XSTR(CONFIG_COMPENSATIONDELAY_FILTER))
#endif
#ifdef CONFIG_CROSSFEED_FILTER
 #pragma message("#define CONFIG_CROSSFEED_FILTER " XSTR(CONFIG_CROSSFEED_FILTER))
#endif
#ifdef CONFIG_CRYSTALIZER_FILTER
 #pragma message("#define CONFIG_CRYSTALIZER_FILTER " XSTR(CONFIG_CRYSTALIZER_FILTER))
#endif
#ifdef CONFIG_DCSHIFT_FILTER
 #pragma message("#define CONFIG_DCSHIFT_FILTER " XSTR(CONFIG_DCSHIFT_FILTER))
#endif
#ifdef CONFIG_DEESSER_FILTER
 #pragma message("#define CONFIG_DEESSER_FILTER " XSTR(CONFIG_DEESSER_FILTER))
#endif
#ifdef CONFIG_DIALOGUENHANCE_FILTER
 #pragma message("#define CONFIG_DIALOGUENHANCE_FILTER " XSTR(CONFIG_DIALOGUENHANCE_FILTER))
#endif
#ifdef CONFIG_DRMETER_FILTER
 #pragma message("#define CONFIG_DRMETER_FILTER " XSTR(CONFIG_DRMETER_FILTER))
#endif
#ifdef CONFIG_DYNAUDNORM_FILTER
 #pragma message("#define CONFIG_DYNAUDNORM_FILTER " XSTR(CONFIG_DYNAUDNORM_FILTER))
#endif
#ifdef CONFIG_EARWAX_FILTER
 #pragma message("#define CONFIG_EARWAX_FILTER " XSTR(CONFIG_EARWAX_FILTER))
#endif
#ifdef CONFIG_EBUR128_FILTER
 #pragma message("#define CONFIG_EBUR128_FILTER " XSTR(CONFIG_EBUR128_FILTER))
#endif
#ifdef CONFIG_EQUALIZER_FILTER
 #pragma message("#define CONFIG_EQUALIZER_FILTER " XSTR(CONFIG_EQUALIZER_FILTER))
#endif
#ifdef CONFIG_EXTRASTEREO_FILTER
 #pragma message("#define CONFIG_EXTRASTEREO_FILTER " XSTR(CONFIG_EXTRASTEREO_FILTER))
#endif
#ifdef CONFIG_FIREQUALIZER_FILTER
 #pragma message("#define CONFIG_FIREQUALIZER_FILTER " XSTR(CONFIG_FIREQUALIZER_FILTER))
#endif
#ifdef CONFIG_FLANGER_FILTER
 #pragma message("#define CONFIG_FLANGER_FILTER " XSTR(CONFIG_FLANGER_FILTER))
#endif
#ifdef CONFIG_HAAS_FILTER
 #pragma message("#define CONFIG_HAAS_FILTER " XSTR(CONFIG_HAAS_FILTER))
#endif
#ifdef CONFIG_HDCD_FILTER
 #pragma message("#define CONFIG_HDCD_FILTER " XSTR(CONFIG_HDCD_FILTER))
#endif
#ifdef CONFIG_HEADPHONE_FILTER
 #pragma message("#define CONFIG_HEADPHONE_FILTER " XSTR(CONFIG_HEADPHONE_FILTER))
#endif
#ifdef CONFIG_HIGHPASS_FILTER
 #pragma message("#define CONFIG_HIGHPASS_FILTER " XSTR(CONFIG_HIGHPASS_FILTER))
#endif
#ifdef CONFIG_HIGHSHELF_FILTER
 #pragma message("#define CONFIG_HIGHSHELF_FILTER " XSTR(CONFIG_HIGHSHELF_FILTER))
#endif
#ifdef CONFIG_JOIN_FILTER
 #pragma message("#define CONFIG_JOIN_FILTER " XSTR(CONFIG_JOIN_FILTER))
#endif
#ifdef CONFIG_LADSPA_FILTER
 #pragma message("#define CONFIG_LADSPA_FILTER " XSTR(CONFIG_LADSPA_FILTER))
#endif
#ifdef CONFIG_LOUDNORM_FILTER
 #pragma message("#define CONFIG_LOUDNORM_FILTER " XSTR(CONFIG_LOUDNORM_FILTER))
#endif
#ifdef CONFIG_LOWPASS_FILTER
 #pragma message("#define CONFIG_LOWPASS_FILTER " XSTR(CONFIG_LOWPASS_FILTER))
#endif
#ifdef CONFIG_LOWSHELF_FILTER
 #pragma message("#define CONFIG_LOWSHELF_FILTER " XSTR(CONFIG_LOWSHELF_FILTER))
#endif
#ifdef CONFIG_LV2_FILTER
 #pragma message("#define CONFIG_LV2_FILTER " XSTR(CONFIG_LV2_FILTER))
#endif
#ifdef CONFIG_MCOMPAND_FILTER
 #pragma message("#define CONFIG_MCOMPAND_FILTER " XSTR(CONFIG_MCOMPAND_FILTER))
#endif
#ifdef CONFIG_PAN_FILTER
 #pragma message("#define CONFIG_PAN_FILTER " XSTR(CONFIG_PAN_FILTER))
#endif
#ifdef CONFIG_REPLAYGAIN_FILTER
 #pragma message("#define CONFIG_REPLAYGAIN_FILTER " XSTR(CONFIG_REPLAYGAIN_FILTER))
#endif
#ifdef CONFIG_RUBBERBAND_FILTER
 #pragma message("#define CONFIG_RUBBERBAND_FILTER " XSTR(CONFIG_RUBBERBAND_FILTER))
#endif
#ifdef CONFIG_SIDECHAINCOMPRESS_FILTER
 #pragma message("#define CONFIG_SIDECHAINCOMPRESS_FILTER " XSTR(CONFIG_SIDECHAINCOMPRESS_FILTER))
#endif
#ifdef CONFIG_SIDECHAINGATE_FILTER
 #pragma message("#define CONFIG_SIDECHAINGATE_FILTER " XSTR(CONFIG_SIDECHAINGATE_FILTER))
#endif
#ifdef CONFIG_SILENCEDETECT_FILTER
 #pragma message("#define CONFIG_SILENCEDETECT_FILTER " XSTR(CONFIG_SILENCEDETECT_FILTER))
#endif
#ifdef CONFIG_SILENCEREMOVE_FILTER
 #pragma message("#define CONFIG_SILENCEREMOVE_FILTER " XSTR(CONFIG_SILENCEREMOVE_FILTER))
#endif
#ifdef CONFIG_SOFALIZER_FILTER
 #pragma message("#define CONFIG_SOFALIZER_FILTER " XSTR(CONFIG_SOFALIZER_FILTER))
#endif
#ifdef CONFIG_SPEECHNORM_FILTER
 #pragma message("#define CONFIG_SPEECHNORM_FILTER " XSTR(CONFIG_SPEECHNORM_FILTER))
#endif
#ifdef CONFIG_STEREOTOOLS_FILTER
 #pragma message("#define CONFIG_STEREOTOOLS_FILTER " XSTR(CONFIG_STEREOTOOLS_FILTER))
#endif
#ifdef CONFIG_STEREOWIDEN_FILTER
 #pragma message("#define CONFIG_STEREOWIDEN_FILTER " XSTR(CONFIG_STEREOWIDEN_FILTER))
#endif
#ifdef CONFIG_SUPEREQUALIZER_FILTER
 #pragma message("#define CONFIG_SUPEREQUALIZER_FILTER " XSTR(CONFIG_SUPEREQUALIZER_FILTER))
#endif
#ifdef CONFIG_SURROUND_FILTER
 #pragma message("#define CONFIG_SURROUND_FILTER " XSTR(CONFIG_SURROUND_FILTER))
#endif
#ifdef CONFIG_TILTSHELF_FILTER
 #pragma message("#define CONFIG_TILTSHELF_FILTER " XSTR(CONFIG_TILTSHELF_FILTER))
#endif
#ifdef CONFIG_TREBLE_FILTER
 #pragma message("#define CONFIG_TREBLE_FILTER " XSTR(CONFIG_TREBLE_FILTER))
#endif
#ifdef CONFIG_TREMOLO_FILTER
 #pragma message("#define CONFIG_TREMOLO_FILTER " XSTR(CONFIG_TREMOLO_FILTER))
#endif
#ifdef CONFIG_VIBRATO_FILTER
 #pragma message("#define CONFIG_VIBRATO_FILTER " XSTR(CONFIG_VIBRATO_FILTER))
#endif
#ifdef CONFIG_VIRTUALBASS_FILTER
 #pragma message("#define CONFIG_VIRTUALBASS_FILTER " XSTR(CONFIG_VIRTUALBASS_FILTER))
#endif
#ifdef CONFIG_VOLUME_FILTER
 #pragma message("#define CONFIG_VOLUME_FILTER " XSTR(CONFIG_VOLUME_FILTER))
#endif
#ifdef CONFIG_VOLUMEDETECT_FILTER
 #pragma message("#define CONFIG_VOLUMEDETECT_FILTER " XSTR(CONFIG_VOLUMEDETECT_FILTER))
#endif
#ifdef CONFIG_AEVALSRC_FILTER
 #pragma message("#define CONFIG_AEVALSRC_FILTER " XSTR(CONFIG_AEVALSRC_FILTER))
#endif
#ifdef CONFIG_AFDELAYSRC_FILTER
 #pragma message("#define CONFIG_AFDELAYSRC_FILTER " XSTR(CONFIG_AFDELAYSRC_FILTER))
#endif
#ifdef CONFIG_AFIREQSRC_FILTER
 #pragma message("#define CONFIG_AFIREQSRC_FILTER " XSTR(CONFIG_AFIREQSRC_FILTER))
#endif
#ifdef CONFIG_AFIRSRC_FILTER
 #pragma message("#define CONFIG_AFIRSRC_FILTER " XSTR(CONFIG_AFIRSRC_FILTER))
#endif
#ifdef CONFIG_ANOISESRC_FILTER
 #pragma message("#define CONFIG_ANOISESRC_FILTER " XSTR(CONFIG_ANOISESRC_FILTER))
#endif
#ifdef CONFIG_ANULLSRC_FILTER
 #pragma message("#define CONFIG_ANULLSRC_FILTER " XSTR(CONFIG_ANULLSRC_FILTER))
#endif
#ifdef CONFIG_FLITE_FILTER
 #pragma message("#define CONFIG_FLITE_FILTER " XSTR(CONFIG_FLITE_FILTER))
#endif
#ifdef CONFIG_HILBERT_FILTER
 #pragma message("#define CONFIG_HILBERT_FILTER " XSTR(CONFIG_HILBERT_FILTER))
#endif
#ifdef CONFIG_SINC_FILTER
 #pragma message("#define CONFIG_SINC_FILTER " XSTR(CONFIG_SINC_FILTER))
#endif
#ifdef CONFIG_SINE_FILTER
 #pragma message("#define CONFIG_SINE_FILTER " XSTR(CONFIG_SINE_FILTER))
#endif
#ifdef CONFIG_ANULLSINK_FILTER
 #pragma message("#define CONFIG_ANULLSINK_FILTER " XSTR(CONFIG_ANULLSINK_FILTER))
#endif
#ifdef CONFIG_ADDROI_FILTER
 #pragma message("#define CONFIG_ADDROI_FILTER " XSTR(CONFIG_ADDROI_FILTER))
#endif
#ifdef CONFIG_ALPHAEXTRACT_FILTER
 #pragma message("#define CONFIG_ALPHAEXTRACT_FILTER " XSTR(CONFIG_ALPHAEXTRACT_FILTER))
#endif
#ifdef CONFIG_ALPHAMERGE_FILTER
 #pragma message("#define CONFIG_ALPHAMERGE_FILTER " XSTR(CONFIG_ALPHAMERGE_FILTER))
#endif
#ifdef CONFIG_AMPLIFY_FILTER
 #pragma message("#define CONFIG_AMPLIFY_FILTER " XSTR(CONFIG_AMPLIFY_FILTER))
#endif
#ifdef CONFIG_ASS_FILTER
 #pragma message("#define CONFIG_ASS_FILTER " XSTR(CONFIG_ASS_FILTER))
#endif
#ifdef CONFIG_ATADENOISE_FILTER
 #pragma message("#define CONFIG_ATADENOISE_FILTER " XSTR(CONFIG_ATADENOISE_FILTER))
#endif
#ifdef CONFIG_AVGBLUR_FILTER
 #pragma message("#define CONFIG_AVGBLUR_FILTER " XSTR(CONFIG_AVGBLUR_FILTER))
#endif
#ifdef CONFIG_AVGBLUR_OPENCL_FILTER
 #pragma message("#define CONFIG_AVGBLUR_OPENCL_FILTER " XSTR(CONFIG_AVGBLUR_OPENCL_FILTER))
#endif
#ifdef CONFIG_AVGBLUR_VULKAN_FILTER
 #pragma message("#define CONFIG_AVGBLUR_VULKAN_FILTER " XSTR(CONFIG_AVGBLUR_VULKAN_FILTER))
#endif
#ifdef CONFIG_BACKGROUNDKEY_FILTER
 #pragma message("#define CONFIG_BACKGROUNDKEY_FILTER " XSTR(CONFIG_BACKGROUNDKEY_FILTER))
#endif
#ifdef CONFIG_BBOX_FILTER
 #pragma message("#define CONFIG_BBOX_FILTER " XSTR(CONFIG_BBOX_FILTER))
#endif
#ifdef CONFIG_BENCH_FILTER
 #pragma message("#define CONFIG_BENCH_FILTER " XSTR(CONFIG_BENCH_FILTER))
#endif
#ifdef CONFIG_BILATERAL_FILTER
 #pragma message("#define CONFIG_BILATERAL_FILTER " XSTR(CONFIG_BILATERAL_FILTER))
#endif
#ifdef CONFIG_BILATERAL_CUDA_FILTER
 #pragma message("#define CONFIG_BILATERAL_CUDA_FILTER " XSTR(CONFIG_BILATERAL_CUDA_FILTER))
#endif
#ifdef CONFIG_BITPLANENOISE_FILTER
 #pragma message("#define CONFIG_BITPLANENOISE_FILTER " XSTR(CONFIG_BITPLANENOISE_FILTER))
#endif
#ifdef CONFIG_BLACKDETECT_FILTER
 #pragma message("#define CONFIG_BLACKDETECT_FILTER " XSTR(CONFIG_BLACKDETECT_FILTER))
#endif
#ifdef CONFIG_BLACKFRAME_FILTER
 #pragma message("#define CONFIG_BLACKFRAME_FILTER " XSTR(CONFIG_BLACKFRAME_FILTER))
#endif
#ifdef CONFIG_BLEND_FILTER
 #pragma message("#define CONFIG_BLEND_FILTER " XSTR(CONFIG_BLEND_FILTER))
#endif
#ifdef CONFIG_BLEND_VULKAN_FILTER
 #pragma message("#define CONFIG_BLEND_VULKAN_FILTER " XSTR(CONFIG_BLEND_VULKAN_FILTER))
#endif
#ifdef CONFIG_BLOCKDETECT_FILTER
 #pragma message("#define CONFIG_BLOCKDETECT_FILTER " XSTR(CONFIG_BLOCKDETECT_FILTER))
#endif
#ifdef CONFIG_BLURDETECT_FILTER
 #pragma message("#define CONFIG_BLURDETECT_FILTER " XSTR(CONFIG_BLURDETECT_FILTER))
#endif
#ifdef CONFIG_BM3D_FILTER
 #pragma message("#define CONFIG_BM3D_FILTER " XSTR(CONFIG_BM3D_FILTER))
#endif
#ifdef CONFIG_BOXBLUR_FILTER
 #pragma message("#define CONFIG_BOXBLUR_FILTER " XSTR(CONFIG_BOXBLUR_FILTER))
#endif
#ifdef CONFIG_BOXBLUR_OPENCL_FILTER
 #pragma message("#define CONFIG_BOXBLUR_OPENCL_FILTER " XSTR(CONFIG_BOXBLUR_OPENCL_FILTER))
#endif
#ifdef CONFIG_BWDIF_FILTER
 #pragma message("#define CONFIG_BWDIF_FILTER " XSTR(CONFIG_BWDIF_FILTER))
#endif
#ifdef CONFIG_BWDIF_CUDA_FILTER
 #pragma message("#define CONFIG_BWDIF_CUDA_FILTER " XSTR(CONFIG_BWDIF_CUDA_FILTER))
#endif
#ifdef CONFIG_BWDIF_VULKAN_FILTER
 #pragma message("#define CONFIG_BWDIF_VULKAN_FILTER " XSTR(CONFIG_BWDIF_VULKAN_FILTER))
#endif
#ifdef CONFIG_CAS_FILTER
 #pragma message("#define CONFIG_CAS_FILTER " XSTR(CONFIG_CAS_FILTER))
#endif
#ifdef CONFIG_CCREPACK_FILTER
 #pragma message("#define CONFIG_CCREPACK_FILTER " XSTR(CONFIG_CCREPACK_FILTER))
#endif
#ifdef CONFIG_CHROMABER_VULKAN_FILTER
 #pragma message("#define CONFIG_CHROMABER_VULKAN_FILTER " XSTR(CONFIG_CHROMABER_VULKAN_FILTER))
#endif
#ifdef CONFIG_CHROMAHOLD_FILTER
 #pragma message("#define CONFIG_CHROMAHOLD_FILTER " XSTR(CONFIG_CHROMAHOLD_FILTER))
#endif
#ifdef CONFIG_CHROMAKEY_FILTER
 #pragma message("#define CONFIG_CHROMAKEY_FILTER " XSTR(CONFIG_CHROMAKEY_FILTER))
#endif
#ifdef CONFIG_CHROMAKEY_CUDA_FILTER
 #pragma message("#define CONFIG_CHROMAKEY_CUDA_FILTER " XSTR(CONFIG_CHROMAKEY_CUDA_FILTER))
#endif
#ifdef CONFIG_CHROMANR_FILTER
 #pragma message("#define CONFIG_CHROMANR_FILTER " XSTR(CONFIG_CHROMANR_FILTER))
#endif
#ifdef CONFIG_CHROMASHIFT_FILTER
 #pragma message("#define CONFIG_CHROMASHIFT_FILTER " XSTR(CONFIG_CHROMASHIFT_FILTER))
#endif
#ifdef CONFIG_CIESCOPE_FILTER
 #pragma message("#define CONFIG_CIESCOPE_FILTER " XSTR(CONFIG_CIESCOPE_FILTER))
#endif
#ifdef CONFIG_CODECVIEW_FILTER
 #pragma message("#define CONFIG_CODECVIEW_FILTER " XSTR(CONFIG_CODECVIEW_FILTER))
#endif
#ifdef CONFIG_COLORBALANCE_FILTER
 #pragma message("#define CONFIG_COLORBALANCE_FILTER " XSTR(CONFIG_COLORBALANCE_FILTER))
#endif
#ifdef CONFIG_COLORCHANNELMIXER_FILTER
 #pragma message("#define CONFIG_COLORCHANNELMIXER_FILTER " XSTR(CONFIG_COLORCHANNELMIXER_FILTER))
#endif
#ifdef CONFIG_COLORCONTRAST_FILTER
 #pragma message("#define CONFIG_COLORCONTRAST_FILTER " XSTR(CONFIG_COLORCONTRAST_FILTER))
#endif
#ifdef CONFIG_COLORCORRECT_FILTER
 #pragma message("#define CONFIG_COLORCORRECT_FILTER " XSTR(CONFIG_COLORCORRECT_FILTER))
#endif
#ifdef CONFIG_COLORIZE_FILTER
 #pragma message("#define CONFIG_COLORIZE_FILTER " XSTR(CONFIG_COLORIZE_FILTER))
#endif
#ifdef CONFIG_COLORKEY_FILTER
 #pragma message("#define CONFIG_COLORKEY_FILTER " XSTR(CONFIG_COLORKEY_FILTER))
#endif
#ifdef CONFIG_COLORKEY_OPENCL_FILTER
 #pragma message("#define CONFIG_COLORKEY_OPENCL_FILTER " XSTR(CONFIG_COLORKEY_OPENCL_FILTER))
#endif
#ifdef CONFIG_COLORHOLD_FILTER
 #pragma message("#define CONFIG_COLORHOLD_FILTER " XSTR(CONFIG_COLORHOLD_FILTER))
#endif
#ifdef CONFIG_COLORLEVELS_FILTER
 #pragma message("#define CONFIG_COLORLEVELS_FILTER " XSTR(CONFIG_COLORLEVELS_FILTER))
#endif
#ifdef CONFIG_COLORMAP_FILTER
 #pragma message("#define CONFIG_COLORMAP_FILTER " XSTR(CONFIG_COLORMAP_FILTER))
#endif
#ifdef CONFIG_COLORMATRIX_FILTER
 #pragma message("#define CONFIG_COLORMATRIX_FILTER " XSTR(CONFIG_COLORMATRIX_FILTER))
#endif
#ifdef CONFIG_COLORSPACE_FILTER
 #pragma message("#define CONFIG_COLORSPACE_FILTER " XSTR(CONFIG_COLORSPACE_FILTER))
#endif
#ifdef CONFIG_COLORSPACE_CUDA_FILTER
 #pragma message("#define CONFIG_COLORSPACE_CUDA_FILTER " XSTR(CONFIG_COLORSPACE_CUDA_FILTER))
#endif
#ifdef CONFIG_COLORTEMPERATURE_FILTER
 #pragma message("#define CONFIG_COLORTEMPERATURE_FILTER " XSTR(CONFIG_COLORTEMPERATURE_FILTER))
#endif
#ifdef CONFIG_CONVOLUTION_FILTER
 #pragma message("#define CONFIG_CONVOLUTION_FILTER " XSTR(CONFIG_CONVOLUTION_FILTER))
#endif
#ifdef CONFIG_CONVOLUTION_OPENCL_FILTER
 #pragma message("#define CONFIG_CONVOLUTION_OPENCL_FILTER " XSTR(CONFIG_CONVOLUTION_OPENCL_FILTER))
#endif
#ifdef CONFIG_CONVOLVE_FILTER
 #pragma message("#define CONFIG_CONVOLVE_FILTER " XSTR(CONFIG_CONVOLVE_FILTER))
#endif
#ifdef CONFIG_COPY_FILTER
 #pragma message("#define CONFIG_COPY_FILTER " XSTR(CONFIG_COPY_FILTER))
#endif
#ifdef CONFIG_COREIMAGE_FILTER
 #pragma message("#define CONFIG_COREIMAGE_FILTER " XSTR(CONFIG_COREIMAGE_FILTER))
#endif
#ifdef CONFIG_CORR_FILTER
 #pragma message("#define CONFIG_CORR_FILTER " XSTR(CONFIG_CORR_FILTER))
#endif
#ifdef CONFIG_COVER_RECT_FILTER
 #pragma message("#define CONFIG_COVER_RECT_FILTER " XSTR(CONFIG_COVER_RECT_FILTER))
#endif
#ifdef CONFIG_CROP_FILTER
 #pragma message("#define CONFIG_CROP_FILTER " XSTR(CONFIG_CROP_FILTER))
#endif
#ifdef CONFIG_CROPDETECT_FILTER
 #pragma message("#define CONFIG_CROPDETECT_FILTER " XSTR(CONFIG_CROPDETECT_FILTER))
#endif
#ifdef CONFIG_CUE_FILTER
 #pragma message("#define CONFIG_CUE_FILTER " XSTR(CONFIG_CUE_FILTER))
#endif
#ifdef CONFIG_CURVES_FILTER
 #pragma message("#define CONFIG_CURVES_FILTER " XSTR(CONFIG_CURVES_FILTER))
#endif
#ifdef CONFIG_DATASCOPE_FILTER
 #pragma message("#define CONFIG_DATASCOPE_FILTER " XSTR(CONFIG_DATASCOPE_FILTER))
#endif
#ifdef CONFIG_DBLUR_FILTER
 #pragma message("#define CONFIG_DBLUR_FILTER " XSTR(CONFIG_DBLUR_FILTER))
#endif
#ifdef CONFIG_DCTDNOIZ_FILTER
 #pragma message("#define CONFIG_DCTDNOIZ_FILTER " XSTR(CONFIG_DCTDNOIZ_FILTER))
#endif
#ifdef CONFIG_DEBAND_FILTER
 #pragma message("#define CONFIG_DEBAND_FILTER " XSTR(CONFIG_DEBAND_FILTER))
#endif
#ifdef CONFIG_DEBLOCK_FILTER
 #pragma message("#define CONFIG_DEBLOCK_FILTER " XSTR(CONFIG_DEBLOCK_FILTER))
#endif
#ifdef CONFIG_DECIMATE_FILTER
 #pragma message("#define CONFIG_DECIMATE_FILTER " XSTR(CONFIG_DECIMATE_FILTER))
#endif
#ifdef CONFIG_DECONVOLVE_FILTER
 #pragma message("#define CONFIG_DECONVOLVE_FILTER " XSTR(CONFIG_DECONVOLVE_FILTER))
#endif
#ifdef CONFIG_DEDOT_FILTER
 #pragma message("#define CONFIG_DEDOT_FILTER " XSTR(CONFIG_DEDOT_FILTER))
#endif
#ifdef CONFIG_DEFLATE_FILTER
 #pragma message("#define CONFIG_DEFLATE_FILTER " XSTR(CONFIG_DEFLATE_FILTER))
#endif
#ifdef CONFIG_DEFLICKER_FILTER
 #pragma message("#define CONFIG_DEFLICKER_FILTER " XSTR(CONFIG_DEFLICKER_FILTER))
#endif
#ifdef CONFIG_DEINTERLACE_QSV_FILTER
 #pragma message("#define CONFIG_DEINTERLACE_QSV_FILTER " XSTR(CONFIG_DEINTERLACE_QSV_FILTER))
#endif
#ifdef CONFIG_DEINTERLACE_VAAPI_FILTER
 #pragma message("#define CONFIG_DEINTERLACE_VAAPI_FILTER " XSTR(CONFIG_DEINTERLACE_VAAPI_FILTER))
#endif
#ifdef CONFIG_DEJUDDER_FILTER
 #pragma message("#define CONFIG_DEJUDDER_FILTER " XSTR(CONFIG_DEJUDDER_FILTER))
#endif
#ifdef CONFIG_DELOGO_FILTER
 #pragma message("#define CONFIG_DELOGO_FILTER " XSTR(CONFIG_DELOGO_FILTER))
#endif
#ifdef CONFIG_DENOISE_VAAPI_FILTER
 #pragma message("#define CONFIG_DENOISE_VAAPI_FILTER " XSTR(CONFIG_DENOISE_VAAPI_FILTER))
#endif
#ifdef CONFIG_DERAIN_FILTER
 #pragma message("#define CONFIG_DERAIN_FILTER " XSTR(CONFIG_DERAIN_FILTER))
#endif
#ifdef CONFIG_DESHAKE_FILTER
 #pragma message("#define CONFIG_DESHAKE_FILTER " XSTR(CONFIG_DESHAKE_FILTER))
#endif
#ifdef CONFIG_DESHAKE_OPENCL_FILTER
 #pragma message("#define CONFIG_DESHAKE_OPENCL_FILTER " XSTR(CONFIG_DESHAKE_OPENCL_FILTER))
#endif
#ifdef CONFIG_DESPILL_FILTER
 #pragma message("#define CONFIG_DESPILL_FILTER " XSTR(CONFIG_DESPILL_FILTER))
#endif
#ifdef CONFIG_DETELECINE_FILTER
 #pragma message("#define CONFIG_DETELECINE_FILTER " XSTR(CONFIG_DETELECINE_FILTER))
#endif
#ifdef CONFIG_DILATION_FILTER
 #pragma message("#define CONFIG_DILATION_FILTER " XSTR(CONFIG_DILATION_FILTER))
#endif
#ifdef CONFIG_DILATION_OPENCL_FILTER
 #pragma message("#define CONFIG_DILATION_OPENCL_FILTER " XSTR(CONFIG_DILATION_OPENCL_FILTER))
#endif
#ifdef CONFIG_DISPLACE_FILTER
 #pragma message("#define CONFIG_DISPLACE_FILTER " XSTR(CONFIG_DISPLACE_FILTER))
#endif
#ifdef CONFIG_DNN_CLASSIFY_FILTER
 #pragma message("#define CONFIG_DNN_CLASSIFY_FILTER " XSTR(CONFIG_DNN_CLASSIFY_FILTER))
#endif
#ifdef CONFIG_DNN_DETECT_FILTER
 #pragma message("#define CONFIG_DNN_DETECT_FILTER " XSTR(CONFIG_DNN_DETECT_FILTER))
#endif
#ifdef CONFIG_DNN_PROCESSING_FILTER
 #pragma message("#define CONFIG_DNN_PROCESSING_FILTER " XSTR(CONFIG_DNN_PROCESSING_FILTER))
#endif
#ifdef CONFIG_DOUBLEWEAVE_FILTER
 #pragma message("#define CONFIG_DOUBLEWEAVE_FILTER " XSTR(CONFIG_DOUBLEWEAVE_FILTER))
#endif
#ifdef CONFIG_DRAWBOX_FILTER
 #pragma message("#define CONFIG_DRAWBOX_FILTER " XSTR(CONFIG_DRAWBOX_FILTER))
#endif
#ifdef CONFIG_DRAWGRAPH_FILTER
 #pragma message("#define CONFIG_DRAWGRAPH_FILTER " XSTR(CONFIG_DRAWGRAPH_FILTER))
#endif
#ifdef CONFIG_DRAWGRID_FILTER
 #pragma message("#define CONFIG_DRAWGRID_FILTER " XSTR(CONFIG_DRAWGRID_FILTER))
#endif
#ifdef CONFIG_DRAWTEXT_FILTER
 #pragma message("#define CONFIG_DRAWTEXT_FILTER " XSTR(CONFIG_DRAWTEXT_FILTER))
#endif
#ifdef CONFIG_EDGEDETECT_FILTER
 #pragma message("#define CONFIG_EDGEDETECT_FILTER " XSTR(CONFIG_EDGEDETECT_FILTER))
#endif
#ifdef CONFIG_ELBG_FILTER
 #pragma message("#define CONFIG_ELBG_FILTER " XSTR(CONFIG_ELBG_FILTER))
#endif
#ifdef CONFIG_ENTROPY_FILTER
 #pragma message("#define CONFIG_ENTROPY_FILTER " XSTR(CONFIG_ENTROPY_FILTER))
#endif
#ifdef CONFIG_EPX_FILTER
 #pragma message("#define CONFIG_EPX_FILTER " XSTR(CONFIG_EPX_FILTER))
#endif
#ifdef CONFIG_EQ_FILTER
 #pragma message("#define CONFIG_EQ_FILTER " XSTR(CONFIG_EQ_FILTER))
#endif
#ifdef CONFIG_EROSION_FILTER
 #pragma message("#define CONFIG_EROSION_FILTER " XSTR(CONFIG_EROSION_FILTER))
#endif
#ifdef CONFIG_EROSION_OPENCL_FILTER
 #pragma message("#define CONFIG_EROSION_OPENCL_FILTER " XSTR(CONFIG_EROSION_OPENCL_FILTER))
#endif
#ifdef CONFIG_ESTDIF_FILTER
 #pragma message("#define CONFIG_ESTDIF_FILTER " XSTR(CONFIG_ESTDIF_FILTER))
#endif
#ifdef CONFIG_EXPOSURE_FILTER
 #pragma message("#define CONFIG_EXPOSURE_FILTER " XSTR(CONFIG_EXPOSURE_FILTER))
#endif
#ifdef CONFIG_EXTRACTPLANES_FILTER
 #pragma message("#define CONFIG_EXTRACTPLANES_FILTER " XSTR(CONFIG_EXTRACTPLANES_FILTER))
#endif
#ifdef CONFIG_FADE_FILTER
 #pragma message("#define CONFIG_FADE_FILTER " XSTR(CONFIG_FADE_FILTER))
#endif
#ifdef CONFIG_FEEDBACK_FILTER
 #pragma message("#define CONFIG_FEEDBACK_FILTER " XSTR(CONFIG_FEEDBACK_FILTER))
#endif
#ifdef CONFIG_FFTDNOIZ_FILTER
 #pragma message("#define CONFIG_FFTDNOIZ_FILTER " XSTR(CONFIG_FFTDNOIZ_FILTER))
#endif
#ifdef CONFIG_FFTFILT_FILTER
 #pragma message("#define CONFIG_FFTFILT_FILTER " XSTR(CONFIG_FFTFILT_FILTER))
#endif
#ifdef CONFIG_FIELD_FILTER
 #pragma message("#define CONFIG_FIELD_FILTER " XSTR(CONFIG_FIELD_FILTER))
#endif
#ifdef CONFIG_FIELDHINT_FILTER
 #pragma message("#define CONFIG_FIELDHINT_FILTER " XSTR(CONFIG_FIELDHINT_FILTER))
#endif
#ifdef CONFIG_FIELDMATCH_FILTER
 #pragma message("#define CONFIG_FIELDMATCH_FILTER " XSTR(CONFIG_FIELDMATCH_FILTER))
#endif
#ifdef CONFIG_FIELDORDER_FILTER
 #pragma message("#define CONFIG_FIELDORDER_FILTER " XSTR(CONFIG_FIELDORDER_FILTER))
#endif
#ifdef CONFIG_FILLBORDERS_FILTER
 #pragma message("#define CONFIG_FILLBORDERS_FILTER " XSTR(CONFIG_FILLBORDERS_FILTER))
#endif
#ifdef CONFIG_FIND_RECT_FILTER
 #pragma message("#define CONFIG_FIND_RECT_FILTER " XSTR(CONFIG_FIND_RECT_FILTER))
#endif
#ifdef CONFIG_FLIP_VULKAN_FILTER
 #pragma message("#define CONFIG_FLIP_VULKAN_FILTER " XSTR(CONFIG_FLIP_VULKAN_FILTER))
#endif
#ifdef CONFIG_FLOODFILL_FILTER
 #pragma message("#define CONFIG_FLOODFILL_FILTER " XSTR(CONFIG_FLOODFILL_FILTER))
#endif
#ifdef CONFIG_FORMAT_FILTER
 #pragma message("#define CONFIG_FORMAT_FILTER " XSTR(CONFIG_FORMAT_FILTER))
#endif
#ifdef CONFIG_FPS_FILTER
 #pragma message("#define CONFIG_FPS_FILTER " XSTR(CONFIG_FPS_FILTER))
#endif
#ifdef CONFIG_FRAMEPACK_FILTER
 #pragma message("#define CONFIG_FRAMEPACK_FILTER " XSTR(CONFIG_FRAMEPACK_FILTER))
#endif
#ifdef CONFIG_FRAMERATE_FILTER
 #pragma message("#define CONFIG_FRAMERATE_FILTER " XSTR(CONFIG_FRAMERATE_FILTER))
#endif
#ifdef CONFIG_FRAMESTEP_FILTER
 #pragma message("#define CONFIG_FRAMESTEP_FILTER " XSTR(CONFIG_FRAMESTEP_FILTER))
#endif
#ifdef CONFIG_FREEZEDETECT_FILTER
 #pragma message("#define CONFIG_FREEZEDETECT_FILTER " XSTR(CONFIG_FREEZEDETECT_FILTER))
#endif
#ifdef CONFIG_FREEZEFRAMES_FILTER
 #pragma message("#define CONFIG_FREEZEFRAMES_FILTER " XSTR(CONFIG_FREEZEFRAMES_FILTER))
#endif
#ifdef CONFIG_FREI0R_FILTER
 #pragma message("#define CONFIG_FREI0R_FILTER " XSTR(CONFIG_FREI0R_FILTER))
#endif
#ifdef CONFIG_FSPP_FILTER
 #pragma message("#define CONFIG_FSPP_FILTER " XSTR(CONFIG_FSPP_FILTER))
#endif
#ifdef CONFIG_FSYNC_FILTER
 #pragma message("#define CONFIG_FSYNC_FILTER " XSTR(CONFIG_FSYNC_FILTER))
#endif
#ifdef CONFIG_GBLUR_FILTER
 #pragma message("#define CONFIG_GBLUR_FILTER " XSTR(CONFIG_GBLUR_FILTER))
#endif
#ifdef CONFIG_GBLUR_VULKAN_FILTER
 #pragma message("#define CONFIG_GBLUR_VULKAN_FILTER " XSTR(CONFIG_GBLUR_VULKAN_FILTER))
#endif
#ifdef CONFIG_GEQ_FILTER
 #pragma message("#define CONFIG_GEQ_FILTER " XSTR(CONFIG_GEQ_FILTER))
#endif
#ifdef CONFIG_GRADFUN_FILTER
 #pragma message("#define CONFIG_GRADFUN_FILTER " XSTR(CONFIG_GRADFUN_FILTER))
#endif
#ifdef CONFIG_GRAPHMONITOR_FILTER
 #pragma message("#define CONFIG_GRAPHMONITOR_FILTER " XSTR(CONFIG_GRAPHMONITOR_FILTER))
#endif
#ifdef CONFIG_GRAYWORLD_FILTER
 #pragma message("#define CONFIG_GRAYWORLD_FILTER " XSTR(CONFIG_GRAYWORLD_FILTER))
#endif
#ifdef CONFIG_GREYEDGE_FILTER
 #pragma message("#define CONFIG_GREYEDGE_FILTER " XSTR(CONFIG_GREYEDGE_FILTER))
#endif
#ifdef CONFIG_GUIDED_FILTER
 #pragma message("#define CONFIG_GUIDED_FILTER " XSTR(CONFIG_GUIDED_FILTER))
#endif
#ifdef CONFIG_HALDCLUT_FILTER
 #pragma message("#define CONFIG_HALDCLUT_FILTER " XSTR(CONFIG_HALDCLUT_FILTER))
#endif
#ifdef CONFIG_HFLIP_FILTER
 #pragma message("#define CONFIG_HFLIP_FILTER " XSTR(CONFIG_HFLIP_FILTER))
#endif
#ifdef CONFIG_HFLIP_VULKAN_FILTER
 #pragma message("#define CONFIG_HFLIP_VULKAN_FILTER " XSTR(CONFIG_HFLIP_VULKAN_FILTER))
#endif
#ifdef CONFIG_HISTEQ_FILTER
 #pragma message("#define CONFIG_HISTEQ_FILTER " XSTR(CONFIG_HISTEQ_FILTER))
#endif
#ifdef CONFIG_HISTOGRAM_FILTER
 #pragma message("#define CONFIG_HISTOGRAM_FILTER " XSTR(CONFIG_HISTOGRAM_FILTER))
#endif
#ifdef CONFIG_HQDN3D_FILTER
 #pragma message("#define CONFIG_HQDN3D_FILTER " XSTR(CONFIG_HQDN3D_FILTER))
#endif
#ifdef CONFIG_HQX_FILTER
 #pragma message("#define CONFIG_HQX_FILTER " XSTR(CONFIG_HQX_FILTER))
#endif
#ifdef CONFIG_HSTACK_FILTER
 #pragma message("#define CONFIG_HSTACK_FILTER " XSTR(CONFIG_HSTACK_FILTER))
#endif
#ifdef CONFIG_HSVHOLD_FILTER
 #pragma message("#define CONFIG_HSVHOLD_FILTER " XSTR(CONFIG_HSVHOLD_FILTER))
#endif
#ifdef CONFIG_HSVKEY_FILTER
 #pragma message("#define CONFIG_HSVKEY_FILTER " XSTR(CONFIG_HSVKEY_FILTER))
#endif
#ifdef CONFIG_HUE_FILTER
 #pragma message("#define CONFIG_HUE_FILTER " XSTR(CONFIG_HUE_FILTER))
#endif
#ifdef CONFIG_HUESATURATION_FILTER
 #pragma message("#define CONFIG_HUESATURATION_FILTER " XSTR(CONFIG_HUESATURATION_FILTER))
#endif
#ifdef CONFIG_HWDOWNLOAD_FILTER
 #pragma message("#define CONFIG_HWDOWNLOAD_FILTER " XSTR(CONFIG_HWDOWNLOAD_FILTER))
#endif
#ifdef CONFIG_HWMAP_FILTER
 #pragma message("#define CONFIG_HWMAP_FILTER " XSTR(CONFIG_HWMAP_FILTER))
#endif
#ifdef CONFIG_HWUPLOAD_FILTER
 #pragma message("#define CONFIG_HWUPLOAD_FILTER " XSTR(CONFIG_HWUPLOAD_FILTER))
#endif
#ifdef CONFIG_HWUPLOAD_CUDA_FILTER
 #pragma message("#define CONFIG_HWUPLOAD_CUDA_FILTER " XSTR(CONFIG_HWUPLOAD_CUDA_FILTER))
#endif
#ifdef CONFIG_HYSTERESIS_FILTER
 #pragma message("#define CONFIG_HYSTERESIS_FILTER " XSTR(CONFIG_HYSTERESIS_FILTER))
#endif
#ifdef CONFIG_ICCDETECT_FILTER
 #pragma message("#define CONFIG_ICCDETECT_FILTER " XSTR(CONFIG_ICCDETECT_FILTER))
#endif
#ifdef CONFIG_ICCGEN_FILTER
 #pragma message("#define CONFIG_ICCGEN_FILTER " XSTR(CONFIG_ICCGEN_FILTER))
#endif
#ifdef CONFIG_IDENTITY_FILTER
 #pragma message("#define CONFIG_IDENTITY_FILTER " XSTR(CONFIG_IDENTITY_FILTER))
#endif
#ifdef CONFIG_IDET_FILTER
 #pragma message("#define CONFIG_IDET_FILTER " XSTR(CONFIG_IDET_FILTER))
#endif
#ifdef CONFIG_IL_FILTER
 #pragma message("#define CONFIG_IL_FILTER " XSTR(CONFIG_IL_FILTER))
#endif
#ifdef CONFIG_INFLATE_FILTER
 #pragma message("#define CONFIG_INFLATE_FILTER " XSTR(CONFIG_INFLATE_FILTER))
#endif
#ifdef CONFIG_INTERLACE_FILTER
 #pragma message("#define CONFIG_INTERLACE_FILTER " XSTR(CONFIG_INTERLACE_FILTER))
#endif
#ifdef CONFIG_INTERLEAVE_FILTER
 #pragma message("#define CONFIG_INTERLEAVE_FILTER " XSTR(CONFIG_INTERLEAVE_FILTER))
#endif
#ifdef CONFIG_KERNDEINT_FILTER
 #pragma message("#define CONFIG_KERNDEINT_FILTER " XSTR(CONFIG_KERNDEINT_FILTER))
#endif
#ifdef CONFIG_KIRSCH_FILTER
 #pragma message("#define CONFIG_KIRSCH_FILTER " XSTR(CONFIG_KIRSCH_FILTER))
#endif
#ifdef CONFIG_LAGFUN_FILTER
 #pragma message("#define CONFIG_LAGFUN_FILTER " XSTR(CONFIG_LAGFUN_FILTER))
#endif
#ifdef CONFIG_LATENCY_FILTER
 #pragma message("#define CONFIG_LATENCY_FILTER " XSTR(CONFIG_LATENCY_FILTER))
#endif
#ifdef CONFIG_LENSCORRECTION_FILTER
 #pragma message("#define CONFIG_LENSCORRECTION_FILTER " XSTR(CONFIG_LENSCORRECTION_FILTER))
#endif
#ifdef CONFIG_LENSFUN_FILTER
 #pragma message("#define CONFIG_LENSFUN_FILTER " XSTR(CONFIG_LENSFUN_FILTER))
#endif
#ifdef CONFIG_LIBPLACEBO_FILTER
 #pragma message("#define CONFIG_LIBPLACEBO_FILTER " XSTR(CONFIG_LIBPLACEBO_FILTER))
#endif
#ifdef CONFIG_LIBVMAF_FILTER
 #pragma message("#define CONFIG_LIBVMAF_FILTER " XSTR(CONFIG_LIBVMAF_FILTER))
#endif
#ifdef CONFIG_LIBVMAF_CUDA_FILTER
 #pragma message("#define CONFIG_LIBVMAF_CUDA_FILTER " XSTR(CONFIG_LIBVMAF_CUDA_FILTER))
#endif
#ifdef CONFIG_LIMITDIFF_FILTER
 #pragma message("#define CONFIG_LIMITDIFF_FILTER " XSTR(CONFIG_LIMITDIFF_FILTER))
#endif
#ifdef CONFIG_LIMITER_FILTER
 #pragma message("#define CONFIG_LIMITER_FILTER " XSTR(CONFIG_LIMITER_FILTER))
#endif
#ifdef CONFIG_LOOP_FILTER
 #pragma message("#define CONFIG_LOOP_FILTER " XSTR(CONFIG_LOOP_FILTER))
#endif
#ifdef CONFIG_LUMAKEY_FILTER
 #pragma message("#define CONFIG_LUMAKEY_FILTER " XSTR(CONFIG_LUMAKEY_FILTER))
#endif
#ifdef CONFIG_LUT_FILTER
 #pragma message("#define CONFIG_LUT_FILTER " XSTR(CONFIG_LUT_FILTER))
#endif
#ifdef CONFIG_LUT1D_FILTER
 #pragma message("#define CONFIG_LUT1D_FILTER " XSTR(CONFIG_LUT1D_FILTER))
#endif
#ifdef CONFIG_LUT2_FILTER
 #pragma message("#define CONFIG_LUT2_FILTER " XSTR(CONFIG_LUT2_FILTER))
#endif
#ifdef CONFIG_LUT3D_FILTER
 #pragma message("#define CONFIG_LUT3D_FILTER " XSTR(CONFIG_LUT3D_FILTER))
#endif
#ifdef CONFIG_LUTRGB_FILTER
 #pragma message("#define CONFIG_LUTRGB_FILTER " XSTR(CONFIG_LUTRGB_FILTER))
#endif
#ifdef CONFIG_LUTYUV_FILTER
 #pragma message("#define CONFIG_LUTYUV_FILTER " XSTR(CONFIG_LUTYUV_FILTER))
#endif
#ifdef CONFIG_MASKEDCLAMP_FILTER
 #pragma message("#define CONFIG_MASKEDCLAMP_FILTER " XSTR(CONFIG_MASKEDCLAMP_FILTER))
#endif
#ifdef CONFIG_MASKEDMAX_FILTER
 #pragma message("#define CONFIG_MASKEDMAX_FILTER " XSTR(CONFIG_MASKEDMAX_FILTER))
#endif
#ifdef CONFIG_MASKEDMERGE_FILTER
 #pragma message("#define CONFIG_MASKEDMERGE_FILTER " XSTR(CONFIG_MASKEDMERGE_FILTER))
#endif
#ifdef CONFIG_MASKEDMIN_FILTER
 #pragma message("#define CONFIG_MASKEDMIN_FILTER " XSTR(CONFIG_MASKEDMIN_FILTER))
#endif
#ifdef CONFIG_MASKEDTHRESHOLD_FILTER
 #pragma message("#define CONFIG_MASKEDTHRESHOLD_FILTER " XSTR(CONFIG_MASKEDTHRESHOLD_FILTER))
#endif
#ifdef CONFIG_MASKFUN_FILTER
 #pragma message("#define CONFIG_MASKFUN_FILTER " XSTR(CONFIG_MASKFUN_FILTER))
#endif
#ifdef CONFIG_MCDEINT_FILTER
 #pragma message("#define CONFIG_MCDEINT_FILTER " XSTR(CONFIG_MCDEINT_FILTER))
#endif
#ifdef CONFIG_MEDIAN_FILTER
 #pragma message("#define CONFIG_MEDIAN_FILTER " XSTR(CONFIG_MEDIAN_FILTER))
#endif
#ifdef CONFIG_MERGEPLANES_FILTER
 #pragma message("#define CONFIG_MERGEPLANES_FILTER " XSTR(CONFIG_MERGEPLANES_FILTER))
#endif
#ifdef CONFIG_MESTIMATE_FILTER
 #pragma message("#define CONFIG_MESTIMATE_FILTER " XSTR(CONFIG_MESTIMATE_FILTER))
#endif
#ifdef CONFIG_METADATA_FILTER
 #pragma message("#define CONFIG_METADATA_FILTER " XSTR(CONFIG_METADATA_FILTER))
#endif
#ifdef CONFIG_MIDEQUALIZER_FILTER
 #pragma message("#define CONFIG_MIDEQUALIZER_FILTER " XSTR(CONFIG_MIDEQUALIZER_FILTER))
#endif
#ifdef CONFIG_MINTERPOLATE_FILTER
 #pragma message("#define CONFIG_MINTERPOLATE_FILTER " XSTR(CONFIG_MINTERPOLATE_FILTER))
#endif
#ifdef CONFIG_MIX_FILTER
 #pragma message("#define CONFIG_MIX_FILTER " XSTR(CONFIG_MIX_FILTER))
#endif
#ifdef CONFIG_MONOCHROME_FILTER
 #pragma message("#define CONFIG_MONOCHROME_FILTER " XSTR(CONFIG_MONOCHROME_FILTER))
#endif
#ifdef CONFIG_MORPHO_FILTER
 #pragma message("#define CONFIG_MORPHO_FILTER " XSTR(CONFIG_MORPHO_FILTER))
#endif
#ifdef CONFIG_MPDECIMATE_FILTER
 #pragma message("#define CONFIG_MPDECIMATE_FILTER " XSTR(CONFIG_MPDECIMATE_FILTER))
#endif
#ifdef CONFIG_MSAD_FILTER
 #pragma message("#define CONFIG_MSAD_FILTER " XSTR(CONFIG_MSAD_FILTER))
#endif
#ifdef CONFIG_MULTIPLY_FILTER
 #pragma message("#define CONFIG_MULTIPLY_FILTER " XSTR(CONFIG_MULTIPLY_FILTER))
#endif
#ifdef CONFIG_NEGATE_FILTER
 #pragma message("#define CONFIG_NEGATE_FILTER " XSTR(CONFIG_NEGATE_FILTER))
#endif
#ifdef CONFIG_NLMEANS_FILTER
 #pragma message("#define CONFIG_NLMEANS_FILTER " XSTR(CONFIG_NLMEANS_FILTER))
#endif
#ifdef CONFIG_NLMEANS_OPENCL_FILTER
 #pragma message("#define CONFIG_NLMEANS_OPENCL_FILTER " XSTR(CONFIG_NLMEANS_OPENCL_FILTER))
#endif
#ifdef CONFIG_NLMEANS_VULKAN_FILTER
 #pragma message("#define CONFIG_NLMEANS_VULKAN_FILTER " XSTR(CONFIG_NLMEANS_VULKAN_FILTER))
#endif
#ifdef CONFIG_NNEDI_FILTER
 #pragma message("#define CONFIG_NNEDI_FILTER " XSTR(CONFIG_NNEDI_FILTER))
#endif
#ifdef CONFIG_NOFORMAT_FILTER
 #pragma message("#define CONFIG_NOFORMAT_FILTER " XSTR(CONFIG_NOFORMAT_FILTER))
#endif
#ifdef CONFIG_NOISE_FILTER
 #pragma message("#define CONFIG_NOISE_FILTER " XSTR(CONFIG_NOISE_FILTER))
#endif
#ifdef CONFIG_NORMALIZE_FILTER
 #pragma message("#define CONFIG_NORMALIZE_FILTER " XSTR(CONFIG_NORMALIZE_FILTER))
#endif
#ifdef CONFIG_NULL_FILTER
 #pragma message("#define CONFIG_NULL_FILTER " XSTR(CONFIG_NULL_FILTER))
#endif
#ifdef CONFIG_OCR_FILTER
 #pragma message("#define CONFIG_OCR_FILTER " XSTR(CONFIG_OCR_FILTER))
#endif
#ifdef CONFIG_OCV_FILTER
 #pragma message("#define CONFIG_OCV_FILTER " XSTR(CONFIG_OCV_FILTER))
#endif
#ifdef CONFIG_OSCILLOSCOPE_FILTER
 #pragma message("#define CONFIG_OSCILLOSCOPE_FILTER " XSTR(CONFIG_OSCILLOSCOPE_FILTER))
#endif
#ifdef CONFIG_OVERLAY_FILTER
 #pragma message("#define CONFIG_OVERLAY_FILTER " XSTR(CONFIG_OVERLAY_FILTER))
#endif
#ifdef CONFIG_OVERLAY_OPENCL_FILTER
 #pragma message("#define CONFIG_OVERLAY_OPENCL_FILTER " XSTR(CONFIG_OVERLAY_OPENCL_FILTER))
#endif
#ifdef CONFIG_OVERLAY_QSV_FILTER
 #pragma message("#define CONFIG_OVERLAY_QSV_FILTER " XSTR(CONFIG_OVERLAY_QSV_FILTER))
#endif
#ifdef CONFIG_OVERLAY_VAAPI_FILTER
 #pragma message("#define CONFIG_OVERLAY_VAAPI_FILTER " XSTR(CONFIG_OVERLAY_VAAPI_FILTER))
#endif
#ifdef CONFIG_OVERLAY_VULKAN_FILTER
 #pragma message("#define CONFIG_OVERLAY_VULKAN_FILTER " XSTR(CONFIG_OVERLAY_VULKAN_FILTER))
#endif
#ifdef CONFIG_OVERLAY_CUDA_FILTER
 #pragma message("#define CONFIG_OVERLAY_CUDA_FILTER " XSTR(CONFIG_OVERLAY_CUDA_FILTER))
#endif
#ifdef CONFIG_OWDENOISE_FILTER
 #pragma message("#define CONFIG_OWDENOISE_FILTER " XSTR(CONFIG_OWDENOISE_FILTER))
#endif
#ifdef CONFIG_PAD_FILTER
 #pragma message("#define CONFIG_PAD_FILTER " XSTR(CONFIG_PAD_FILTER))
#endif
#ifdef CONFIG_PAD_OPENCL_FILTER
 #pragma message("#define CONFIG_PAD_OPENCL_FILTER " XSTR(CONFIG_PAD_OPENCL_FILTER))
#endif
#ifdef CONFIG_PALETTEGEN_FILTER
 #pragma message("#define CONFIG_PALETTEGEN_FILTER " XSTR(CONFIG_PALETTEGEN_FILTER))
#endif
#ifdef CONFIG_PALETTEUSE_FILTER
 #pragma message("#define CONFIG_PALETTEUSE_FILTER " XSTR(CONFIG_PALETTEUSE_FILTER))
#endif
#ifdef CONFIG_PERMS_FILTER
 #pragma message("#define CONFIG_PERMS_FILTER " XSTR(CONFIG_PERMS_FILTER))
#endif
#ifdef CONFIG_PERSPECTIVE_FILTER
 #pragma message("#define CONFIG_PERSPECTIVE_FILTER " XSTR(CONFIG_PERSPECTIVE_FILTER))
#endif
#ifdef CONFIG_PHASE_FILTER
 #pragma message("#define CONFIG_PHASE_FILTER " XSTR(CONFIG_PHASE_FILTER))
#endif
#ifdef CONFIG_PHOTOSENSITIVITY_FILTER
 #pragma message("#define CONFIG_PHOTOSENSITIVITY_FILTER " XSTR(CONFIG_PHOTOSENSITIVITY_FILTER))
#endif
#ifdef CONFIG_PIXDESCTEST_FILTER
 #pragma message("#define CONFIG_PIXDESCTEST_FILTER " XSTR(CONFIG_PIXDESCTEST_FILTER))
#endif
#ifdef CONFIG_PIXELIZE_FILTER
 #pragma message("#define CONFIG_PIXELIZE_FILTER " XSTR(CONFIG_PIXELIZE_FILTER))
#endif
#ifdef CONFIG_PIXSCOPE_FILTER
 #pragma message("#define CONFIG_PIXSCOPE_FILTER " XSTR(CONFIG_PIXSCOPE_FILTER))
#endif
#ifdef CONFIG_PP_FILTER
 #pragma message("#define CONFIG_PP_FILTER " XSTR(CONFIG_PP_FILTER))
#endif
#ifdef CONFIG_PP7_FILTER
 #pragma message("#define CONFIG_PP7_FILTER " XSTR(CONFIG_PP7_FILTER))
#endif
#ifdef CONFIG_PREMULTIPLY_FILTER
 #pragma message("#define CONFIG_PREMULTIPLY_FILTER " XSTR(CONFIG_PREMULTIPLY_FILTER))
#endif
#ifdef CONFIG_PREWITT_FILTER
 #pragma message("#define CONFIG_PREWITT_FILTER " XSTR(CONFIG_PREWITT_FILTER))
#endif
#ifdef CONFIG_PREWITT_OPENCL_FILTER
 #pragma message("#define CONFIG_PREWITT_OPENCL_FILTER " XSTR(CONFIG_PREWITT_OPENCL_FILTER))
#endif
#ifdef CONFIG_PROCAMP_VAAPI_FILTER
 #pragma message("#define CONFIG_PROCAMP_VAAPI_FILTER " XSTR(CONFIG_PROCAMP_VAAPI_FILTER))
#endif
#ifdef CONFIG_PROGRAM_OPENCL_FILTER
 #pragma message("#define CONFIG_PROGRAM_OPENCL_FILTER " XSTR(CONFIG_PROGRAM_OPENCL_FILTER))
#endif
#ifdef CONFIG_PSEUDOCOLOR_FILTER
 #pragma message("#define CONFIG_PSEUDOCOLOR_FILTER " XSTR(CONFIG_PSEUDOCOLOR_FILTER))
#endif
#ifdef CONFIG_PSNR_FILTER
 #pragma message("#define CONFIG_PSNR_FILTER " XSTR(CONFIG_PSNR_FILTER))
#endif
#ifdef CONFIG_PULLUP_FILTER
 #pragma message("#define CONFIG_PULLUP_FILTER " XSTR(CONFIG_PULLUP_FILTER))
#endif
#ifdef CONFIG_QP_FILTER
 #pragma message("#define CONFIG_QP_FILTER " XSTR(CONFIG_QP_FILTER))
#endif
#ifdef CONFIG_QRENCODE_FILTER
 #pragma message("#define CONFIG_QRENCODE_FILTER " XSTR(CONFIG_QRENCODE_FILTER))
#endif
#ifdef CONFIG_QUIRC_FILTER
 #pragma message("#define CONFIG_QUIRC_FILTER " XSTR(CONFIG_QUIRC_FILTER))
#endif
#ifdef CONFIG_RANDOM_FILTER
 #pragma message("#define CONFIG_RANDOM_FILTER " XSTR(CONFIG_RANDOM_FILTER))
#endif
#ifdef CONFIG_READEIA608_FILTER
 #pragma message("#define CONFIG_READEIA608_FILTER " XSTR(CONFIG_READEIA608_FILTER))
#endif
#ifdef CONFIG_READVITC_FILTER
 #pragma message("#define CONFIG_READVITC_FILTER " XSTR(CONFIG_READVITC_FILTER))
#endif
#ifdef CONFIG_REALTIME_FILTER
 #pragma message("#define CONFIG_REALTIME_FILTER " XSTR(CONFIG_REALTIME_FILTER))
#endif
#ifdef CONFIG_REMAP_FILTER
 #pragma message("#define CONFIG_REMAP_FILTER " XSTR(CONFIG_REMAP_FILTER))
#endif
#ifdef CONFIG_REMAP_OPENCL_FILTER
 #pragma message("#define CONFIG_REMAP_OPENCL_FILTER " XSTR(CONFIG_REMAP_OPENCL_FILTER))
#endif
#ifdef CONFIG_REMOVEGRAIN_FILTER
 #pragma message("#define CONFIG_REMOVEGRAIN_FILTER " XSTR(CONFIG_REMOVEGRAIN_FILTER))
#endif
#ifdef CONFIG_REMOVELOGO_FILTER
 #pragma message("#define CONFIG_REMOVELOGO_FILTER " XSTR(CONFIG_REMOVELOGO_FILTER))
#endif
#ifdef CONFIG_REPEATFIELDS_FILTER
 #pragma message("#define CONFIG_REPEATFIELDS_FILTER " XSTR(CONFIG_REPEATFIELDS_FILTER))
#endif
#ifdef CONFIG_REVERSE_FILTER
 #pragma message("#define CONFIG_REVERSE_FILTER " XSTR(CONFIG_REVERSE_FILTER))
#endif
#ifdef CONFIG_RGBASHIFT_FILTER
 #pragma message("#define CONFIG_RGBASHIFT_FILTER " XSTR(CONFIG_RGBASHIFT_FILTER))
#endif
#ifdef CONFIG_ROBERTS_FILTER
 #pragma message("#define CONFIG_ROBERTS_FILTER " XSTR(CONFIG_ROBERTS_FILTER))
#endif
#ifdef CONFIG_ROBERTS_OPENCL_FILTER
 #pragma message("#define CONFIG_ROBERTS_OPENCL_FILTER " XSTR(CONFIG_ROBERTS_OPENCL_FILTER))
#endif
#ifdef CONFIG_ROTATE_FILTER
 #pragma message("#define CONFIG_ROTATE_FILTER " XSTR(CONFIG_ROTATE_FILTER))
#endif
#ifdef CONFIG_SAB_FILTER
 #pragma message("#define CONFIG_SAB_FILTER " XSTR(CONFIG_SAB_FILTER))
#endif
#ifdef CONFIG_SCALE_FILTER
 #pragma message("#define CONFIG_SCALE_FILTER " XSTR(CONFIG_SCALE_FILTER))
#endif
#ifdef CONFIG_SCALE_CUDA_FILTER
 #pragma message("#define CONFIG_SCALE_CUDA_FILTER " XSTR(CONFIG_SCALE_CUDA_FILTER))
#endif
#ifdef CONFIG_SCALE_NPP_FILTER
 #pragma message("#define CONFIG_SCALE_NPP_FILTER " XSTR(CONFIG_SCALE_NPP_FILTER))
#endif
#ifdef CONFIG_SCALE_QSV_FILTER
 #pragma message("#define CONFIG_SCALE_QSV_FILTER " XSTR(CONFIG_SCALE_QSV_FILTER))
#endif
#ifdef CONFIG_SCALE_VAAPI_FILTER
 #pragma message("#define CONFIG_SCALE_VAAPI_FILTER " XSTR(CONFIG_SCALE_VAAPI_FILTER))
#endif
#ifdef CONFIG_SCALE_VT_FILTER
 #pragma message("#define CONFIG_SCALE_VT_FILTER " XSTR(CONFIG_SCALE_VT_FILTER))
#endif
#ifdef CONFIG_SCALE_VULKAN_FILTER
 #pragma message("#define CONFIG_SCALE_VULKAN_FILTER " XSTR(CONFIG_SCALE_VULKAN_FILTER))
#endif
#ifdef CONFIG_SCALE2REF_FILTER
 #pragma message("#define CONFIG_SCALE2REF_FILTER " XSTR(CONFIG_SCALE2REF_FILTER))
#endif
#ifdef CONFIG_SCALE2REF_NPP_FILTER
 #pragma message("#define CONFIG_SCALE2REF_NPP_FILTER " XSTR(CONFIG_SCALE2REF_NPP_FILTER))
#endif
#ifdef CONFIG_SCDET_FILTER
 #pragma message("#define CONFIG_SCDET_FILTER " XSTR(CONFIG_SCDET_FILTER))
#endif
#ifdef CONFIG_SCHARR_FILTER
 #pragma message("#define CONFIG_SCHARR_FILTER " XSTR(CONFIG_SCHARR_FILTER))
#endif
#ifdef CONFIG_SCROLL_FILTER
 #pragma message("#define CONFIG_SCROLL_FILTER " XSTR(CONFIG_SCROLL_FILTER))
#endif
#ifdef CONFIG_SEGMENT_FILTER
 #pragma message("#define CONFIG_SEGMENT_FILTER " XSTR(CONFIG_SEGMENT_FILTER))
#endif
#ifdef CONFIG_SELECT_FILTER
 #pragma message("#define CONFIG_SELECT_FILTER " XSTR(CONFIG_SELECT_FILTER))
#endif
#ifdef CONFIG_SELECTIVECOLOR_FILTER
 #pragma message("#define CONFIG_SELECTIVECOLOR_FILTER " XSTR(CONFIG_SELECTIVECOLOR_FILTER))
#endif
#ifdef CONFIG_SENDCMD_FILTER
 #pragma message("#define CONFIG_SENDCMD_FILTER " XSTR(CONFIG_SENDCMD_FILTER))
#endif
#ifdef CONFIG_SEPARATEFIELDS_FILTER
 #pragma message("#define CONFIG_SEPARATEFIELDS_FILTER " XSTR(CONFIG_SEPARATEFIELDS_FILTER))
#endif
#ifdef CONFIG_SETDAR_FILTER
 #pragma message("#define CONFIG_SETDAR_FILTER " XSTR(CONFIG_SETDAR_FILTER))
#endif
#ifdef CONFIG_SETFIELD_FILTER
 #pragma message("#define CONFIG_SETFIELD_FILTER " XSTR(CONFIG_SETFIELD_FILTER))
#endif
#ifdef CONFIG_SETPARAMS_FILTER
 #pragma message("#define CONFIG_SETPARAMS_FILTER " XSTR(CONFIG_SETPARAMS_FILTER))
#endif
#ifdef CONFIG_SETPTS_FILTER
 #pragma message("#define CONFIG_SETPTS_FILTER " XSTR(CONFIG_SETPTS_FILTER))
#endif
#ifdef CONFIG_SETRANGE_FILTER
 #pragma message("#define CONFIG_SETRANGE_FILTER " XSTR(CONFIG_SETRANGE_FILTER))
#endif
#ifdef CONFIG_SETSAR_FILTER
 #pragma message("#define CONFIG_SETSAR_FILTER " XSTR(CONFIG_SETSAR_FILTER))
#endif
#ifdef CONFIG_SETTB_FILTER
 #pragma message("#define CONFIG_SETTB_FILTER " XSTR(CONFIG_SETTB_FILTER))
#endif
#ifdef CONFIG_SHARPEN_NPP_FILTER
 #pragma message("#define CONFIG_SHARPEN_NPP_FILTER " XSTR(CONFIG_SHARPEN_NPP_FILTER))
#endif
#ifdef CONFIG_SHARPNESS_VAAPI_FILTER
 #pragma message("#define CONFIG_SHARPNESS_VAAPI_FILTER " XSTR(CONFIG_SHARPNESS_VAAPI_FILTER))
#endif
#ifdef CONFIG_SHEAR_FILTER
 #pragma message("#define CONFIG_SHEAR_FILTER " XSTR(CONFIG_SHEAR_FILTER))
#endif
#ifdef CONFIG_SHOWINFO_FILTER
 #pragma message("#define CONFIG_SHOWINFO_FILTER " XSTR(CONFIG_SHOWINFO_FILTER))
#endif
#ifdef CONFIG_SHOWPALETTE_FILTER
 #pragma message("#define CONFIG_SHOWPALETTE_FILTER " XSTR(CONFIG_SHOWPALETTE_FILTER))
#endif
#ifdef CONFIG_SHUFFLEFRAMES_FILTER
 #pragma message("#define CONFIG_SHUFFLEFRAMES_FILTER " XSTR(CONFIG_SHUFFLEFRAMES_FILTER))
#endif
#ifdef CONFIG_SHUFFLEPIXELS_FILTER
 #pragma message("#define CONFIG_SHUFFLEPIXELS_FILTER " XSTR(CONFIG_SHUFFLEPIXELS_FILTER))
#endif
#ifdef CONFIG_SHUFFLEPLANES_FILTER
 #pragma message("#define CONFIG_SHUFFLEPLANES_FILTER " XSTR(CONFIG_SHUFFLEPLANES_FILTER))
#endif
#ifdef CONFIG_SIDEDATA_FILTER
 #pragma message("#define CONFIG_SIDEDATA_FILTER " XSTR(CONFIG_SIDEDATA_FILTER))
#endif
#ifdef CONFIG_SIGNALSTATS_FILTER
 #pragma message("#define CONFIG_SIGNALSTATS_FILTER " XSTR(CONFIG_SIGNALSTATS_FILTER))
#endif
#ifdef CONFIG_SIGNATURE_FILTER
 #pragma message("#define CONFIG_SIGNATURE_FILTER " XSTR(CONFIG_SIGNATURE_FILTER))
#endif
#ifdef CONFIG_SITI_FILTER
 #pragma message("#define CONFIG_SITI_FILTER " XSTR(CONFIG_SITI_FILTER))
#endif
#ifdef CONFIG_SMARTBLUR_FILTER
 #pragma message("#define CONFIG_SMARTBLUR_FILTER " XSTR(CONFIG_SMARTBLUR_FILTER))
#endif
#ifdef CONFIG_SOBEL_FILTER
 #pragma message("#define CONFIG_SOBEL_FILTER " XSTR(CONFIG_SOBEL_FILTER))
#endif
#ifdef CONFIG_SOBEL_OPENCL_FILTER
 #pragma message("#define CONFIG_SOBEL_OPENCL_FILTER " XSTR(CONFIG_SOBEL_OPENCL_FILTER))
#endif
#ifdef CONFIG_SPLIT_FILTER
 #pragma message("#define CONFIG_SPLIT_FILTER " XSTR(CONFIG_SPLIT_FILTER))
#endif
#ifdef CONFIG_SPP_FILTER
 #pragma message("#define CONFIG_SPP_FILTER " XSTR(CONFIG_SPP_FILTER))
#endif
#ifdef CONFIG_SR_FILTER
 #pragma message("#define CONFIG_SR_FILTER " XSTR(CONFIG_SR_FILTER))
#endif
#ifdef CONFIG_SSIM_FILTER
 #pragma message("#define CONFIG_SSIM_FILTER " XSTR(CONFIG_SSIM_FILTER))
#endif
#ifdef CONFIG_SSIM360_FILTER
 #pragma message("#define CONFIG_SSIM360_FILTER " XSTR(CONFIG_SSIM360_FILTER))
#endif
#ifdef CONFIG_STEREO3D_FILTER
 #pragma message("#define CONFIG_STEREO3D_FILTER " XSTR(CONFIG_STEREO3D_FILTER))
#endif
#ifdef CONFIG_STREAMSELECT_FILTER
 #pragma message("#define CONFIG_STREAMSELECT_FILTER " XSTR(CONFIG_STREAMSELECT_FILTER))
#endif
#ifdef CONFIG_SUBTITLES_FILTER
 #pragma message("#define CONFIG_SUBTITLES_FILTER " XSTR(CONFIG_SUBTITLES_FILTER))
#endif
#ifdef CONFIG_SUPER2XSAI_FILTER
 #pragma message("#define CONFIG_SUPER2XSAI_FILTER " XSTR(CONFIG_SUPER2XSAI_FILTER))
#endif
#ifdef CONFIG_SWAPRECT_FILTER
 #pragma message("#define CONFIG_SWAPRECT_FILTER " XSTR(CONFIG_SWAPRECT_FILTER))
#endif
#ifdef CONFIG_SWAPUV_FILTER
 #pragma message("#define CONFIG_SWAPUV_FILTER " XSTR(CONFIG_SWAPUV_FILTER))
#endif
#ifdef CONFIG_TBLEND_FILTER
 #pragma message("#define CONFIG_TBLEND_FILTER " XSTR(CONFIG_TBLEND_FILTER))
#endif
#ifdef CONFIG_TELECINE_FILTER
 #pragma message("#define CONFIG_TELECINE_FILTER " XSTR(CONFIG_TELECINE_FILTER))
#endif
#ifdef CONFIG_THISTOGRAM_FILTER
 #pragma message("#define CONFIG_THISTOGRAM_FILTER " XSTR(CONFIG_THISTOGRAM_FILTER))
#endif
#ifdef CONFIG_THRESHOLD_FILTER
 #pragma message("#define CONFIG_THRESHOLD_FILTER " XSTR(CONFIG_THRESHOLD_FILTER))
#endif
#ifdef CONFIG_THUMBNAIL_FILTER
 #pragma message("#define CONFIG_THUMBNAIL_FILTER " XSTR(CONFIG_THUMBNAIL_FILTER))
#endif
#ifdef CONFIG_THUMBNAIL_CUDA_FILTER
 #pragma message("#define CONFIG_THUMBNAIL_CUDA_FILTER " XSTR(CONFIG_THUMBNAIL_CUDA_FILTER))
#endif
#ifdef CONFIG_TILE_FILTER
 #pragma message("#define CONFIG_TILE_FILTER " XSTR(CONFIG_TILE_FILTER))
#endif
#ifdef CONFIG_TILTANDSHIFT_FILTER
 #pragma message("#define CONFIG_TILTANDSHIFT_FILTER " XSTR(CONFIG_TILTANDSHIFT_FILTER))
#endif
#ifdef CONFIG_TINTERLACE_FILTER
 #pragma message("#define CONFIG_TINTERLACE_FILTER " XSTR(CONFIG_TINTERLACE_FILTER))
#endif
#ifdef CONFIG_TLUT2_FILTER
 #pragma message("#define CONFIG_TLUT2_FILTER " XSTR(CONFIG_TLUT2_FILTER))
#endif
#ifdef CONFIG_TMEDIAN_FILTER
 #pragma message("#define CONFIG_TMEDIAN_FILTER " XSTR(CONFIG_TMEDIAN_FILTER))
#endif
#ifdef CONFIG_TMIDEQUALIZER_FILTER
 #pragma message("#define CONFIG_TMIDEQUALIZER_FILTER " XSTR(CONFIG_TMIDEQUALIZER_FILTER))
#endif
#ifdef CONFIG_TMIX_FILTER
 #pragma message("#define CONFIG_TMIX_FILTER " XSTR(CONFIG_TMIX_FILTER))
#endif
#ifdef CONFIG_TONEMAP_FILTER
 #pragma message("#define CONFIG_TONEMAP_FILTER " XSTR(CONFIG_TONEMAP_FILTER))
#endif
#ifdef CONFIG_TONEMAP_OPENCL_FILTER
 #pragma message("#define CONFIG_TONEMAP_OPENCL_FILTER " XSTR(CONFIG_TONEMAP_OPENCL_FILTER))
#endif
#ifdef CONFIG_TONEMAP_VAAPI_FILTER
 #pragma message("#define CONFIG_TONEMAP_VAAPI_FILTER " XSTR(CONFIG_TONEMAP_VAAPI_FILTER))
#endif
#ifdef CONFIG_TPAD_FILTER
 #pragma message("#define CONFIG_TPAD_FILTER " XSTR(CONFIG_TPAD_FILTER))
#endif
#ifdef CONFIG_TRANSPOSE_FILTER
 #pragma message("#define CONFIG_TRANSPOSE_FILTER " XSTR(CONFIG_TRANSPOSE_FILTER))
#endif
#ifdef CONFIG_TRANSPOSE_NPP_FILTER
 #pragma message("#define CONFIG_TRANSPOSE_NPP_FILTER " XSTR(CONFIG_TRANSPOSE_NPP_FILTER))
#endif
#ifdef CONFIG_TRANSPOSE_OPENCL_FILTER
 #pragma message("#define CONFIG_TRANSPOSE_OPENCL_FILTER " XSTR(CONFIG_TRANSPOSE_OPENCL_FILTER))
#endif
#ifdef CONFIG_TRANSPOSE_VAAPI_FILTER
 #pragma message("#define CONFIG_TRANSPOSE_VAAPI_FILTER " XSTR(CONFIG_TRANSPOSE_VAAPI_FILTER))
#endif
#ifdef CONFIG_TRANSPOSE_VT_FILTER
 #pragma message("#define CONFIG_TRANSPOSE_VT_FILTER " XSTR(CONFIG_TRANSPOSE_VT_FILTER))
#endif
#ifdef CONFIG_TRANSPOSE_VULKAN_FILTER
 #pragma message("#define CONFIG_TRANSPOSE_VULKAN_FILTER " XSTR(CONFIG_TRANSPOSE_VULKAN_FILTER))
#endif
#ifdef CONFIG_TRIM_FILTER
 #pragma message("#define CONFIG_TRIM_FILTER " XSTR(CONFIG_TRIM_FILTER))
#endif
#ifdef CONFIG_UNPREMULTIPLY_FILTER
 #pragma message("#define CONFIG_UNPREMULTIPLY_FILTER " XSTR(CONFIG_UNPREMULTIPLY_FILTER))
#endif
#ifdef CONFIG_UNSHARP_FILTER
 #pragma message("#define CONFIG_UNSHARP_FILTER " XSTR(CONFIG_UNSHARP_FILTER))
#endif
#ifdef CONFIG_UNSHARP_OPENCL_FILTER
 #pragma message("#define CONFIG_UNSHARP_OPENCL_FILTER " XSTR(CONFIG_UNSHARP_OPENCL_FILTER))
#endif
#ifdef CONFIG_UNTILE_FILTER
 #pragma message("#define CONFIG_UNTILE_FILTER " XSTR(CONFIG_UNTILE_FILTER))
#endif
#ifdef CONFIG_USPP_FILTER
 #pragma message("#define CONFIG_USPP_FILTER " XSTR(CONFIG_USPP_FILTER))
#endif
#ifdef CONFIG_V360_FILTER
 #pragma message("#define CONFIG_V360_FILTER " XSTR(CONFIG_V360_FILTER))
#endif
#ifdef CONFIG_VAGUEDENOISER_FILTER
 #pragma message("#define CONFIG_VAGUEDENOISER_FILTER " XSTR(CONFIG_VAGUEDENOISER_FILTER))
#endif
#ifdef CONFIG_VARBLUR_FILTER
 #pragma message("#define CONFIG_VARBLUR_FILTER " XSTR(CONFIG_VARBLUR_FILTER))
#endif
#ifdef CONFIG_VECTORSCOPE_FILTER
 #pragma message("#define CONFIG_VECTORSCOPE_FILTER " XSTR(CONFIG_VECTORSCOPE_FILTER))
#endif
#ifdef CONFIG_VFLIP_FILTER
 #pragma message("#define CONFIG_VFLIP_FILTER " XSTR(CONFIG_VFLIP_FILTER))
#endif
#ifdef CONFIG_VFLIP_VULKAN_FILTER
 #pragma message("#define CONFIG_VFLIP_VULKAN_FILTER " XSTR(CONFIG_VFLIP_VULKAN_FILTER))
#endif
#ifdef CONFIG_VFRDET_FILTER
 #pragma message("#define CONFIG_VFRDET_FILTER " XSTR(CONFIG_VFRDET_FILTER))
#endif
#ifdef CONFIG_VIBRANCE_FILTER
 #pragma message("#define CONFIG_VIBRANCE_FILTER " XSTR(CONFIG_VIBRANCE_FILTER))
#endif
#ifdef CONFIG_VIDSTABDETECT_FILTER
 #pragma message("#define CONFIG_VIDSTABDETECT_FILTER " XSTR(CONFIG_VIDSTABDETECT_FILTER))
#endif
#ifdef CONFIG_VIDSTABTRANSFORM_FILTER
 #pragma message("#define CONFIG_VIDSTABTRANSFORM_FILTER " XSTR(CONFIG_VIDSTABTRANSFORM_FILTER))
#endif
#ifdef CONFIG_VIF_FILTER
 #pragma message("#define CONFIG_VIF_FILTER " XSTR(CONFIG_VIF_FILTER))
#endif
#ifdef CONFIG_VIGNETTE_FILTER
 #pragma message("#define CONFIG_VIGNETTE_FILTER " XSTR(CONFIG_VIGNETTE_FILTER))
#endif
#ifdef CONFIG_VMAFMOTION_FILTER
 #pragma message("#define CONFIG_VMAFMOTION_FILTER " XSTR(CONFIG_VMAFMOTION_FILTER))
#endif
#ifdef CONFIG_VPP_QSV_FILTER
 #pragma message("#define CONFIG_VPP_QSV_FILTER " XSTR(CONFIG_VPP_QSV_FILTER))
#endif
#ifdef CONFIG_VSTACK_FILTER
 #pragma message("#define CONFIG_VSTACK_FILTER " XSTR(CONFIG_VSTACK_FILTER))
#endif
#ifdef CONFIG_W3FDIF_FILTER
 #pragma message("#define CONFIG_W3FDIF_FILTER " XSTR(CONFIG_W3FDIF_FILTER))
#endif
#ifdef CONFIG_WAVEFORM_FILTER
 #pragma message("#define CONFIG_WAVEFORM_FILTER " XSTR(CONFIG_WAVEFORM_FILTER))
#endif
#ifdef CONFIG_WEAVE_FILTER
 #pragma message("#define CONFIG_WEAVE_FILTER " XSTR(CONFIG_WEAVE_FILTER))
#endif
#ifdef CONFIG_XBR_FILTER
 #pragma message("#define CONFIG_XBR_FILTER " XSTR(CONFIG_XBR_FILTER))
#endif
#ifdef CONFIG_XCORRELATE_FILTER
 #pragma message("#define CONFIG_XCORRELATE_FILTER " XSTR(CONFIG_XCORRELATE_FILTER))
#endif
#ifdef CONFIG_XFADE_FILTER
 #pragma message("#define CONFIG_XFADE_FILTER " XSTR(CONFIG_XFADE_FILTER))
#endif
#ifdef CONFIG_XFADE_OPENCL_FILTER
 #pragma message("#define CONFIG_XFADE_OPENCL_FILTER " XSTR(CONFIG_XFADE_OPENCL_FILTER))
#endif
#ifdef CONFIG_XFADE_VULKAN_FILTER
 #pragma message("#define CONFIG_XFADE_VULKAN_FILTER " XSTR(CONFIG_XFADE_VULKAN_FILTER))
#endif
#ifdef CONFIG_XMEDIAN_FILTER
 #pragma message("#define CONFIG_XMEDIAN_FILTER " XSTR(CONFIG_XMEDIAN_FILTER))
#endif
#ifdef CONFIG_XSTACK_FILTER
 #pragma message("#define CONFIG_XSTACK_FILTER " XSTR(CONFIG_XSTACK_FILTER))
#endif
#ifdef CONFIG_YADIF_FILTER
 #pragma message("#define CONFIG_YADIF_FILTER " XSTR(CONFIG_YADIF_FILTER))
#endif
#ifdef CONFIG_YADIF_CUDA_FILTER
 #pragma message("#define CONFIG_YADIF_CUDA_FILTER " XSTR(CONFIG_YADIF_CUDA_FILTER))
#endif
#ifdef CONFIG_YADIF_VIDEOTOOLBOX_FILTER
 #pragma message("#define CONFIG_YADIF_VIDEOTOOLBOX_FILTER " XSTR(CONFIG_YADIF_VIDEOTOOLBOX_FILTER))
#endif
#ifdef CONFIG_YAEPBLUR_FILTER
 #pragma message("#define CONFIG_YAEPBLUR_FILTER " XSTR(CONFIG_YAEPBLUR_FILTER))
#endif
#ifdef CONFIG_ZMQ_FILTER
 #pragma message("#define CONFIG_ZMQ_FILTER " XSTR(CONFIG_ZMQ_FILTER))
#endif
#ifdef CONFIG_ZOOMPAN_FILTER
 #pragma message("#define CONFIG_ZOOMPAN_FILTER " XSTR(CONFIG_ZOOMPAN_FILTER))
#endif
#ifdef CONFIG_ZSCALE_FILTER
 #pragma message("#define CONFIG_ZSCALE_FILTER " XSTR(CONFIG_ZSCALE_FILTER))
#endif
#ifdef CONFIG_HSTACK_VAAPI_FILTER
 #pragma message("#define CONFIG_HSTACK_VAAPI_FILTER " XSTR(CONFIG_HSTACK_VAAPI_FILTER))
#endif
#ifdef CONFIG_VSTACK_VAAPI_FILTER
 #pragma message("#define CONFIG_VSTACK_VAAPI_FILTER " XSTR(CONFIG_VSTACK_VAAPI_FILTER))
#endif
#ifdef CONFIG_XSTACK_VAAPI_FILTER
 #pragma message("#define CONFIG_XSTACK_VAAPI_FILTER " XSTR(CONFIG_XSTACK_VAAPI_FILTER))
#endif
#ifdef CONFIG_HSTACK_QSV_FILTER
 #pragma message("#define CONFIG_HSTACK_QSV_FILTER " XSTR(CONFIG_HSTACK_QSV_FILTER))
#endif
#ifdef CONFIG_VSTACK_QSV_FILTER
 #pragma message("#define CONFIG_VSTACK_QSV_FILTER " XSTR(CONFIG_VSTACK_QSV_FILTER))
#endif
#ifdef CONFIG_XSTACK_QSV_FILTER
 #pragma message("#define CONFIG_XSTACK_QSV_FILTER " XSTR(CONFIG_XSTACK_QSV_FILTER))
#endif
#ifdef CONFIG_ALLRGB_FILTER
 #pragma message("#define CONFIG_ALLRGB_FILTER " XSTR(CONFIG_ALLRGB_FILTER))
#endif
#ifdef CONFIG_ALLYUV_FILTER
 #pragma message("#define CONFIG_ALLYUV_FILTER " XSTR(CONFIG_ALLYUV_FILTER))
#endif
#ifdef CONFIG_CELLAUTO_FILTER
 #pragma message("#define CONFIG_CELLAUTO_FILTER " XSTR(CONFIG_CELLAUTO_FILTER))
#endif
#ifdef CONFIG_COLOR_FILTER
 #pragma message("#define CONFIG_COLOR_FILTER " XSTR(CONFIG_COLOR_FILTER))
#endif
#ifdef CONFIG_COLOR_VULKAN_FILTER
 #pragma message("#define CONFIG_COLOR_VULKAN_FILTER " XSTR(CONFIG_COLOR_VULKAN_FILTER))
#endif
#ifdef CONFIG_COLORCHART_FILTER
 #pragma message("#define CONFIG_COLORCHART_FILTER " XSTR(CONFIG_COLORCHART_FILTER))
#endif
#ifdef CONFIG_COLORSPECTRUM_FILTER
 #pragma message("#define CONFIG_COLORSPECTRUM_FILTER " XSTR(CONFIG_COLORSPECTRUM_FILTER))
#endif
#ifdef CONFIG_COREIMAGESRC_FILTER
 #pragma message("#define CONFIG_COREIMAGESRC_FILTER " XSTR(CONFIG_COREIMAGESRC_FILTER))
#endif
#ifdef CONFIG_DDAGRAB_FILTER
 #pragma message("#define CONFIG_DDAGRAB_FILTER " XSTR(CONFIG_DDAGRAB_FILTER))
#endif
#ifdef CONFIG_FREI0R_SRC_FILTER
 #pragma message("#define CONFIG_FREI0R_SRC_FILTER " XSTR(CONFIG_FREI0R_SRC_FILTER))
#endif
#ifdef CONFIG_GRADIENTS_FILTER
 #pragma message("#define CONFIG_GRADIENTS_FILTER " XSTR(CONFIG_GRADIENTS_FILTER))
#endif
#ifdef CONFIG_HALDCLUTSRC_FILTER
 #pragma message("#define CONFIG_HALDCLUTSRC_FILTER " XSTR(CONFIG_HALDCLUTSRC_FILTER))
#endif
#ifdef CONFIG_LIFE_FILTER
 #pragma message("#define CONFIG_LIFE_FILTER " XSTR(CONFIG_LIFE_FILTER))
#endif
#ifdef CONFIG_MANDELBROT_FILTER
 #pragma message("#define CONFIG_MANDELBROT_FILTER " XSTR(CONFIG_MANDELBROT_FILTER))
#endif
#ifdef CONFIG_MPTESTSRC_FILTER
 #pragma message("#define CONFIG_MPTESTSRC_FILTER " XSTR(CONFIG_MPTESTSRC_FILTER))
#endif
#ifdef CONFIG_NULLSRC_FILTER
 #pragma message("#define CONFIG_NULLSRC_FILTER " XSTR(CONFIG_NULLSRC_FILTER))
#endif
#ifdef CONFIG_OPENCLSRC_FILTER
 #pragma message("#define CONFIG_OPENCLSRC_FILTER " XSTR(CONFIG_OPENCLSRC_FILTER))
#endif
#ifdef CONFIG_QRENCODESRC_FILTER
 #pragma message("#define CONFIG_QRENCODESRC_FILTER " XSTR(CONFIG_QRENCODESRC_FILTER))
#endif
#ifdef CONFIG_PAL75BARS_FILTER
 #pragma message("#define CONFIG_PAL75BARS_FILTER " XSTR(CONFIG_PAL75BARS_FILTER))
#endif
#ifdef CONFIG_PAL100BARS_FILTER
 #pragma message("#define CONFIG_PAL100BARS_FILTER " XSTR(CONFIG_PAL100BARS_FILTER))
#endif
#ifdef CONFIG_RGBTESTSRC_FILTER
 #pragma message("#define CONFIG_RGBTESTSRC_FILTER " XSTR(CONFIG_RGBTESTSRC_FILTER))
#endif
#ifdef CONFIG_SIERPINSKI_FILTER
 #pragma message("#define CONFIG_SIERPINSKI_FILTER " XSTR(CONFIG_SIERPINSKI_FILTER))
#endif
#ifdef CONFIG_SMPTEBARS_FILTER
 #pragma message("#define CONFIG_SMPTEBARS_FILTER " XSTR(CONFIG_SMPTEBARS_FILTER))
#endif
#ifdef CONFIG_SMPTEHDBARS_FILTER
 #pragma message("#define CONFIG_SMPTEHDBARS_FILTER " XSTR(CONFIG_SMPTEHDBARS_FILTER))
#endif
#ifdef CONFIG_TESTSRC_FILTER
 #pragma message("#define CONFIG_TESTSRC_FILTER " XSTR(CONFIG_TESTSRC_FILTER))
#endif
#ifdef CONFIG_TESTSRC2_FILTER
 #pragma message("#define CONFIG_TESTSRC2_FILTER " XSTR(CONFIG_TESTSRC2_FILTER))
#endif
#ifdef CONFIG_YUVTESTSRC_FILTER
 #pragma message("#define CONFIG_YUVTESTSRC_FILTER " XSTR(CONFIG_YUVTESTSRC_FILTER))
#endif
#ifdef CONFIG_ZONEPLATE_FILTER
 #pragma message("#define CONFIG_ZONEPLATE_FILTER " XSTR(CONFIG_ZONEPLATE_FILTER))
#endif
#ifdef CONFIG_NULLSINK_FILTER
 #pragma message("#define CONFIG_NULLSINK_FILTER " XSTR(CONFIG_NULLSINK_FILTER))
#endif
#ifdef CONFIG_A3DSCOPE_FILTER
 #pragma message("#define CONFIG_A3DSCOPE_FILTER " XSTR(CONFIG_A3DSCOPE_FILTER))
#endif
#ifdef CONFIG_ABITSCOPE_FILTER
 #pragma message("#define CONFIG_ABITSCOPE_FILTER " XSTR(CONFIG_ABITSCOPE_FILTER))
#endif
#ifdef CONFIG_ADRAWGRAPH_FILTER
 #pragma message("#define CONFIG_ADRAWGRAPH_FILTER " XSTR(CONFIG_ADRAWGRAPH_FILTER))
#endif
#ifdef CONFIG_AGRAPHMONITOR_FILTER
 #pragma message("#define CONFIG_AGRAPHMONITOR_FILTER " XSTR(CONFIG_AGRAPHMONITOR_FILTER))
#endif
#ifdef CONFIG_AHISTOGRAM_FILTER
 #pragma message("#define CONFIG_AHISTOGRAM_FILTER " XSTR(CONFIG_AHISTOGRAM_FILTER))
#endif
#ifdef CONFIG_APHASEMETER_FILTER
 #pragma message("#define CONFIG_APHASEMETER_FILTER " XSTR(CONFIG_APHASEMETER_FILTER))
#endif
#ifdef CONFIG_AVECTORSCOPE_FILTER
 #pragma message("#define CONFIG_AVECTORSCOPE_FILTER " XSTR(CONFIG_AVECTORSCOPE_FILTER))
#endif
#ifdef CONFIG_CONCAT_FILTER
 #pragma message("#define CONFIG_CONCAT_FILTER " XSTR(CONFIG_CONCAT_FILTER))
#endif
#ifdef CONFIG_SHOWCQT_FILTER
 #pragma message("#define CONFIG_SHOWCQT_FILTER " XSTR(CONFIG_SHOWCQT_FILTER))
#endif
#ifdef CONFIG_SHOWCWT_FILTER
 #pragma message("#define CONFIG_SHOWCWT_FILTER " XSTR(CONFIG_SHOWCWT_FILTER))
#endif
#ifdef CONFIG_SHOWFREQS_FILTER
 #pragma message("#define CONFIG_SHOWFREQS_FILTER " XSTR(CONFIG_SHOWFREQS_FILTER))
#endif
#ifdef CONFIG_SHOWSPATIAL_FILTER
 #pragma message("#define CONFIG_SHOWSPATIAL_FILTER " XSTR(CONFIG_SHOWSPATIAL_FILTER))
#endif
#ifdef CONFIG_SHOWSPECTRUM_FILTER
 #pragma message("#define CONFIG_SHOWSPECTRUM_FILTER " XSTR(CONFIG_SHOWSPECTRUM_FILTER))
#endif
#ifdef CONFIG_SHOWSPECTRUMPIC_FILTER
 #pragma message("#define CONFIG_SHOWSPECTRUMPIC_FILTER " XSTR(CONFIG_SHOWSPECTRUMPIC_FILTER))
#endif
#ifdef CONFIG_SHOWVOLUME_FILTER
 #pragma message("#define CONFIG_SHOWVOLUME_FILTER " XSTR(CONFIG_SHOWVOLUME_FILTER))
#endif
#ifdef CONFIG_SHOWWAVES_FILTER
 #pragma message("#define CONFIG_SHOWWAVES_FILTER " XSTR(CONFIG_SHOWWAVES_FILTER))
#endif
#ifdef CONFIG_SHOWWAVESPIC_FILTER
 #pragma message("#define CONFIG_SHOWWAVESPIC_FILTER " XSTR(CONFIG_SHOWWAVESPIC_FILTER))
#endif
#ifdef CONFIG_SPECTRUMSYNTH_FILTER
 #pragma message("#define CONFIG_SPECTRUMSYNTH_FILTER " XSTR(CONFIG_SPECTRUMSYNTH_FILTER))
#endif
#ifdef CONFIG_AVSYNCTEST_FILTER
 #pragma message("#define CONFIG_AVSYNCTEST_FILTER " XSTR(CONFIG_AVSYNCTEST_FILTER))
#endif
#ifdef CONFIG_AMOVIE_FILTER
 #pragma message("#define CONFIG_AMOVIE_FILTER " XSTR(CONFIG_AMOVIE_FILTER))
#endif
#ifdef CONFIG_MOVIE_FILTER
 #pragma message("#define CONFIG_MOVIE_FILTER " XSTR(CONFIG_MOVIE_FILTER))
#endif
#ifdef CONFIG_AA_DEMUXER
 #pragma message("#define CONFIG_AA_DEMUXER " XSTR(CONFIG_AA_DEMUXER))
#endif
#ifdef CONFIG_AAC_DEMUXER
 #pragma message("#define CONFIG_AAC_DEMUXER " XSTR(CONFIG_AAC_DEMUXER))
#endif
#ifdef CONFIG_AAX_DEMUXER
 #pragma message("#define CONFIG_AAX_DEMUXER " XSTR(CONFIG_AAX_DEMUXER))
#endif
#ifdef CONFIG_AC3_DEMUXER
 #pragma message("#define CONFIG_AC3_DEMUXER " XSTR(CONFIG_AC3_DEMUXER))
#endif
#ifdef CONFIG_AC4_DEMUXER
 #pragma message("#define CONFIG_AC4_DEMUXER " XSTR(CONFIG_AC4_DEMUXER))
#endif
#ifdef CONFIG_ACE_DEMUXER
 #pragma message("#define CONFIG_ACE_DEMUXER " XSTR(CONFIG_ACE_DEMUXER))
#endif
#ifdef CONFIG_ACM_DEMUXER
 #pragma message("#define CONFIG_ACM_DEMUXER " XSTR(CONFIG_ACM_DEMUXER))
#endif
#ifdef CONFIG_ACT_DEMUXER
 #pragma message("#define CONFIG_ACT_DEMUXER " XSTR(CONFIG_ACT_DEMUXER))
#endif
#ifdef CONFIG_ADF_DEMUXER
 #pragma message("#define CONFIG_ADF_DEMUXER " XSTR(CONFIG_ADF_DEMUXER))
#endif
#ifdef CONFIG_ADP_DEMUXER
 #pragma message("#define CONFIG_ADP_DEMUXER " XSTR(CONFIG_ADP_DEMUXER))
#endif
#ifdef CONFIG_ADS_DEMUXER
 #pragma message("#define CONFIG_ADS_DEMUXER " XSTR(CONFIG_ADS_DEMUXER))
#endif
#ifdef CONFIG_ADX_DEMUXER
 #pragma message("#define CONFIG_ADX_DEMUXER " XSTR(CONFIG_ADX_DEMUXER))
#endif
#ifdef CONFIG_AEA_DEMUXER
 #pragma message("#define CONFIG_AEA_DEMUXER " XSTR(CONFIG_AEA_DEMUXER))
#endif
#ifdef CONFIG_AFC_DEMUXER
 #pragma message("#define CONFIG_AFC_DEMUXER " XSTR(CONFIG_AFC_DEMUXER))
#endif
#ifdef CONFIG_AIFF_DEMUXER
 #pragma message("#define CONFIG_AIFF_DEMUXER " XSTR(CONFIG_AIFF_DEMUXER))
#endif
#ifdef CONFIG_AIX_DEMUXER
 #pragma message("#define CONFIG_AIX_DEMUXER " XSTR(CONFIG_AIX_DEMUXER))
#endif
#ifdef CONFIG_ALP_DEMUXER
 #pragma message("#define CONFIG_ALP_DEMUXER " XSTR(CONFIG_ALP_DEMUXER))
#endif
#ifdef CONFIG_AMR_DEMUXER
 #pragma message("#define CONFIG_AMR_DEMUXER " XSTR(CONFIG_AMR_DEMUXER))
#endif
#ifdef CONFIG_AMRNB_DEMUXER
 #pragma message("#define CONFIG_AMRNB_DEMUXER " XSTR(CONFIG_AMRNB_DEMUXER))
#endif
#ifdef CONFIG_AMRWB_DEMUXER
 #pragma message("#define CONFIG_AMRWB_DEMUXER " XSTR(CONFIG_AMRWB_DEMUXER))
#endif
#ifdef CONFIG_ANM_DEMUXER
 #pragma message("#define CONFIG_ANM_DEMUXER " XSTR(CONFIG_ANM_DEMUXER))
#endif
#ifdef CONFIG_APAC_DEMUXER
 #pragma message("#define CONFIG_APAC_DEMUXER " XSTR(CONFIG_APAC_DEMUXER))
#endif
#ifdef CONFIG_APC_DEMUXER
 #pragma message("#define CONFIG_APC_DEMUXER " XSTR(CONFIG_APC_DEMUXER))
#endif
#ifdef CONFIG_APE_DEMUXER
 #pragma message("#define CONFIG_APE_DEMUXER " XSTR(CONFIG_APE_DEMUXER))
#endif
#ifdef CONFIG_APM_DEMUXER
 #pragma message("#define CONFIG_APM_DEMUXER " XSTR(CONFIG_APM_DEMUXER))
#endif
#ifdef CONFIG_APNG_DEMUXER
 #pragma message("#define CONFIG_APNG_DEMUXER " XSTR(CONFIG_APNG_DEMUXER))
#endif
#ifdef CONFIG_APTX_DEMUXER
 #pragma message("#define CONFIG_APTX_DEMUXER " XSTR(CONFIG_APTX_DEMUXER))
#endif
#ifdef CONFIG_APTX_HD_DEMUXER
 #pragma message("#define CONFIG_APTX_HD_DEMUXER " XSTR(CONFIG_APTX_HD_DEMUXER))
#endif
#ifdef CONFIG_AQTITLE_DEMUXER
 #pragma message("#define CONFIG_AQTITLE_DEMUXER " XSTR(CONFIG_AQTITLE_DEMUXER))
#endif
#ifdef CONFIG_ARGO_ASF_DEMUXER
 #pragma message("#define CONFIG_ARGO_ASF_DEMUXER " XSTR(CONFIG_ARGO_ASF_DEMUXER))
#endif
#ifdef CONFIG_ARGO_BRP_DEMUXER
 #pragma message("#define CONFIG_ARGO_BRP_DEMUXER " XSTR(CONFIG_ARGO_BRP_DEMUXER))
#endif
#ifdef CONFIG_ARGO_CVG_DEMUXER
 #pragma message("#define CONFIG_ARGO_CVG_DEMUXER " XSTR(CONFIG_ARGO_CVG_DEMUXER))
#endif
#ifdef CONFIG_ASF_DEMUXER
 #pragma message("#define CONFIG_ASF_DEMUXER " XSTR(CONFIG_ASF_DEMUXER))
#endif
#ifdef CONFIG_ASF_O_DEMUXER
 #pragma message("#define CONFIG_ASF_O_DEMUXER " XSTR(CONFIG_ASF_O_DEMUXER))
#endif
#ifdef CONFIG_ASS_DEMUXER
 #pragma message("#define CONFIG_ASS_DEMUXER " XSTR(CONFIG_ASS_DEMUXER))
#endif
#ifdef CONFIG_AST_DEMUXER
 #pragma message("#define CONFIG_AST_DEMUXER " XSTR(CONFIG_AST_DEMUXER))
#endif
#ifdef CONFIG_AU_DEMUXER
 #pragma message("#define CONFIG_AU_DEMUXER " XSTR(CONFIG_AU_DEMUXER))
#endif
#ifdef CONFIG_AV1_DEMUXER
 #pragma message("#define CONFIG_AV1_DEMUXER " XSTR(CONFIG_AV1_DEMUXER))
#endif
#ifdef CONFIG_AVI_DEMUXER
 #pragma message("#define CONFIG_AVI_DEMUXER " XSTR(CONFIG_AVI_DEMUXER))
#endif
#ifdef CONFIG_AVISYNTH_DEMUXER
 #pragma message("#define CONFIG_AVISYNTH_DEMUXER " XSTR(CONFIG_AVISYNTH_DEMUXER))
#endif
#ifdef CONFIG_AVR_DEMUXER
 #pragma message("#define CONFIG_AVR_DEMUXER " XSTR(CONFIG_AVR_DEMUXER))
#endif
#ifdef CONFIG_AVS_DEMUXER
 #pragma message("#define CONFIG_AVS_DEMUXER " XSTR(CONFIG_AVS_DEMUXER))
#endif
#ifdef CONFIG_AVS2_DEMUXER
 #pragma message("#define CONFIG_AVS2_DEMUXER " XSTR(CONFIG_AVS2_DEMUXER))
#endif
#ifdef CONFIG_AVS3_DEMUXER
 #pragma message("#define CONFIG_AVS3_DEMUXER " XSTR(CONFIG_AVS3_DEMUXER))
#endif
#ifdef CONFIG_BETHSOFTVID_DEMUXER
 #pragma message("#define CONFIG_BETHSOFTVID_DEMUXER " XSTR(CONFIG_BETHSOFTVID_DEMUXER))
#endif
#ifdef CONFIG_BFI_DEMUXER
 #pragma message("#define CONFIG_BFI_DEMUXER " XSTR(CONFIG_BFI_DEMUXER))
#endif
#ifdef CONFIG_BINTEXT_DEMUXER
 #pragma message("#define CONFIG_BINTEXT_DEMUXER " XSTR(CONFIG_BINTEXT_DEMUXER))
#endif
#ifdef CONFIG_BINK_DEMUXER
 #pragma message("#define CONFIG_BINK_DEMUXER " XSTR(CONFIG_BINK_DEMUXER))
#endif
#ifdef CONFIG_BINKA_DEMUXER
 #pragma message("#define CONFIG_BINKA_DEMUXER " XSTR(CONFIG_BINKA_DEMUXER))
#endif
#ifdef CONFIG_BIT_DEMUXER
 #pragma message("#define CONFIG_BIT_DEMUXER " XSTR(CONFIG_BIT_DEMUXER))
#endif
#ifdef CONFIG_BITPACKED_DEMUXER
 #pragma message("#define CONFIG_BITPACKED_DEMUXER " XSTR(CONFIG_BITPACKED_DEMUXER))
#endif
#ifdef CONFIG_BMV_DEMUXER
 #pragma message("#define CONFIG_BMV_DEMUXER " XSTR(CONFIG_BMV_DEMUXER))
#endif
#ifdef CONFIG_BFSTM_DEMUXER
 #pragma message("#define CONFIG_BFSTM_DEMUXER " XSTR(CONFIG_BFSTM_DEMUXER))
#endif
#ifdef CONFIG_BRSTM_DEMUXER
 #pragma message("#define CONFIG_BRSTM_DEMUXER " XSTR(CONFIG_BRSTM_DEMUXER))
#endif
#ifdef CONFIG_BOA_DEMUXER
 #pragma message("#define CONFIG_BOA_DEMUXER " XSTR(CONFIG_BOA_DEMUXER))
#endif
#ifdef CONFIG_BONK_DEMUXER
 #pragma message("#define CONFIG_BONK_DEMUXER " XSTR(CONFIG_BONK_DEMUXER))
#endif
#ifdef CONFIG_C93_DEMUXER
 #pragma message("#define CONFIG_C93_DEMUXER " XSTR(CONFIG_C93_DEMUXER))
#endif
#ifdef CONFIG_CAF_DEMUXER
 #pragma message("#define CONFIG_CAF_DEMUXER " XSTR(CONFIG_CAF_DEMUXER))
#endif
#ifdef CONFIG_CAVSVIDEO_DEMUXER
 #pragma message("#define CONFIG_CAVSVIDEO_DEMUXER " XSTR(CONFIG_CAVSVIDEO_DEMUXER))
#endif
#ifdef CONFIG_CDG_DEMUXER
 #pragma message("#define CONFIG_CDG_DEMUXER " XSTR(CONFIG_CDG_DEMUXER))
#endif
#ifdef CONFIG_CDXL_DEMUXER
 #pragma message("#define CONFIG_CDXL_DEMUXER " XSTR(CONFIG_CDXL_DEMUXER))
#endif
#ifdef CONFIG_CINE_DEMUXER
 #pragma message("#define CONFIG_CINE_DEMUXER " XSTR(CONFIG_CINE_DEMUXER))
#endif
#ifdef CONFIG_CODEC2_DEMUXER
 #pragma message("#define CONFIG_CODEC2_DEMUXER " XSTR(CONFIG_CODEC2_DEMUXER))
#endif
#ifdef CONFIG_CODEC2RAW_DEMUXER
 #pragma message("#define CONFIG_CODEC2RAW_DEMUXER " XSTR(CONFIG_CODEC2RAW_DEMUXER))
#endif
#ifdef CONFIG_CONCAT_DEMUXER
 #pragma message("#define CONFIG_CONCAT_DEMUXER " XSTR(CONFIG_CONCAT_DEMUXER))
#endif
#ifdef CONFIG_DASH_DEMUXER
 #pragma message("#define CONFIG_DASH_DEMUXER " XSTR(CONFIG_DASH_DEMUXER))
#endif
#ifdef CONFIG_DATA_DEMUXER
 #pragma message("#define CONFIG_DATA_DEMUXER " XSTR(CONFIG_DATA_DEMUXER))
#endif
#ifdef CONFIG_DAUD_DEMUXER
 #pragma message("#define CONFIG_DAUD_DEMUXER " XSTR(CONFIG_DAUD_DEMUXER))
#endif
#ifdef CONFIG_DCSTR_DEMUXER
 #pragma message("#define CONFIG_DCSTR_DEMUXER " XSTR(CONFIG_DCSTR_DEMUXER))
#endif
#ifdef CONFIG_DERF_DEMUXER
 #pragma message("#define CONFIG_DERF_DEMUXER " XSTR(CONFIG_DERF_DEMUXER))
#endif
#ifdef CONFIG_DFA_DEMUXER
 #pragma message("#define CONFIG_DFA_DEMUXER " XSTR(CONFIG_DFA_DEMUXER))
#endif
#ifdef CONFIG_DFPWM_DEMUXER
 #pragma message("#define CONFIG_DFPWM_DEMUXER " XSTR(CONFIG_DFPWM_DEMUXER))
#endif
#ifdef CONFIG_DHAV_DEMUXER
 #pragma message("#define CONFIG_DHAV_DEMUXER " XSTR(CONFIG_DHAV_DEMUXER))
#endif
#ifdef CONFIG_DIRAC_DEMUXER
 #pragma message("#define CONFIG_DIRAC_DEMUXER " XSTR(CONFIG_DIRAC_DEMUXER))
#endif
#ifdef CONFIG_DNXHD_DEMUXER
 #pragma message("#define CONFIG_DNXHD_DEMUXER " XSTR(CONFIG_DNXHD_DEMUXER))
#endif
#ifdef CONFIG_DSF_DEMUXER
 #pragma message("#define CONFIG_DSF_DEMUXER " XSTR(CONFIG_DSF_DEMUXER))
#endif
#ifdef CONFIG_DSICIN_DEMUXER
 #pragma message("#define CONFIG_DSICIN_DEMUXER " XSTR(CONFIG_DSICIN_DEMUXER))
#endif
#ifdef CONFIG_DSS_DEMUXER
 #pragma message("#define CONFIG_DSS_DEMUXER " XSTR(CONFIG_DSS_DEMUXER))
#endif
#ifdef CONFIG_DTS_DEMUXER
 #pragma message("#define CONFIG_DTS_DEMUXER " XSTR(CONFIG_DTS_DEMUXER))
#endif
#ifdef CONFIG_DTSHD_DEMUXER
 #pragma message("#define CONFIG_DTSHD_DEMUXER " XSTR(CONFIG_DTSHD_DEMUXER))
#endif
#ifdef CONFIG_DV_DEMUXER
 #pragma message("#define CONFIG_DV_DEMUXER " XSTR(CONFIG_DV_DEMUXER))
#endif
#ifdef CONFIG_DVBSUB_DEMUXER
 #pragma message("#define CONFIG_DVBSUB_DEMUXER " XSTR(CONFIG_DVBSUB_DEMUXER))
#endif
#ifdef CONFIG_DVBTXT_DEMUXER
 #pragma message("#define CONFIG_DVBTXT_DEMUXER " XSTR(CONFIG_DVBTXT_DEMUXER))
#endif
#ifdef CONFIG_DVDVIDEO_DEMUXER
 #pragma message("#define CONFIG_DVDVIDEO_DEMUXER " XSTR(CONFIG_DVDVIDEO_DEMUXER))
#endif
#ifdef CONFIG_DXA_DEMUXER
 #pragma message("#define CONFIG_DXA_DEMUXER " XSTR(CONFIG_DXA_DEMUXER))
#endif
#ifdef CONFIG_EA_DEMUXER
 #pragma message("#define CONFIG_EA_DEMUXER " XSTR(CONFIG_EA_DEMUXER))
#endif
#ifdef CONFIG_EA_CDATA_DEMUXER
 #pragma message("#define CONFIG_EA_CDATA_DEMUXER " XSTR(CONFIG_EA_CDATA_DEMUXER))
#endif
#ifdef CONFIG_EAC3_DEMUXER
 #pragma message("#define CONFIG_EAC3_DEMUXER " XSTR(CONFIG_EAC3_DEMUXER))
#endif
#ifdef CONFIG_EPAF_DEMUXER
 #pragma message("#define CONFIG_EPAF_DEMUXER " XSTR(CONFIG_EPAF_DEMUXER))
#endif
#ifdef CONFIG_EVC_DEMUXER
 #pragma message("#define CONFIG_EVC_DEMUXER " XSTR(CONFIG_EVC_DEMUXER))
#endif
#ifdef CONFIG_FFMETADATA_DEMUXER
 #pragma message("#define CONFIG_FFMETADATA_DEMUXER " XSTR(CONFIG_FFMETADATA_DEMUXER))
#endif
#ifdef CONFIG_FILMSTRIP_DEMUXER
 #pragma message("#define CONFIG_FILMSTRIP_DEMUXER " XSTR(CONFIG_FILMSTRIP_DEMUXER))
#endif
#ifdef CONFIG_FITS_DEMUXER
 #pragma message("#define CONFIG_FITS_DEMUXER " XSTR(CONFIG_FITS_DEMUXER))
#endif
#ifdef CONFIG_FLAC_DEMUXER
 #pragma message("#define CONFIG_FLAC_DEMUXER " XSTR(CONFIG_FLAC_DEMUXER))
#endif
#ifdef CONFIG_FLIC_DEMUXER
 #pragma message("#define CONFIG_FLIC_DEMUXER " XSTR(CONFIG_FLIC_DEMUXER))
#endif
#ifdef CONFIG_FLV_DEMUXER
 #pragma message("#define CONFIG_FLV_DEMUXER " XSTR(CONFIG_FLV_DEMUXER))
#endif
#ifdef CONFIG_LIVE_FLV_DEMUXER
 #pragma message("#define CONFIG_LIVE_FLV_DEMUXER " XSTR(CONFIG_LIVE_FLV_DEMUXER))
#endif
#ifdef CONFIG_FOURXM_DEMUXER
 #pragma message("#define CONFIG_FOURXM_DEMUXER " XSTR(CONFIG_FOURXM_DEMUXER))
#endif
#ifdef CONFIG_FRM_DEMUXER
 #pragma message("#define CONFIG_FRM_DEMUXER " XSTR(CONFIG_FRM_DEMUXER))
#endif
#ifdef CONFIG_FSB_DEMUXER
 #pragma message("#define CONFIG_FSB_DEMUXER " XSTR(CONFIG_FSB_DEMUXER))
#endif
#ifdef CONFIG_FWSE_DEMUXER
 #pragma message("#define CONFIG_FWSE_DEMUXER " XSTR(CONFIG_FWSE_DEMUXER))
#endif
#ifdef CONFIG_G722_DEMUXER
 #pragma message("#define CONFIG_G722_DEMUXER " XSTR(CONFIG_G722_DEMUXER))
#endif
#ifdef CONFIG_G723_1_DEMUXER
 #pragma message("#define CONFIG_G723_1_DEMUXER " XSTR(CONFIG_G723_1_DEMUXER))
#endif
#ifdef CONFIG_G726_DEMUXER
 #pragma message("#define CONFIG_G726_DEMUXER " XSTR(CONFIG_G726_DEMUXER))
#endif
#ifdef CONFIG_G726LE_DEMUXER
 #pragma message("#define CONFIG_G726LE_DEMUXER " XSTR(CONFIG_G726LE_DEMUXER))
#endif
#ifdef CONFIG_G729_DEMUXER
 #pragma message("#define CONFIG_G729_DEMUXER " XSTR(CONFIG_G729_DEMUXER))
#endif
#ifdef CONFIG_GDV_DEMUXER
 #pragma message("#define CONFIG_GDV_DEMUXER " XSTR(CONFIG_GDV_DEMUXER))
#endif
#ifdef CONFIG_GENH_DEMUXER
 #pragma message("#define CONFIG_GENH_DEMUXER " XSTR(CONFIG_GENH_DEMUXER))
#endif
#ifdef CONFIG_GIF_DEMUXER
 #pragma message("#define CONFIG_GIF_DEMUXER " XSTR(CONFIG_GIF_DEMUXER))
#endif
#ifdef CONFIG_GSM_DEMUXER
 #pragma message("#define CONFIG_GSM_DEMUXER " XSTR(CONFIG_GSM_DEMUXER))
#endif
#ifdef CONFIG_GXF_DEMUXER
 #pragma message("#define CONFIG_GXF_DEMUXER " XSTR(CONFIG_GXF_DEMUXER))
#endif
#ifdef CONFIG_H261_DEMUXER
 #pragma message("#define CONFIG_H261_DEMUXER " XSTR(CONFIG_H261_DEMUXER))
#endif
#ifdef CONFIG_H263_DEMUXER
 #pragma message("#define CONFIG_H263_DEMUXER " XSTR(CONFIG_H263_DEMUXER))
#endif
#ifdef CONFIG_H264_DEMUXER
 #pragma message("#define CONFIG_H264_DEMUXER " XSTR(CONFIG_H264_DEMUXER))
#endif
#ifdef CONFIG_HCA_DEMUXER
 #pragma message("#define CONFIG_HCA_DEMUXER " XSTR(CONFIG_HCA_DEMUXER))
#endif
#ifdef CONFIG_HCOM_DEMUXER
 #pragma message("#define CONFIG_HCOM_DEMUXER " XSTR(CONFIG_HCOM_DEMUXER))
#endif
#ifdef CONFIG_HEVC_DEMUXER
 #pragma message("#define CONFIG_HEVC_DEMUXER " XSTR(CONFIG_HEVC_DEMUXER))
#endif
#ifdef CONFIG_HLS_DEMUXER
 #pragma message("#define CONFIG_HLS_DEMUXER " XSTR(CONFIG_HLS_DEMUXER))
#endif
#ifdef CONFIG_HNM_DEMUXER
 #pragma message("#define CONFIG_HNM_DEMUXER " XSTR(CONFIG_HNM_DEMUXER))
#endif
#ifdef CONFIG_IAMF_DEMUXER
 #pragma message("#define CONFIG_IAMF_DEMUXER " XSTR(CONFIG_IAMF_DEMUXER))
#endif
#ifdef CONFIG_ICO_DEMUXER
 #pragma message("#define CONFIG_ICO_DEMUXER " XSTR(CONFIG_ICO_DEMUXER))
#endif
#ifdef CONFIG_IDCIN_DEMUXER
 #pragma message("#define CONFIG_IDCIN_DEMUXER " XSTR(CONFIG_IDCIN_DEMUXER))
#endif
#ifdef CONFIG_IDF_DEMUXER
 #pragma message("#define CONFIG_IDF_DEMUXER " XSTR(CONFIG_IDF_DEMUXER))
#endif
#ifdef CONFIG_IFF_DEMUXER
 #pragma message("#define CONFIG_IFF_DEMUXER " XSTR(CONFIG_IFF_DEMUXER))
#endif
#ifdef CONFIG_IFV_DEMUXER
 #pragma message("#define CONFIG_IFV_DEMUXER " XSTR(CONFIG_IFV_DEMUXER))
#endif
#ifdef CONFIG_ILBC_DEMUXER
 #pragma message("#define CONFIG_ILBC_DEMUXER " XSTR(CONFIG_ILBC_DEMUXER))
#endif
#ifdef CONFIG_IMAGE2_DEMUXER
 #pragma message("#define CONFIG_IMAGE2_DEMUXER " XSTR(CONFIG_IMAGE2_DEMUXER))
#endif
#ifdef CONFIG_IMAGE2PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE2PIPE_DEMUXER " XSTR(CONFIG_IMAGE2PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE2_ALIAS_PIX_DEMUXER
 #pragma message("#define CONFIG_IMAGE2_ALIAS_PIX_DEMUXER " XSTR(CONFIG_IMAGE2_ALIAS_PIX_DEMUXER))
#endif
#ifdef CONFIG_IMAGE2_BRENDER_PIX_DEMUXER
 #pragma message("#define CONFIG_IMAGE2_BRENDER_PIX_DEMUXER " XSTR(CONFIG_IMAGE2_BRENDER_PIX_DEMUXER))
#endif
#ifdef CONFIG_IMF_DEMUXER
 #pragma message("#define CONFIG_IMF_DEMUXER " XSTR(CONFIG_IMF_DEMUXER))
#endif
#ifdef CONFIG_INGENIENT_DEMUXER
 #pragma message("#define CONFIG_INGENIENT_DEMUXER " XSTR(CONFIG_INGENIENT_DEMUXER))
#endif
#ifdef CONFIG_IPMOVIE_DEMUXER
 #pragma message("#define CONFIG_IPMOVIE_DEMUXER " XSTR(CONFIG_IPMOVIE_DEMUXER))
#endif
#ifdef CONFIG_IPU_DEMUXER
 #pragma message("#define CONFIG_IPU_DEMUXER " XSTR(CONFIG_IPU_DEMUXER))
#endif
#ifdef CONFIG_IRCAM_DEMUXER
 #pragma message("#define CONFIG_IRCAM_DEMUXER " XSTR(CONFIG_IRCAM_DEMUXER))
#endif
#ifdef CONFIG_ISS_DEMUXER
 #pragma message("#define CONFIG_ISS_DEMUXER " XSTR(CONFIG_ISS_DEMUXER))
#endif
#ifdef CONFIG_IV8_DEMUXER
 #pragma message("#define CONFIG_IV8_DEMUXER " XSTR(CONFIG_IV8_DEMUXER))
#endif
#ifdef CONFIG_IVF_DEMUXER
 #pragma message("#define CONFIG_IVF_DEMUXER " XSTR(CONFIG_IVF_DEMUXER))
#endif
#ifdef CONFIG_IVR_DEMUXER
 #pragma message("#define CONFIG_IVR_DEMUXER " XSTR(CONFIG_IVR_DEMUXER))
#endif
#ifdef CONFIG_JACOSUB_DEMUXER
 #pragma message("#define CONFIG_JACOSUB_DEMUXER " XSTR(CONFIG_JACOSUB_DEMUXER))
#endif
#ifdef CONFIG_JV_DEMUXER
 #pragma message("#define CONFIG_JV_DEMUXER " XSTR(CONFIG_JV_DEMUXER))
#endif
#ifdef CONFIG_JPEGXL_ANIM_DEMUXER
 #pragma message("#define CONFIG_JPEGXL_ANIM_DEMUXER " XSTR(CONFIG_JPEGXL_ANIM_DEMUXER))
#endif
#ifdef CONFIG_KUX_DEMUXER
 #pragma message("#define CONFIG_KUX_DEMUXER " XSTR(CONFIG_KUX_DEMUXER))
#endif
#ifdef CONFIG_KVAG_DEMUXER
 #pragma message("#define CONFIG_KVAG_DEMUXER " XSTR(CONFIG_KVAG_DEMUXER))
#endif
#ifdef CONFIG_LAF_DEMUXER
 #pragma message("#define CONFIG_LAF_DEMUXER " XSTR(CONFIG_LAF_DEMUXER))
#endif
#ifdef CONFIG_LMLM4_DEMUXER
 #pragma message("#define CONFIG_LMLM4_DEMUXER " XSTR(CONFIG_LMLM4_DEMUXER))
#endif
#ifdef CONFIG_LOAS_DEMUXER
 #pragma message("#define CONFIG_LOAS_DEMUXER " XSTR(CONFIG_LOAS_DEMUXER))
#endif
#ifdef CONFIG_LUODAT_DEMUXER
 #pragma message("#define CONFIG_LUODAT_DEMUXER " XSTR(CONFIG_LUODAT_DEMUXER))
#endif
#ifdef CONFIG_LRC_DEMUXER
 #pragma message("#define CONFIG_LRC_DEMUXER " XSTR(CONFIG_LRC_DEMUXER))
#endif
#ifdef CONFIG_LVF_DEMUXER
 #pragma message("#define CONFIG_LVF_DEMUXER " XSTR(CONFIG_LVF_DEMUXER))
#endif
#ifdef CONFIG_LXF_DEMUXER
 #pragma message("#define CONFIG_LXF_DEMUXER " XSTR(CONFIG_LXF_DEMUXER))
#endif
#ifdef CONFIG_M4V_DEMUXER
 #pragma message("#define CONFIG_M4V_DEMUXER " XSTR(CONFIG_M4V_DEMUXER))
#endif
#ifdef CONFIG_MCA_DEMUXER
 #pragma message("#define CONFIG_MCA_DEMUXER " XSTR(CONFIG_MCA_DEMUXER))
#endif
#ifdef CONFIG_MCC_DEMUXER
 #pragma message("#define CONFIG_MCC_DEMUXER " XSTR(CONFIG_MCC_DEMUXER))
#endif
#ifdef CONFIG_MATROSKA_DEMUXER
 #pragma message("#define CONFIG_MATROSKA_DEMUXER " XSTR(CONFIG_MATROSKA_DEMUXER))
#endif
#ifdef CONFIG_MGSTS_DEMUXER
 #pragma message("#define CONFIG_MGSTS_DEMUXER " XSTR(CONFIG_MGSTS_DEMUXER))
#endif
#ifdef CONFIG_MICRODVD_DEMUXER
 #pragma message("#define CONFIG_MICRODVD_DEMUXER " XSTR(CONFIG_MICRODVD_DEMUXER))
#endif
#ifdef CONFIG_MJPEG_DEMUXER
 #pragma message("#define CONFIG_MJPEG_DEMUXER " XSTR(CONFIG_MJPEG_DEMUXER))
#endif
#ifdef CONFIG_MJPEG_2000_DEMUXER
 #pragma message("#define CONFIG_MJPEG_2000_DEMUXER " XSTR(CONFIG_MJPEG_2000_DEMUXER))
#endif
#ifdef CONFIG_MLP_DEMUXER
 #pragma message("#define CONFIG_MLP_DEMUXER " XSTR(CONFIG_MLP_DEMUXER))
#endif
#ifdef CONFIG_MLV_DEMUXER
 #pragma message("#define CONFIG_MLV_DEMUXER " XSTR(CONFIG_MLV_DEMUXER))
#endif
#ifdef CONFIG_MM_DEMUXER
 #pragma message("#define CONFIG_MM_DEMUXER " XSTR(CONFIG_MM_DEMUXER))
#endif
#ifdef CONFIG_MMF_DEMUXER
 #pragma message("#define CONFIG_MMF_DEMUXER " XSTR(CONFIG_MMF_DEMUXER))
#endif
#ifdef CONFIG_MODS_DEMUXER
 #pragma message("#define CONFIG_MODS_DEMUXER " XSTR(CONFIG_MODS_DEMUXER))
#endif
#ifdef CONFIG_MOFLEX_DEMUXER
 #pragma message("#define CONFIG_MOFLEX_DEMUXER " XSTR(CONFIG_MOFLEX_DEMUXER))
#endif
#ifdef CONFIG_MOV_DEMUXER
 #pragma message("#define CONFIG_MOV_DEMUXER " XSTR(CONFIG_MOV_DEMUXER))
#endif
#ifdef CONFIG_MP3_DEMUXER
 #pragma message("#define CONFIG_MP3_DEMUXER " XSTR(CONFIG_MP3_DEMUXER))
#endif
#ifdef CONFIG_MPC_DEMUXER
 #pragma message("#define CONFIG_MPC_DEMUXER " XSTR(CONFIG_MPC_DEMUXER))
#endif
#ifdef CONFIG_MPC8_DEMUXER
 #pragma message("#define CONFIG_MPC8_DEMUXER " XSTR(CONFIG_MPC8_DEMUXER))
#endif
#ifdef CONFIG_MPEGPS_DEMUXER
 #pragma message("#define CONFIG_MPEGPS_DEMUXER " XSTR(CONFIG_MPEGPS_DEMUXER))
#endif
#ifdef CONFIG_MPEGTS_DEMUXER
 #pragma message("#define CONFIG_MPEGTS_DEMUXER " XSTR(CONFIG_MPEGTS_DEMUXER))
#endif
#ifdef CONFIG_MPEGTSRAW_DEMUXER
 #pragma message("#define CONFIG_MPEGTSRAW_DEMUXER " XSTR(CONFIG_MPEGTSRAW_DEMUXER))
#endif
#ifdef CONFIG_MPEGVIDEO_DEMUXER
 #pragma message("#define CONFIG_MPEGVIDEO_DEMUXER " XSTR(CONFIG_MPEGVIDEO_DEMUXER))
#endif
#ifdef CONFIG_MPJPEG_DEMUXER
 #pragma message("#define CONFIG_MPJPEG_DEMUXER " XSTR(CONFIG_MPJPEG_DEMUXER))
#endif
#ifdef CONFIG_MPL2_DEMUXER
 #pragma message("#define CONFIG_MPL2_DEMUXER " XSTR(CONFIG_MPL2_DEMUXER))
#endif
#ifdef CONFIG_MPSUB_DEMUXER
 #pragma message("#define CONFIG_MPSUB_DEMUXER " XSTR(CONFIG_MPSUB_DEMUXER))
#endif
#ifdef CONFIG_MSF_DEMUXER
 #pragma message("#define CONFIG_MSF_DEMUXER " XSTR(CONFIG_MSF_DEMUXER))
#endif
#ifdef CONFIG_MSNWC_TCP_DEMUXER
 #pragma message("#define CONFIG_MSNWC_TCP_DEMUXER " XSTR(CONFIG_MSNWC_TCP_DEMUXER))
#endif
#ifdef CONFIG_MSP_DEMUXER
 #pragma message("#define CONFIG_MSP_DEMUXER " XSTR(CONFIG_MSP_DEMUXER))
#endif
#ifdef CONFIG_MTAF_DEMUXER
 #pragma message("#define CONFIG_MTAF_DEMUXER " XSTR(CONFIG_MTAF_DEMUXER))
#endif
#ifdef CONFIG_MTV_DEMUXER
 #pragma message("#define CONFIG_MTV_DEMUXER " XSTR(CONFIG_MTV_DEMUXER))
#endif
#ifdef CONFIG_MUSX_DEMUXER
 #pragma message("#define CONFIG_MUSX_DEMUXER " XSTR(CONFIG_MUSX_DEMUXER))
#endif
#ifdef CONFIG_MV_DEMUXER
 #pragma message("#define CONFIG_MV_DEMUXER " XSTR(CONFIG_MV_DEMUXER))
#endif
#ifdef CONFIG_MVI_DEMUXER
 #pragma message("#define CONFIG_MVI_DEMUXER " XSTR(CONFIG_MVI_DEMUXER))
#endif
#ifdef CONFIG_MXF_DEMUXER
 #pragma message("#define CONFIG_MXF_DEMUXER " XSTR(CONFIG_MXF_DEMUXER))
#endif
#ifdef CONFIG_MXG_DEMUXER
 #pragma message("#define CONFIG_MXG_DEMUXER " XSTR(CONFIG_MXG_DEMUXER))
#endif
#ifdef CONFIG_NC_DEMUXER
 #pragma message("#define CONFIG_NC_DEMUXER " XSTR(CONFIG_NC_DEMUXER))
#endif
#ifdef CONFIG_NISTSPHERE_DEMUXER
 #pragma message("#define CONFIG_NISTSPHERE_DEMUXER " XSTR(CONFIG_NISTSPHERE_DEMUXER))
#endif
#ifdef CONFIG_NSP_DEMUXER
 #pragma message("#define CONFIG_NSP_DEMUXER " XSTR(CONFIG_NSP_DEMUXER))
#endif
#ifdef CONFIG_NSV_DEMUXER
 #pragma message("#define CONFIG_NSV_DEMUXER " XSTR(CONFIG_NSV_DEMUXER))
#endif
#ifdef CONFIG_NUT_DEMUXER
 #pragma message("#define CONFIG_NUT_DEMUXER " XSTR(CONFIG_NUT_DEMUXER))
#endif
#ifdef CONFIG_NUV_DEMUXER
 #pragma message("#define CONFIG_NUV_DEMUXER " XSTR(CONFIG_NUV_DEMUXER))
#endif
#ifdef CONFIG_OBU_DEMUXER
 #pragma message("#define CONFIG_OBU_DEMUXER " XSTR(CONFIG_OBU_DEMUXER))
#endif
#ifdef CONFIG_OGG_DEMUXER
 #pragma message("#define CONFIG_OGG_DEMUXER " XSTR(CONFIG_OGG_DEMUXER))
#endif
#ifdef CONFIG_OMA_DEMUXER
 #pragma message("#define CONFIG_OMA_DEMUXER " XSTR(CONFIG_OMA_DEMUXER))
#endif
#ifdef CONFIG_OSQ_DEMUXER
 #pragma message("#define CONFIG_OSQ_DEMUXER " XSTR(CONFIG_OSQ_DEMUXER))
#endif
#ifdef CONFIG_PAF_DEMUXER
 #pragma message("#define CONFIG_PAF_DEMUXER " XSTR(CONFIG_PAF_DEMUXER))
#endif
#ifdef CONFIG_PCM_ALAW_DEMUXER
 #pragma message("#define CONFIG_PCM_ALAW_DEMUXER " XSTR(CONFIG_PCM_ALAW_DEMUXER))
#endif
#ifdef CONFIG_PCM_MULAW_DEMUXER
 #pragma message("#define CONFIG_PCM_MULAW_DEMUXER " XSTR(CONFIG_PCM_MULAW_DEMUXER))
#endif
#ifdef CONFIG_PCM_VIDC_DEMUXER
 #pragma message("#define CONFIG_PCM_VIDC_DEMUXER " XSTR(CONFIG_PCM_VIDC_DEMUXER))
#endif
#ifdef CONFIG_PCM_F64BE_DEMUXER
 #pragma message("#define CONFIG_PCM_F64BE_DEMUXER " XSTR(CONFIG_PCM_F64BE_DEMUXER))
#endif
#ifdef CONFIG_PCM_F64LE_DEMUXER
 #pragma message("#define CONFIG_PCM_F64LE_DEMUXER " XSTR(CONFIG_PCM_F64LE_DEMUXER))
#endif
#ifdef CONFIG_PCM_F32BE_DEMUXER
 #pragma message("#define CONFIG_PCM_F32BE_DEMUXER " XSTR(CONFIG_PCM_F32BE_DEMUXER))
#endif
#ifdef CONFIG_PCM_F32LE_DEMUXER
 #pragma message("#define CONFIG_PCM_F32LE_DEMUXER " XSTR(CONFIG_PCM_F32LE_DEMUXER))
#endif
#ifdef CONFIG_PCM_S32BE_DEMUXER
 #pragma message("#define CONFIG_PCM_S32BE_DEMUXER " XSTR(CONFIG_PCM_S32BE_DEMUXER))
#endif
#ifdef CONFIG_PCM_S32LE_DEMUXER
 #pragma message("#define CONFIG_PCM_S32LE_DEMUXER " XSTR(CONFIG_PCM_S32LE_DEMUXER))
#endif
#ifdef CONFIG_PCM_S24BE_DEMUXER
 #pragma message("#define CONFIG_PCM_S24BE_DEMUXER " XSTR(CONFIG_PCM_S24BE_DEMUXER))
#endif
#ifdef CONFIG_PCM_S24LE_DEMUXER
 #pragma message("#define CONFIG_PCM_S24LE_DEMUXER " XSTR(CONFIG_PCM_S24LE_DEMUXER))
#endif
#ifdef CONFIG_PCM_S16BE_DEMUXER
 #pragma message("#define CONFIG_PCM_S16BE_DEMUXER " XSTR(CONFIG_PCM_S16BE_DEMUXER))
#endif
#ifdef CONFIG_PCM_S16LE_DEMUXER
 #pragma message("#define CONFIG_PCM_S16LE_DEMUXER " XSTR(CONFIG_PCM_S16LE_DEMUXER))
#endif
#ifdef CONFIG_PCM_S8_DEMUXER
 #pragma message("#define CONFIG_PCM_S8_DEMUXER " XSTR(CONFIG_PCM_S8_DEMUXER))
#endif
#ifdef CONFIG_PCM_U32BE_DEMUXER
 #pragma message("#define CONFIG_PCM_U32BE_DEMUXER " XSTR(CONFIG_PCM_U32BE_DEMUXER))
#endif
#ifdef CONFIG_PCM_U32LE_DEMUXER
 #pragma message("#define CONFIG_PCM_U32LE_DEMUXER " XSTR(CONFIG_PCM_U32LE_DEMUXER))
#endif
#ifdef CONFIG_PCM_U24BE_DEMUXER
 #pragma message("#define CONFIG_PCM_U24BE_DEMUXER " XSTR(CONFIG_PCM_U24BE_DEMUXER))
#endif
#ifdef CONFIG_PCM_U24LE_DEMUXER
 #pragma message("#define CONFIG_PCM_U24LE_DEMUXER " XSTR(CONFIG_PCM_U24LE_DEMUXER))
#endif
#ifdef CONFIG_PCM_U16BE_DEMUXER
 #pragma message("#define CONFIG_PCM_U16BE_DEMUXER " XSTR(CONFIG_PCM_U16BE_DEMUXER))
#endif
#ifdef CONFIG_PCM_U16LE_DEMUXER
 #pragma message("#define CONFIG_PCM_U16LE_DEMUXER " XSTR(CONFIG_PCM_U16LE_DEMUXER))
#endif
#ifdef CONFIG_PCM_U8_DEMUXER
 #pragma message("#define CONFIG_PCM_U8_DEMUXER " XSTR(CONFIG_PCM_U8_DEMUXER))
#endif
#ifdef CONFIG_PDV_DEMUXER
 #pragma message("#define CONFIG_PDV_DEMUXER " XSTR(CONFIG_PDV_DEMUXER))
#endif
#ifdef CONFIG_PJS_DEMUXER
 #pragma message("#define CONFIG_PJS_DEMUXER " XSTR(CONFIG_PJS_DEMUXER))
#endif
#ifdef CONFIG_PMP_DEMUXER
 #pragma message("#define CONFIG_PMP_DEMUXER " XSTR(CONFIG_PMP_DEMUXER))
#endif
#ifdef CONFIG_PP_BNK_DEMUXER
 #pragma message("#define CONFIG_PP_BNK_DEMUXER " XSTR(CONFIG_PP_BNK_DEMUXER))
#endif
#ifdef CONFIG_PVA_DEMUXER
 #pragma message("#define CONFIG_PVA_DEMUXER " XSTR(CONFIG_PVA_DEMUXER))
#endif
#ifdef CONFIG_PVF_DEMUXER
 #pragma message("#define CONFIG_PVF_DEMUXER " XSTR(CONFIG_PVF_DEMUXER))
#endif
#ifdef CONFIG_QCP_DEMUXER
 #pragma message("#define CONFIG_QCP_DEMUXER " XSTR(CONFIG_QCP_DEMUXER))
#endif
#ifdef CONFIG_QOA_DEMUXER
 #pragma message("#define CONFIG_QOA_DEMUXER " XSTR(CONFIG_QOA_DEMUXER))
#endif
#ifdef CONFIG_R3D_DEMUXER
 #pragma message("#define CONFIG_R3D_DEMUXER " XSTR(CONFIG_R3D_DEMUXER))
#endif
#ifdef CONFIG_RAWVIDEO_DEMUXER
 #pragma message("#define CONFIG_RAWVIDEO_DEMUXER " XSTR(CONFIG_RAWVIDEO_DEMUXER))
#endif
#ifdef CONFIG_REALTEXT_DEMUXER
 #pragma message("#define CONFIG_REALTEXT_DEMUXER " XSTR(CONFIG_REALTEXT_DEMUXER))
#endif
#ifdef CONFIG_REDSPARK_DEMUXER
 #pragma message("#define CONFIG_REDSPARK_DEMUXER " XSTR(CONFIG_REDSPARK_DEMUXER))
#endif
#ifdef CONFIG_RKA_DEMUXER
 #pragma message("#define CONFIG_RKA_DEMUXER " XSTR(CONFIG_RKA_DEMUXER))
#endif
#ifdef CONFIG_RL2_DEMUXER
 #pragma message("#define CONFIG_RL2_DEMUXER " XSTR(CONFIG_RL2_DEMUXER))
#endif
#ifdef CONFIG_RM_DEMUXER
 #pragma message("#define CONFIG_RM_DEMUXER " XSTR(CONFIG_RM_DEMUXER))
#endif
#ifdef CONFIG_ROQ_DEMUXER
 #pragma message("#define CONFIG_ROQ_DEMUXER " XSTR(CONFIG_ROQ_DEMUXER))
#endif
#ifdef CONFIG_RPL_DEMUXER
 #pragma message("#define CONFIG_RPL_DEMUXER " XSTR(CONFIG_RPL_DEMUXER))
#endif
#ifdef CONFIG_RSD_DEMUXER
 #pragma message("#define CONFIG_RSD_DEMUXER " XSTR(CONFIG_RSD_DEMUXER))
#endif
#ifdef CONFIG_RSO_DEMUXER
 #pragma message("#define CONFIG_RSO_DEMUXER " XSTR(CONFIG_RSO_DEMUXER))
#endif
#ifdef CONFIG_RTP_DEMUXER
 #pragma message("#define CONFIG_RTP_DEMUXER " XSTR(CONFIG_RTP_DEMUXER))
#endif
#ifdef CONFIG_RTSP_DEMUXER
 #pragma message("#define CONFIG_RTSP_DEMUXER " XSTR(CONFIG_RTSP_DEMUXER))
#endif
#ifdef CONFIG_S337M_DEMUXER
 #pragma message("#define CONFIG_S337M_DEMUXER " XSTR(CONFIG_S337M_DEMUXER))
#endif
#ifdef CONFIG_SAMI_DEMUXER
 #pragma message("#define CONFIG_SAMI_DEMUXER " XSTR(CONFIG_SAMI_DEMUXER))
#endif
#ifdef CONFIG_SAP_DEMUXER
 #pragma message("#define CONFIG_SAP_DEMUXER " XSTR(CONFIG_SAP_DEMUXER))
#endif
#ifdef CONFIG_SBC_DEMUXER
 #pragma message("#define CONFIG_SBC_DEMUXER " XSTR(CONFIG_SBC_DEMUXER))
#endif
#ifdef CONFIG_SBG_DEMUXER
 #pragma message("#define CONFIG_SBG_DEMUXER " XSTR(CONFIG_SBG_DEMUXER))
#endif
#ifdef CONFIG_SCC_DEMUXER
 #pragma message("#define CONFIG_SCC_DEMUXER " XSTR(CONFIG_SCC_DEMUXER))
#endif
#ifdef CONFIG_SCD_DEMUXER
 #pragma message("#define CONFIG_SCD_DEMUXER " XSTR(CONFIG_SCD_DEMUXER))
#endif
#ifdef CONFIG_SDNS_DEMUXER
 #pragma message("#define CONFIG_SDNS_DEMUXER " XSTR(CONFIG_SDNS_DEMUXER))
#endif
#ifdef CONFIG_SDP_DEMUXER
 #pragma message("#define CONFIG_SDP_DEMUXER " XSTR(CONFIG_SDP_DEMUXER))
#endif
#ifdef CONFIG_SDR2_DEMUXER
 #pragma message("#define CONFIG_SDR2_DEMUXER " XSTR(CONFIG_SDR2_DEMUXER))
#endif
#ifdef CONFIG_SDS_DEMUXER
 #pragma message("#define CONFIG_SDS_DEMUXER " XSTR(CONFIG_SDS_DEMUXER))
#endif
#ifdef CONFIG_SDX_DEMUXER
 #pragma message("#define CONFIG_SDX_DEMUXER " XSTR(CONFIG_SDX_DEMUXER))
#endif
#ifdef CONFIG_SEGAFILM_DEMUXER
 #pragma message("#define CONFIG_SEGAFILM_DEMUXER " XSTR(CONFIG_SEGAFILM_DEMUXER))
#endif
#ifdef CONFIG_SER_DEMUXER
 #pragma message("#define CONFIG_SER_DEMUXER " XSTR(CONFIG_SER_DEMUXER))
#endif
#ifdef CONFIG_SGA_DEMUXER
 #pragma message("#define CONFIG_SGA_DEMUXER " XSTR(CONFIG_SGA_DEMUXER))
#endif
#ifdef CONFIG_SHORTEN_DEMUXER
 #pragma message("#define CONFIG_SHORTEN_DEMUXER " XSTR(CONFIG_SHORTEN_DEMUXER))
#endif
#ifdef CONFIG_SIFF_DEMUXER
 #pragma message("#define CONFIG_SIFF_DEMUXER " XSTR(CONFIG_SIFF_DEMUXER))
#endif
#ifdef CONFIG_SIMBIOSIS_IMX_DEMUXER
 #pragma message("#define CONFIG_SIMBIOSIS_IMX_DEMUXER " XSTR(CONFIG_SIMBIOSIS_IMX_DEMUXER))
#endif
#ifdef CONFIG_SLN_DEMUXER
 #pragma message("#define CONFIG_SLN_DEMUXER " XSTR(CONFIG_SLN_DEMUXER))
#endif
#ifdef CONFIG_SMACKER_DEMUXER
 #pragma message("#define CONFIG_SMACKER_DEMUXER " XSTR(CONFIG_SMACKER_DEMUXER))
#endif
#ifdef CONFIG_SMJPEG_DEMUXER
 #pragma message("#define CONFIG_SMJPEG_DEMUXER " XSTR(CONFIG_SMJPEG_DEMUXER))
#endif
#ifdef CONFIG_SMUSH_DEMUXER
 #pragma message("#define CONFIG_SMUSH_DEMUXER " XSTR(CONFIG_SMUSH_DEMUXER))
#endif
#ifdef CONFIG_SOL_DEMUXER
 #pragma message("#define CONFIG_SOL_DEMUXER " XSTR(CONFIG_SOL_DEMUXER))
#endif
#ifdef CONFIG_SOX_DEMUXER
 #pragma message("#define CONFIG_SOX_DEMUXER " XSTR(CONFIG_SOX_DEMUXER))
#endif
#ifdef CONFIG_SPDIF_DEMUXER
 #pragma message("#define CONFIG_SPDIF_DEMUXER " XSTR(CONFIG_SPDIF_DEMUXER))
#endif
#ifdef CONFIG_SRT_DEMUXER
 #pragma message("#define CONFIG_SRT_DEMUXER " XSTR(CONFIG_SRT_DEMUXER))
#endif
#ifdef CONFIG_STR_DEMUXER
 #pragma message("#define CONFIG_STR_DEMUXER " XSTR(CONFIG_STR_DEMUXER))
#endif
#ifdef CONFIG_STL_DEMUXER
 #pragma message("#define CONFIG_STL_DEMUXER " XSTR(CONFIG_STL_DEMUXER))
#endif
#ifdef CONFIG_SUBVIEWER1_DEMUXER
 #pragma message("#define CONFIG_SUBVIEWER1_DEMUXER " XSTR(CONFIG_SUBVIEWER1_DEMUXER))
#endif
#ifdef CONFIG_SUBVIEWER_DEMUXER
 #pragma message("#define CONFIG_SUBVIEWER_DEMUXER " XSTR(CONFIG_SUBVIEWER_DEMUXER))
#endif
#ifdef CONFIG_SUP_DEMUXER
 #pragma message("#define CONFIG_SUP_DEMUXER " XSTR(CONFIG_SUP_DEMUXER))
#endif
#ifdef CONFIG_SVAG_DEMUXER
 #pragma message("#define CONFIG_SVAG_DEMUXER " XSTR(CONFIG_SVAG_DEMUXER))
#endif
#ifdef CONFIG_SVS_DEMUXER
 #pragma message("#define CONFIG_SVS_DEMUXER " XSTR(CONFIG_SVS_DEMUXER))
#endif
#ifdef CONFIG_SWF_DEMUXER
 #pragma message("#define CONFIG_SWF_DEMUXER " XSTR(CONFIG_SWF_DEMUXER))
#endif
#ifdef CONFIG_TAK_DEMUXER
 #pragma message("#define CONFIG_TAK_DEMUXER " XSTR(CONFIG_TAK_DEMUXER))
#endif
#ifdef CONFIG_TEDCAPTIONS_DEMUXER
 #pragma message("#define CONFIG_TEDCAPTIONS_DEMUXER " XSTR(CONFIG_TEDCAPTIONS_DEMUXER))
#endif
#ifdef CONFIG_THP_DEMUXER
 #pragma message("#define CONFIG_THP_DEMUXER " XSTR(CONFIG_THP_DEMUXER))
#endif
#ifdef CONFIG_THREEDOSTR_DEMUXER
 #pragma message("#define CONFIG_THREEDOSTR_DEMUXER " XSTR(CONFIG_THREEDOSTR_DEMUXER))
#endif
#ifdef CONFIG_TIERTEXSEQ_DEMUXER
 #pragma message("#define CONFIG_TIERTEXSEQ_DEMUXER " XSTR(CONFIG_TIERTEXSEQ_DEMUXER))
#endif
#ifdef CONFIG_TMV_DEMUXER
 #pragma message("#define CONFIG_TMV_DEMUXER " XSTR(CONFIG_TMV_DEMUXER))
#endif
#ifdef CONFIG_TRUEHD_DEMUXER
 #pragma message("#define CONFIG_TRUEHD_DEMUXER " XSTR(CONFIG_TRUEHD_DEMUXER))
#endif
#ifdef CONFIG_TTA_DEMUXER
 #pragma message("#define CONFIG_TTA_DEMUXER " XSTR(CONFIG_TTA_DEMUXER))
#endif
#ifdef CONFIG_TXD_DEMUXER
 #pragma message("#define CONFIG_TXD_DEMUXER " XSTR(CONFIG_TXD_DEMUXER))
#endif
#ifdef CONFIG_TTY_DEMUXER
 #pragma message("#define CONFIG_TTY_DEMUXER " XSTR(CONFIG_TTY_DEMUXER))
#endif
#ifdef CONFIG_TY_DEMUXER
 #pragma message("#define CONFIG_TY_DEMUXER " XSTR(CONFIG_TY_DEMUXER))
#endif
#ifdef CONFIG_USM_DEMUXER
 #pragma message("#define CONFIG_USM_DEMUXER " XSTR(CONFIG_USM_DEMUXER))
#endif
#ifdef CONFIG_V210_DEMUXER
 #pragma message("#define CONFIG_V210_DEMUXER " XSTR(CONFIG_V210_DEMUXER))
#endif
#ifdef CONFIG_V210X_DEMUXER
 #pragma message("#define CONFIG_V210X_DEMUXER " XSTR(CONFIG_V210X_DEMUXER))
#endif
#ifdef CONFIG_VAG_DEMUXER
 #pragma message("#define CONFIG_VAG_DEMUXER " XSTR(CONFIG_VAG_DEMUXER))
#endif
#ifdef CONFIG_VC1_DEMUXER
 #pragma message("#define CONFIG_VC1_DEMUXER " XSTR(CONFIG_VC1_DEMUXER))
#endif
#ifdef CONFIG_VC1T_DEMUXER
 #pragma message("#define CONFIG_VC1T_DEMUXER " XSTR(CONFIG_VC1T_DEMUXER))
#endif
#ifdef CONFIG_VIVIDAS_DEMUXER
 #pragma message("#define CONFIG_VIVIDAS_DEMUXER " XSTR(CONFIG_VIVIDAS_DEMUXER))
#endif
#ifdef CONFIG_VIVO_DEMUXER
 #pragma message("#define CONFIG_VIVO_DEMUXER " XSTR(CONFIG_VIVO_DEMUXER))
#endif
#ifdef CONFIG_VMD_DEMUXER
 #pragma message("#define CONFIG_VMD_DEMUXER " XSTR(CONFIG_VMD_DEMUXER))
#endif
#ifdef CONFIG_VOBSUB_DEMUXER
 #pragma message("#define CONFIG_VOBSUB_DEMUXER " XSTR(CONFIG_VOBSUB_DEMUXER))
#endif
#ifdef CONFIG_VOC_DEMUXER
 #pragma message("#define CONFIG_VOC_DEMUXER " XSTR(CONFIG_VOC_DEMUXER))
#endif
#ifdef CONFIG_VPK_DEMUXER
 #pragma message("#define CONFIG_VPK_DEMUXER " XSTR(CONFIG_VPK_DEMUXER))
#endif
#ifdef CONFIG_VPLAYER_DEMUXER
 #pragma message("#define CONFIG_VPLAYER_DEMUXER " XSTR(CONFIG_VPLAYER_DEMUXER))
#endif
#ifdef CONFIG_VQF_DEMUXER
 #pragma message("#define CONFIG_VQF_DEMUXER " XSTR(CONFIG_VQF_DEMUXER))
#endif
#ifdef CONFIG_VVC_DEMUXER
 #pragma message("#define CONFIG_VVC_DEMUXER " XSTR(CONFIG_VVC_DEMUXER))
#endif
#ifdef CONFIG_W64_DEMUXER
 #pragma message("#define CONFIG_W64_DEMUXER " XSTR(CONFIG_W64_DEMUXER))
#endif
#ifdef CONFIG_WADY_DEMUXER
 #pragma message("#define CONFIG_WADY_DEMUXER " XSTR(CONFIG_WADY_DEMUXER))
#endif
#ifdef CONFIG_WAVARC_DEMUXER
 #pragma message("#define CONFIG_WAVARC_DEMUXER " XSTR(CONFIG_WAVARC_DEMUXER))
#endif
#ifdef CONFIG_WAV_DEMUXER
 #pragma message("#define CONFIG_WAV_DEMUXER " XSTR(CONFIG_WAV_DEMUXER))
#endif
#ifdef CONFIG_WC3_DEMUXER
 #pragma message("#define CONFIG_WC3_DEMUXER " XSTR(CONFIG_WC3_DEMUXER))
#endif
#ifdef CONFIG_WEBM_DASH_MANIFEST_DEMUXER
 #pragma message("#define CONFIG_WEBM_DASH_MANIFEST_DEMUXER " XSTR(CONFIG_WEBM_DASH_MANIFEST_DEMUXER))
#endif
#ifdef CONFIG_WEBVTT_DEMUXER
 #pragma message("#define CONFIG_WEBVTT_DEMUXER " XSTR(CONFIG_WEBVTT_DEMUXER))
#endif
#ifdef CONFIG_WSAUD_DEMUXER
 #pragma message("#define CONFIG_WSAUD_DEMUXER " XSTR(CONFIG_WSAUD_DEMUXER))
#endif
#ifdef CONFIG_WSD_DEMUXER
 #pragma message("#define CONFIG_WSD_DEMUXER " XSTR(CONFIG_WSD_DEMUXER))
#endif
#ifdef CONFIG_WSVQA_DEMUXER
 #pragma message("#define CONFIG_WSVQA_DEMUXER " XSTR(CONFIG_WSVQA_DEMUXER))
#endif
#ifdef CONFIG_WTV_DEMUXER
 #pragma message("#define CONFIG_WTV_DEMUXER " XSTR(CONFIG_WTV_DEMUXER))
#endif
#ifdef CONFIG_WVE_DEMUXER
 #pragma message("#define CONFIG_WVE_DEMUXER " XSTR(CONFIG_WVE_DEMUXER))
#endif
#ifdef CONFIG_WV_DEMUXER
 #pragma message("#define CONFIG_WV_DEMUXER " XSTR(CONFIG_WV_DEMUXER))
#endif
#ifdef CONFIG_XA_DEMUXER
 #pragma message("#define CONFIG_XA_DEMUXER " XSTR(CONFIG_XA_DEMUXER))
#endif
#ifdef CONFIG_XBIN_DEMUXER
 #pragma message("#define CONFIG_XBIN_DEMUXER " XSTR(CONFIG_XBIN_DEMUXER))
#endif
#ifdef CONFIG_XMD_DEMUXER
 #pragma message("#define CONFIG_XMD_DEMUXER " XSTR(CONFIG_XMD_DEMUXER))
#endif
#ifdef CONFIG_XMV_DEMUXER
 #pragma message("#define CONFIG_XMV_DEMUXER " XSTR(CONFIG_XMV_DEMUXER))
#endif
#ifdef CONFIG_XVAG_DEMUXER
 #pragma message("#define CONFIG_XVAG_DEMUXER " XSTR(CONFIG_XVAG_DEMUXER))
#endif
#ifdef CONFIG_XWMA_DEMUXER
 #pragma message("#define CONFIG_XWMA_DEMUXER " XSTR(CONFIG_XWMA_DEMUXER))
#endif
#ifdef CONFIG_YOP_DEMUXER
 #pragma message("#define CONFIG_YOP_DEMUXER " XSTR(CONFIG_YOP_DEMUXER))
#endif
#ifdef CONFIG_YUV4MPEGPIPE_DEMUXER
 #pragma message("#define CONFIG_YUV4MPEGPIPE_DEMUXER " XSTR(CONFIG_YUV4MPEGPIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_BMP_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_BMP_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_BMP_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_CRI_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_CRI_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_CRI_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_DDS_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_DDS_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_DDS_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_DPX_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_DPX_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_DPX_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_EXR_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_EXR_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_EXR_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_GEM_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_GEM_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_GEM_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_GIF_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_GIF_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_GIF_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_HDR_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_HDR_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_HDR_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_J2K_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_J2K_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_J2K_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_JPEG_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_JPEG_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_JPEG_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_JPEGLS_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_JPEGLS_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_JPEGLS_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_JPEGXL_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_JPEGXL_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_JPEGXL_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_PAM_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_PAM_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_PAM_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_PBM_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_PBM_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_PBM_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_PCX_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_PCX_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_PCX_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_PFM_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_PFM_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_PFM_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_PGMYUV_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_PGMYUV_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_PGMYUV_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_PGM_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_PGM_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_PGM_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_PGX_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_PGX_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_PGX_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_PHM_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_PHM_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_PHM_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_PHOTOCD_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_PHOTOCD_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_PHOTOCD_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_PICTOR_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_PICTOR_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_PICTOR_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_PNG_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_PNG_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_PNG_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_PPM_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_PPM_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_PPM_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_PSD_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_PSD_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_PSD_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_QDRAW_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_QDRAW_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_QDRAW_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_QOI_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_QOI_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_QOI_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_SGI_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_SGI_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_SGI_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_SVG_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_SVG_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_SVG_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_SUNRAST_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_SUNRAST_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_SUNRAST_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_TIFF_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_TIFF_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_TIFF_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_VBN_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_VBN_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_VBN_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_WEBP_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_WEBP_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_WEBP_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_XBM_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_XBM_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_XBM_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_XPM_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_XPM_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_XPM_PIPE_DEMUXER))
#endif
#ifdef CONFIG_IMAGE_XWD_PIPE_DEMUXER
 #pragma message("#define CONFIG_IMAGE_XWD_PIPE_DEMUXER " XSTR(CONFIG_IMAGE_XWD_PIPE_DEMUXER))
#endif
#ifdef CONFIG_LIBGME_DEMUXER
 #pragma message("#define CONFIG_LIBGME_DEMUXER " XSTR(CONFIG_LIBGME_DEMUXER))
#endif
#ifdef CONFIG_LIBMODPLUG_DEMUXER
 #pragma message("#define CONFIG_LIBMODPLUG_DEMUXER " XSTR(CONFIG_LIBMODPLUG_DEMUXER))
#endif
#ifdef CONFIG_LIBOPENMPT_DEMUXER
 #pragma message("#define CONFIG_LIBOPENMPT_DEMUXER " XSTR(CONFIG_LIBOPENMPT_DEMUXER))
#endif
#ifdef CONFIG_VAPOURSYNTH_DEMUXER
 #pragma message("#define CONFIG_VAPOURSYNTH_DEMUXER " XSTR(CONFIG_VAPOURSYNTH_DEMUXER))
#endif
#ifdef CONFIG_A64_MUXER
 #pragma message("#define CONFIG_A64_MUXER " XSTR(CONFIG_A64_MUXER))
#endif
#ifdef CONFIG_AC3_MUXER
 #pragma message("#define CONFIG_AC3_MUXER " XSTR(CONFIG_AC3_MUXER))
#endif
#ifdef CONFIG_AC4_MUXER
 #pragma message("#define CONFIG_AC4_MUXER " XSTR(CONFIG_AC4_MUXER))
#endif
#ifdef CONFIG_ADTS_MUXER
 #pragma message("#define CONFIG_ADTS_MUXER " XSTR(CONFIG_ADTS_MUXER))
#endif
#ifdef CONFIG_ADX_MUXER
 #pragma message("#define CONFIG_ADX_MUXER " XSTR(CONFIG_ADX_MUXER))
#endif
#ifdef CONFIG_AEA_MUXER
 #pragma message("#define CONFIG_AEA_MUXER " XSTR(CONFIG_AEA_MUXER))
#endif
#ifdef CONFIG_AIFF_MUXER
 #pragma message("#define CONFIG_AIFF_MUXER " XSTR(CONFIG_AIFF_MUXER))
#endif
#ifdef CONFIG_ALP_MUXER
 #pragma message("#define CONFIG_ALP_MUXER " XSTR(CONFIG_ALP_MUXER))
#endif
#ifdef CONFIG_AMR_MUXER
 #pragma message("#define CONFIG_AMR_MUXER " XSTR(CONFIG_AMR_MUXER))
#endif
#ifdef CONFIG_AMV_MUXER
 #pragma message("#define CONFIG_AMV_MUXER " XSTR(CONFIG_AMV_MUXER))
#endif
#ifdef CONFIG_APM_MUXER
 #pragma message("#define CONFIG_APM_MUXER " XSTR(CONFIG_APM_MUXER))
#endif
#ifdef CONFIG_APNG_MUXER
 #pragma message("#define CONFIG_APNG_MUXER " XSTR(CONFIG_APNG_MUXER))
#endif
#ifdef CONFIG_APTX_MUXER
 #pragma message("#define CONFIG_APTX_MUXER " XSTR(CONFIG_APTX_MUXER))
#endif
#ifdef CONFIG_APTX_HD_MUXER
 #pragma message("#define CONFIG_APTX_HD_MUXER " XSTR(CONFIG_APTX_HD_MUXER))
#endif
#ifdef CONFIG_ARGO_ASF_MUXER
 #pragma message("#define CONFIG_ARGO_ASF_MUXER " XSTR(CONFIG_ARGO_ASF_MUXER))
#endif
#ifdef CONFIG_ARGO_CVG_MUXER
 #pragma message("#define CONFIG_ARGO_CVG_MUXER " XSTR(CONFIG_ARGO_CVG_MUXER))
#endif
#ifdef CONFIG_ASF_MUXER
 #pragma message("#define CONFIG_ASF_MUXER " XSTR(CONFIG_ASF_MUXER))
#endif
#ifdef CONFIG_ASS_MUXER
 #pragma message("#define CONFIG_ASS_MUXER " XSTR(CONFIG_ASS_MUXER))
#endif
#ifdef CONFIG_AST_MUXER
 #pragma message("#define CONFIG_AST_MUXER " XSTR(CONFIG_AST_MUXER))
#endif
#ifdef CONFIG_ASF_STREAM_MUXER
 #pragma message("#define CONFIG_ASF_STREAM_MUXER " XSTR(CONFIG_ASF_STREAM_MUXER))
#endif
#ifdef CONFIG_AU_MUXER
 #pragma message("#define CONFIG_AU_MUXER " XSTR(CONFIG_AU_MUXER))
#endif
#ifdef CONFIG_AVI_MUXER
 #pragma message("#define CONFIG_AVI_MUXER " XSTR(CONFIG_AVI_MUXER))
#endif
#ifdef CONFIG_AVIF_MUXER
 #pragma message("#define CONFIG_AVIF_MUXER " XSTR(CONFIG_AVIF_MUXER))
#endif
#ifdef CONFIG_AVM2_MUXER
 #pragma message("#define CONFIG_AVM2_MUXER " XSTR(CONFIG_AVM2_MUXER))
#endif
#ifdef CONFIG_AVS2_MUXER
 #pragma message("#define CONFIG_AVS2_MUXER " XSTR(CONFIG_AVS2_MUXER))
#endif
#ifdef CONFIG_AVS3_MUXER
 #pragma message("#define CONFIG_AVS3_MUXER " XSTR(CONFIG_AVS3_MUXER))
#endif
#ifdef CONFIG_BIT_MUXER
 #pragma message("#define CONFIG_BIT_MUXER " XSTR(CONFIG_BIT_MUXER))
#endif
#ifdef CONFIG_CAF_MUXER
 #pragma message("#define CONFIG_CAF_MUXER " XSTR(CONFIG_CAF_MUXER))
#endif
#ifdef CONFIG_CAVSVIDEO_MUXER
 #pragma message("#define CONFIG_CAVSVIDEO_MUXER " XSTR(CONFIG_CAVSVIDEO_MUXER))
#endif
#ifdef CONFIG_CODEC2_MUXER
 #pragma message("#define CONFIG_CODEC2_MUXER " XSTR(CONFIG_CODEC2_MUXER))
#endif
#ifdef CONFIG_CODEC2RAW_MUXER
 #pragma message("#define CONFIG_CODEC2RAW_MUXER " XSTR(CONFIG_CODEC2RAW_MUXER))
#endif
#ifdef CONFIG_CRC_MUXER
 #pragma message("#define CONFIG_CRC_MUXER " XSTR(CONFIG_CRC_MUXER))
#endif
#ifdef CONFIG_DASH_MUXER
 #pragma message("#define CONFIG_DASH_MUXER " XSTR(CONFIG_DASH_MUXER))
#endif
#ifdef CONFIG_DATA_MUXER
 #pragma message("#define CONFIG_DATA_MUXER " XSTR(CONFIG_DATA_MUXER))
#endif
#ifdef CONFIG_DAUD_MUXER
 #pragma message("#define CONFIG_DAUD_MUXER " XSTR(CONFIG_DAUD_MUXER))
#endif
#ifdef CONFIG_DFPWM_MUXER
 #pragma message("#define CONFIG_DFPWM_MUXER " XSTR(CONFIG_DFPWM_MUXER))
#endif
#ifdef CONFIG_DIRAC_MUXER
 #pragma message("#define CONFIG_DIRAC_MUXER " XSTR(CONFIG_DIRAC_MUXER))
#endif
#ifdef CONFIG_DNXHD_MUXER
 #pragma message("#define CONFIG_DNXHD_MUXER " XSTR(CONFIG_DNXHD_MUXER))
#endif
#ifdef CONFIG_DTS_MUXER
 #pragma message("#define CONFIG_DTS_MUXER " XSTR(CONFIG_DTS_MUXER))
#endif
#ifdef CONFIG_DV_MUXER
 #pragma message("#define CONFIG_DV_MUXER " XSTR(CONFIG_DV_MUXER))
#endif
#ifdef CONFIG_EAC3_MUXER
 #pragma message("#define CONFIG_EAC3_MUXER " XSTR(CONFIG_EAC3_MUXER))
#endif
#ifdef CONFIG_EVC_MUXER
 #pragma message("#define CONFIG_EVC_MUXER " XSTR(CONFIG_EVC_MUXER))
#endif
#ifdef CONFIG_F4V_MUXER
 #pragma message("#define CONFIG_F4V_MUXER " XSTR(CONFIG_F4V_MUXER))
#endif
#ifdef CONFIG_FFMETADATA_MUXER
 #pragma message("#define CONFIG_FFMETADATA_MUXER " XSTR(CONFIG_FFMETADATA_MUXER))
#endif
#ifdef CONFIG_FIFO_MUXER
 #pragma message("#define CONFIG_FIFO_MUXER " XSTR(CONFIG_FIFO_MUXER))
#endif
#ifdef CONFIG_FILMSTRIP_MUXER
 #pragma message("#define CONFIG_FILMSTRIP_MUXER " XSTR(CONFIG_FILMSTRIP_MUXER))
#endif
#ifdef CONFIG_FITS_MUXER
 #pragma message("#define CONFIG_FITS_MUXER " XSTR(CONFIG_FITS_MUXER))
#endif
#ifdef CONFIG_FLAC_MUXER
 #pragma message("#define CONFIG_FLAC_MUXER " XSTR(CONFIG_FLAC_MUXER))
#endif
#ifdef CONFIG_FLV_MUXER
 #pragma message("#define CONFIG_FLV_MUXER " XSTR(CONFIG_FLV_MUXER))
#endif
#ifdef CONFIG_FRAMECRC_MUXER
 #pragma message("#define CONFIG_FRAMECRC_MUXER " XSTR(CONFIG_FRAMECRC_MUXER))
#endif
#ifdef CONFIG_FRAMEHASH_MUXER
 #pragma message("#define CONFIG_FRAMEHASH_MUXER " XSTR(CONFIG_FRAMEHASH_MUXER))
#endif
#ifdef CONFIG_FRAMEMD5_MUXER
 #pragma message("#define CONFIG_FRAMEMD5_MUXER " XSTR(CONFIG_FRAMEMD5_MUXER))
#endif
#ifdef CONFIG_G722_MUXER
 #pragma message("#define CONFIG_G722_MUXER " XSTR(CONFIG_G722_MUXER))
#endif
#ifdef CONFIG_G723_1_MUXER
 #pragma message("#define CONFIG_G723_1_MUXER " XSTR(CONFIG_G723_1_MUXER))
#endif
#ifdef CONFIG_G726_MUXER
 #pragma message("#define CONFIG_G726_MUXER " XSTR(CONFIG_G726_MUXER))
#endif
#ifdef CONFIG_G726LE_MUXER
 #pragma message("#define CONFIG_G726LE_MUXER " XSTR(CONFIG_G726LE_MUXER))
#endif
#ifdef CONFIG_GIF_MUXER
 #pragma message("#define CONFIG_GIF_MUXER " XSTR(CONFIG_GIF_MUXER))
#endif
#ifdef CONFIG_GSM_MUXER
 #pragma message("#define CONFIG_GSM_MUXER " XSTR(CONFIG_GSM_MUXER))
#endif
#ifdef CONFIG_GXF_MUXER
 #pragma message("#define CONFIG_GXF_MUXER " XSTR(CONFIG_GXF_MUXER))
#endif
#ifdef CONFIG_H261_MUXER
 #pragma message("#define CONFIG_H261_MUXER " XSTR(CONFIG_H261_MUXER))
#endif
#ifdef CONFIG_H263_MUXER
 #pragma message("#define CONFIG_H263_MUXER " XSTR(CONFIG_H263_MUXER))
#endif
#ifdef CONFIG_H264_MUXER
 #pragma message("#define CONFIG_H264_MUXER " XSTR(CONFIG_H264_MUXER))
#endif
#ifdef CONFIG_HASH_MUXER
 #pragma message("#define CONFIG_HASH_MUXER " XSTR(CONFIG_HASH_MUXER))
#endif
#ifdef CONFIG_HDS_MUXER
 #pragma message("#define CONFIG_HDS_MUXER " XSTR(CONFIG_HDS_MUXER))
#endif
#ifdef CONFIG_HEVC_MUXER
 #pragma message("#define CONFIG_HEVC_MUXER " XSTR(CONFIG_HEVC_MUXER))
#endif
#ifdef CONFIG_HLS_MUXER
 #pragma message("#define CONFIG_HLS_MUXER " XSTR(CONFIG_HLS_MUXER))
#endif
#ifdef CONFIG_IAMF_MUXER
 #pragma message("#define CONFIG_IAMF_MUXER " XSTR(CONFIG_IAMF_MUXER))
#endif
#ifdef CONFIG_ICO_MUXER
 #pragma message("#define CONFIG_ICO_MUXER " XSTR(CONFIG_ICO_MUXER))
#endif
#ifdef CONFIG_ILBC_MUXER
 #pragma message("#define CONFIG_ILBC_MUXER " XSTR(CONFIG_ILBC_MUXER))
#endif
#ifdef CONFIG_IMAGE2_MUXER
 #pragma message("#define CONFIG_IMAGE2_MUXER " XSTR(CONFIG_IMAGE2_MUXER))
#endif
#ifdef CONFIG_IMAGE2PIPE_MUXER
 #pragma message("#define CONFIG_IMAGE2PIPE_MUXER " XSTR(CONFIG_IMAGE2PIPE_MUXER))
#endif
#ifdef CONFIG_IPOD_MUXER
 #pragma message("#define CONFIG_IPOD_MUXER " XSTR(CONFIG_IPOD_MUXER))
#endif
#ifdef CONFIG_IRCAM_MUXER
 #pragma message("#define CONFIG_IRCAM_MUXER " XSTR(CONFIG_IRCAM_MUXER))
#endif
#ifdef CONFIG_ISMV_MUXER
 #pragma message("#define CONFIG_ISMV_MUXER " XSTR(CONFIG_ISMV_MUXER))
#endif
#ifdef CONFIG_IVF_MUXER
 #pragma message("#define CONFIG_IVF_MUXER " XSTR(CONFIG_IVF_MUXER))
#endif
#ifdef CONFIG_JACOSUB_MUXER
 #pragma message("#define CONFIG_JACOSUB_MUXER " XSTR(CONFIG_JACOSUB_MUXER))
#endif
#ifdef CONFIG_KVAG_MUXER
 #pragma message("#define CONFIG_KVAG_MUXER " XSTR(CONFIG_KVAG_MUXER))
#endif
#ifdef CONFIG_LATM_MUXER
 #pragma message("#define CONFIG_LATM_MUXER " XSTR(CONFIG_LATM_MUXER))
#endif
#ifdef CONFIG_LRC_MUXER
 #pragma message("#define CONFIG_LRC_MUXER " XSTR(CONFIG_LRC_MUXER))
#endif
#ifdef CONFIG_M4V_MUXER
 #pragma message("#define CONFIG_M4V_MUXER " XSTR(CONFIG_M4V_MUXER))
#endif
#ifdef CONFIG_MD5_MUXER
 #pragma message("#define CONFIG_MD5_MUXER " XSTR(CONFIG_MD5_MUXER))
#endif
#ifdef CONFIG_MATROSKA_MUXER
 #pragma message("#define CONFIG_MATROSKA_MUXER " XSTR(CONFIG_MATROSKA_MUXER))
#endif
#ifdef CONFIG_MATROSKA_AUDIO_MUXER
 #pragma message("#define CONFIG_MATROSKA_AUDIO_MUXER " XSTR(CONFIG_MATROSKA_AUDIO_MUXER))
#endif
#ifdef CONFIG_MICRODVD_MUXER
 #pragma message("#define CONFIG_MICRODVD_MUXER " XSTR(CONFIG_MICRODVD_MUXER))
#endif
#ifdef CONFIG_MJPEG_MUXER
 #pragma message("#define CONFIG_MJPEG_MUXER " XSTR(CONFIG_MJPEG_MUXER))
#endif
#ifdef CONFIG_MLP_MUXER
 #pragma message("#define CONFIG_MLP_MUXER " XSTR(CONFIG_MLP_MUXER))
#endif
#ifdef CONFIG_MMF_MUXER
 #pragma message("#define CONFIG_MMF_MUXER " XSTR(CONFIG_MMF_MUXER))
#endif
#ifdef CONFIG_MOV_MUXER
 #pragma message("#define CONFIG_MOV_MUXER " XSTR(CONFIG_MOV_MUXER))
#endif
#ifdef CONFIG_MP2_MUXER
 #pragma message("#define CONFIG_MP2_MUXER " XSTR(CONFIG_MP2_MUXER))
#endif
#ifdef CONFIG_MP3_MUXER
 #pragma message("#define CONFIG_MP3_MUXER " XSTR(CONFIG_MP3_MUXER))
#endif
#ifdef CONFIG_MP4_MUXER
 #pragma message("#define CONFIG_MP4_MUXER " XSTR(CONFIG_MP4_MUXER))
#endif
#ifdef CONFIG_MPEG1SYSTEM_MUXER
 #pragma message("#define CONFIG_MPEG1SYSTEM_MUXER " XSTR(CONFIG_MPEG1SYSTEM_MUXER))
#endif
#ifdef CONFIG_MPEG1VCD_MUXER
 #pragma message("#define CONFIG_MPEG1VCD_MUXER " XSTR(CONFIG_MPEG1VCD_MUXER))
#endif
#ifdef CONFIG_MPEG1VIDEO_MUXER
 #pragma message("#define CONFIG_MPEG1VIDEO_MUXER " XSTR(CONFIG_MPEG1VIDEO_MUXER))
#endif
#ifdef CONFIG_MPEG2DVD_MUXER
 #pragma message("#define CONFIG_MPEG2DVD_MUXER " XSTR(CONFIG_MPEG2DVD_MUXER))
#endif
#ifdef CONFIG_MPEG2SVCD_MUXER
 #pragma message("#define CONFIG_MPEG2SVCD_MUXER " XSTR(CONFIG_MPEG2SVCD_MUXER))
#endif
#ifdef CONFIG_MPEG2VIDEO_MUXER
 #pragma message("#define CONFIG_MPEG2VIDEO_MUXER " XSTR(CONFIG_MPEG2VIDEO_MUXER))
#endif
#ifdef CONFIG_MPEG2VOB_MUXER
 #pragma message("#define CONFIG_MPEG2VOB_MUXER " XSTR(CONFIG_MPEG2VOB_MUXER))
#endif
#ifdef CONFIG_MPEGTS_MUXER
 #pragma message("#define CONFIG_MPEGTS_MUXER " XSTR(CONFIG_MPEGTS_MUXER))
#endif
#ifdef CONFIG_MPJPEG_MUXER
 #pragma message("#define CONFIG_MPJPEG_MUXER " XSTR(CONFIG_MPJPEG_MUXER))
#endif
#ifdef CONFIG_MXF_MUXER
 #pragma message("#define CONFIG_MXF_MUXER " XSTR(CONFIG_MXF_MUXER))
#endif
#ifdef CONFIG_MXF_D10_MUXER
 #pragma message("#define CONFIG_MXF_D10_MUXER " XSTR(CONFIG_MXF_D10_MUXER))
#endif
#ifdef CONFIG_MXF_OPATOM_MUXER
 #pragma message("#define CONFIG_MXF_OPATOM_MUXER " XSTR(CONFIG_MXF_OPATOM_MUXER))
#endif
#ifdef CONFIG_NULL_MUXER
 #pragma message("#define CONFIG_NULL_MUXER " XSTR(CONFIG_NULL_MUXER))
#endif
#ifdef CONFIG_NUT_MUXER
 #pragma message("#define CONFIG_NUT_MUXER " XSTR(CONFIG_NUT_MUXER))
#endif
#ifdef CONFIG_OBU_MUXER
 #pragma message("#define CONFIG_OBU_MUXER " XSTR(CONFIG_OBU_MUXER))
#endif
#ifdef CONFIG_OGA_MUXER
 #pragma message("#define CONFIG_OGA_MUXER " XSTR(CONFIG_OGA_MUXER))
#endif
#ifdef CONFIG_OGG_MUXER
 #pragma message("#define CONFIG_OGG_MUXER " XSTR(CONFIG_OGG_MUXER))
#endif
#ifdef CONFIG_OGV_MUXER
 #pragma message("#define CONFIG_OGV_MUXER " XSTR(CONFIG_OGV_MUXER))
#endif
#ifdef CONFIG_OMA_MUXER
 #pragma message("#define CONFIG_OMA_MUXER " XSTR(CONFIG_OMA_MUXER))
#endif
#ifdef CONFIG_OPUS_MUXER
 #pragma message("#define CONFIG_OPUS_MUXER " XSTR(CONFIG_OPUS_MUXER))
#endif
#ifdef CONFIG_PCM_ALAW_MUXER
 #pragma message("#define CONFIG_PCM_ALAW_MUXER " XSTR(CONFIG_PCM_ALAW_MUXER))
#endif
#ifdef CONFIG_PCM_MULAW_MUXER
 #pragma message("#define CONFIG_PCM_MULAW_MUXER " XSTR(CONFIG_PCM_MULAW_MUXER))
#endif
#ifdef CONFIG_PCM_VIDC_MUXER
 #pragma message("#define CONFIG_PCM_VIDC_MUXER " XSTR(CONFIG_PCM_VIDC_MUXER))
#endif
#ifdef CONFIG_PCM_F64BE_MUXER
 #pragma message("#define CONFIG_PCM_F64BE_MUXER " XSTR(CONFIG_PCM_F64BE_MUXER))
#endif
#ifdef CONFIG_PCM_F64LE_MUXER
 #pragma message("#define CONFIG_PCM_F64LE_MUXER " XSTR(CONFIG_PCM_F64LE_MUXER))
#endif
#ifdef CONFIG_PCM_F32BE_MUXER
 #pragma message("#define CONFIG_PCM_F32BE_MUXER " XSTR(CONFIG_PCM_F32BE_MUXER))
#endif
#ifdef CONFIG_PCM_F32LE_MUXER
 #pragma message("#define CONFIG_PCM_F32LE_MUXER " XSTR(CONFIG_PCM_F32LE_MUXER))
#endif
#ifdef CONFIG_PCM_S32BE_MUXER
 #pragma message("#define CONFIG_PCM_S32BE_MUXER " XSTR(CONFIG_PCM_S32BE_MUXER))
#endif
#ifdef CONFIG_PCM_S32LE_MUXER
 #pragma message("#define CONFIG_PCM_S32LE_MUXER " XSTR(CONFIG_PCM_S32LE_MUXER))
#endif
#ifdef CONFIG_PCM_S24BE_MUXER
 #pragma message("#define CONFIG_PCM_S24BE_MUXER " XSTR(CONFIG_PCM_S24BE_MUXER))
#endif
#ifdef CONFIG_PCM_S24LE_MUXER
 #pragma message("#define CONFIG_PCM_S24LE_MUXER " XSTR(CONFIG_PCM_S24LE_MUXER))
#endif
#ifdef CONFIG_PCM_S16BE_MUXER
 #pragma message("#define CONFIG_PCM_S16BE_MUXER " XSTR(CONFIG_PCM_S16BE_MUXER))
#endif
#ifdef CONFIG_PCM_S16LE_MUXER
 #pragma message("#define CONFIG_PCM_S16LE_MUXER " XSTR(CONFIG_PCM_S16LE_MUXER))
#endif
#ifdef CONFIG_PCM_S8_MUXER
 #pragma message("#define CONFIG_PCM_S8_MUXER " XSTR(CONFIG_PCM_S8_MUXER))
#endif
#ifdef CONFIG_PCM_U32BE_MUXER
 #pragma message("#define CONFIG_PCM_U32BE_MUXER " XSTR(CONFIG_PCM_U32BE_MUXER))
#endif
#ifdef CONFIG_PCM_U32LE_MUXER
 #pragma message("#define CONFIG_PCM_U32LE_MUXER " XSTR(CONFIG_PCM_U32LE_MUXER))
#endif
#ifdef CONFIG_PCM_U24BE_MUXER
 #pragma message("#define CONFIG_PCM_U24BE_MUXER " XSTR(CONFIG_PCM_U24BE_MUXER))
#endif
#ifdef CONFIG_PCM_U24LE_MUXER
 #pragma message("#define CONFIG_PCM_U24LE_MUXER " XSTR(CONFIG_PCM_U24LE_MUXER))
#endif
#ifdef CONFIG_PCM_U16BE_MUXER
 #pragma message("#define CONFIG_PCM_U16BE_MUXER " XSTR(CONFIG_PCM_U16BE_MUXER))
#endif
#ifdef CONFIG_PCM_U16LE_MUXER
 #pragma message("#define CONFIG_PCM_U16LE_MUXER " XSTR(CONFIG_PCM_U16LE_MUXER))
#endif
#ifdef CONFIG_PCM_U8_MUXER
 #pragma message("#define CONFIG_PCM_U8_MUXER " XSTR(CONFIG_PCM_U8_MUXER))
#endif
#ifdef CONFIG_PSP_MUXER
 #pragma message("#define CONFIG_PSP_MUXER " XSTR(CONFIG_PSP_MUXER))
#endif
#ifdef CONFIG_RAWVIDEO_MUXER
 #pragma message("#define CONFIG_RAWVIDEO_MUXER " XSTR(CONFIG_RAWVIDEO_MUXER))
#endif
#ifdef CONFIG_RCWT_MUXER
 #pragma message("#define CONFIG_RCWT_MUXER " XSTR(CONFIG_RCWT_MUXER))
#endif
#ifdef CONFIG_RM_MUXER
 #pragma message("#define CONFIG_RM_MUXER " XSTR(CONFIG_RM_MUXER))
#endif
#ifdef CONFIG_ROQ_MUXER
 #pragma message("#define CONFIG_ROQ_MUXER " XSTR(CONFIG_ROQ_MUXER))
#endif
#ifdef CONFIG_RSO_MUXER
 #pragma message("#define CONFIG_RSO_MUXER " XSTR(CONFIG_RSO_MUXER))
#endif
#ifdef CONFIG_RTP_MUXER
 #pragma message("#define CONFIG_RTP_MUXER " XSTR(CONFIG_RTP_MUXER))
#endif
#ifdef CONFIG_RTP_MPEGTS_MUXER
 #pragma message("#define CONFIG_RTP_MPEGTS_MUXER " XSTR(CONFIG_RTP_MPEGTS_MUXER))
#endif
#ifdef CONFIG_RTSP_MUXER
 #pragma message("#define CONFIG_RTSP_MUXER " XSTR(CONFIG_RTSP_MUXER))
#endif
#ifdef CONFIG_SAP_MUXER
 #pragma message("#define CONFIG_SAP_MUXER " XSTR(CONFIG_SAP_MUXER))
#endif
#ifdef CONFIG_SBC_MUXER
 #pragma message("#define CONFIG_SBC_MUXER " XSTR(CONFIG_SBC_MUXER))
#endif
#ifdef CONFIG_SCC_MUXER
 #pragma message("#define CONFIG_SCC_MUXER " XSTR(CONFIG_SCC_MUXER))
#endif
#ifdef CONFIG_SEGAFILM_MUXER
 #pragma message("#define CONFIG_SEGAFILM_MUXER " XSTR(CONFIG_SEGAFILM_MUXER))
#endif
#ifdef CONFIG_SEGMENT_MUXER
 #pragma message("#define CONFIG_SEGMENT_MUXER " XSTR(CONFIG_SEGMENT_MUXER))
#endif
#ifdef CONFIG_STREAM_SEGMENT_MUXER
 #pragma message("#define CONFIG_STREAM_SEGMENT_MUXER " XSTR(CONFIG_STREAM_SEGMENT_MUXER))
#endif
#ifdef CONFIG_SMJPEG_MUXER
 #pragma message("#define CONFIG_SMJPEG_MUXER " XSTR(CONFIG_SMJPEG_MUXER))
#endif
#ifdef CONFIG_SMOOTHSTREAMING_MUXER
 #pragma message("#define CONFIG_SMOOTHSTREAMING_MUXER " XSTR(CONFIG_SMOOTHSTREAMING_MUXER))
#endif
#ifdef CONFIG_SOX_MUXER
 #pragma message("#define CONFIG_SOX_MUXER " XSTR(CONFIG_SOX_MUXER))
#endif
#ifdef CONFIG_SPX_MUXER
 #pragma message("#define CONFIG_SPX_MUXER " XSTR(CONFIG_SPX_MUXER))
#endif
#ifdef CONFIG_SPDIF_MUXER
 #pragma message("#define CONFIG_SPDIF_MUXER " XSTR(CONFIG_SPDIF_MUXER))
#endif
#ifdef CONFIG_SRT_MUXER
 #pragma message("#define CONFIG_SRT_MUXER " XSTR(CONFIG_SRT_MUXER))
#endif
#ifdef CONFIG_STREAMHASH_MUXER
 #pragma message("#define CONFIG_STREAMHASH_MUXER " XSTR(CONFIG_STREAMHASH_MUXER))
#endif
#ifdef CONFIG_SUP_MUXER
 #pragma message("#define CONFIG_SUP_MUXER " XSTR(CONFIG_SUP_MUXER))
#endif
#ifdef CONFIG_SWF_MUXER
 #pragma message("#define CONFIG_SWF_MUXER " XSTR(CONFIG_SWF_MUXER))
#endif
#ifdef CONFIG_TEE_MUXER
 #pragma message("#define CONFIG_TEE_MUXER " XSTR(CONFIG_TEE_MUXER))
#endif
#ifdef CONFIG_TG2_MUXER
 #pragma message("#define CONFIG_TG2_MUXER " XSTR(CONFIG_TG2_MUXER))
#endif
#ifdef CONFIG_TGP_MUXER
 #pragma message("#define CONFIG_TGP_MUXER " XSTR(CONFIG_TGP_MUXER))
#endif
#ifdef CONFIG_MKVTIMESTAMP_V2_MUXER
 #pragma message("#define CONFIG_MKVTIMESTAMP_V2_MUXER " XSTR(CONFIG_MKVTIMESTAMP_V2_MUXER))
#endif
#ifdef CONFIG_TRUEHD_MUXER
 #pragma message("#define CONFIG_TRUEHD_MUXER " XSTR(CONFIG_TRUEHD_MUXER))
#endif
#ifdef CONFIG_TTA_MUXER
 #pragma message("#define CONFIG_TTA_MUXER " XSTR(CONFIG_TTA_MUXER))
#endif
#ifdef CONFIG_TTML_MUXER
 #pragma message("#define CONFIG_TTML_MUXER " XSTR(CONFIG_TTML_MUXER))
#endif
#ifdef CONFIG_UNCODEDFRAMECRC_MUXER
 #pragma message("#define CONFIG_UNCODEDFRAMECRC_MUXER " XSTR(CONFIG_UNCODEDFRAMECRC_MUXER))
#endif
#ifdef CONFIG_VC1_MUXER
 #pragma message("#define CONFIG_VC1_MUXER " XSTR(CONFIG_VC1_MUXER))
#endif
#ifdef CONFIG_VC1T_MUXER
 #pragma message("#define CONFIG_VC1T_MUXER " XSTR(CONFIG_VC1T_MUXER))
#endif
#ifdef CONFIG_VOC_MUXER
 #pragma message("#define CONFIG_VOC_MUXER " XSTR(CONFIG_VOC_MUXER))
#endif
#ifdef CONFIG_VVC_MUXER
 #pragma message("#define CONFIG_VVC_MUXER " XSTR(CONFIG_VVC_MUXER))
#endif
#ifdef CONFIG_W64_MUXER
 #pragma message("#define CONFIG_W64_MUXER " XSTR(CONFIG_W64_MUXER))
#endif
#ifdef CONFIG_WAV_MUXER
 #pragma message("#define CONFIG_WAV_MUXER " XSTR(CONFIG_WAV_MUXER))
#endif
#ifdef CONFIG_WEBM_MUXER
 #pragma message("#define CONFIG_WEBM_MUXER " XSTR(CONFIG_WEBM_MUXER))
#endif
#ifdef CONFIG_WEBM_DASH_MANIFEST_MUXER
 #pragma message("#define CONFIG_WEBM_DASH_MANIFEST_MUXER " XSTR(CONFIG_WEBM_DASH_MANIFEST_MUXER))
#endif
#ifdef CONFIG_WEBM_CHUNK_MUXER
 #pragma message("#define CONFIG_WEBM_CHUNK_MUXER " XSTR(CONFIG_WEBM_CHUNK_MUXER))
#endif
#ifdef CONFIG_WEBP_MUXER
 #pragma message("#define CONFIG_WEBP_MUXER " XSTR(CONFIG_WEBP_MUXER))
#endif
#ifdef CONFIG_WEBVTT_MUXER
 #pragma message("#define CONFIG_WEBVTT_MUXER " XSTR(CONFIG_WEBVTT_MUXER))
#endif
#ifdef CONFIG_WSAUD_MUXER
 #pragma message("#define CONFIG_WSAUD_MUXER " XSTR(CONFIG_WSAUD_MUXER))
#endif
#ifdef CONFIG_WTV_MUXER
 #pragma message("#define CONFIG_WTV_MUXER " XSTR(CONFIG_WTV_MUXER))
#endif
#ifdef CONFIG_WV_MUXER
 #pragma message("#define CONFIG_WV_MUXER " XSTR(CONFIG_WV_MUXER))
#endif
#ifdef CONFIG_YUV4MPEGPIPE_MUXER
 #pragma message("#define CONFIG_YUV4MPEGPIPE_MUXER " XSTR(CONFIG_YUV4MPEGPIPE_MUXER))
#endif
#ifdef CONFIG_CHROMAPRINT_MUXER
 #pragma message("#define CONFIG_CHROMAPRINT_MUXER " XSTR(CONFIG_CHROMAPRINT_MUXER))
#endif
#ifdef CONFIG_ANDROID_CONTENT_PROTOCOL
 #pragma message("#define CONFIG_ANDROID_CONTENT_PROTOCOL " XSTR(CONFIG_ANDROID_CONTENT_PROTOCOL))
#endif
#ifdef CONFIG_ASYNC_PROTOCOL
 #pragma message("#define CONFIG_ASYNC_PROTOCOL " XSTR(CONFIG_ASYNC_PROTOCOL))
#endif
#ifdef CONFIG_BLURAY_PROTOCOL
 #pragma message("#define CONFIG_BLURAY_PROTOCOL " XSTR(CONFIG_BLURAY_PROTOCOL))
#endif
#ifdef CONFIG_CACHE_PROTOCOL
 #pragma message("#define CONFIG_CACHE_PROTOCOL " XSTR(CONFIG_CACHE_PROTOCOL))
#endif
#ifdef CONFIG_CONCAT_PROTOCOL
 #pragma message("#define CONFIG_CONCAT_PROTOCOL " XSTR(CONFIG_CONCAT_PROTOCOL))
#endif
#ifdef CONFIG_CONCATF_PROTOCOL
 #pragma message("#define CONFIG_CONCATF_PROTOCOL " XSTR(CONFIG_CONCATF_PROTOCOL))
#endif
#ifdef CONFIG_CRYPTO_PROTOCOL
 #pragma message("#define CONFIG_CRYPTO_PROTOCOL " XSTR(CONFIG_CRYPTO_PROTOCOL))
#endif
#ifdef CONFIG_DATA_PROTOCOL
 #pragma message("#define CONFIG_DATA_PROTOCOL " XSTR(CONFIG_DATA_PROTOCOL))
#endif
#ifdef CONFIG_FD_PROTOCOL
 #pragma message("#define CONFIG_FD_PROTOCOL " XSTR(CONFIG_FD_PROTOCOL))
#endif
#ifdef CONFIG_FFRTMPCRYPT_PROTOCOL
 #pragma message("#define CONFIG_FFRTMPCRYPT_PROTOCOL " XSTR(CONFIG_FFRTMPCRYPT_PROTOCOL))
#endif
#ifdef CONFIG_FFRTMPHTTP_PROTOCOL
 #pragma message("#define CONFIG_FFRTMPHTTP_PROTOCOL " XSTR(CONFIG_FFRTMPHTTP_PROTOCOL))
#endif
#ifdef CONFIG_FILE_PROTOCOL
 #pragma message("#define CONFIG_FILE_PROTOCOL " XSTR(CONFIG_FILE_PROTOCOL))
#endif
#ifdef CONFIG_FTP_PROTOCOL
 #pragma message("#define CONFIG_FTP_PROTOCOL " XSTR(CONFIG_FTP_PROTOCOL))
#endif
#ifdef CONFIG_GOPHER_PROTOCOL
 #pragma message("#define CONFIG_GOPHER_PROTOCOL " XSTR(CONFIG_GOPHER_PROTOCOL))
#endif
#ifdef CONFIG_GOPHERS_PROTOCOL
 #pragma message("#define CONFIG_GOPHERS_PROTOCOL " XSTR(CONFIG_GOPHERS_PROTOCOL))
#endif
#ifdef CONFIG_HLS_PROTOCOL
 #pragma message("#define CONFIG_HLS_PROTOCOL " XSTR(CONFIG_HLS_PROTOCOL))
#endif
#ifdef CONFIG_HTTP_PROTOCOL
 #pragma message("#define CONFIG_HTTP_PROTOCOL " XSTR(CONFIG_HTTP_PROTOCOL))
#endif
#ifdef CONFIG_HTTPPROXY_PROTOCOL
 #pragma message("#define CONFIG_HTTPPROXY_PROTOCOL " XSTR(CONFIG_HTTPPROXY_PROTOCOL))
#endif
#ifdef CONFIG_HTTPS_PROTOCOL
 #pragma message("#define CONFIG_HTTPS_PROTOCOL " XSTR(CONFIG_HTTPS_PROTOCOL))
#endif
#ifdef CONFIG_ICECAST_PROTOCOL
 #pragma message("#define CONFIG_ICECAST_PROTOCOL " XSTR(CONFIG_ICECAST_PROTOCOL))
#endif
#ifdef CONFIG_MMSH_PROTOCOL
 #pragma message("#define CONFIG_MMSH_PROTOCOL " XSTR(CONFIG_MMSH_PROTOCOL))
#endif
#ifdef CONFIG_MMST_PROTOCOL
 #pragma message("#define CONFIG_MMST_PROTOCOL " XSTR(CONFIG_MMST_PROTOCOL))
#endif
#ifdef CONFIG_MD5_PROTOCOL
 #pragma message("#define CONFIG_MD5_PROTOCOL " XSTR(CONFIG_MD5_PROTOCOL))
#endif
#ifdef CONFIG_PIPE_PROTOCOL
 #pragma message("#define CONFIG_PIPE_PROTOCOL " XSTR(CONFIG_PIPE_PROTOCOL))
#endif
#ifdef CONFIG_PROMPEG_PROTOCOL
 #pragma message("#define CONFIG_PROMPEG_PROTOCOL " XSTR(CONFIG_PROMPEG_PROTOCOL))
#endif
#ifdef CONFIG_RTMP_PROTOCOL
 #pragma message("#define CONFIG_RTMP_PROTOCOL " XSTR(CONFIG_RTMP_PROTOCOL))
#endif
#ifdef CONFIG_RTMPE_PROTOCOL
 #pragma message("#define CONFIG_RTMPE_PROTOCOL " XSTR(CONFIG_RTMPE_PROTOCOL))
#endif
#ifdef CONFIG_RTMPS_PROTOCOL
 #pragma message("#define CONFIG_RTMPS_PROTOCOL " XSTR(CONFIG_RTMPS_PROTOCOL))
#endif
#ifdef CONFIG_RTMPT_PROTOCOL
 #pragma message("#define CONFIG_RTMPT_PROTOCOL " XSTR(CONFIG_RTMPT_PROTOCOL))
#endif
#ifdef CONFIG_RTMPTE_PROTOCOL
 #pragma message("#define CONFIG_RTMPTE_PROTOCOL " XSTR(CONFIG_RTMPTE_PROTOCOL))
#endif
#ifdef CONFIG_RTMPTS_PROTOCOL
 #pragma message("#define CONFIG_RTMPTS_PROTOCOL " XSTR(CONFIG_RTMPTS_PROTOCOL))
#endif
#ifdef CONFIG_RTP_PROTOCOL
 #pragma message("#define CONFIG_RTP_PROTOCOL " XSTR(CONFIG_RTP_PROTOCOL))
#endif
#ifdef CONFIG_SCTP_PROTOCOL
 #pragma message("#define CONFIG_SCTP_PROTOCOL " XSTR(CONFIG_SCTP_PROTOCOL))
#endif
#ifdef CONFIG_SRTP_PROTOCOL
 #pragma message("#define CONFIG_SRTP_PROTOCOL " XSTR(CONFIG_SRTP_PROTOCOL))
#endif
#ifdef CONFIG_SUBFILE_PROTOCOL
 #pragma message("#define CONFIG_SUBFILE_PROTOCOL " XSTR(CONFIG_SUBFILE_PROTOCOL))
#endif
#ifdef CONFIG_TEE_PROTOCOL
 #pragma message("#define CONFIG_TEE_PROTOCOL " XSTR(CONFIG_TEE_PROTOCOL))
#endif
#ifdef CONFIG_TCP_PROTOCOL
 #pragma message("#define CONFIG_TCP_PROTOCOL " XSTR(CONFIG_TCP_PROTOCOL))
#endif
#ifdef CONFIG_TLS_PROTOCOL
 #pragma message("#define CONFIG_TLS_PROTOCOL " XSTR(CONFIG_TLS_PROTOCOL))
#endif
#ifdef CONFIG_UDP_PROTOCOL
 #pragma message("#define CONFIG_UDP_PROTOCOL " XSTR(CONFIG_UDP_PROTOCOL))
#endif
#ifdef CONFIG_UDPLITE_PROTOCOL
 #pragma message("#define CONFIG_UDPLITE_PROTOCOL " XSTR(CONFIG_UDPLITE_PROTOCOL))
#endif
#ifdef CONFIG_UNIX_PROTOCOL
 #pragma message("#define CONFIG_UNIX_PROTOCOL " XSTR(CONFIG_UNIX_PROTOCOL))
#endif
#ifdef CONFIG_LIBAMQP_PROTOCOL
 #pragma message("#define CONFIG_LIBAMQP_PROTOCOL " XSTR(CONFIG_LIBAMQP_PROTOCOL))
#endif
#ifdef CONFIG_LIBRIST_PROTOCOL
 #pragma message("#define CONFIG_LIBRIST_PROTOCOL " XSTR(CONFIG_LIBRIST_PROTOCOL))
#endif
#ifdef CONFIG_LIBRTMP_PROTOCOL
 #pragma message("#define CONFIG_LIBRTMP_PROTOCOL " XSTR(CONFIG_LIBRTMP_PROTOCOL))
#endif
#ifdef CONFIG_LIBRTMPE_PROTOCOL
 #pragma message("#define CONFIG_LIBRTMPE_PROTOCOL " XSTR(CONFIG_LIBRTMPE_PROTOCOL))
#endif
#ifdef CONFIG_LIBRTMPS_PROTOCOL
 #pragma message("#define CONFIG_LIBRTMPS_PROTOCOL " XSTR(CONFIG_LIBRTMPS_PROTOCOL))
#endif
#ifdef CONFIG_LIBRTMPT_PROTOCOL
 #pragma message("#define CONFIG_LIBRTMPT_PROTOCOL " XSTR(CONFIG_LIBRTMPT_PROTOCOL))
#endif
#ifdef CONFIG_LIBRTMPTE_PROTOCOL
 #pragma message("#define CONFIG_LIBRTMPTE_PROTOCOL " XSTR(CONFIG_LIBRTMPTE_PROTOCOL))
#endif
#ifdef CONFIG_LIBSRT_PROTOCOL
 #pragma message("#define CONFIG_LIBSRT_PROTOCOL " XSTR(CONFIG_LIBSRT_PROTOCOL))
#endif
#ifdef CONFIG_LIBSSH_PROTOCOL
 #pragma message("#define CONFIG_LIBSSH_PROTOCOL " XSTR(CONFIG_LIBSSH_PROTOCOL))
#endif
#ifdef CONFIG_LIBSMBCLIENT_PROTOCOL
 #pragma message("#define CONFIG_LIBSMBCLIENT_PROTOCOL " XSTR(CONFIG_LIBSMBCLIENT_PROTOCOL))
#endif
#ifdef CONFIG_LIBZMQ_PROTOCOL
 #pragma message("#define CONFIG_LIBZMQ_PROTOCOL " XSTR(CONFIG_LIBZMQ_PROTOCOL))
#endif
#ifdef CONFIG_IPFS_GATEWAY_PROTOCOL
 #pragma message("#define CONFIG_IPFS_GATEWAY_PROTOCOL " XSTR(CONFIG_IPFS_GATEWAY_PROTOCOL))
#endif
#ifdef CONFIG_IPNS_GATEWAY_PROTOCOL
 #pragma message("#define CONFIG_IPNS_GATEWAY_PROTOCOL " XSTR(CONFIG_IPNS_GATEWAY_PROTOCOL))
#endif
#ifdef HAVE_ARMV5TE
 #pragma message("#define HAVE_ARMV5TE " XSTR(HAVE_ARMV5TE))
#endif
#ifdef HAVE_ARMV5TE_EXTERNAL
 #pragma message("#define HAVE_ARMV5TE_EXTERNAL " XSTR(HAVE_ARMV5TE_EXTERNAL))
#endif
#ifdef HAVE_ARMV5TE_INLINE
 #pragma message("#define HAVE_ARMV5TE_INLINE " XSTR(HAVE_ARMV5TE_INLINE))
#endif
#ifdef HAVE_ARMV6
 #pragma message("#define HAVE_ARMV6 " XSTR(HAVE_ARMV6))
#endif
#ifdef HAVE_ARMV6T2
 #pragma message("#define HAVE_ARMV6T2 " XSTR(HAVE_ARMV6T2))
#endif
#ifdef HAVE_ARMV6T2_EXTERNAL
 #pragma message("#define HAVE_ARMV6T2_EXTERNAL " XSTR(HAVE_ARMV6T2_EXTERNAL))
#endif
#ifdef HAVE_ARMV6T2_INLINE
 #pragma message("#define HAVE_ARMV6T2_INLINE " XSTR(HAVE_ARMV6T2_INLINE))
#endif
#ifdef HAVE_ARMV6_EXTERNAL
 #pragma message("#define HAVE_ARMV6_EXTERNAL " XSTR(HAVE_ARMV6_EXTERNAL))
#endif
#ifdef HAVE_ARMV6_INLINE
 #pragma message("#define HAVE_ARMV6_INLINE " XSTR(HAVE_ARMV6_INLINE))
#endif
#ifdef HAVE_ASM_MOD_Q
 #pragma message("#define HAVE_ASM_MOD_Q " XSTR(HAVE_ASM_MOD_Q))
#endif
#ifdef HAVE_AVX2_EXTERNAL
 #pragma message("#define HAVE_AVX2_EXTERNAL " XSTR(HAVE_AVX2_EXTERNAL))
#endif
#ifdef HAVE_AVX512ICL_EXTERNAL
 #pragma message("#define HAVE_AVX512ICL_EXTERNAL " XSTR(HAVE_AVX512ICL_EXTERNAL))
#endif
#ifdef HAVE_AVX512_EXTERNAL
 #pragma message("#define HAVE_AVX512_EXTERNAL " XSTR(HAVE_AVX512_EXTERNAL))
#endif
#ifdef HAVE_AVX_EXTERNAL
 #pragma message("#define HAVE_AVX_EXTERNAL " XSTR(HAVE_AVX_EXTERNAL))
#endif
#ifdef HAVE_CDIO_PARANOIA_PARANOIA_H
 #pragma message("#define HAVE_CDIO_PARANOIA_PARANOIA_H " XSTR(HAVE_CDIO_PARANOIA_PARANOIA_H))
#endif
#ifdef HAVE_FMA3_EXTERNAL
 #pragma message("#define HAVE_FMA3_EXTERNAL " XSTR(HAVE_FMA3_EXTERNAL))
#endif
#ifdef HAVE_FMA4_EXTERNAL
 #pragma message("#define HAVE_FMA4_EXTERNAL " XSTR(HAVE_FMA4_EXTERNAL))
#endif
#ifdef HAVE_MIPS32R2
 #pragma message("#define HAVE_MIPS32R2 " XSTR(HAVE_MIPS32R2))
#endif
#ifdef HAVE_MIPS32R6
 #pragma message("#define HAVE_MIPS32R6 " XSTR(HAVE_MIPS32R6))
#endif
#ifdef HAVE_MIPS64R2
 #pragma message("#define HAVE_MIPS64R2 " XSTR(HAVE_MIPS64R2))
#endif
#ifdef HAVE_MIPS64R6
 #pragma message("#define HAVE_MIPS64R6 " XSTR(HAVE_MIPS64R6))
#endif
#ifdef HAVE_MIPSDSP
 #pragma message("#define HAVE_MIPSDSP " XSTR(HAVE_MIPSDSP))
#endif
#ifdef HAVE_MIPSFPU
 #pragma message("#define HAVE_MIPSFPU " XSTR(HAVE_MIPSFPU))
#endif
#ifdef HAVE_MMXEXT_EXTERNAL
 #pragma message("#define HAVE_MMXEXT_EXTERNAL " XSTR(HAVE_MMXEXT_EXTERNAL))
#endif
#ifdef HAVE_MMXEXT_INLINE
 #pragma message("#define HAVE_MMXEXT_INLINE " XSTR(HAVE_MMXEXT_INLINE))
#endif
#ifdef HAVE_MMX_EXTERNAL
 #pragma message("#define HAVE_MMX_EXTERNAL " XSTR(HAVE_MMX_EXTERNAL))
#endif
#ifdef HAVE_MMX_INLINE
 #pragma message("#define HAVE_MMX_INLINE " XSTR(HAVE_MMX_INLINE))
#endif
#ifdef HAVE_NEON_INLINE
 #pragma message("#define HAVE_NEON_INLINE " XSTR(HAVE_NEON_INLINE))
#endif
#ifdef HAVE_POWER8
 #pragma message("#define HAVE_POWER8 " XSTR(HAVE_POWER8))
#endif
#ifdef HAVE_SIMD_ALIGN_16
 #pragma message("#define HAVE_SIMD_ALIGN_16 " XSTR(HAVE_SIMD_ALIGN_16))
#endif
#ifdef HAVE_SIMD_ALIGN_32
 #pragma message("#define HAVE_SIMD_ALIGN_32 " XSTR(HAVE_SIMD_ALIGN_32))
#endif
#ifdef HAVE_SIMD_ALIGN_64
 #pragma message("#define HAVE_SIMD_ALIGN_64 " XSTR(HAVE_SIMD_ALIGN_64))
#endif
#ifdef HAVE_SSE2_EXTERNAL
 #pragma message("#define HAVE_SSE2_EXTERNAL " XSTR(HAVE_SSE2_EXTERNAL))
#endif
#ifdef HAVE_SSE2_INLINE
 #pragma message("#define HAVE_SSE2_INLINE " XSTR(HAVE_SSE2_INLINE))
#endif
#ifdef HAVE_SSE3_EXTERNAL
 #pragma message("#define HAVE_SSE3_EXTERNAL " XSTR(HAVE_SSE3_EXTERNAL))
#endif
#ifdef HAVE_SSE4_EXTERNAL
 #pragma message("#define HAVE_SSE4_EXTERNAL " XSTR(HAVE_SSE4_EXTERNAL))
#endif
#ifdef HAVE_SSE_INLINE
 #pragma message("#define HAVE_SSE_INLINE " XSTR(HAVE_SSE_INLINE))
#endif
#ifdef HAVE_SSSE3_EXTERNAL
 #pragma message("#define HAVE_SSSE3_EXTERNAL " XSTR(HAVE_SSSE3_EXTERNAL))
#endif
#ifdef HAVE_SSSE3_INLINE
 #pragma message("#define HAVE_SSSE3_INLINE " XSTR(HAVE_SSSE3_INLINE))
#endif
#ifdef HAVE_XOP_EXTERNAL
 #pragma message("#define HAVE_XOP_EXTERNAL " XSTR(HAVE_XOP_EXTERNAL))
#endif

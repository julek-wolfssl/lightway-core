#ifndef _WIN_USER_SETTINGS_H_
#define _WIN_USER_SETTINGS_H_

/* Verify this is Windows */
#ifndef _WIN32
#error This user_settings.h header is only designed for Windows
#endif

/* Check WOLFSSL_DTLS_ALLOW_FUTURE flag */
#ifndef WOLFSSL_DTLS_ALLOW_FUTURE
#error WOLFSSL_DTLS_ALLOW_FUTURE is not defined
#endif

/* Check HAVE_SECURE_RENEGOTIATION */
#ifndef HAVE_SECURE_RENEGOTIATION
#error HAVE_SECURE_RENEGOTIATION is not defined
#endif

/* Configurations */
#undef  USE_WINDOWS_API
#define USE_WINDOWS_API

#undef  WOLFSSL_TLS13
#define WOLFSSL_TLS13

#undef  HAVE_TLS_EXTENSIONS
#define HAVE_TLS_EXTENSIONS

#undef  HAVE_SUPPORTED_CURVES
#define HAVE_SUPPORTED_CURVES

#undef  WOLFSSL_DTLS_MTU
#define WOLFSSL_DTLS_MTU

#undef  WOLFSSL_DTLS
#define WOLFSSL_DTLS

#undef  SINGLE_THREADED
#define SINGLE_THREADED

#undef  HAVE_THREAD_LS
#define HAVE_THREAD_LS

#undef  TFM_TIMING_RESISTANT
#define TFM_TIMING_RESISTANT

#undef  ECC_TIMING_RESISTANT
#define ECC_TIMING_RESISTANT

#undef  WC_RSA_BLINDING
#define WC_RSA_BLINDING

#undef  HAVE_AESGCM
#define HAVE_AESGCM

#undef  WOLFSSL_AESNI
#define WOLFSSL_AESNI

#undef  HAVE_INTEL_RDSEED
#define HAVE_INTEL_RDSEED

#undef  USE_INTEL_SPEEDUP
//#define USE_INTEL_SPEEDUP // Needs ASM stubs which are not included in the vxproj

#undef  WOLFSSL_SHA512
#define WOLFSSL_SHA512

#undef  WOLFSSL_SHA384
#define WOLFSSL_SHA384

#undef  HAVE_HKDF
#define HAVE_HKDF

#undef  NO_DSA
#define NO_DSA

#undef  HAVE_ECC
#define HAVE_ECC

#undef  TFM_ECC256
#define TFM_ECC256

#undef  ECC_SHAMIR
#define ECC_SHAMIR

#undef  HAVE_CURVE25519
#define HAVE_CURVE25519

#undef  NO_OLD_TLS
#define NO_OLD_TLS

#undef  WC_RSA_PSS
#define WC_RSA_PSS

#undef  NO_DH
#define NO_DH

#undef  WOLFSSL_BASE64_ENCODE
#define WOLFSSL_BASE64_ENCODE

#undef  NO_RC4
#define NO_RC4

#undef  NO_HC128
#define NO_HC128

#undef  NO_RABBIT
#define NO_RABBIT

#undef  WOLFSSL_SHA224
#define WOLFSSL_SHA224

#undef  HAVE_POLY1305
#define HAVE_POLY1305

#undef  HAVE_ONE_TIME_AUTH
#define HAVE_ONE_TIME_AUTH

#undef  HAVE_CHACHA
#define HAVE_CHACHA

#undef  HAVE_HASHDRBG
#define HAVE_HASHDRBG

#undef  HAVE_TLS_EXTENSIONS
#define HAVE_TLS_EXTENSIONS

#undef  HAVE_SNI
#define HAVE_SNI

#undef  HAVE_TLS_EXTENSIONS
#define HAVE_TLS_EXTENSIONS

#undef  HAVE_SUPPORTED_CURVES
#define HAVE_SUPPORTED_CURVES

#undef  HAVE_EXTENDED_MASTER
#define HAVE_EXTENDED_MASTER

#undef  WOLFCRYPT_HAVE_SRP
#define WOLFCRYPT_HAVE_SRP

#undef  NO_RC4
#define NO_RC4

#undef  HAVE_ENCRYPT_THEN_MAC
#define HAVE_ENCRYPT_THEN_MAC

#undef  NO_PSK
#define NO_PSK

#undef  NO_MD4
#define NO_MD4

#undef  NO_PWDBASED
#define NO_PWDBASED

#undef  USE_FAST_MATH
#define USE_FAST_MATH

#undef  WOLFSSL_X86_64_BUILD
#define WOLFSSL_X86_64_BUILD

#undef  WOLFSSL_HAVE_SP_RSA
#define WOLFSSL_HAVE_SP_RSA

#undef  WOLFSSL_SP_4096
#define WOLFSSL_SP_4096

#undef  WOLFSSL_HAVE_SP_ECC
#define WOLFSSL_HAVE_SP_ECC

#undef  HAVE_ECC384
#define HAVE_ECC384

#undef  WOLFSSL_SP_384
#define WOLFSSL_SP_384

#undef  WOLFSSL_SP_ASM
//#define WOLFSSL_SP_ASM

#undef  WOLFSSL_SP_X86_64_ASM
//#define WOLFSSL_SP_X86_64_ASM

#undef  WC_NO_ASYNC_THREADING
#define WC_NO_ASYNC_THREADING

#undef  HAVE_DH_DEFAULT_PARAMS
#define HAVE_DH_DEFAULT_PARAMS

#undef  NO_DES3
#define NO_DES3

#undef WOLFSSL_SYS_CA_CERTS
//#define WOLFSSL_SYS_CA_CERTS

#endif /* _WIN_USER_SETTINGS_H_ */

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.5
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else

/*  Errors in SWIG */
#define  SWIG_UnknownError    	   -1
#define  SWIG_IOError        	   -2
#define  SWIG_RuntimeError   	   -3
#define  SWIG_IndexError     	   -4
#define  SWIG_TypeError      	   -5
#define  SWIG_DivisionByZero 	   -6
#define  SWIG_OverflowError  	   -7
#define  SWIG_SyntaxError    	   -8
#define  SWIG_ValueError     	   -9
#define  SWIG_SystemError    	   -10
#define  SWIG_AttributeError 	   -11
#define  SWIG_MemoryError    	   -12
#define  SWIG_NullReferenceError   -13




#include <string>


SWIGINTERN void SWIG_JavaException(JNIEnv *jenv, int code, const char *msg) {
  SWIG_JavaExceptionCodes exception_code = SWIG_JavaUnknownError;
  switch(code) {
  case SWIG_MemoryError:
    exception_code = SWIG_JavaOutOfMemoryError;
    break;
  case SWIG_IOError:
    exception_code = SWIG_JavaIOException;
    break;
  case SWIG_SystemError:
  case SWIG_RuntimeError:
    exception_code = SWIG_JavaRuntimeException;
    break;
  case SWIG_OverflowError:
  case SWIG_IndexError:
    exception_code = SWIG_JavaIndexOutOfBoundsException;
    break;
  case SWIG_DivisionByZero:
    exception_code = SWIG_JavaArithmeticException;
    break;
  case SWIG_SyntaxError:
  case SWIG_ValueError:
  case SWIG_TypeError:
    exception_code = SWIG_JavaIllegalArgumentException;
    break;
  case SWIG_UnknownError:
  default:
    exception_code = SWIG_JavaUnknownError;
    break;
  }
  SWIG_JavaThrowException(jenv, exception_code, msg);
}


#include <stdexcept>


#include "../cpp/Image.h"


#include <stdexcept>


#include <vector>
#include <stdexcept>

SWIGINTERN std::vector< std::string >::const_reference std_vector_Sl_std_string_Sg__get(std::vector< std::string > *self,int i){
                int size = int(self->size());
                if (i>=0 && i<size)
                    return (*self)[i];
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN void std_vector_Sl_std_string_Sg__set(std::vector< std::string > *self,int i,std::vector< std::string >::value_type const &val){
                int size = int(self->size());
                if (i>=0 && i<size)
                    (*self)[i] = val;
                else
                    throw std::out_of_range("vector index out of range");
            }

#include "../cpp/ILayoutAnalysis.h"
#include "../cpp/IHtr.h"
#include "../cpp/ModuleFactory.h"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_new_1Native_1Image_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jlong jresult = 0 ;
  std::string *arg1 = 0 ;
  transkribus::Image *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return 0;
  std::string arg1_str(arg1_pstr);
  arg1 = &arg1_str;
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  {
    try {
      result = (transkribus::Image *)new transkribus::Image((std::string const &)*arg1);
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  *(transkribus::Image **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_new_1Native_1Image_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  cv::Mat *arg1 = 0 ;
  transkribus::Image *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = *(cv::Mat **)&jarg1;
  }
  {
    try {
      result = (transkribus::Image *)new transkribus::Image(*arg1);
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  *(transkribus::Image **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_delete_1Native_1Image(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  transkribus::Image *arg1 = (transkribus::Image *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(transkribus::Image **)&jarg1; 
  {
    try {
      delete arg1;
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return ; 
      };
    }
  }
}


SWIGEXPORT jlong JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_new_1StringVector_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::vector< std::string > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    try {
      result = (std::vector< std::string > *)new std::vector< std::string >();
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  *(std::vector< std::string > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_new_1StringVector_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  std::vector< std::string >::size_type arg1 ;
  std::vector< std::string > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (std::vector< std::string >::size_type)jarg1; 
  {
    try {
      result = (std::vector< std::string > *)new std::vector< std::string >(arg1);
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  *(std::vector< std::string > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_StringVector_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  {
    try {
      result = ((std::vector< std::string > const *)arg1)->size();
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_StringVector_1capacity(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  {
    try {
      result = ((std::vector< std::string > const *)arg1)->capacity();
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_StringVector_1reserve(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::size_type arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  arg2 = (std::vector< std::string >::size_type)jarg2; 
  {
    try {
      (arg1)->reserve(arg2);
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return ; 
      };
    }
  }
}


SWIGEXPORT jboolean JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_StringVector_1isEmpty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  {
    try {
      result = (bool)((std::vector< std::string > const *)arg1)->empty();
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_StringVector_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  {
    try {
      (arg1)->clear();
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return ; 
      };
    }
  }
}


SWIGEXPORT void JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_StringVector_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::value_type *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::vector< std::string >::value_type arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  {
    try {
      (arg1)->push_back((std::vector< std::string >::value_type const &)*arg2);
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return ; 
      };
    }
  }
}


SWIGEXPORT jstring JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_StringVector_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jstring jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  int arg2 ;
  std::vector< std::string >::value_type *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  arg2 = (int)jarg2; 
  {
    try {
      try {
        result = (std::vector< std::string >::value_type *) &std_vector_Sl_std_string_Sg__get(arg1,arg2);
      }
      catch(std::out_of_range &_e) {
        SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
        return 0;
      }
      
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_StringVector_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jstring jarg3) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  int arg2 ;
  std::vector< std::string >::value_type *arg3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  arg2 = (int)jarg2; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return ;
  std::vector< std::string >::value_type arg3_str(arg3_pstr);
  arg3 = &arg3_str;
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  {
    try {
      try {
        std_vector_Sl_std_string_Sg__set(arg1,arg2,(std::string const &)*arg3);
      }
      catch(std::out_of_range &_e) {
        SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
        return ;
      }
      
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return ; 
      };
    }
  }
}


SWIGEXPORT void JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_delete_1StringVector(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  {
    try {
      delete arg1;
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return ; 
      };
    }
  }
}


SWIGEXPORT void JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_delete_1Native_1IModule(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  transkribus::IModule *arg1 = (transkribus::IModule *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(transkribus::IModule **)&jarg1; 
  {
    try {
      delete arg1;
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return ; 
      };
    }
  }
}


SWIGEXPORT jstring JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_Native_1IModule_1usage(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  transkribus::IModule *arg1 = (transkribus::IModule *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(transkribus::IModule **)&jarg1; 
  {
    try {
      result = (arg1)->usage();
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_Native_1IModule_1getToolName(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  transkribus::IModule *arg1 = (transkribus::IModule *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(transkribus::IModule **)&jarg1; 
  {
    try {
      result = (arg1)->getToolName();
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_Native_1IModule_1getVersion(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  transkribus::IModule *arg1 = (transkribus::IModule *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(transkribus::IModule **)&jarg1; 
  {
    try {
      result = (arg1)->getVersion();
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_Native_1IModule_1getProvider(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  transkribus::IModule *arg1 = (transkribus::IModule *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(transkribus::IModule **)&jarg1; 
  {
    try {
      result = (arg1)->getProvider();
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_delete_1Native_1ILayoutAnalysis(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  transkribus::ILayoutAnalysis *arg1 = (transkribus::ILayoutAnalysis *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(transkribus::ILayoutAnalysis **)&jarg1; 
  {
    try {
      delete arg1;
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return ; 
      };
    }
  }
}


SWIGEXPORT void JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_Native_1ILayoutAnalysis_1process(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jstring jarg3, jlong jarg4, jobject jarg4_, jlong jarg5, jobject jarg5_) {
  transkribus::ILayoutAnalysis *arg1 = (transkribus::ILayoutAnalysis *) 0 ;
  transkribus::Image *arg2 = 0 ;
  std::string *arg3 = 0 ;
  std::vector< std::string > *arg4 = 0 ;
  std::vector< std::string > *arg5 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  (void)jarg4_;
  (void)jarg5_;
  arg1 = *(transkribus::ILayoutAnalysis **)&jarg1; 
  arg2 = *(transkribus::Image **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "transkribus::Image & reference is null");
    return ;
  } 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return ;
  std::string arg3_str(arg3_pstr);
  arg3 = &arg3_str;
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  arg4 = *(std::vector< std::string > **)&jarg4;
  if (!arg4) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< std::string > const & reference is null");
    return ;
  } 
  arg5 = *(std::vector< std::string > **)&jarg5;
  if (!arg5) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< std::string > const & reference is null");
    return ;
  } 
  {
    try {
      (arg1)->process(*arg2,(std::string const &)*arg3,(std::vector< std::string > const &)*arg4,(std::vector< std::string > const &)*arg5);
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return ; 
      };
    }
  }
}


SWIGEXPORT void JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_delete_1Native_1IHtr(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  transkribus::IHtr *arg1 = (transkribus::IHtr *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(transkribus::IHtr **)&jarg1; 
  {
    try {
      delete arg1;
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return ; 
      };
    }
  }
}


SWIGEXPORT void JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_Native_1IHtr_1createModel(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jlong jarg3, jobject jarg3_) {
  transkribus::IHtr *arg1 = (transkribus::IHtr *) 0 ;
  std::string *arg2 = 0 ;
  std::vector< std::string > *arg3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg3_;
  arg1 = *(transkribus::IHtr **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  arg3 = *(std::vector< std::string > **)&jarg3;
  if (!arg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< std::string > const & reference is null");
    return ;
  } 
  {
    try {
      (arg1)->createModel((std::string const &)*arg2,(std::vector< std::string > const &)*arg3);
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return ; 
      };
    }
  }
}


SWIGEXPORT void JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_Native_1IHtr_1process(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jlong jarg3, jobject jarg3_, jstring jarg4, jstring jarg5, jlong jarg6, jobject jarg6_, jlong jarg7, jobject jarg7_) {
  transkribus::IHtr *arg1 = (transkribus::IHtr *) 0 ;
  std::string *arg2 = 0 ;
  transkribus::Image *arg3 = 0 ;
  std::string *arg4 = 0 ;
  std::string *arg5 = 0 ;
  std::vector< std::string > *arg6 = 0 ;
  std::vector< std::string > *arg7 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg3_;
  (void)jarg6_;
  (void)jarg7_;
  arg1 = *(transkribus::IHtr **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  arg3 = *(transkribus::Image **)&jarg3;
  if (!arg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "transkribus::Image & reference is null");
    return ;
  } 
  if(!jarg4) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg4_pstr = (const char *)jenv->GetStringUTFChars(jarg4, 0); 
  if (!arg4_pstr) return ;
  std::string arg4_str(arg4_pstr);
  arg4 = &arg4_str;
  jenv->ReleaseStringUTFChars(jarg4, arg4_pstr); 
  if(!jarg5) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg5_pstr = (const char *)jenv->GetStringUTFChars(jarg5, 0); 
  if (!arg5_pstr) return ;
  std::string arg5_str(arg5_pstr);
  arg5 = &arg5_str;
  jenv->ReleaseStringUTFChars(jarg5, arg5_pstr); 
  arg6 = *(std::vector< std::string > **)&jarg6;
  if (!arg6) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< std::string > const & reference is null");
    return ;
  } 
  arg7 = *(std::vector< std::string > **)&jarg7;
  if (!arg7) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< std::string > const & reference is null");
    return ;
  } 
  {
    try {
      (arg1)->process((std::string const &)*arg2,*arg3,(std::string const &)*arg4,(std::string const &)*arg5,(std::vector< std::string > const &)*arg6,(std::vector< std::string > const &)*arg7);
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return ; 
      };
    }
  }
}


SWIGEXPORT jlong JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_Native_1ModuleFactory_1create(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jlong jresult = 0 ;
  transkribus::ModuleFactory *arg1 = (transkribus::ModuleFactory *) 0 ;
  std::vector< std::string > *arg2 = 0 ;
  transkribus::IModule *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(transkribus::ModuleFactory **)&jarg1; 
  arg2 = *(std::vector< std::string > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< std::string > const & reference is null");
    return 0;
  } 
  {
    try {
      result = (transkribus::IModule *)(arg1)->create((std::vector< std::string > const &)*arg2);
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  *(transkribus::IModule **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_Native_1ModuleFactory_1createModuleFromLib(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2, jobject jarg2_) {
  jlong jresult = 0 ;
  std::string *arg1 = 0 ;
  std::vector< std::string > *arg2 = 0 ;
  transkribus::IModule *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return 0;
  std::string arg1_str(arg1_pstr);
  arg1 = &arg1_str;
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  arg2 = *(std::vector< std::string > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< std::string > const & reference is null");
    return 0;
  } 
  {
    try {
      result = (transkribus::IModule *)transkribus::ModuleFactory::createModuleFromLib((std::string const &)*arg1,(std::vector< std::string > const &)*arg2);
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  *(transkribus::IModule **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_Native_1ModuleFactory_1castToLayoutAnalysis(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  transkribus::IModule *arg1 = (transkribus::IModule *) 0 ;
  transkribus::ILayoutAnalysis *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(transkribus::IModule **)&jarg1; 
  {
    try {
      result = (transkribus::ILayoutAnalysis *)transkribus::ModuleFactory::castToLayoutAnalysis(arg1);
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  *(transkribus::ILayoutAnalysis **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_Native_1ModuleFactory_1castToHtr(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  transkribus::IModule *arg1 = (transkribus::IModule *) 0 ;
  transkribus::IHtr *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(transkribus::IModule **)&jarg1; 
  {
    try {
      result = (transkribus::IHtr *)transkribus::ModuleFactory::castToHtr(arg1);
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  *(transkribus::IHtr **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_new_1Native_1ModuleFactory(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  transkribus::ModuleFactory *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    try {
      result = (transkribus::ModuleFactory *)new transkribus::ModuleFactory();
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return 0; 
      };
    }
  }
  *(transkribus::ModuleFactory **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_delete_1Native_1ModuleFactory(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  transkribus::ModuleFactory *arg1 = (transkribus::ModuleFactory *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(transkribus::ModuleFactory **)&jarg1; 
  {
    try {
      delete arg1;
    } catch (const std::exception& e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e.what()); return ; 
      };
    }
  }
}


SWIGEXPORT jlong JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_Native_1ILayoutAnalysis_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(transkribus::IModule **)&baseptr = *(transkribus::ILayoutAnalysis **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_eu_transkribus_interfaces_native_1wrapper_swig_transkribus_1interfacesJNI_Native_1IHtr_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(transkribus::IModule **)&baseptr = *(transkribus::IHtr **)&jarg1;
    return baseptr;
}

#ifdef __cplusplus
}
#endif

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.5
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package eu.transkribus.native_interfaces;

public class transkribus_interfacesJNI {
  public final static native long new_Image__SWIG_0(String jarg1);
  public final static native void Image_doSthWithException(long jarg1, Image jarg1_);
  public final static native long new_Image__SWIG_1(long jarg1);
  public final static native void delete_Image(long jarg1);
  public final static native long new_StringVector__SWIG_0();
  public final static native long new_StringVector__SWIG_1(long jarg1);
  public final static native long StringVector_size(long jarg1, StringVector jarg1_);
  public final static native long StringVector_capacity(long jarg1, StringVector jarg1_);
  public final static native void StringVector_reserve(long jarg1, StringVector jarg1_, long jarg2);
  public final static native boolean StringVector_isEmpty(long jarg1, StringVector jarg1_);
  public final static native void StringVector_clear(long jarg1, StringVector jarg1_);
  public final static native void StringVector_add(long jarg1, StringVector jarg1_, String jarg2);
  public final static native String StringVector_get(long jarg1, StringVector jarg1_, int jarg2);
  public final static native void StringVector_set(long jarg1, StringVector jarg1_, int jarg2, String jarg3);
  public final static native void delete_StringVector(long jarg1);
  public final static native long new_ILayoutAnalysis();
  public final static native void delete_ILayoutAnalysis(long jarg1);
  public final static native boolean ILayoutAnalysis_processLayout(long jarg1, ILayoutAnalysis jarg1_, long jarg2, Image jarg2_, String jarg3, String jarg4);
  public final static native boolean ILayoutAnalysis_process(long jarg1, ILayoutAnalysis jarg1_, long jarg2, Image jarg2_, String jarg3, String jarg4, long jarg5, StringVector jarg5_, long jarg6, StringVector jarg6_);
  public final static native boolean MyLayoutAnalysis_processLayout(long jarg1, MyLayoutAnalysis jarg1_, long jarg2, Image jarg2_, String jarg3, String jarg4);
  public final static native boolean MyLayoutAnalysis_process(long jarg1, MyLayoutAnalysis jarg1_, long jarg2, Image jarg2_, String jarg3, String jarg4, long jarg5, StringVector jarg5_, long jarg6, StringVector jarg6_);
  public final static native void delete_MyLayoutAnalysis(long jarg1);
  public final static native long new_MyLayoutAnalysis();
  public final static native long MyLayoutAnalysis_SWIGUpcast(long jarg1);
}

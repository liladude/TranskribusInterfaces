/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.5
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package eu.transkribus.interfaces.native_wrapper.swig;

public class transkribus_interfacesJNI {
  public final static native long new_Native_Image__SWIG_0(long jarg1, Native_Image jarg1_);
  public final static native long new_Native_Image__SWIG_2(String jarg1);
  public final static native long new_Native_Image__SWIG_3(long jarg1);
  public final static native void delete_Native_Image(long jarg1);
  public final static native void Native_Image_display(long jarg1, Native_Image jarg1_);
  public final static native int Native_Image_getWidth(long jarg1, Native_Image jarg1_);
  public final static native int Native_Image_getHeight(long jarg1, Native_Image jarg1_);
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
  public final static native void delete_Native_IModule(long jarg1);
  public final static native String Native_IModule_usage(long jarg1, Native_IModule jarg1_);
  public final static native String Native_IModule_getToolName(long jarg1, Native_IModule jarg1_);
  public final static native String Native_IModule_getVersion(long jarg1, Native_IModule jarg1_);
  public final static native String Native_IModule_getProvider(long jarg1, Native_IModule jarg1_);
  public final static native void delete_Native_IBaseline2Polygon(long jarg1);
  public final static native void Native_IBaseline2Polygon_process(long jarg1, Native_IBaseline2Polygon jarg1_, long jarg2, Native_Image jarg2_, String jarg3, long jarg4, StringVector jarg4_, long jarg5, StringVector jarg5_);
  public final static native void delete_Native_ILayoutAnalysis(long jarg1);
  public final static native void Native_ILayoutAnalysis_process(long jarg1, Native_ILayoutAnalysis jarg1_, long jarg2, Native_Image jarg2_, String jarg3, long jarg4, StringVector jarg4_, long jarg5, StringVector jarg5_);
  public final static native void delete_Native_IHtr(long jarg1);
  public final static native void Native_IHtr_createModel(long jarg1, Native_IHtr jarg1_, String jarg2, long jarg3, StringVector jarg3_);
  public final static native void Native_IHtr_process(long jarg1, Native_IHtr jarg1_, String jarg2, long jarg3, Native_Image jarg3_, String jarg4, String jarg5, long jarg6, StringVector jarg6_, long jarg7, StringVector jarg7_);
  public final static native void delete_Native_ITrainHtr(long jarg1);
  public final static native void Native_ITrainHtr_trainHtr(long jarg1, Native_ITrainHtr jarg1_, String jarg2, String jarg3, long jarg4, StringVector jarg4_, String jarg5);
  public final static native void Native_ITrainHtr_createTrainData(long jarg1, Native_ITrainHtr jarg1_, long jarg2, StringVector jarg2_, String jarg3, long jarg4, Native_IBaseline2Polygon jarg4_);
  public final static native void delete_Native_ModuleFactory(long jarg1);
  public final static native long Native_ModuleFactory_create(long jarg1, Native_ModuleFactory jarg1_, long jarg2, StringVector jarg2_);
  public final static native long Native_ModuleFactory_createModuleFromLib(String jarg1, long jarg2, StringVector jarg2_);
  public final static native long Native_ModuleFactory_castILayoutAnalysis(long jarg1, Native_IModule jarg1_);
  public final static native long Native_ModuleFactory_castIHtr(long jarg1, Native_IModule jarg1_);
  public final static native long Native_ModuleFactory_castIBaseline2Coords(long jarg1, Native_IModule jarg1_);
  public final static native long Native_ModuleFactory_castITrainHtr(long jarg1, Native_IModule jarg1_);
  public final static native long new_Native_ModuleFactory();
  public final static native long Native_IBaseline2Polygon_SWIGUpcast(long jarg1);
  public final static native long Native_ILayoutAnalysis_SWIGUpcast(long jarg1);
  public final static native long Native_IHtr_SWIGUpcast(long jarg1);
  public final static native long Native_ITrainHtr_SWIGUpcast(long jarg1);
}

package eu.transkribus.interfaces.native_wrapper;

import java.io.IOException;

import eu.transkribus.interfaces.ILayoutAnalysis;
import eu.transkribus.interfaces.native_wrapper.swig.Native_ILayoutAnalysis;
import eu.transkribus.interfaces.native_wrapper.swig.Native_ModuleFactory;
import eu.transkribus.interfaces.types.Image;

public class NativeLayoutAnalysisProxy extends NativeModuleProxy implements ILayoutAnalysis {
	
	Native_ILayoutAnalysis la;
		
	public NativeLayoutAnalysisProxy(String pathToPluginLib, String[] pars) {
		super(pathToPluginLib, pars);
		la = Native_ModuleFactory.castILayoutAnalysis(module);
	}
	
	@Override public void process(Image image, String xmlInOut, String[] ids, String[] props) {		
		try {
			la.process(NativeProxyUtils.toNativeImage(image), xmlInOut, NativeProxyUtils.toStringVector(ids), NativeProxyUtils.toStringVector(props));
		} catch (IOException e) {
			throw new RuntimeException(e);
		}
	}
}

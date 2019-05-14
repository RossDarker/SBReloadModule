include $(THEOS)/makefiles/common.mk

export TARGET = iphone:clang:11.2:11.0
export ARCHS = arm64 arm64e

BUNDLE_NAME = SBReloadModule
SBReloadModule_BUNDLE_EXTENSION = bundle
SBReloadModule_FILES = SBReloadModule.m
SBReloadModule_PRIVATE_FRAMEWORKS = ControlCenterUIKit
SBReloadModule_CFLAGS = -fobjc-arc
SBReloadModule_INSTALL_PATH = /Library/ControlCenter/Bundles/

after-install::
	install.exec "killall -9 SpringBoard"

include $(THEOS_MAKE_PATH)/bundle.mk
include $(THEOS_MAKE_PATH)/aggregate.mk

SWATCH_ROOT= $(shell pwd)/../..

BUILD_HOME = $(SWATCH_ROOT)
include ${SWATCH_ROOT}/config/mfCommonDefs.mk

Project = swatch/test
Package = swatch/xml/test
PackagePath = $(SWATCH_ROOT)/xml/test
PackageName = cactuscore-swatch-xml-test

Packager = Alessandro Thea

PACKAGE_VER_MAJOR = 1
PACKAGE_VER_MINOR = 3
PACKAGE_VER_PATCH ?= 0
PACKAGE_RELEASE ?= 1

Library = cactus_swatch_xml_test

Includes = 	\
	include \
	${SWATCH_ROOT}/core/include \
	${SWATCH_ROOT}/core/test/include \
	${SWATCH_ROOT}/action/include \
	${SWATCH_ROOT}/action/test/include \
	${SWATCH_ROOT}/processor/include \
	${SWATCH_ROOT}/dtm/include \
	${SWATCH_ROOT}/system/include \
	${SWATCH_ROOT}/xml/include \
	${CACTUS_ROOT}/include \
	${XDAQ_ROOT}/include \
	${XDAQ_ROOT}/include \
	$(XDAQ_ROOT)/include/linux
		

LibraryPaths =	\
	lib \
	${SWATCH_ROOT}/logger/lib \
	${SWATCH_ROOT}/core/lib \
	${SWATCH_ROOT}/core/test/lib \
	${SWATCH_ROOT}/action/lib \
	${SWATCH_ROOT}/action/test/lib \
	${SWATCH_ROOT}/processor/lib \
	${SWATCH_ROOT}/dtm/lib \
	${SWATCH_ROOT}/system/lib \
	${SWATCH_ROOT}/xml/lib \
	${CACTUS_ROOT}/lib \
	${XDAQ_ROOT}/lib

Libraries =	\
	boost_system \
	boost_unit_test_framework \
	cactus_swatch_logger \
	cactus_swatch_core \
	cactus_swatch_core_test \
	cactus_swatch_action \
	cactus_swatch_action_test \
	cactus_swatch_xml \
	dl


ExecutableLibraries = ${Libraries} ${Library}

#IgnoreSources = \
	src/common/testConfigure.cxx


include ${SWATCH_ROOT}/config/mfRules.mk
include ${SWATCH_ROOT}/config/mfRPMRules.mk

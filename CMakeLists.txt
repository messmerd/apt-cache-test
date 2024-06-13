cmake_minimum_required(VERSION 3.0)

project(lmms CXX)

# check for ALSA
FIND_PACKAGE(Alsa)
IF(ALSA_FOUND)
	SET(LMMS_HAVE_ALSA TRUE)
	SET(STATUS_ALSA "OK")
ELSE()
	SET(STATUS_ALSA "not found, please install libasound2-dev (or similar) "
		"if you require ALSA support")
ENDIF()

IF(NOT LMMS_HAVE_ALSA)
	SET(ASOUND_LIBRARY "")
ENDIF()

MESSAGE("* ALSA status: ${STATUS_ALSA}\n")

add_executable(lmms hello-world.cpp)
target_link_libraries(lmms ${ASOUND_LIBRARY})

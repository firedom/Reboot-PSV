cmake_minimum_required(VERSION 3.0)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  if(DEFINED ENV{VITASDK})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VITASDK}/share/vita.toolchain.cmake" CACHE PATH "toolchain file")
  else()
    message(FATAL_ERROR "Please define VITASDK to point to your SDK path!")
  endif()
endif()

set(SHORT_NAME Restart-Halt-vita)
project(${SHORT_NAME})
include("${VITASDK}/share/vita.cmake" REQUIRED)

set(VITA_APP_NAME "Halt Restart PSV")
set(VITA_TITLEID  "FRDM00001")
set(VITA_VERSION "00.01")
 
include_directories(
  ./common
)


add_executable(${SHORT_NAME}
  main.c
)

target_link_libraries(${SHORT_NAME}
  SceDisplay_stub
  ScePower_stub
  SceCtrl_stub
)


vita_create_self(${SHORT_NAME}.self ${SHORT_NAME} UNCOMPRESSED)
vita_create_vpk(${SHORT_NAME}.vpk ${VITA_TITLEID} ${SHORT_NAME}.self
  VERSION ${VITA_VERSION}
  NAME ${VITA_APP_NAME}
  FILE sce_sys/icon0.png sce_sys/icon0.png
)


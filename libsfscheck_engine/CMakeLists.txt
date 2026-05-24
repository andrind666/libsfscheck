cmake_minimum_required(VERSION 3.22)

project(sfscheck)

add_library(
        sfscheck
        SHARED

        src/utils.cpp
        src/cpu_detector.cpp
        src/ram_detector.cpp
        src/storage_detector.cpp
        src/gpu_detector.cpp
        src/sensor_detector.cpp
        src/battery_detector.cpp
        src/root_detector.cpp
        src/refurbish_detector.cpp
        src/imei_validator.cpp
        src/authenticity_engine.cpp
        src/jni_bridge.cpp
)

find_library(log-lib log)
find_library(gles-lib GLESv3)

include_directories(include)

target_link_libraries(
        sfscheck
        ${log-lib}
        ${gles-lib}
)

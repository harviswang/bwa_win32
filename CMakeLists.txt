cmake_minimum_required(VERSION 2.8.12)

#include(zlib/CMakeLists.txt)

project(bwa LANGUAGES C CXX)

if (MSVC)
	add_compile_options(/DHAVE_STRUCT_TIMESPEC 
	                    /D_USE_MATH_DEFINES 
						/DPATH_MAX=MAX_PATH 
						/D__func__=__FUNCTION__
						/D_CRT_SECURE_NO_WARNINGS
						/Dstrdup=_strdup )
else()
	add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

set(BWA_HDRS
bwa/QSufSort.h
bwa/bamlite.h
bwa/bntseq.h
bwa/bwa.h
bwa/bwamem.h
bwa/bwase.h
bwa/bwt.h
bwa/bwt_lite.h
bwa/bwtaln.h
bwa/bwtgap.h
bwa/bwtsw2.h
bwa/kbtree.h
bwa/khash.h
bwa/kseq.h
bwa/ksort.h
bwa/kstring.h
bwa/ksw.h
bwa/kvec.h
bwa/malloc_wrap.h
bwa/neon_sse.h
bwa/rle.h
bwa/rope.h
bwa/scalar_sse.h
bwa/utils.h
)

set(BWA_SRCS
bwa/QSufSort.c
bwa/bamlite.c
bwa/bntseq.c
bwa/bwa.c
bwa/bwamem.c
bwa/bwamem_extra.c
bwa/bwamem_pair.c
bwa/bwape.c
bwa/bwase.c
bwa/bwaseqio.c
bwa/bwashm.c
bwa/bwt.c
bwa/bwt_gen.c
bwa/bwt_lite.c
bwa/bwtaln.c
bwa/bwtgap.c
bwa/bwtindex.c
bwa/bwtsw2_aux.c
bwa/bwtsw2_chain.c
bwa/bwtsw2_core.c
bwa/bwtsw2_main.c
bwa/bwtsw2_pair.c
#bwa/example.c
bwa/fastmap.c
bwa/is.c
bwa/kopen.c
bwa/kstring.c
bwa/ksw.c
bwa/kthread.c
bwa/main.c
bwa/malloc_wrap.c
bwa/maxk.c
bwa/pemerge.c
bwa/rle.c
bwa/rope.c
bwa/utils.c
bwa_windows_port/getopt_long.c
bwa_windows_port/getrusage-windows.c
)

add_executable(bwa ${BWA_SRCS} ${BWA_HDRS})

target_include_directories(bwa PUBLIC
"./bwa_windows_port"
"./zlib"
"./pthreads-w32-2-9-1-release/pthreads.2"
)

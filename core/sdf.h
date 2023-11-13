#ifndef __SDF_H
#define __SDF_H

#define SDF_ERROR (-1)
#define SDF_OK    (0)

#define OS_BIT 64

#if OS_BIT == 64
#    define sdf_addr_t (unsigned long long)
#else
#    define sdf_addr_t (unsigned int)
#endif


typedef enum {
    READY = 0,
    RUNNING,
    ABORT,
} sdf_dev_status;

struct sdf_dev {
    char *name;
    sdf_dev_status status;
    sdf_addr_t cfg_space_addr;
    sdf_addr_t cfg_space_addr;
};

#endif

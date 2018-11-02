
/**
 * \addtogroup IOPortDriver I/O Port I/O driver
 * @{
 */

#ifndef _PBDRV_IOPORT_H_
#define _PBDRV_IOPORT_H_

#include "pbdrv/config.h"
#include "pbio/error.h"
#include "pbio/iodev.h"
#include "pbio/port.h"
#include "sys/process.h"

#if PBDRV_CONFIG_IOPORT

pbio_error_t pbdrv_ioport_get_iodev(pbio_port_t port, pbio_iodev_t **iodev);

/** @cond INTERNAL */

PROCESS_NAME(pbdrv_ioport_process);

/** @endcond */

#else // PBDRV_CONFIG_IOPORT

static inline pbio_error_t pbdrv_ioport_get_iodev(pbio_port_t port, pbio_iodev_t **iodev) {
    return PBIO_ERROR_NOT_SUPPORTED;
}

#endif // PBDRV_CONFIG_IOPORT

#endif // _PBDRV_IOPORT_H_

/** @}*/

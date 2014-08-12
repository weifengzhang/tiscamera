



#ifndef _CAMERA_INDEX_H_
#define _CAMERA_INDEX_H_

// #include "tis_video.h"
#include "base_types.h"
// #include "tis_camera_interface.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /**
     * @name tis_get_camera_count
     * @return 
     */
    int tis_get_camera_count ();
    
    /**
     * @name
     * @param ptr        - pointer to the array that shall be filled
     * @param array_size - size of array that ptr points to
     * @return 
     */
    int tis_get_camera_list (struct tis_device_info* ptr, unsigned int array_size);

    int tis_get_usb_camera_count ();
    
    int tis_get_usb_camera_list (struct tis_device_info* ptr, unsigned int array_size);

    int tis_get_gige_camera_count ();
    
    int tis_get_gige_camera_list (struct tis_device_info* ptr, unsigned int array_size);
    
#ifdef __cplusplus
}
#endif

#endif /* _CAMERA_INDEX_H_ */




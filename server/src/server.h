// This file generated by ngrestcg
// For more information, please visit: https://github.com/loentar/ngrest

#ifndef server_h
#define server_h

#include <ngrest/common/Service.h>
#include <utils/ir/ir_instance.h>

//! V-commerce backend server
/*! V-commerce backend server. */
// *location: server
class server: public ngrest::Service {
 public:
  //! Receives an image and detects objects inside the image
  /*! Receives an image and detects objects inside the image.
   * This method returns a token which will be used to get
   * the result once it is available.
   */
  // *location: /processImage
  // *method: POST
  //
  std::string processImage(const std::string& path);
  
  //! Receives an id and returns objects inside the corresponding image
  /*! Receives an id and returns objects inside the corresponding image.
   * This method returns a json string if the result is available.
   * Otherwise returns an empty string.
   */
  // *location: /fetchResult
  // *method: POST
  //
  std::string fetchResult(const std::string& id);
  
  //! Executes the queue of tasks
  /*! Executes the queue of tasks.
   * This method returns a json string if the result is available.
   * Otherwise returns an empty string.
   */
  // *location: /flush
  // *method: POST
  //
  std::string flush();
};


#endif /* server_h */




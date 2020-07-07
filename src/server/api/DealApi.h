/**
* Deal
* # Introduction A web service that accepts request by APIs and returns 1+ bridge deals  # OpenAPI Specification This API is documented in **OpenAPI format**  # Cross-Origin Resource Sharing This API features Cross-Origin Resource Sharing (CORS) implemented in compliance with  [W3C spec](https://www.w3.org/TR/cors/). And that allows cross-domain communication from the browser. All responses have a wildcard same-origin which makes them completely public and accessible to everyone, including any code on any site.  # Authentication  Forms of authentication:   - API Key 
*
* The version of the OpenAPI document: 0.0.1
* Contact: support@example.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * DealApi.h
 *
 * 
 */

#ifndef DealApi_H_
#define DealApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "BoardList.h"
#include "Error.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  DealApi {
public:
    DealApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~DealApi() {}
    void init();

    const std::string base = "";

private:
    void setupRoutes();

    void get_deal_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void deal_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Returns an array of bridge hands
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="seed">Seed (optional, default to &quot;&quot;)</param>
    /// <param name="session">Session number (optional, default to 0)</param>
    /// <param name="event">Event number (optional, default to 0)</param>
    /// <param name="firstBoard">First board number (optional, default to 0)</param>
    /// <param name="numberOfBoards">Number of Boards (optional, default to 0)</param>
    virtual void get_deal(const Pistache::Optional<std::string> &seed, const Pistache::Optional<int32_t> &session, const Pistache::Optional<int32_t> &event, const Pistache::Optional<int32_t> &firstBoard, const Pistache::Optional<int32_t> &numberOfBoards, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* DealApi_H_ */

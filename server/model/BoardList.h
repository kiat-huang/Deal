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
 * BoardList.h
 *
 * Board array, uuid hands
 */

#ifndef BoardList_H_
#define BoardList_H_


#include <string>
#include <vector>
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Board array, uuid hands
/// </summary>
class  BoardList
{
public:
    BoardList();
    virtual ~BoardList();

    void validate();

    /////////////////////////////////////////////
    /// BoardList members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string>& getBoards();
    void setBoards(std::vector<std::string> const& value);
    bool boardsIsSet() const;
    void unsetBoards();

    friend void to_json(nlohmann::json& j, const BoardList& o);
    friend void from_json(const nlohmann::json& j, BoardList& o);
protected:
    std::vector<std::string> m_Boards;
    bool m_BoardsIsSet;
};

}
}
}
}

#endif /* BoardList_H_ */

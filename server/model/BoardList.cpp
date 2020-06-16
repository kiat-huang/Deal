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


#include "BoardList.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

BoardList::BoardList()
{
    m_BoardsIsSet = false;
    
}

BoardList::~BoardList()
{
}

void BoardList::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const BoardList& o)
{
    j = nlohmann::json();
    if(o.boardsIsSet() || !o.m_Boards.empty())
        j["boards"] = o.m_Boards;
}

void from_json(const nlohmann::json& j, BoardList& o)
{
    if(j.find("boards") != j.end())
    {
        j.at("boards").get_to(o.m_Boards);
        o.m_BoardsIsSet = true;
    } 
}

std::vector<std::string>& BoardList::getBoards()
{
    return m_Boards;
}
void BoardList::setBoards(std::vector<std::string> const& value)
{
    m_Boards = value;
    m_BoardsIsSet = true;
}
bool BoardList::boardsIsSet() const
{
    return m_BoardsIsSet;
}
void BoardList::unsetBoards()
{
    m_BoardsIsSet = false;
}

}
}
}
}


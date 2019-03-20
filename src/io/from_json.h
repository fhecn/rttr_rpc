#include <string>
#include <rttr/type>
#include <nlohmann/json.hpp>

#include "rttr_rpc_io_export.h"

namespace io {
    /*!
	 * Deserialize the given json string \p json to the given instance \p obj.
	 */
    bool RTTR_RPC_IO_EXPORT from_json(const std::string& json, rttr::instance obj);

    /*!
	 * Deserialize the given json \p json to the given instance \p obj.
	 */
    bool RTTR_RPC_IO_EXPORT from_json_obj(const nlohmann::json& json, rttr::instance obj);

    rttr::variant RTTR_RPC_IO_EXPORT from_json(const nlohmann::json& json, const rttr::type& t);
} // namespace io
// AirMap Platform SDK
// Copyright © 2018 AirMap, Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//   http://www.apache.org/licenses/LICENSE-2.0
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an AS IS BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef AIRMAP_CMDS_AIRMAP_CMD_DAEMON_H_
#define AIRMAP_CMDS_AIRMAP_CMD_DAEMON_H_

#include <airmap/cmds/airmap/cmd/flags.h>

#include <airmap/client.h>
#include <airmap/logger.h>
#include <airmap/optional.h>
#include <airmap/util/cli.h>
#include <airmap/util/formatting_logger.h>
#include <airmap/util/tagged_string.h>

namespace airmap {
namespace cmds {
namespace airmap {
namespace cmd {

class Daemon : public util::cli::CommandWithFlagsAndAction {
 public:
  Daemon();

 private:
  using SerialDevice  = util::TaggedString<util::tags::MustNotBeEmpty>;
  using TcpEndpointIp = util::TaggedString<util::tags::MustNotBeEmpty>;

  util::FormattingLogger log_{create_null_logger()};
  Client::Version version_{Client::Version::production};
  Logger::Severity log_level_{Logger::Severity::info};
  Required<ConfigFile> config_file_;
  std::string aircraft_id_;
  std::string grpc_endpoint_{"0.0.0.0:9090"};
  Required<SerialDevice> serial_device_;
  Required<TelemetryHost> telemetry_host_;
  Required<std::uint16_t> telemetry_port_;
  Required<TcpEndpointIp> tcp_endpoint_ip_;
  Required<std::uint16_t> tcp_endpoint_port_;
  Required<std::uint16_t> udp_endpoint_port_;
  Optional<std::uint8_t> system_id_;
};

}  // namespace cmd
}  // namespace airmap
}  // namespace cmds
}  // namespace airmap

#endif  // AIRMAP_CMDS_AIRMAP_CMD_DAEMON_H_

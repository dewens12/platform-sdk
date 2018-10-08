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
#ifndef AIRMAP_REST_AUTHENTICATOR_H_
#define AIRMAP_REST_AUTHENTICATOR_H_

#include <airmap/authenticator.h>
#include <airmap/client.h>
#include <airmap/net/http/requester.h>

namespace airmap {
namespace rest {

class Authenticator : public airmap::Authenticator {
 public:
  static std::string default_route_for_version(Client::Version version);

  explicit Authenticator(const std::shared_ptr<net::http::Requester>& airmap_requester,
                         const std::shared_ptr<net::http::Requester>& sso_requester);

  void authenticate_with_password(const AuthenticateWithPassword::Params& params,
                                  const AuthenticateWithPassword::Callback& cb) override;

  void authenticate_anonymously(const AuthenticateAnonymously::Params& params,
                                const AuthenticateAnonymously::Callback& cb) override;

  void renew_authentication(const RenewAuthentication::Params& params,
                            const RenewAuthentication::Callback& cb) override;

 private:
  std::shared_ptr<net::http::Requester> airmap_requester_;
  std::shared_ptr<net::http::Requester> sso_requester_;
};

}  // namespace rest
}  // namespace airmap

#endif  // AIRMAP_REST_AUTHENTICATOR_H_

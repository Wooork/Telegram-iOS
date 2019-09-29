#pragma once

#include "auto/tl/tonlib_api.h"

#include "auto/tl/tonlib_api.hpp"

#include "td/utils/JsonBuilder.h"
#include "td/utils/Status.h"

#include "crypto/common/bitstring.h"
namespace ton {
namespace tonlib_api{
  using namespace td;
Result<int32> tl_constructor_from_string(tonlib_api::LogStream *object, const std::string &str);
Result<int32> tl_constructor_from_string(tonlib_api::generic_AccountState *object, const std::string &str);
Result<int32> tl_constructor_from_string(tonlib_api::Object *object, const std::string &str);
Result<int32> tl_constructor_from_string(tonlib_api::Function *object, const std::string &str);
Status from_json(tonlib_api::accountAddress &to, JsonObject &from);
Status from_json(tonlib_api::bip39Hints &to, JsonObject &from);
Status from_json(tonlib_api::config &to, JsonObject &from);
Status from_json(tonlib_api::error &to, JsonObject &from);
Status from_json(tonlib_api::exportedEncryptedKey &to, JsonObject &from);
Status from_json(tonlib_api::exportedKey &to, JsonObject &from);
Status from_json(tonlib_api::exportedPemKey &to, JsonObject &from);
Status from_json(tonlib_api::inputKey &to, JsonObject &from);
Status from_json(tonlib_api::key &to, JsonObject &from);
Status from_json(tonlib_api::logStreamDefault &to, JsonObject &from);
Status from_json(tonlib_api::logStreamFile &to, JsonObject &from);
Status from_json(tonlib_api::logStreamEmpty &to, JsonObject &from);
Status from_json(tonlib_api::logTags &to, JsonObject &from);
Status from_json(tonlib_api::logVerbosityLevel &to, JsonObject &from);
Status from_json(tonlib_api::ok &to, JsonObject &from);
Status from_json(tonlib_api::options &to, JsonObject &from);
Status from_json(tonlib_api::sendGramsResult &to, JsonObject &from);
Status from_json(tonlib_api::unpackedAccountAddress &to, JsonObject &from);
Status from_json(tonlib_api::updateSendLiteServerQuery &to, JsonObject &from);
Status from_json(tonlib_api::generic_accountStateRaw &to, JsonObject &from);
Status from_json(tonlib_api::generic_accountStateTestWallet &to, JsonObject &from);
Status from_json(tonlib_api::generic_accountStateWallet &to, JsonObject &from);
Status from_json(tonlib_api::generic_accountStateTestGiver &to, JsonObject &from);
Status from_json(tonlib_api::generic_accountStateUninited &to, JsonObject &from);
Status from_json(tonlib_api::internal_transactionId &to, JsonObject &from);
Status from_json(tonlib_api::raw_accountState &to, JsonObject &from);
Status from_json(tonlib_api::raw_initialAccountState &to, JsonObject &from);
Status from_json(tonlib_api::raw_message &to, JsonObject &from);
Status from_json(tonlib_api::raw_transaction &to, JsonObject &from);
Status from_json(tonlib_api::raw_transactions &to, JsonObject &from);
Status from_json(tonlib_api::testGiver_accountState &to, JsonObject &from);
Status from_json(tonlib_api::testWallet_accountState &to, JsonObject &from);
Status from_json(tonlib_api::testWallet_initialAccountState &to, JsonObject &from);
Status from_json(tonlib_api::uninited_accountState &to, JsonObject &from);
Status from_json(tonlib_api::wallet_accountState &to, JsonObject &from);
Status from_json(tonlib_api::wallet_initialAccountState &to, JsonObject &from);
Status from_json(tonlib_api::addLogMessage &to, JsonObject &from);
Status from_json(tonlib_api::changeLocalPassword &to, JsonObject &from);
Status from_json(tonlib_api::close &to, JsonObject &from);
Status from_json(tonlib_api::createNewKey &to, JsonObject &from);
Status from_json(tonlib_api::deleteKey &to, JsonObject &from);
Status from_json(tonlib_api::exportEncryptedKey &to, JsonObject &from);
Status from_json(tonlib_api::exportKey &to, JsonObject &from);
Status from_json(tonlib_api::exportPemKey &to, JsonObject &from);
Status from_json(tonlib_api::generic_getAccountState &to, JsonObject &from);
Status from_json(tonlib_api::generic_sendGrams &to, JsonObject &from);
Status from_json(tonlib_api::getBip39Hints &to, JsonObject &from);
Status from_json(tonlib_api::getLogStream &to, JsonObject &from);
Status from_json(tonlib_api::getLogTagVerbosityLevel &to, JsonObject &from);
Status from_json(tonlib_api::getLogTags &to, JsonObject &from);
Status from_json(tonlib_api::getLogVerbosityLevel &to, JsonObject &from);
Status from_json(tonlib_api::importEncryptedKey &to, JsonObject &from);
Status from_json(tonlib_api::importKey &to, JsonObject &from);
Status from_json(tonlib_api::importPemKey &to, JsonObject &from);
Status from_json(tonlib_api::init &to, JsonObject &from);
Status from_json(tonlib_api::onLiteServerQueryError &to, JsonObject &from);
Status from_json(tonlib_api::onLiteServerQueryResult &to, JsonObject &from);
Status from_json(tonlib_api::options_setConfig &to, JsonObject &from);
Status from_json(tonlib_api::packAccountAddress &to, JsonObject &from);
Status from_json(tonlib_api::raw_getAccountAddress &to, JsonObject &from);
Status from_json(tonlib_api::raw_getAccountState &to, JsonObject &from);
Status from_json(tonlib_api::raw_getTransactions &to, JsonObject &from);
Status from_json(tonlib_api::raw_sendMessage &to, JsonObject &from);
Status from_json(tonlib_api::runTests &to, JsonObject &from);
Status from_json(tonlib_api::setLogStream &to, JsonObject &from);
Status from_json(tonlib_api::setLogTagVerbosityLevel &to, JsonObject &from);
Status from_json(tonlib_api::setLogVerbosityLevel &to, JsonObject &from);
Status from_json(tonlib_api::testGiver_getAccountAddress &to, JsonObject &from);
Status from_json(tonlib_api::testGiver_getAccountState &to, JsonObject &from);
Status from_json(tonlib_api::testGiver_sendGrams &to, JsonObject &from);
Status from_json(tonlib_api::testWallet_getAccountAddress &to, JsonObject &from);
Status from_json(tonlib_api::testWallet_getAccountState &to, JsonObject &from);
Status from_json(tonlib_api::testWallet_init &to, JsonObject &from);
Status from_json(tonlib_api::testWallet_sendGrams &to, JsonObject &from);
Status from_json(tonlib_api::unpackAccountAddress &to, JsonObject &from);
Status from_json(tonlib_api::wallet_getAccountAddress &to, JsonObject &from);
Status from_json(tonlib_api::wallet_getAccountState &to, JsonObject &from);
Status from_json(tonlib_api::wallet_init &to, JsonObject &from);
Status from_json(tonlib_api::wallet_sendGrams &to, JsonObject &from);
void to_json(JsonValueScope &jv, const tonlib_api::accountAddress &object);
void to_json(JsonValueScope &jv, const tonlib_api::bip39Hints &object);
void to_json(JsonValueScope &jv, const tonlib_api::config &object);
void to_json(JsonValueScope &jv, const tonlib_api::error &object);
void to_json(JsonValueScope &jv, const tonlib_api::exportedEncryptedKey &object);
void to_json(JsonValueScope &jv, const tonlib_api::exportedKey &object);
void to_json(JsonValueScope &jv, const tonlib_api::exportedPemKey &object);
void to_json(JsonValueScope &jv, const tonlib_api::inputKey &object);
void to_json(JsonValueScope &jv, const tonlib_api::key &object);
void to_json(JsonValueScope &jv, const tonlib_api::LogStream &object);
void to_json(JsonValueScope &jv, const tonlib_api::logStreamDefault &object);
void to_json(JsonValueScope &jv, const tonlib_api::logStreamFile &object);
void to_json(JsonValueScope &jv, const tonlib_api::logStreamEmpty &object);
void to_json(JsonValueScope &jv, const tonlib_api::logTags &object);
void to_json(JsonValueScope &jv, const tonlib_api::logVerbosityLevel &object);
void to_json(JsonValueScope &jv, const tonlib_api::ok &object);
void to_json(JsonValueScope &jv, const tonlib_api::options &object);
void to_json(JsonValueScope &jv, const tonlib_api::sendGramsResult &object);
void to_json(JsonValueScope &jv, const tonlib_api::unpackedAccountAddress &object);
void to_json(JsonValueScope &jv, const tonlib_api::updateSendLiteServerQuery &object);
void to_json(JsonValueScope &jv, const tonlib_api::generic_AccountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::generic_accountStateRaw &object);
void to_json(JsonValueScope &jv, const tonlib_api::generic_accountStateTestWallet &object);
void to_json(JsonValueScope &jv, const tonlib_api::generic_accountStateWallet &object);
void to_json(JsonValueScope &jv, const tonlib_api::generic_accountStateTestGiver &object);
void to_json(JsonValueScope &jv, const tonlib_api::generic_accountStateUninited &object);
void to_json(JsonValueScope &jv, const tonlib_api::internal_transactionId &object);
void to_json(JsonValueScope &jv, const tonlib_api::raw_accountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::raw_initialAccountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::raw_message &object);
void to_json(JsonValueScope &jv, const tonlib_api::raw_transaction &object);
void to_json(JsonValueScope &jv, const tonlib_api::raw_transactions &object);
void to_json(JsonValueScope &jv, const tonlib_api::testGiver_accountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::testWallet_accountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::testWallet_initialAccountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::uninited_accountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::wallet_accountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::wallet_initialAccountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::addLogMessage &object);
void to_json(JsonValueScope &jv, const tonlib_api::changeLocalPassword &object);
void to_json(JsonValueScope &jv, const tonlib_api::close &object);
void to_json(JsonValueScope &jv, const tonlib_api::createNewKey &object);
void to_json(JsonValueScope &jv, const tonlib_api::deleteKey &object);
void to_json(JsonValueScope &jv, const tonlib_api::exportEncryptedKey &object);
void to_json(JsonValueScope &jv, const tonlib_api::exportKey &object);
void to_json(JsonValueScope &jv, const tonlib_api::exportPemKey &object);
void to_json(JsonValueScope &jv, const tonlib_api::generic_getAccountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::generic_sendGrams &object);
void to_json(JsonValueScope &jv, const tonlib_api::getBip39Hints &object);
void to_json(JsonValueScope &jv, const tonlib_api::getLogStream &object);
void to_json(JsonValueScope &jv, const tonlib_api::getLogTagVerbosityLevel &object);
void to_json(JsonValueScope &jv, const tonlib_api::getLogTags &object);
void to_json(JsonValueScope &jv, const tonlib_api::getLogVerbosityLevel &object);
void to_json(JsonValueScope &jv, const tonlib_api::importEncryptedKey &object);
void to_json(JsonValueScope &jv, const tonlib_api::importKey &object);
void to_json(JsonValueScope &jv, const tonlib_api::importPemKey &object);
void to_json(JsonValueScope &jv, const tonlib_api::init &object);
void to_json(JsonValueScope &jv, const tonlib_api::onLiteServerQueryError &object);
void to_json(JsonValueScope &jv, const tonlib_api::onLiteServerQueryResult &object);
void to_json(JsonValueScope &jv, const tonlib_api::options_setConfig &object);
void to_json(JsonValueScope &jv, const tonlib_api::packAccountAddress &object);
void to_json(JsonValueScope &jv, const tonlib_api::raw_getAccountAddress &object);
void to_json(JsonValueScope &jv, const tonlib_api::raw_getAccountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::raw_getTransactions &object);
void to_json(JsonValueScope &jv, const tonlib_api::raw_sendMessage &object);
void to_json(JsonValueScope &jv, const tonlib_api::runTests &object);
void to_json(JsonValueScope &jv, const tonlib_api::setLogStream &object);
void to_json(JsonValueScope &jv, const tonlib_api::setLogTagVerbosityLevel &object);
void to_json(JsonValueScope &jv, const tonlib_api::setLogVerbosityLevel &object);
void to_json(JsonValueScope &jv, const tonlib_api::testGiver_getAccountAddress &object);
void to_json(JsonValueScope &jv, const tonlib_api::testGiver_getAccountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::testGiver_sendGrams &object);
void to_json(JsonValueScope &jv, const tonlib_api::testWallet_getAccountAddress &object);
void to_json(JsonValueScope &jv, const tonlib_api::testWallet_getAccountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::testWallet_init &object);
void to_json(JsonValueScope &jv, const tonlib_api::testWallet_sendGrams &object);
void to_json(JsonValueScope &jv, const tonlib_api::unpackAccountAddress &object);
void to_json(JsonValueScope &jv, const tonlib_api::wallet_getAccountAddress &object);
void to_json(JsonValueScope &jv, const tonlib_api::wallet_getAccountState &object);
void to_json(JsonValueScope &jv, const tonlib_api::wallet_init &object);
void to_json(JsonValueScope &jv, const tonlib_api::wallet_sendGrams &object);
inline void to_json(JsonValueScope &jv, const ton::tonlib_api::Object &object) {
  ton::tonlib_api::downcast_call(const_cast<ton::tonlib_api::Object &>(object),[&jv](const auto &object) { to_json(jv, object); });
}
inline void to_json(JsonValueScope &jv, const ton::tonlib_api::Function &object) {
  ton::tonlib_api::downcast_call(const_cast<ton::tonlib_api::Function &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
}  // namespace tonlib_api
}  // namespace ton
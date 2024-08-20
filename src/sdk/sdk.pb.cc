// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/sdk.proto

#include "sdk/sdk.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace kaikosdk {
}  // namespace kaikosdk
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_sdk_2fsdk_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_sdk_2fsdk_2eproto = nullptr;
const uint32_t TableStruct_sdk_2fsdk_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_sdk_2fsdk_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rsdk/sdk.proto\022\010kaikosdk\032,sdk/stream/ag"
  "gregated_price_v1/request.proto\032-sdk/str"
  "eam/aggregated_price_v1/response.proto\032,"
  "sdk/stream/aggregated_quote_v2/request.p"
  "roto\032-sdk/stream/aggregated_quote_v2/res"
  "ponse.proto\032;sdk/stream/aggregates_direc"
  "t_exchange_rate_v2/request.proto\032<sdk/st"
  "ream/aggregates_direct_exchange_rate_v2/"
  "response.proto\032,sdk/stream/aggregates_oh"
  "lcv_v1/request.proto\032-sdk/stream/aggrega"
  "tes_ohlcv_v1/response.proto\0329sdk/stream/"
  "aggregates_spot_exchange_rate_v2/request"
  ".proto\032:sdk/stream/aggregates_spot_excha"
  "nge_rate_v2/response.proto\032+sdk/stream/a"
  "ggregates_vwap_v1/request.proto\032,sdk/str"
  "eam/aggregates_vwap_v1/response.proto\032:s"
  "dk/stream/derivatives_instrument_metrics"
  "_v1/request.proto\032;sdk/stream/derivative"
  "s_instrument_metrics_v1/response.proto\032,"
  "sdk/stream/index_forex_rate_v1/request.p"
  "roto\032-sdk/stream/index_forex_rate_v1/res"
  "ponse.proto\032.sdk/stream/index_multi_asse"
  "ts_v1/request.proto\032/sdk/stream/index_mu"
  "lti_assets_v1/response.proto\032!sdk/stream"
  "/index_v1/request.proto\032\"sdk/stream/inde"
  "x_v1/response.proto\032-sdk/stream/iv_svi_p"
  "arameters_v1/request.proto\032.sdk/stream/i"
  "v_svi_parameters_v1/response.proto\032)sdk/"
  "stream/market_update_v1/request.proto\032*s"
  "dk/stream/market_update_v1/response.prot"
  "o\032\"sdk/stream/trades_v1/request.proto\032#s"
  "dk/stream/trades_v1/response.proto2\206\001\n\036S"
  "treamAggregatedQuoteServiceV2\022d\n\tSubscri"
  "be\022(.kaikosdk.StreamAggregatedQuoteReque"
  "stV2\032).kaikosdk.StreamAggregatedQuoteRes"
  "ponseV2\"\0000\0012\211\001\n\036StreamAggregatedPriceSer"
  "viceV1\022g\n\tSubscribe\022(.kaikosdk.StreamAgg"
  "regatedPriceRequestV1\032).kaikosdk.StreamA"
  "ggregatedPriceResponseV1\"\003\210\002\0010\0012\206\001\n\036Stre"
  "amAggregatesOHLCVServiceV1\022d\n\tSubscribe\022"
  "(.kaikosdk.StreamAggregatesOHLCVRequestV"
  "1\032).kaikosdk.StreamAggregatesOHLCVRespon"
  "seV1\"\0000\0012k\n\025StreamTradesServiceV1\022R\n\tSub"
  "scribe\022\037.kaikosdk.StreamTradesRequestV1\032"
  " .kaikosdk.StreamTradesResponseV1\"\0000\0012\203\001"
  "\n\035StreamAggregatesVWAPServiceV1\022b\n\tSubsc"
  "ribe\022\'.kaikosdk.StreamAggregatesVWAPRequ"
  "estV1\032(.kaikosdk.StreamAggregatesVWAPRes"
  "ponseV1\"\0000\0012v\n\024StreamIndexServiceV1\022^\n\tS"
  "ubscribe\022%.kaikosdk.StreamIndexServiceRe"
  "questV1\032&.kaikosdk.StreamIndexServiceRes"
  "ponseV1\"\0000\0012\227\001\n\037StreamIndexMultiAssetsSe"
  "rviceV1\022t\n\tSubscribe\0220.kaikosdk.StreamIn"
  "dexMultiAssetsServiceRequestV1\0321.kaikosd"
  "k.StreamIndexMultiAssetsServiceResponseV"
  "1\"\0000\0012}\n\033StreamMarketUpdateServiceV1\022^\n\t"
  "Subscribe\022%.kaikosdk.StreamMarketUpdateR"
  "equestV1\032&.kaikosdk.StreamMarketUpdateRe"
  "sponseV1\"\0000\0012\255\001\n+StreamAggregatesSpotExc"
  "hangeRateV2ServiceV1\022~\n\tSubscribe\0225.kaik"
  "osdk.StreamAggregatesSpotExchangeRateV2R"
  "equestV1\0326.kaikosdk.StreamAggregatesSpot"
  "ExchangeRateV2ResponseV1\"\0000\0012\270\001\n1StreamA"
  "ggregatesSpotDirectExchangeRateV2Service"
  "V1\022\202\001\n\tSubscribe\0227.kaikosdk.StreamAggreg"
  "atesDirectExchangeRateV2RequestV1\0328.kaik"
  "osdk.StreamAggregatesDirectExchangeRateV"
  "2ResponseV1\"\0000\0012\221\001\n\035StreamIndexForexRate"
  "ServiceV1\022p\n\tSubscribe\022..kaikosdk.Stream"
  "IndexForexRateServiceRequestV1\032/.kaikosd"
  "k.StreamIndexForexRateServiceResponseV1\""
  "\0000\0012\255\001\n+StreamDerivativesInstrumentMetri"
  "csServiceV1\022~\n\tSubscribe\0225.kaikosdk.Stre"
  "amDerivativesInstrumentMetricsRequestV1\032"
  "6.kaikosdk.StreamDerivativesInstrumentMe"
  "tricsResponseV1\"\0000\0012\206\001\n\036StreamIvSviParam"
  "etersServiceV1\022d\n\tSubscribe\022(.kaikosdk.S"
  "treamIvSviParametersRequestV1\032).kaikosdk"
  ".StreamIvSviParametersResponseV1\"\0000\001BR\n\r"
  "com.kaiko.sdkB\010SdkProtoP\001Z*github.com/ka"
  "ikodata/kaiko-go-sdk;kaikosdk\252\002\010KaikoSdk"
  "b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_sdk_2fsdk_2eproto_deps[26] = {
  &::descriptor_table_sdk_2fstream_2faggregated_5fprice_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregated_5fprice_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregated_5fquote_5fv2_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv2_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv2_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv2_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv2_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fvwap_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fvwap_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2fderivatives_5finstrument_5fmetrics_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2fderivatives_5finstrument_5fmetrics_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2findex_5fforex_5frate_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2findex_5fforex_5frate_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2findex_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2findex_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2fiv_5fsvi_5fparameters_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2fiv_5fsvi_5fparameters_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2fmarket_5fupdate_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2fmarket_5fupdate_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2ftrades_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto,
};
static ::_pbi::once_flag descriptor_table_sdk_2fsdk_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_sdk_2fsdk_2eproto = {
    false, false, 3248, descriptor_table_protodef_sdk_2fsdk_2eproto,
    "sdk/sdk.proto",
    &descriptor_table_sdk_2fsdk_2eproto_once, descriptor_table_sdk_2fsdk_2eproto_deps, 26, 0,
    schemas, file_default_instances, TableStruct_sdk_2fsdk_2eproto::offsets,
    nullptr, file_level_enum_descriptors_sdk_2fsdk_2eproto,
    file_level_service_descriptors_sdk_2fsdk_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_sdk_2fsdk_2eproto_getter() {
  return &descriptor_table_sdk_2fsdk_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_sdk_2fsdk_2eproto(&descriptor_table_sdk_2fsdk_2eproto);
namespace kaikosdk {

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

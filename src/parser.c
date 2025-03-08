#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 300
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 199
#define ALIAS_COUNT 0
#define TOKEN_COUNT 125
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_end_LF = 1,
  anon_sym_BANG = 2,
  aux_sym_header_comment_token1 = 3,
  aux_sym_header_comment_token2 = 4,
  anon_sym_LF = 5,
  sym_comment = 6,
  anon_sym_no = 7,
  sym_command_name = 8,
  sym_command_args = 9,
  anon_sym_ipaccess_DASHlist = 10,
  anon_sym_standard = 11,
  anon_sym_extended = 12,
  anon_sym_hostname = 13,
  anon_sym_interface = 14,
  anon_sym_ip = 15,
  anon_sym_ipv6 = 16,
  anon_sym_ntp = 17,
  anon_sym_routerbgp = 18,
  anon_sym_route_DASHmap = 19,
  anon_sym_tacacs_DASHserver = 20,
  anon_sym_username = 21,
  anon_sym_vlan = 22,
  aux_sym_command_vlan_token1 = 23,
  anon_sym_vrf = 24,
  anon_sym_access_DASHlist = 25,
  anon_sym_address = 26,
  anon_sym_community_DASHlist = 27,
  anon_sym_dhcp = 28,
  anon_sym_domain = 29,
  anon_sym_extcommunity_DASHlist = 30,
  anon_sym_host = 31,
  anon_sym_http = 32,
  anon_sym_igmp = 33,
  anon_sym_local_DASHproxy_DASHarp = 34,
  anon_sym_mroute = 35,
  anon_sym_msdp = 36,
  anon_sym_multicast = 37,
  anon_sym_name_DASHserver = 38,
  anon_sym_ospf = 39,
  anon_sym_pim = 40,
  anon_sym_prefix_DASHlist = 41,
  anon_sym_proxy_DASHarp = 42,
  anon_sym_route = 43,
  anon_sym_router = 44,
  anon_sym_routing = 45,
  anon_sym_scp = 46,
  anon_sym_ssh = 47,
  anon_sym_tacacs = 48,
  anon_sym_tcp = 49,
  anon_sym_telnet = 50,
  anon_sym_tftp = 51,
  anon_sym_verify = 52,
  anon_sym_permit = 53,
  anon_sym_deny = 54,
  sym_name = 55,
  anon_sym_description = 56,
  anon_sym_shutdown = 57,
  anon_sym_noshutdown = 58,
  anon_sym_switchport = 59,
  anon_sym_forwarding = 60,
  anon_sym_neighbor = 61,
  anon_sym_network = 62,
  anon_sym_redistribute = 63,
  anon_sym_connected = 64,
  anon_sym_static = 65,
  anon_sym_match = 66,
  anon_sym_set = 67,
  anon_sym_as_DASHpath = 68,
  anon_sym_community = 69,
  anon_sym_extcommunity = 70,
  anon_sym_metric = 71,
  anon_sym_origin = 72,
  anon_sym_route_DASHtype = 73,
  anon_sym_source_DASHprotocol = 74,
  anon_sym_tag = 75,
  anon_sym_aggregator = 76,
  anon_sym_atomic_DASHaggregate = 77,
  anon_sym_comm_DASHlist = 78,
  anon_sym_dampening = 79,
  anon_sym_local_DASHpreference = 80,
  anon_sym_metric_DASHtype = 81,
  anon_sym_originator_DASHid = 82,
  anon_sym_weight = 83,
  sym_bgp_neighbor = 84,
  sym_ip_prefix = 85,
  anon_sym_aaa = 86,
  anon_sym_ipv6access_DASHlist = 87,
  anon_sym_class_DASHmap = 88,
  anon_sym_match_DASHany = 89,
  anon_sym_key = 90,
  anon_sym_chain = 91,
  anon_sym_management = 92,
  anon_sym_api = 93,
  anon_sym_console = 94,
  anon_sym_security = 95,
  anon_sym_managementapi = 96,
  anon_sym_http_DASHcommands = 97,
  anon_sym_monitor = 98,
  anon_sym_session = 99,
  anon_sym_replication = 100,
  anon_sym_authenticate = 101,
  anon_sym_authentication_DASHkey = 102,
  anon_sym_server = 103,
  anon_sym_trusted_DASHkey = 104,
  anon_sym_policy_DASHmap = 105,
  anon_sym_class = 106,
  anon_sym_routerospf = 107,
  anon_sym_service = 108,
  anon_sym_snmp_DASHserver = 109,
  anon_sym_contact = 110,
  anon_sym_enable = 111,
  anon_sym_group = 112,
  anon_sym_location = 113,
  anon_sym_source_DASHinterface = 114,
  anon_sym_trap_DASHsource = 115,
  anon_sym_user = 116,
  anon_sym_view = 117,
  anon_sym_spanning_DASHtree = 118,
  anon_sym_mode = 119,
  anon_sym_name = 120,
  anon_sym_definition = 121,
  anon_sym_address_DASHfamily = 122,
  anon_sym_ipv4 = 123,
  anon_sym_unicast = 124,
  sym_source_file = 125,
  sym_header_comment = 126,
  sym_statement = 127,
  sym_command = 128,
  sym_negated_command = 129,
  sym_command_access_list = 130,
  sym_command_hostname = 131,
  sym_command_interface = 132,
  sym_command_ip = 133,
  sym_command_ipv6 = 134,
  sym_command_ntp = 135,
  sym_command_router_bgp = 136,
  sym_command_route_map = 137,
  sym_command_tacacs_server = 138,
  sym_command_username = 139,
  sym_command_vlan = 140,
  sym_command_vrf = 141,
  sym_protocol_options = 142,
  sym_route_map_action = 143,
  sym_sequence = 144,
  sym_interface_section = 145,
  sym_interface_command = 146,
  sym_negated_interface_command = 147,
  sym_interface_command_description = 148,
  sym_interface_command_ip = 149,
  sym_interface_command_ipv6 = 150,
  sym_interface_command_shutdown = 151,
  sym_interface_command_switchport = 152,
  sym_interface_command_vrf = 153,
  sym_router_bgp_section = 154,
  sym_router_bgp_command = 155,
  sym_router_bgp_command_neighbor = 156,
  sym_router_bgp_command_network = 157,
  sym_router_bgp_command_redistribute = 158,
  sym_route_map_section = 159,
  sym_route_map_command = 160,
  sym_route_map_command_description = 161,
  sym_route_map_command_match = 162,
  sym_route_map_command_set = 163,
  sym_route_map_match_condition = 164,
  sym_route_map_set_action = 165,
  sym_section = 166,
  sym_bgp_asn = 167,
  sym_aaa_section = 168,
  sym_acl_section = 169,
  sym_class_map_section = 170,
  sym_ip_section = 171,
  sym_ipv6_section = 172,
  sym_key_section = 173,
  sym_management_section = 174,
  sym_management_api_section = 175,
  sym_management_api_vrf_section = 176,
  sym_monitor_section = 177,
  sym_ntp_section = 178,
  sym_policy_map_section = 179,
  sym_policy_map_class_section = 180,
  sym_router_ospf_section = 181,
  sym_service_section = 182,
  sym_snmp_server_section = 183,
  sym_spanning_tree_section = 184,
  sym_tacacs_server_section = 185,
  sym_vlan_section = 186,
  sym_vlan_name = 187,
  sym_vrf_section = 188,
  sym_vrf_address_family_section = 189,
  aux_sym_source_file_repeat1 = 190,
  aux_sym_header_comment_repeat1 = 191,
  aux_sym_interface_section_repeat1 = 192,
  aux_sym_router_bgp_section_repeat1 = 193,
  aux_sym_route_map_section_repeat1 = 194,
  aux_sym_aaa_section_repeat1 = 195,
  aux_sym_management_section_repeat1 = 196,
  aux_sym_policy_map_section_repeat1 = 197,
  aux_sym_vlan_section_repeat1 = 198,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_end_LF] = "end\n",
  [anon_sym_BANG] = "!",
  [aux_sym_header_comment_token1] = "header_comment_token1",
  [aux_sym_header_comment_token2] = "header_comment_token2",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_no] = "no",
  [sym_command_name] = "command_name",
  [sym_command_args] = "command_args",
  [anon_sym_ipaccess_DASHlist] = "ip access-list",
  [anon_sym_standard] = "standard",
  [anon_sym_extended] = "extended",
  [anon_sym_hostname] = "hostname",
  [anon_sym_interface] = "interface",
  [anon_sym_ip] = "ip",
  [anon_sym_ipv6] = "ipv6",
  [anon_sym_ntp] = "ntp",
  [anon_sym_routerbgp] = "router bgp",
  [anon_sym_route_DASHmap] = "route-map",
  [anon_sym_tacacs_DASHserver] = "tacacs-server",
  [anon_sym_username] = "username",
  [anon_sym_vlan] = "vlan",
  [aux_sym_command_vlan_token1] = "command_vlan_token1",
  [anon_sym_vrf] = "vrf",
  [anon_sym_access_DASHlist] = "access-list",
  [anon_sym_address] = "address",
  [anon_sym_community_DASHlist] = "community-list",
  [anon_sym_dhcp] = "dhcp",
  [anon_sym_domain] = "domain",
  [anon_sym_extcommunity_DASHlist] = "extcommunity-list",
  [anon_sym_host] = "host",
  [anon_sym_http] = "http",
  [anon_sym_igmp] = "igmp",
  [anon_sym_local_DASHproxy_DASHarp] = "local-proxy-arp",
  [anon_sym_mroute] = "mroute",
  [anon_sym_msdp] = "msdp",
  [anon_sym_multicast] = "multicast",
  [anon_sym_name_DASHserver] = "name-server",
  [anon_sym_ospf] = "ospf",
  [anon_sym_pim] = "pim",
  [anon_sym_prefix_DASHlist] = "prefix-list",
  [anon_sym_proxy_DASHarp] = "proxy-arp",
  [anon_sym_route] = "route",
  [anon_sym_router] = "router",
  [anon_sym_routing] = "routing",
  [anon_sym_scp] = "scp",
  [anon_sym_ssh] = "ssh",
  [anon_sym_tacacs] = "tacacs",
  [anon_sym_tcp] = "tcp",
  [anon_sym_telnet] = "telnet",
  [anon_sym_tftp] = "tftp",
  [anon_sym_verify] = "verify",
  [anon_sym_permit] = "permit",
  [anon_sym_deny] = "deny",
  [sym_name] = "name",
  [anon_sym_description] = "description",
  [anon_sym_shutdown] = "shutdown",
  [anon_sym_noshutdown] = "no shutdown",
  [anon_sym_switchport] = "switchport",
  [anon_sym_forwarding] = "forwarding",
  [anon_sym_neighbor] = "neighbor",
  [anon_sym_network] = "network",
  [anon_sym_redistribute] = "redistribute",
  [anon_sym_connected] = "connected",
  [anon_sym_static] = "static",
  [anon_sym_match] = "match",
  [anon_sym_set] = "set",
  [anon_sym_as_DASHpath] = "as-path",
  [anon_sym_community] = "community",
  [anon_sym_extcommunity] = "extcommunity",
  [anon_sym_metric] = "metric",
  [anon_sym_origin] = "origin",
  [anon_sym_route_DASHtype] = "route-type",
  [anon_sym_source_DASHprotocol] = "source-protocol",
  [anon_sym_tag] = "tag",
  [anon_sym_aggregator] = "aggregator",
  [anon_sym_atomic_DASHaggregate] = "atomic-aggregate",
  [anon_sym_comm_DASHlist] = "comm-list",
  [anon_sym_dampening] = "dampening",
  [anon_sym_local_DASHpreference] = "local-preference",
  [anon_sym_metric_DASHtype] = "metric-type",
  [anon_sym_originator_DASHid] = "originator-id",
  [anon_sym_weight] = "weight",
  [sym_bgp_neighbor] = "bgp_neighbor",
  [sym_ip_prefix] = "ip_prefix",
  [anon_sym_aaa] = "aaa",
  [anon_sym_ipv6access_DASHlist] = "ipv6 access-list",
  [anon_sym_class_DASHmap] = "class-map",
  [anon_sym_match_DASHany] = "match-any",
  [anon_sym_key] = "key",
  [anon_sym_chain] = "chain",
  [anon_sym_management] = "management",
  [anon_sym_api] = "api",
  [anon_sym_console] = "console",
  [anon_sym_security] = "security",
  [anon_sym_managementapi] = "management api",
  [anon_sym_http_DASHcommands] = "http-commands",
  [anon_sym_monitor] = "monitor",
  [anon_sym_session] = "session",
  [anon_sym_replication] = "replication",
  [anon_sym_authenticate] = "authenticate",
  [anon_sym_authentication_DASHkey] = "authentication-key",
  [anon_sym_server] = "server",
  [anon_sym_trusted_DASHkey] = "trusted-key",
  [anon_sym_policy_DASHmap] = "policy-map",
  [anon_sym_class] = "class",
  [anon_sym_routerospf] = "router ospf",
  [anon_sym_service] = "service",
  [anon_sym_snmp_DASHserver] = "snmp-server",
  [anon_sym_contact] = "contact",
  [anon_sym_enable] = "enable",
  [anon_sym_group] = "group",
  [anon_sym_location] = "location",
  [anon_sym_source_DASHinterface] = "source-interface",
  [anon_sym_trap_DASHsource] = "trap-source",
  [anon_sym_user] = "user",
  [anon_sym_view] = "view",
  [anon_sym_spanning_DASHtree] = "spanning-tree",
  [anon_sym_mode] = "mode",
  [anon_sym_name] = "name",
  [anon_sym_definition] = "definition",
  [anon_sym_address_DASHfamily] = "address-family",
  [anon_sym_ipv4] = "ipv4",
  [anon_sym_unicast] = "unicast",
  [sym_source_file] = "source_file",
  [sym_header_comment] = "header_comment",
  [sym_statement] = "statement",
  [sym_command] = "command",
  [sym_negated_command] = "negated_command",
  [sym_command_access_list] = "command_access_list",
  [sym_command_hostname] = "command_hostname",
  [sym_command_interface] = "command_interface",
  [sym_command_ip] = "command_ip",
  [sym_command_ipv6] = "command_ipv6",
  [sym_command_ntp] = "command_ntp",
  [sym_command_router_bgp] = "command_router_bgp",
  [sym_command_route_map] = "command_route_map",
  [sym_command_tacacs_server] = "command_tacacs_server",
  [sym_command_username] = "command_username",
  [sym_command_vlan] = "command_vlan",
  [sym_command_vrf] = "command_vrf",
  [sym_protocol_options] = "protocol_options",
  [sym_route_map_action] = "route_map_action",
  [sym_sequence] = "sequence",
  [sym_interface_section] = "interface_section",
  [sym_interface_command] = "interface_command",
  [sym_negated_interface_command] = "negated_interface_command",
  [sym_interface_command_description] = "interface_command_description",
  [sym_interface_command_ip] = "interface_command_ip",
  [sym_interface_command_ipv6] = "interface_command_ipv6",
  [sym_interface_command_shutdown] = "interface_command_shutdown",
  [sym_interface_command_switchport] = "interface_command_switchport",
  [sym_interface_command_vrf] = "interface_command_vrf",
  [sym_router_bgp_section] = "router_bgp_section",
  [sym_router_bgp_command] = "router_bgp_command",
  [sym_router_bgp_command_neighbor] = "router_bgp_command_neighbor",
  [sym_router_bgp_command_network] = "router_bgp_command_network",
  [sym_router_bgp_command_redistribute] = "router_bgp_command_redistribute",
  [sym_route_map_section] = "route_map_section",
  [sym_route_map_command] = "route_map_command",
  [sym_route_map_command_description] = "route_map_command_description",
  [sym_route_map_command_match] = "route_map_command_match",
  [sym_route_map_command_set] = "route_map_command_set",
  [sym_route_map_match_condition] = "route_map_match_condition",
  [sym_route_map_set_action] = "route_map_set_action",
  [sym_section] = "section",
  [sym_bgp_asn] = "bgp_asn",
  [sym_aaa_section] = "aaa_section",
  [sym_acl_section] = "acl_section",
  [sym_class_map_section] = "class_map_section",
  [sym_ip_section] = "ip_section",
  [sym_ipv6_section] = "ipv6_section",
  [sym_key_section] = "key_section",
  [sym_management_section] = "management_section",
  [sym_management_api_section] = "management_api_section",
  [sym_management_api_vrf_section] = "management_api_vrf_section",
  [sym_monitor_section] = "monitor_section",
  [sym_ntp_section] = "ntp_section",
  [sym_policy_map_section] = "policy_map_section",
  [sym_policy_map_class_section] = "policy_map_class_section",
  [sym_router_ospf_section] = "router_ospf_section",
  [sym_service_section] = "service_section",
  [sym_snmp_server_section] = "snmp_server_section",
  [sym_spanning_tree_section] = "spanning_tree_section",
  [sym_tacacs_server_section] = "tacacs_server_section",
  [sym_vlan_section] = "vlan_section",
  [sym_vlan_name] = "vlan_name",
  [sym_vrf_section] = "vrf_section",
  [sym_vrf_address_family_section] = "vrf_address_family_section",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_header_comment_repeat1] = "header_comment_repeat1",
  [aux_sym_interface_section_repeat1] = "interface_section_repeat1",
  [aux_sym_router_bgp_section_repeat1] = "router_bgp_section_repeat1",
  [aux_sym_route_map_section_repeat1] = "route_map_section_repeat1",
  [aux_sym_aaa_section_repeat1] = "aaa_section_repeat1",
  [aux_sym_management_section_repeat1] = "management_section_repeat1",
  [aux_sym_policy_map_section_repeat1] = "policy_map_section_repeat1",
  [aux_sym_vlan_section_repeat1] = "vlan_section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_end_LF] = anon_sym_end_LF,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_header_comment_token1] = aux_sym_header_comment_token1,
  [aux_sym_header_comment_token2] = aux_sym_header_comment_token2,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_no] = anon_sym_no,
  [sym_command_name] = sym_command_name,
  [sym_command_args] = sym_command_args,
  [anon_sym_ipaccess_DASHlist] = anon_sym_ipaccess_DASHlist,
  [anon_sym_standard] = anon_sym_standard,
  [anon_sym_extended] = anon_sym_extended,
  [anon_sym_hostname] = anon_sym_hostname,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_ip] = anon_sym_ip,
  [anon_sym_ipv6] = anon_sym_ipv6,
  [anon_sym_ntp] = anon_sym_ntp,
  [anon_sym_routerbgp] = anon_sym_routerbgp,
  [anon_sym_route_DASHmap] = anon_sym_route_DASHmap,
  [anon_sym_tacacs_DASHserver] = anon_sym_tacacs_DASHserver,
  [anon_sym_username] = anon_sym_username,
  [anon_sym_vlan] = anon_sym_vlan,
  [aux_sym_command_vlan_token1] = aux_sym_command_vlan_token1,
  [anon_sym_vrf] = anon_sym_vrf,
  [anon_sym_access_DASHlist] = anon_sym_access_DASHlist,
  [anon_sym_address] = anon_sym_address,
  [anon_sym_community_DASHlist] = anon_sym_community_DASHlist,
  [anon_sym_dhcp] = anon_sym_dhcp,
  [anon_sym_domain] = anon_sym_domain,
  [anon_sym_extcommunity_DASHlist] = anon_sym_extcommunity_DASHlist,
  [anon_sym_host] = anon_sym_host,
  [anon_sym_http] = anon_sym_http,
  [anon_sym_igmp] = anon_sym_igmp,
  [anon_sym_local_DASHproxy_DASHarp] = anon_sym_local_DASHproxy_DASHarp,
  [anon_sym_mroute] = anon_sym_mroute,
  [anon_sym_msdp] = anon_sym_msdp,
  [anon_sym_multicast] = anon_sym_multicast,
  [anon_sym_name_DASHserver] = anon_sym_name_DASHserver,
  [anon_sym_ospf] = anon_sym_ospf,
  [anon_sym_pim] = anon_sym_pim,
  [anon_sym_prefix_DASHlist] = anon_sym_prefix_DASHlist,
  [anon_sym_proxy_DASHarp] = anon_sym_proxy_DASHarp,
  [anon_sym_route] = anon_sym_route,
  [anon_sym_router] = anon_sym_router,
  [anon_sym_routing] = anon_sym_routing,
  [anon_sym_scp] = anon_sym_scp,
  [anon_sym_ssh] = anon_sym_ssh,
  [anon_sym_tacacs] = anon_sym_tacacs,
  [anon_sym_tcp] = anon_sym_tcp,
  [anon_sym_telnet] = anon_sym_telnet,
  [anon_sym_tftp] = anon_sym_tftp,
  [anon_sym_verify] = anon_sym_verify,
  [anon_sym_permit] = anon_sym_permit,
  [anon_sym_deny] = anon_sym_deny,
  [sym_name] = sym_name,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_shutdown] = anon_sym_shutdown,
  [anon_sym_noshutdown] = anon_sym_noshutdown,
  [anon_sym_switchport] = anon_sym_switchport,
  [anon_sym_forwarding] = anon_sym_forwarding,
  [anon_sym_neighbor] = anon_sym_neighbor,
  [anon_sym_network] = anon_sym_network,
  [anon_sym_redistribute] = anon_sym_redistribute,
  [anon_sym_connected] = anon_sym_connected,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_as_DASHpath] = anon_sym_as_DASHpath,
  [anon_sym_community] = anon_sym_community,
  [anon_sym_extcommunity] = anon_sym_extcommunity,
  [anon_sym_metric] = anon_sym_metric,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_route_DASHtype] = anon_sym_route_DASHtype,
  [anon_sym_source_DASHprotocol] = anon_sym_source_DASHprotocol,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_aggregator] = anon_sym_aggregator,
  [anon_sym_atomic_DASHaggregate] = anon_sym_atomic_DASHaggregate,
  [anon_sym_comm_DASHlist] = anon_sym_comm_DASHlist,
  [anon_sym_dampening] = anon_sym_dampening,
  [anon_sym_local_DASHpreference] = anon_sym_local_DASHpreference,
  [anon_sym_metric_DASHtype] = anon_sym_metric_DASHtype,
  [anon_sym_originator_DASHid] = anon_sym_originator_DASHid,
  [anon_sym_weight] = anon_sym_weight,
  [sym_bgp_neighbor] = sym_bgp_neighbor,
  [sym_ip_prefix] = sym_ip_prefix,
  [anon_sym_aaa] = anon_sym_aaa,
  [anon_sym_ipv6access_DASHlist] = anon_sym_ipv6access_DASHlist,
  [anon_sym_class_DASHmap] = anon_sym_class_DASHmap,
  [anon_sym_match_DASHany] = anon_sym_match_DASHany,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_chain] = anon_sym_chain,
  [anon_sym_management] = anon_sym_management,
  [anon_sym_api] = anon_sym_api,
  [anon_sym_console] = anon_sym_console,
  [anon_sym_security] = anon_sym_security,
  [anon_sym_managementapi] = anon_sym_managementapi,
  [anon_sym_http_DASHcommands] = anon_sym_http_DASHcommands,
  [anon_sym_monitor] = anon_sym_monitor,
  [anon_sym_session] = anon_sym_session,
  [anon_sym_replication] = anon_sym_replication,
  [anon_sym_authenticate] = anon_sym_authenticate,
  [anon_sym_authentication_DASHkey] = anon_sym_authentication_DASHkey,
  [anon_sym_server] = anon_sym_server,
  [anon_sym_trusted_DASHkey] = anon_sym_trusted_DASHkey,
  [anon_sym_policy_DASHmap] = anon_sym_policy_DASHmap,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_routerospf] = anon_sym_routerospf,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_snmp_DASHserver] = anon_sym_snmp_DASHserver,
  [anon_sym_contact] = anon_sym_contact,
  [anon_sym_enable] = anon_sym_enable,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_location] = anon_sym_location,
  [anon_sym_source_DASHinterface] = anon_sym_source_DASHinterface,
  [anon_sym_trap_DASHsource] = anon_sym_trap_DASHsource,
  [anon_sym_user] = anon_sym_user,
  [anon_sym_view] = anon_sym_view,
  [anon_sym_spanning_DASHtree] = anon_sym_spanning_DASHtree,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_definition] = anon_sym_definition,
  [anon_sym_address_DASHfamily] = anon_sym_address_DASHfamily,
  [anon_sym_ipv4] = anon_sym_ipv4,
  [anon_sym_unicast] = anon_sym_unicast,
  [sym_source_file] = sym_source_file,
  [sym_header_comment] = sym_header_comment,
  [sym_statement] = sym_statement,
  [sym_command] = sym_command,
  [sym_negated_command] = sym_negated_command,
  [sym_command_access_list] = sym_command_access_list,
  [sym_command_hostname] = sym_command_hostname,
  [sym_command_interface] = sym_command_interface,
  [sym_command_ip] = sym_command_ip,
  [sym_command_ipv6] = sym_command_ipv6,
  [sym_command_ntp] = sym_command_ntp,
  [sym_command_router_bgp] = sym_command_router_bgp,
  [sym_command_route_map] = sym_command_route_map,
  [sym_command_tacacs_server] = sym_command_tacacs_server,
  [sym_command_username] = sym_command_username,
  [sym_command_vlan] = sym_command_vlan,
  [sym_command_vrf] = sym_command_vrf,
  [sym_protocol_options] = sym_protocol_options,
  [sym_route_map_action] = sym_route_map_action,
  [sym_sequence] = sym_sequence,
  [sym_interface_section] = sym_interface_section,
  [sym_interface_command] = sym_interface_command,
  [sym_negated_interface_command] = sym_negated_interface_command,
  [sym_interface_command_description] = sym_interface_command_description,
  [sym_interface_command_ip] = sym_interface_command_ip,
  [sym_interface_command_ipv6] = sym_interface_command_ipv6,
  [sym_interface_command_shutdown] = sym_interface_command_shutdown,
  [sym_interface_command_switchport] = sym_interface_command_switchport,
  [sym_interface_command_vrf] = sym_interface_command_vrf,
  [sym_router_bgp_section] = sym_router_bgp_section,
  [sym_router_bgp_command] = sym_router_bgp_command,
  [sym_router_bgp_command_neighbor] = sym_router_bgp_command_neighbor,
  [sym_router_bgp_command_network] = sym_router_bgp_command_network,
  [sym_router_bgp_command_redistribute] = sym_router_bgp_command_redistribute,
  [sym_route_map_section] = sym_route_map_section,
  [sym_route_map_command] = sym_route_map_command,
  [sym_route_map_command_description] = sym_route_map_command_description,
  [sym_route_map_command_match] = sym_route_map_command_match,
  [sym_route_map_command_set] = sym_route_map_command_set,
  [sym_route_map_match_condition] = sym_route_map_match_condition,
  [sym_route_map_set_action] = sym_route_map_set_action,
  [sym_section] = sym_section,
  [sym_bgp_asn] = sym_bgp_asn,
  [sym_aaa_section] = sym_aaa_section,
  [sym_acl_section] = sym_acl_section,
  [sym_class_map_section] = sym_class_map_section,
  [sym_ip_section] = sym_ip_section,
  [sym_ipv6_section] = sym_ipv6_section,
  [sym_key_section] = sym_key_section,
  [sym_management_section] = sym_management_section,
  [sym_management_api_section] = sym_management_api_section,
  [sym_management_api_vrf_section] = sym_management_api_vrf_section,
  [sym_monitor_section] = sym_monitor_section,
  [sym_ntp_section] = sym_ntp_section,
  [sym_policy_map_section] = sym_policy_map_section,
  [sym_policy_map_class_section] = sym_policy_map_class_section,
  [sym_router_ospf_section] = sym_router_ospf_section,
  [sym_service_section] = sym_service_section,
  [sym_snmp_server_section] = sym_snmp_server_section,
  [sym_spanning_tree_section] = sym_spanning_tree_section,
  [sym_tacacs_server_section] = sym_tacacs_server_section,
  [sym_vlan_section] = sym_vlan_section,
  [sym_vlan_name] = sym_vlan_name,
  [sym_vrf_section] = sym_vrf_section,
  [sym_vrf_address_family_section] = sym_vrf_address_family_section,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_header_comment_repeat1] = aux_sym_header_comment_repeat1,
  [aux_sym_interface_section_repeat1] = aux_sym_interface_section_repeat1,
  [aux_sym_router_bgp_section_repeat1] = aux_sym_router_bgp_section_repeat1,
  [aux_sym_route_map_section_repeat1] = aux_sym_route_map_section_repeat1,
  [aux_sym_aaa_section_repeat1] = aux_sym_aaa_section_repeat1,
  [aux_sym_management_section_repeat1] = aux_sym_management_section_repeat1,
  [aux_sym_policy_map_section_repeat1] = aux_sym_policy_map_section_repeat1,
  [aux_sym_vlan_section_repeat1] = aux_sym_vlan_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_end_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_header_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_command_args] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ipaccess_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_standard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extended] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hostname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ntp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_routerbgp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route_DASHmap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tacacs_DASHserver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_username] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vlan] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_command_vlan_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_vrf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_access_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_community_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dhcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_domain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extcommunity_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_host] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_igmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local_DASHproxy_DASHarp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mroute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msdp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multicast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name_DASHserver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ospf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefix_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proxy_DASHarp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_router] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_routing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tacacs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_telnet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tftp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_permit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deny] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shutdown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noshutdown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switchport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forwarding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neighbor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_network] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_redistribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as_DASHpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_community] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extcommunity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_metric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_origin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route_DASHtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_DASHprotocol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aggregator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atomic_DASHaggregate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comm_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dampening] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local_DASHpreference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_metric_DASHtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_originator_DASHid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weight] = {
    .visible = true,
    .named = false,
  },
  [sym_bgp_neighbor] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_prefix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_aaa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv6access_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class_DASHmap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match_DASHany] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_management] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_api] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_console] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_security] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_managementapi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DASHcommands] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_monitor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_session] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replication] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_authenticate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_authentication_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_server] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trusted_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_policy_DASHmap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_routerospf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snmp_DASHserver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contact] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_location] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_DASHinterface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trap_DASHsource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_user] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_view] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spanning_DASHtree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_definition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_address_DASHfamily] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unicast] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_negated_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_access_list] = {
    .visible = true,
    .named = true,
  },
  [sym_command_hostname] = {
    .visible = true,
    .named = true,
  },
  [sym_command_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_command_ip] = {
    .visible = true,
    .named = true,
  },
  [sym_command_ipv6] = {
    .visible = true,
    .named = true,
  },
  [sym_command_ntp] = {
    .visible = true,
    .named = true,
  },
  [sym_command_router_bgp] = {
    .visible = true,
    .named = true,
  },
  [sym_command_route_map] = {
    .visible = true,
    .named = true,
  },
  [sym_command_tacacs_server] = {
    .visible = true,
    .named = true,
  },
  [sym_command_username] = {
    .visible = true,
    .named = true,
  },
  [sym_command_vlan] = {
    .visible = true,
    .named = true,
  },
  [sym_command_vrf] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_options] = {
    .visible = true,
    .named = true,
  },
  [sym_route_map_action] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_section] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_command] = {
    .visible = true,
    .named = true,
  },
  [sym_negated_interface_command] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_command_description] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_command_ip] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_command_ipv6] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_command_shutdown] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_command_switchport] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_command_vrf] = {
    .visible = true,
    .named = true,
  },
  [sym_router_bgp_section] = {
    .visible = true,
    .named = true,
  },
  [sym_router_bgp_command] = {
    .visible = true,
    .named = true,
  },
  [sym_router_bgp_command_neighbor] = {
    .visible = true,
    .named = true,
  },
  [sym_router_bgp_command_network] = {
    .visible = true,
    .named = true,
  },
  [sym_router_bgp_command_redistribute] = {
    .visible = true,
    .named = true,
  },
  [sym_route_map_section] = {
    .visible = true,
    .named = true,
  },
  [sym_route_map_command] = {
    .visible = true,
    .named = true,
  },
  [sym_route_map_command_description] = {
    .visible = true,
    .named = true,
  },
  [sym_route_map_command_match] = {
    .visible = true,
    .named = true,
  },
  [sym_route_map_command_set] = {
    .visible = true,
    .named = true,
  },
  [sym_route_map_match_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_route_map_set_action] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_bgp_asn] = {
    .visible = true,
    .named = true,
  },
  [sym_aaa_section] = {
    .visible = true,
    .named = true,
  },
  [sym_acl_section] = {
    .visible = true,
    .named = true,
  },
  [sym_class_map_section] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_section] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv6_section] = {
    .visible = true,
    .named = true,
  },
  [sym_key_section] = {
    .visible = true,
    .named = true,
  },
  [sym_management_section] = {
    .visible = true,
    .named = true,
  },
  [sym_management_api_section] = {
    .visible = true,
    .named = true,
  },
  [sym_management_api_vrf_section] = {
    .visible = true,
    .named = true,
  },
  [sym_monitor_section] = {
    .visible = true,
    .named = true,
  },
  [sym_ntp_section] = {
    .visible = true,
    .named = true,
  },
  [sym_policy_map_section] = {
    .visible = true,
    .named = true,
  },
  [sym_policy_map_class_section] = {
    .visible = true,
    .named = true,
  },
  [sym_router_ospf_section] = {
    .visible = true,
    .named = true,
  },
  [sym_service_section] = {
    .visible = true,
    .named = true,
  },
  [sym_snmp_server_section] = {
    .visible = true,
    .named = true,
  },
  [sym_spanning_tree_section] = {
    .visible = true,
    .named = true,
  },
  [sym_tacacs_server_section] = {
    .visible = true,
    .named = true,
  },
  [sym_vlan_section] = {
    .visible = true,
    .named = true,
  },
  [sym_vlan_name] = {
    .visible = true,
    .named = true,
  },
  [sym_vrf_section] = {
    .visible = true,
    .named = true,
  },
  [sym_vrf_address_family_section] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_router_bgp_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_route_map_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aaa_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_management_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_policy_map_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vlan_section_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_id = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_id] = "id",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_id, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 64,
  [70] = 64,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 64,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 64,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(703);
      ADVANCE_MAP(
        '!', 705,
        '#', 697,
        'a', 68,
        'c', 277,
        'd', 70,
        'e', 390,
        'f', 436,
        'g', 517,
        'h', 434,
        'i', 269,
        'k', 181,
        'l', 438,
        'm', 71,
        'n', 80,
        'o', 515,
        'p', 200,
        'r', 182,
        's', 126,
        't', 72,
        'u', 405,
        'v', 203,
        'w', 206,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1212);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(704);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 712,
        '!', 1,
        '#', 1175,
        'a', 762,
        'c', 897,
        'd', 834,
        'e', 924,
        'h', 961,
        'i', 925,
        'k', 818,
        'm', 755,
        'n', 952,
        'p', 960,
        'r', 953,
        's', 819,
        't', 749,
        'u', 1021,
        'v', 899,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0) ADVANCE(1178);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(1175);
      if (lookahead == 'a') ADVANCE(1168);
      if (lookahead == 's') ADVANCE(1114);
      if (lookahead == 't') ADVANCE(1147);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1088);
      if (lookahead != 0) ADVANCE(1178);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1089);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0) ADVANCE(1178);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(1175);
      if (lookahead == 'h') ADVANCE(1142);
      if (lookahead == 'k') ADVANCE(1117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1090);
      if (lookahead != 0) ADVANCE(1178);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(1175);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1176);
      if (lookahead != 0) ADVANCE(1178);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(1175);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1092);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0) ADVANCE(1178);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(713);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == 'h') ADVANCE(631);
      if (lookahead == 'u') ADVANCE(404);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 714,
        '!', 1,
        '#', 1175,
        'a', 762,
        'c', 897,
        'e', 924,
        'h', 961,
        'i', 925,
        'k', 818,
        'm', 755,
        'n', 781,
        'p', 960,
        'r', 953,
        's', 820,
        't', 749,
        'u', 1021,
        'v', 899,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0) ADVANCE(1178);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 715,
        '!', 1,
        '#', 1175,
        'a', 762,
        'c', 897,
        'e', 924,
        'h', 961,
        'i', 925,
        'k', 818,
        'm', 755,
        'n', 957,
        'p', 960,
        'r', 953,
        's', 820,
        't', 749,
        'u', 1021,
        'v', 899,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0) ADVANCE(1178);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(716);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(1175);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1086);
      if (lookahead != 0) ADVANCE(1178);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 717,
        '!', 1,
        '#', 1175,
        'a', 762,
        'c', 897,
        'd', 834,
        'e', 924,
        'h', 961,
        'i', 925,
        'k', 818,
        'm', 752,
        'n', 957,
        'p', 960,
        'r', 953,
        's', 827,
        't', 749,
        'u', 1021,
        'v', 899,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0) ADVANCE(1178);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(561);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '!', 705,
        '#', 697,
        'a', 757,
        'c', 896,
        'e', 919,
        'h', 959,
        'i', 920,
        'k', 809,
        'm', 754,
        'n', 950,
        'p', 958,
        'r', 951,
        's', 811,
        't', 746,
        'u', 1015,
        'v', 898,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '!', 1,
        '#', 698,
        'a', 757,
        'c', 896,
        'd', 840,
        'e', 919,
        'h', 959,
        'i', 920,
        'k', 809,
        'm', 754,
        'n', 955,
        'p', 958,
        'r', 951,
        's', 810,
        't', 746,
        'u', 1015,
        'v', 898,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '!', 1,
        '#', 698,
        'a', 757,
        'c', 896,
        'd', 840,
        'e', 919,
        'h', 959,
        'i', 920,
        'k', 809,
        'm', 753,
        'n', 950,
        'p', 958,
        'r', 951,
        's', 828,
        't', 746,
        'u', 1015,
        'v', 898,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '!', 1,
        '#', 698,
        'a', 757,
        'c', 896,
        'e', 919,
        'h', 959,
        'i', 920,
        'k', 809,
        'm', 754,
        'n', 829,
        'p', 958,
        'r', 836,
        's', 811,
        't', 746,
        'u', 1015,
        'v', 898,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '!', 1,
        '#', 698,
        'a', 757,
        'c', 896,
        'e', 919,
        'h', 959,
        'i', 920,
        'k', 809,
        'm', 754,
        'n', 782,
        'p', 958,
        'r', 951,
        's', 811,
        't', 746,
        'u', 1015,
        'v', 898,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '!', 1,
        '#', 698,
        'a', 757,
        'c', 896,
        'e', 919,
        'h', 959,
        'i', 920,
        'k', 809,
        'm', 784,
        'n', 950,
        'p', 958,
        'r', 951,
        's', 811,
        't', 746,
        'u', 1015,
        'v', 898,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '!', 1,
        '#', 698,
        'a', 757,
        'c', 900,
        'e', 919,
        'h', 959,
        'i', 920,
        'k', 809,
        'm', 754,
        'n', 950,
        'p', 958,
        'r', 951,
        's', 811,
        't', 746,
        'u', 1015,
        'v', 898,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '!', 1,
        '#', 698,
        'a', 122,
        'c', 469,
        'd', 220,
        'e', 674,
        'h', 434,
        'i', 270,
        'l', 462,
        'm', 518,
        'n', 106,
        'o', 556,
        'p', 290,
        'r', 435,
        's', 127,
        't', 111,
        'v', 204,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '!', 1,
        '#', 698,
        'a', 756,
        'c', 896,
        'e', 919,
        'h', 959,
        'i', 920,
        'k', 809,
        'm', 754,
        'n', 950,
        'p', 958,
        'r', 951,
        's', 811,
        't', 746,
        'u', 1015,
        'v', 898,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '!', 1,
        '#', 698,
        'a', 255,
        'c', 437,
        'd', 69,
        'e', 421,
        'g', 517,
        'h', 433,
        'i', 487,
        'l', 466,
        'm', 207,
        'o', 514,
        's', 467,
        't', 90,
        'u', 557,
        'v', 289,
        'w', 206,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '!', 1,
        '#', 698,
        'a', 550,
        'c', 471,
        'e', 677,
        'i', 406,
        'm', 240,
        'o', 545,
        'r', 463,
        's', 468,
        't', 89,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '!', 1,
        '#', 698,
        'h', 959,
        'i', 921,
        'n', 1035,
        'r', 970,
        't', 746,
        'u', 1015,
        'v', 898,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(490);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1303);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == 'm') ADVANCE(1249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == 'v') ADVANCE(985);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(698);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(315);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(341);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(494);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(579);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(564);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(495);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(501);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(301);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(634);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(503);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(314);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(373);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(105);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(354);
      if (lookahead == 'u') ADVANCE(424);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(354);
      if (lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(342);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(641);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(499);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(581);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(355);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(356);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(357);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(358);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(359);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(360);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '4') ADVANCE(1374);
      if (lookahead == '6') ADVANCE(1193);
      END_STATE();
    case 65:
      if (lookahead == '6') ADVANCE(1195);
      END_STATE();
    case 66:
      if (lookahead == '6') ADVANCE(1193);
      END_STATE();
    case 67:
      if (lookahead == '?') ADVANCE(718);
      END_STATE();
    case 68:
      ADVANCE_MAP(
        'a', 73,
        'c', 130,
        'd', 169,
        'g', 271,
        'p', 283,
        's', 34,
        't', 441,
        'u', 604,
      );
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(475);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'f') ADVANCE(615);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(1305);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'o') ADVANCE(720);
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(520);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(530);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(606);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(611);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'u') ADVANCE(578);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(475);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'f') ADVANCE(615);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(638);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(348);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(266);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(449);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(653);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(1289);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(1276);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(1288);
      END_STATE();
    case 126:
      ADVANCE_MAP(
        'c', 474,
        'e', 151,
        'h', 650,
        'n', 370,
        'o', 647,
        'p', 76,
        's', 274,
        't', 79,
        'w', 299,
      );
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(474);
      if (lookahead == 'h') ADVANCE(650);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 'w') ADVANCE(299);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(691);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(552);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'g') ADVANCE(1294);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(592);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(665);
      if (lookahead == 's') ADVANCE(567);
      if (lookahead == 't') ADVANCE(1280);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(460);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(529);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(622);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(470);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(1182);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(1181);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(1275);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(1301);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(547);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(479);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(555);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(459);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(548);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(648);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(1366);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(1367);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(1236);
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(1356);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(1228);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(1325);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(1349);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(1185);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(1300);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(1360);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(1334);
      if (lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(1273);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(1363);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(1296);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(1299);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(1359);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(1292);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(675);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(558);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 245:
      if (lookahead == 'f') ADVANCE(1213);
      END_STATE();
    case 246:
      if (lookahead == 'f') ADVANCE(1232);
      END_STATE();
    case 247:
      if (lookahead == 'f') ADVANCE(1347);
      END_STATE();
    case 248:
      if (lookahead == 'f') ADVANCE(680);
      END_STATE();
    case 249:
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 250:
      if (lookahead == 'f') ADVANCE(286);
      END_STATE();
    case 251:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 252:
      if (lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 253:
      if (lookahead == 'f') ADVANCE(237);
      END_STATE();
    case 254:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 255:
      if (lookahead == 'g') ADVANCE(271);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 256:
      if (lookahead == 'g') ADVANCE(1294);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(1238);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(1298);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(1268);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(300);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 266:
      if (lookahead == 'g') ADVANCE(486);
      END_STATE();
    case 267:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 268:
      if (lookahead == 'g') ADVANCE(316);
      END_STATE();
    case 269:
      if (lookahead == 'g') ADVANCE(367);
      if (lookahead == 'n') ADVANCE(628);
      if (lookahead == 'p') ADVANCE(1189);
      END_STATE();
    case 270:
      if (lookahead == 'g') ADVANCE(367);
      if (lookahead == 'p') ADVANCE(1192);
      END_STATE();
    case 271:
      if (lookahead == 'g') ADVANCE(522);
      END_STATE();
    case 272:
      if (lookahead == 'g') ADVANCE(540);
      END_STATE();
    case 273:
      if (lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 274:
      if (lookahead == 'h') ADVANCE(1240);
      END_STATE();
    case 275:
      if (lookahead == 'h') ADVANCE(1277);
      END_STATE();
    case 276:
      if (lookahead == 'h') ADVANCE(1283);
      END_STATE();
    case 277:
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 278:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 279:
      if (lookahead == 'h') ADVANCE(215);
      END_STATE();
    case 280:
      if (lookahead == 'h') ADVANCE(591);
      END_STATE();
    case 281:
      if (lookahead == 'h') ADVANCE(502);
      END_STATE();
    case 282:
      if (lookahead == 'h') ADVANCE(656);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(1324);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(1327);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(589);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 310:
      if (lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 311:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 312:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 313:
      if (lookahead == 'i') ADVANCE(608);
      END_STATE();
    case 314:
      if (lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(448);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(580);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(454);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(455);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(572);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(575);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(576);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(645);
      END_STATE();
    case 340:
      if (lookahead == 'k') ADVANCE(1271);
      END_STATE();
    case 341:
      if (lookahead == 'k') ADVANCE(217);
      END_STATE();
    case 342:
      if (lookahead == 'k') ADVANCE(221);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(1293);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 347:
      if (lookahead == 'l') ADVANCE(686);
      END_STATE();
    case 348:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 349:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 350:
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 352:
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 353:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 354:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 355:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 356:
      if (lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 357:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 358:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 359:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 360:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 361:
      if (lookahead == 'm') ADVANCE(1233);
      END_STATE();
    case 362:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 363:
      if (lookahead == 'm') ADVANCE(657);
      END_STATE();
    case 364:
      if (lookahead == 'm') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 365:
      if (lookahead == 'm') ADVANCE(493);
      END_STATE();
    case 366:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 367:
      if (lookahead == 'm') ADVANCE(478);
      END_STATE();
    case 368:
      if (lookahead == 'm') ADVANCE(363);
      END_STATE();
    case 369:
      if (lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 370:
      if (lookahead == 'm') ADVANCE(488);
      END_STATE();
    case 371:
      if (lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 372:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 373:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 374:
      if (lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 375:
      if (lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 376:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 377:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 378:
      if (lookahead == 'm') ADVANCE(305);
      END_STATE();
    case 379:
      if (lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 380:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 381:
      if (lookahead == 'm') ADVANCE(659);
      END_STATE();
    case 382:
      if (lookahead == 'm') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 383:
      if (lookahead == 'm') ADVANCE(381);
      END_STATE();
    case 384:
      if (lookahead == 'm') ADVANCE(662);
      END_STATE();
    case 385:
      if (lookahead == 'm') ADVANCE(384);
      END_STATE();
    case 386:
      if (lookahead == 'm') ADVANCE(661);
      END_STATE();
    case 387:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 388:
      if (lookahead == 'm') ADVANCE(663);
      END_STATE();
    case 389:
      if (lookahead == 'm') ADVANCE(388);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'x') ADVANCE(586);
      END_STATE();
    case 391:
      if (lookahead == 'n') ADVANCE(1209);
      END_STATE();
    case 392:
      if (lookahead == 'n') ADVANCE(1319);
      END_STATE();
    case 393:
      if (lookahead == 'n') ADVANCE(1221);
      END_STATE();
    case 394:
      if (lookahead == 'n') ADVANCE(1291);
      END_STATE();
    case 395:
      if (lookahead == 'n') ADVANCE(1332);
      END_STATE();
    case 396:
      if (lookahead == 'n') ADVANCE(1358);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(1260);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(1370);
      END_STATE();
    case 399:
      if (lookahead == 'n') ADVANCE(1257);
      END_STATE();
    case 400:
      if (lookahead == 'n') ADVANCE(1263);
      END_STATE();
    case 401:
      if (lookahead == 'n') ADVANCE(1333);
      END_STATE();
    case 402:
      if (lookahead == 'n') ADVANCE(1290);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 404:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 405:
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 406:
      if (lookahead == 'n') ADVANCE(628);
      if (lookahead == 'p') ADVANCE(1192);
      END_STATE();
    case 407:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 408:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 409:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 410:
      if (lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 411:
      if (lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 412:
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 413:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 414:
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 415:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 416:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 417:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(646);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(642);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 433:
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 434:
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead == 't') ADVANCE(610);
      END_STATE();
    case 435:
      if (lookahead == 'o') ADVANCE(648);
      END_STATE();
    case 436:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 437:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 438:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 439:
      if (lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 440:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 441:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 442:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 443:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 444:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 445:
      if (lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 446:
      if (lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 447:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 448:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 449:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 450:
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 451:
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 452:
      if (lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 453:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 454:
      if (lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 455:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 456:
      if (lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 457:
      if (lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(671);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(654);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(675);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(655);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(660);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 473:
      if (lookahead == 'p') ADVANCE(1198);
      END_STATE();
    case 474:
      if (lookahead == 'p') ADVANCE(1239);
      END_STATE();
    case 475:
      if (lookahead == 'p') ADVANCE(1242);
      END_STATE();
    case 476:
      if (lookahead == 'p') ADVANCE(1220);
      END_STATE();
    case 477:
      if (lookahead == 'p') ADVANCE(1225);
      END_STATE();
    case 478:
      if (lookahead == 'p') ADVANCE(1226);
      END_STATE();
    case 479:
      if (lookahead == 'p') ADVANCE(1229);
      END_STATE();
    case 480:
      if (lookahead == 'p') ADVANCE(1244);
      END_STATE();
    case 481:
      if (lookahead == 'p') ADVANCE(1357);
      END_STATE();
    case 482:
      if (lookahead == 'p') ADVANCE(1310);
      END_STATE();
    case 483:
      if (lookahead == 'p') ADVANCE(1235);
      END_STATE();
    case 484:
      if (lookahead == 'p') ADVANCE(1342);
      END_STATE();
    case 485:
      if (lookahead == 'p') ADVANCE(1227);
      END_STATE();
    case 486:
      if (lookahead == 'p') ADVANCE(1201);
      END_STATE();
    case 487:
      if (lookahead == 'p') ADVANCE(1192);
      END_STATE();
    case 488:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 489:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 490:
      if (lookahead == 'p') ADVANCE(664);
      END_STATE();
    case 491:
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 492:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 493:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 494:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 495:
      if (lookahead == 'p') ADVANCE(539);
      END_STATE();
    case 496:
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 497:
      if (lookahead == 'p') ADVANCE(284);
      END_STATE();
    case 498:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 499:
      if (lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 500:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 501:
      if (lookahead == 'p') ADVANCE(527);
      END_STATE();
    case 502:
      if (lookahead == 'p') ADVANCE(450);
      END_STATE();
    case 503:
      if (lookahead == 'p') ADVANCE(537);
      END_STATE();
    case 504:
      if (lookahead == 'p') ADVANCE(635);
      END_STATE();
    case 505:
      if (lookahead == 'r') ADVANCE(669);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(1361);
      END_STATE();
    case 507:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 508:
      if (lookahead == 'r') ADVANCE(1338);
      END_STATE();
    case 509:
      if (lookahead == 'r') ADVANCE(1329);
      END_STATE();
    case 510:
      if (lookahead == 'r') ADVANCE(1269);
      END_STATE();
    case 511:
      if (lookahead == 'r') ADVANCE(1295);
      END_STATE();
    case 512:
      if (lookahead == 'r') ADVANCE(1352);
      END_STATE();
    case 513:
      if (lookahead == 'r') ADVANCE(1231);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == 's') ADVANCE(489);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(666);
      END_STATE();
    case 517:
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 518:
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 519:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 520:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 521:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 522:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 523:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 524:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 525:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 526:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 527:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 528:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 529:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 530:
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 531:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 532:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 533:
      if (lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 534:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 535:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 536:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 537:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 538:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 539:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 540:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 541:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 542:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 543:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 544:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 545:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 546:
      if (lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 547:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 548:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 549:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 550:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 551:
      if (lookahead == 's') ADVANCE(1346);
      END_STATE();
    case 552:
      if (lookahead == 's') ADVANCE(1241);
      END_STATE();
    case 553:
      if (lookahead == 's') ADVANCE(1218);
      END_STATE();
    case 554:
      if (lookahead == 's') ADVANCE(1217);
      END_STATE();
    case 555:
      if (lookahead == 's') ADVANCE(1328);
      END_STATE();
    case 556:
      if (lookahead == 's') ADVANCE(489);
      END_STATE();
    case 557:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 558:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 559:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 560:
      if (lookahead == 's') ADVANCE(551);
      END_STATE();
    case 561:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 562:
      if (lookahead == 's') ADVANCE(587);
      END_STATE();
    case 563:
      if (lookahead == 's') ADVANCE(559);
      END_STATE();
    case 564:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 565:
      if (lookahead == 's') ADVANCE(553);
      END_STATE();
    case 566:
      if (lookahead == 's') ADVANCE(554);
      END_STATE();
    case 567:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 568:
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 569:
      if (lookahead == 's') ADVANCE(594);
      END_STATE();
    case 570:
      if (lookahead == 's') ADVANCE(595);
      END_STATE();
    case 571:
      if (lookahead == 's') ADVANCE(598);
      END_STATE();
    case 572:
      if (lookahead == 's') ADVANCE(599);
      END_STATE();
    case 573:
      if (lookahead == 's') ADVANCE(600);
      END_STATE();
    case 574:
      if (lookahead == 's') ADVANCE(601);
      END_STATE();
    case 575:
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 576:
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 577:
      if (lookahead == 's') ADVANCE(491);
      END_STATE();
    case 578:
      if (lookahead == 's') ADVANCE(621);
      END_STATE();
    case 579:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 580:
      if (lookahead == 's') ADVANCE(633);
      END_STATE();
    case 581:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 582:
      if (lookahead == 's') ADVANCE(583);
      END_STATE();
    case 583:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 584:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 585:
      if (lookahead == 's') ADVANCE(584);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(1223);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(1246);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(1243);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(1302);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(1355);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(1375);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(1297);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(1230);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(1320);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(1265);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(1216);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(1234);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(1219);
      END_STATE();
    case 601:
      if (lookahead == 't') ADVANCE(1179);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(1308);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(1222);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 605:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 608:
      if (lookahead == 't') ADVANCE(682);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 611:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 612:
      if (lookahead == 't') ADVANCE(692);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 614:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 615:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 616:
      if (lookahead == 't') ADVANCE(695);
      END_STATE();
    case 617:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(688);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(689);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 623:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 625:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 626:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 628:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(624);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(693);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(696);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 647:
      if (lookahead == 'u') ADVANCE(538);
      END_STATE();
    case 648:
      if (lookahead == 'u') ADVANCE(588);
      END_STATE();
    case 649:
      if (lookahead == 'u') ADVANCE(542);
      END_STATE();
    case 650:
      if (lookahead == 'u') ADVANCE(605);
      END_STATE();
    case 651:
      if (lookahead == 'u') ADVANCE(617);
      END_STATE();
    case 652:
      if (lookahead == 'u') ADVANCE(481);
      END_STATE();
    case 653:
      if (lookahead == 'u') ADVANCE(623);
      END_STATE();
    case 654:
      if (lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 655:
      if (lookahead == 'u') ADVANCE(541);
      END_STATE();
    case 656:
      if (lookahead == 'u') ADVANCE(640);
      END_STATE();
    case 657:
      if (lookahead == 'u') ADVANCE(425);
      END_STATE();
    case 658:
      if (lookahead == 'u') ADVANCE(543);
      END_STATE();
    case 659:
      if (lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 660:
      if (lookahead == 'u') ADVANCE(544);
      END_STATE();
    case 661:
      if (lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 662:
      if (lookahead == 'u') ADVANCE(428);
      END_STATE();
    case 663:
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 664:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 665:
      if (lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 666:
      if (lookahead == 'v') ADVANCE(225);
      END_STATE();
    case 667:
      if (lookahead == 'v') ADVANCE(226);
      END_STATE();
    case 668:
      if (lookahead == 'w') ADVANCE(1362);
      END_STATE();
    case 669:
      if (lookahead == 'w') ADVANCE(88);
      END_STATE();
    case 670:
      if (lookahead == 'w') ADVANCE(397);
      END_STATE();
    case 671:
      if (lookahead == 'w') ADVANCE(400);
      END_STATE();
    case 672:
      if (lookahead == 'w') ADVANCE(444);
      END_STATE();
    case 673:
      if (lookahead == 'x') ADVANCE(690);
      END_STATE();
    case 674:
      if (lookahead == 'x') ADVANCE(618);
      END_STATE();
    case 675:
      if (lookahead == 'x') ADVANCE(694);
      END_STATE();
    case 676:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 677:
      if (lookahead == 'x') ADVANCE(646);
      END_STATE();
    case 678:
      if (lookahead == 'y') ADVANCE(1315);
      END_STATE();
    case 679:
      if (lookahead == 'y') ADVANCE(1247);
      END_STATE();
    case 680:
      if (lookahead == 'y') ADVANCE(1245);
      END_STATE();
    case 681:
      if (lookahead == 'y') ADVANCE(1326);
      END_STATE();
    case 682:
      if (lookahead == 'y') ADVANCE(1285);
      END_STATE();
    case 683:
      if (lookahead == 'y') ADVANCE(1313);
      END_STATE();
    case 684:
      if (lookahead == 'y') ADVANCE(1340);
      END_STATE();
    case 685:
      if (lookahead == 'y') ADVANCE(1287);
      END_STATE();
    case 686:
      if (lookahead == 'y') ADVANCE(1372);
      END_STATE();
    case 687:
      if (lookahead == 'y') ADVANCE(1336);
      END_STATE();
    case 688:
      if (lookahead == 'y') ADVANCE(1284);
      END_STATE();
    case 689:
      if (lookahead == 'y') ADVANCE(1286);
      END_STATE();
    case 690:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 691:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 692:
      if (lookahead == 'y') ADVANCE(496);
      END_STATE();
    case 693:
      if (lookahead == 'y') ADVANCE(498);
      END_STATE();
    case 694:
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 695:
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 696:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 697:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(706);
      END_STATE();
    case 698:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 699:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 700:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1304);
      END_STATE();
    case 701:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 702:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_end_LF);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(706);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_header_comment_token2);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(708);
      if (lookahead != 0) ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_header_comment_token2);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(708);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_header_comment_token2);
      if (lookahead == '!') ADVANCE(707);
      if (lookahead == '#') ADVANCE(710);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(709);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(711);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_header_comment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(711);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_header_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(711);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(712);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(713);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1084);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1085);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(716);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1086);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(717);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1087);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == ' ') ADVANCE(1148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == ' ') ADVANCE(561);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '\n') ADVANCE(704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '\n') ADVANCE(704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == ' ') ADVANCE(1100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(912);
      if (lookahead == 'r') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(912);
      if (lookahead == 'r') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(913);
      if (lookahead == 'r') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '6') ADVANCE(1196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '6') ADVANCE(1194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '6') ADVANCE(1197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(1306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(1307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(940);
      if (lookahead == 'o') ADVANCE(946);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(938);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(939);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(941);
      if (lookahead == 'o') ADVANCE(946);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(747);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(747);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(1022);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(907);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(936);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(937);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(1025);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(796);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(1027);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(911);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(917);
      if (lookahead == 'o') ADVANCE(723);
      if (lookahead == 't') ADVANCE(976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(918);
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead == 't') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(949);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'b') ADVANCE(969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'b') ADVANCE(1064);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(1078);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(1079);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(1002);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(1033);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(1034);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(1003);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(724);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(725);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(954);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(1009);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1075);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(987);
      if (lookahead == 'h') ADVANCE(1061);
      if (lookahead == 'n') ADVANCE(901);
      if (lookahead == 'p') ADVANCE(764);
      if (lookahead == 'w') ADVANCE(889);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(987);
      if (lookahead == 'n') ADVANCE(901);
      if (lookahead == 'p') ADVANCE(764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1076);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(992);
      if (lookahead == 'h') ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(902);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(992);
      if (lookahead == 'n') ADVANCE(902);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(991);
      if (lookahead == 'n') ADVANCE(902);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(986);
      if (lookahead == 'n') ADVANCE(901);
      if (lookahead == 'p') ADVANCE(764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(878);
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead == 't') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1010);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1019);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1011);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(807);
      if (lookahead == 'o') ADVANCE(1062);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(998);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1000);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1024);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(990);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(994);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(933);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(995);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(999);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(736);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1001);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(908);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1028);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(916);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1012);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(1013);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(1214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(1215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(731);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(732);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(1279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(1278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(785);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(1044);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(865);
      if (lookahead == 't') ADVANCE(1074);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(794);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(1047);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(1046);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(982);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(931);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(1051);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(932);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(1030);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'k') ADVANCE(1272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(880);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(1077);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(758);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(769);
      if (lookahead == 'r') ADVANCE(858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(771);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(776);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(815);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(844);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(772);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(824);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(1057);
      if (lookahead == 'p') ADVANCE(1190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(1057);
      if (lookahead == 'p') ADVANCE(1191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(1210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(804);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(1045);
      if (lookahead == 'p') ADVANCE(1188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(1211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(1262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(1259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(1261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(1258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(1036);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(888);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(890);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(934);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(748);
      if (lookahead == 't') ADVANCE(792);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(748);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(751);
      if (lookahead == 't') ADVANCE(791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(1037);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(1040);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead == 't') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(1062);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(719);
      if (lookahead == 't') ADVANCE(976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(1063);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(1072);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(721);
      if (lookahead == 't') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(1073);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(723);
      if (lookahead == 't') ADVANCE(976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(1016);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(1018);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(988);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(1006);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(1005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(930);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(996);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(997);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(1065);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(1199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(733);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(1311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(1203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(1343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(1200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(734);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(1312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(1204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(1344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(1049);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(1052);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1066);
      if (lookahead == 't') ADVANCE(1281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1066);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1067);
      if (lookahead == 't') ADVANCE(1282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1067);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(892);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1069);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1068);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1039);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(847);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1071);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(1070);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(1345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(1056);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(729);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(1058);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(793);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(1017);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(737);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(1020);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(1014);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(1023);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(1054);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(741);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(742);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(1322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(1323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(1267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(1266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(1321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(805);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(812);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(787);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(1007);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(1008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(1004);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(943);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(944);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(1042);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(1041);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(1043);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(1048);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(1055);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(1059);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'v') ADVANCE(881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'v') ADVANCE(887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'v') ADVANCE(842);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'v') ADVANCE(839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'v') ADVANCE(845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'v') ADVANCE(841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'w') ADVANCE(927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'w') ADVANCE(929);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'w') ADVANCE(967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'y') ADVANCE(1316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'y') ADVANCE(1317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'y') ADVANCE(1373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'y') ADVANCE(739);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'y') ADVANCE(740);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '!') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1082);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_command_args);
      ADVANCE_MAP(
        '\n', 712,
        '#', 1175,
        'a', 762,
        'c', 897,
        'd', 834,
        'e', 924,
        'h', 961,
        'i', 925,
        'k', 818,
        'm', 755,
        'n', 952,
        'p', 960,
        'r', 953,
        's', 819,
        't', 749,
        'u', 1021,
        'v', 899,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_command_args);
      ADVANCE_MAP(
        '\n', 714,
        '#', 1175,
        'a', 762,
        'c', 897,
        'e', 924,
        'h', 961,
        'i', 925,
        'k', 818,
        'm', 755,
        'n', 781,
        'p', 960,
        'r', 953,
        's', 820,
        't', 749,
        'u', 1021,
        'v', 899,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_command_args);
      ADVANCE_MAP(
        '\n', 715,
        '#', 1175,
        'a', 762,
        'c', 897,
        'e', 924,
        'h', 961,
        'i', 925,
        'k', 818,
        'm', 755,
        'n', 957,
        'p', 960,
        'r', 953,
        's', 820,
        't', 749,
        'u', 1021,
        'v', 899,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == '\n') ADVANCE(716);
      if (lookahead == '#') ADVANCE(1175);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_command_args);
      ADVANCE_MAP(
        '\n', 717,
        '#', 1175,
        'a', 762,
        'c', 897,
        'd', 834,
        'e', 924,
        'h', 961,
        'i', 925,
        'k', 818,
        'm', 752,
        'n', 957,
        'p', 960,
        'r', 953,
        's', 827,
        't', 749,
        'u', 1021,
        'v', 899,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == '#') ADVANCE(1175);
      if (lookahead == 'a') ADVANCE(1168);
      if (lookahead == 's') ADVANCE(1114);
      if (lookahead == 't') ADVANCE(1147);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1088);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == '#') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1110);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1089);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == '#') ADVANCE(1175);
      if (lookahead == 'h') ADVANCE(1142);
      if (lookahead == 'k') ADVANCE(1117);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1090);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == '#') ADVANCE(1175);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == '#') ADVANCE(1175);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1092);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == '-') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == '-') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'a') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'a') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'a') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'b') ADVANCE(1121);
      if (lookahead == 'o') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'c') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'c') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'c') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'c') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'c') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'd') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'd') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'e') ADVANCE(1172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'e') ADVANCE(1335);
      if (lookahead == 'i') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'e') ADVANCE(1120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'e') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'e') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'e') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'e') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'e') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'e') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'e') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'e') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'f') ADVANCE(1348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'f') ADVANCE(1124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'g') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'h') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'h') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'i') ADVANCE(1136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'i') ADVANCE(1165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'i') ADVANCE(1140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'i') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'i') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'i') ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'k') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'k') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'l') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'l') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'n') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'n') ADVANCE(1371);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'n') ADVANCE(1125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'n') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'n') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'o') ADVANCE(1171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'o') ADVANCE(1135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'o') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'o') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'p') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'p') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'r') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'r') ADVANCE(1339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'r') ADVANCE(1169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 's') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 's') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 's') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 's') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 's') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 's') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 's') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 's') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 's') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 's') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 't') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 't') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 't') ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 't') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 't') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 't') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 't') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 't') ADVANCE(1126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 't') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'u') ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'u') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'u') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'v') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'w') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'y') ADVANCE(1341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'y') ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == 'y') ADVANCE(1318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1082);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_command_args);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_command_args);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_ipaccess_DASHlist);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_ipaccess_DASHlist);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_standard);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_extended);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_hostname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_hostname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == ' ') ADVANCE(1097);
      if (lookahead == 'v') ADVANCE(744);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == 'v') ADVANCE(743);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == 'v') ADVANCE(745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_ipv6);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_ipv6);
      if (lookahead == ' ') ADVANCE(1099);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_ipv6);
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_ipv6);
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_ipv6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_ntp);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_ntp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_ntp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_routerbgp);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_routerbgp);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_route_DASHmap);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_route_DASHmap);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_tacacs_DASHserver);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_tacacs_DASHserver);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_username);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_username);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_vlan);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_vlan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_vlan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_command_vlan_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1212);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_vrf);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_vrf);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_vrf);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_access_DASHlist);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_address);
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_community_DASHlist);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_dhcp);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_domain);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_extcommunity_DASHlist);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_host);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_http);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_igmp);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_local_DASHproxy_DASHarp);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_mroute);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_msdp);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_multicast);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_name_DASHserver);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_ospf);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_pim);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_prefix_DASHlist);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_proxy_DASHarp);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_route);
      if (lookahead == 'r') ADVANCE(1237);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(anon_sym_router);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_routing);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_scp);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(anon_sym_ssh);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(anon_sym_tacacs);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(anon_sym_telnet);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_tftp);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_verify);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_permit);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(anon_sym_deny);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1250);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1254);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1253);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1252);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(1248);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(1255);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1251);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(1314);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(anon_sym_shutdown);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(anon_sym_shutdown);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(anon_sym_shutdown);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(anon_sym_noshutdown);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(anon_sym_noshutdown);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(anon_sym_switchport);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(anon_sym_switchport);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(anon_sym_switchport);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(anon_sym_forwarding);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(anon_sym_neighbor);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(anon_sym_neighbor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(anon_sym_network);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(anon_sym_network);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(anon_sym_redistribute);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(anon_sym_redistribute);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(anon_sym_connected);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(anon_sym_match);
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(anon_sym_match);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(anon_sym_match);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym_as_DASHpath);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym_community);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym_community);
      if (lookahead == '-') ADVANCE(357);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_extcommunity);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym_extcommunity);
      if (lookahead == '-') ADVANCE(360);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym_metric);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(anon_sym_metric);
      if (lookahead == '-') ADVANCE(612);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(anon_sym_origin);
      if (lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(anon_sym_route_DASHtype);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(anon_sym_source_DASHprotocol);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(anon_sym_aggregator);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_atomic_DASHaggregate);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_comm_DASHlist);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_dampening);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_local_DASHpreference);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym_metric_DASHtype);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym_originator_DASHid);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_weight);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_bgp_neighbor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1303);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_ip_prefix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1304);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_aaa);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_aaa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_aaa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_ipv6access_DASHlist);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_ipv6access_DASHlist);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_class_DASHmap);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_class_DASHmap);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_class_DASHmap);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_match_DASHany);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(anon_sym_match_DASHany);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_chain);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_management);
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_management);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_management);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_management);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_api);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_console);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_security);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_managementapi);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_http_DASHcommands);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_monitor);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym_monitor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_monitor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_replication);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_authenticate);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_authenticate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_authentication_DASHkey);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_authentication_DASHkey);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_server);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_server);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_policy_DASHmap);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_policy_DASHmap);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_policy_DASHmap);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '-') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '-') ADVANCE(372);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_routerospf);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_routerospf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_snmp_DASHserver);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_snmp_DASHserver);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_snmp_DASHserver);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_contact);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_source_DASHinterface);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_trap_DASHsource);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_spanning_DASHtree);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_spanning_DASHtree);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_spanning_DASHtree);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_definition);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_definition);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!') ADVANCE(1178);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_address_DASHfamily);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_address_DASHfamily);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_ipv4);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_unicast);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 24},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 22},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 16},
  [98] = {.lex_state = 16},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 16},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 16},
  [105] = {.lex_state = 21},
  [106] = {.lex_state = 16},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 16},
  [109] = {.lex_state = 16},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 21},
  [112] = {.lex_state = 16},
  [113] = {.lex_state = 16},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 16},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 27},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 16},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 26},
  [128] = {.lex_state = 25},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 30},
  [132] = {.lex_state = 30},
  [133] = {.lex_state = 30},
  [134] = {.lex_state = 30},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 30},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 28},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 13},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 13},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 13},
  [180] = {.lex_state = 13},
  [181] = {.lex_state = 13},
  [182] = {.lex_state = 13},
  [183] = {.lex_state = 13},
  [184] = {.lex_state = 13},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 13},
  [189] = {.lex_state = 13},
  [190] = {.lex_state = 13},
  [191] = {.lex_state = 13},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 13},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 13},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 13},
  [201] = {.lex_state = 13},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 29},
  [204] = {.lex_state = 31},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 31},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 31},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 8},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 709},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 31},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 31},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 31},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 8},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 31},
  [257] = {.lex_state = 31},
  [258] = {.lex_state = 28},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 31},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 31},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 23},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 10},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 31},
  [275] = {.lex_state = 31},
  [276] = {.lex_state = 10},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 31},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 10},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 10},
  [284] = {.lex_state = 31},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 10},
  [288] = {.lex_state = 10},
  [289] = {.lex_state = 10},
  [290] = {.lex_state = 10},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 10},
  [293] = {.lex_state = 10},
  [294] = {.lex_state = 10},
  [295] = {.lex_state = 10},
  [296] = {.lex_state = 31},
  [297] = {.lex_state = 31},
  [298] = {.lex_state = 31},
  [299] = {.lex_state = 10},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_end_LF] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_header_comment_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_ipaccess_DASHlist] = ACTIONS(1),
    [anon_sym_standard] = ACTIONS(1),
    [anon_sym_extended] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_ip] = ACTIONS(1),
    [anon_sym_ipv6] = ACTIONS(1),
    [anon_sym_ntp] = ACTIONS(1),
    [anon_sym_vlan] = ACTIONS(1),
    [aux_sym_command_vlan_token1] = ACTIONS(1),
    [anon_sym_vrf] = ACTIONS(1),
    [anon_sym_access_DASHlist] = ACTIONS(1),
    [anon_sym_address] = ACTIONS(1),
    [anon_sym_community_DASHlist] = ACTIONS(1),
    [anon_sym_dhcp] = ACTIONS(1),
    [anon_sym_domain] = ACTIONS(1),
    [anon_sym_extcommunity_DASHlist] = ACTIONS(1),
    [anon_sym_host] = ACTIONS(1),
    [anon_sym_http] = ACTIONS(1),
    [anon_sym_igmp] = ACTIONS(1),
    [anon_sym_local_DASHproxy_DASHarp] = ACTIONS(1),
    [anon_sym_mroute] = ACTIONS(1),
    [anon_sym_msdp] = ACTIONS(1),
    [anon_sym_multicast] = ACTIONS(1),
    [anon_sym_ospf] = ACTIONS(1),
    [anon_sym_pim] = ACTIONS(1),
    [anon_sym_prefix_DASHlist] = ACTIONS(1),
    [anon_sym_proxy_DASHarp] = ACTIONS(1),
    [anon_sym_route] = ACTIONS(1),
    [anon_sym_router] = ACTIONS(1),
    [anon_sym_routing] = ACTIONS(1),
    [anon_sym_scp] = ACTIONS(1),
    [anon_sym_ssh] = ACTIONS(1),
    [anon_sym_tacacs] = ACTIONS(1),
    [anon_sym_tcp] = ACTIONS(1),
    [anon_sym_telnet] = ACTIONS(1),
    [anon_sym_tftp] = ACTIONS(1),
    [anon_sym_verify] = ACTIONS(1),
    [anon_sym_permit] = ACTIONS(1),
    [anon_sym_deny] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_shutdown] = ACTIONS(1),
    [anon_sym_noshutdown] = ACTIONS(1),
    [anon_sym_switchport] = ACTIONS(1),
    [anon_sym_forwarding] = ACTIONS(1),
    [anon_sym_neighbor] = ACTIONS(1),
    [anon_sym_network] = ACTIONS(1),
    [anon_sym_redistribute] = ACTIONS(1),
    [anon_sym_connected] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_as_DASHpath] = ACTIONS(1),
    [anon_sym_community] = ACTIONS(1),
    [anon_sym_extcommunity] = ACTIONS(1),
    [anon_sym_metric] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_source_DASHprotocol] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_aggregator] = ACTIONS(1),
    [anon_sym_atomic_DASHaggregate] = ACTIONS(1),
    [anon_sym_comm_DASHlist] = ACTIONS(1),
    [anon_sym_dampening] = ACTIONS(1),
    [anon_sym_local_DASHpreference] = ACTIONS(1),
    [anon_sym_metric_DASHtype] = ACTIONS(1),
    [anon_sym_originator_DASHid] = ACTIONS(1),
    [anon_sym_weight] = ACTIONS(1),
    [anon_sym_aaa] = ACTIONS(1),
    [anon_sym_ipv6access_DASHlist] = ACTIONS(1),
    [anon_sym_class_DASHmap] = ACTIONS(1),
    [anon_sym_match_DASHany] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_chain] = ACTIONS(1),
    [anon_sym_management] = ACTIONS(1),
    [anon_sym_api] = ACTIONS(1),
    [anon_sym_console] = ACTIONS(1),
    [anon_sym_security] = ACTIONS(1),
    [anon_sym_managementapi] = ACTIONS(1),
    [anon_sym_monitor] = ACTIONS(1),
    [anon_sym_session] = ACTIONS(1),
    [anon_sym_replication] = ACTIONS(1),
    [anon_sym_authenticate] = ACTIONS(1),
    [anon_sym_authentication_DASHkey] = ACTIONS(1),
    [anon_sym_server] = ACTIONS(1),
    [anon_sym_trusted_DASHkey] = ACTIONS(1),
    [anon_sym_policy_DASHmap] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_snmp_DASHserver] = ACTIONS(1),
    [anon_sym_contact] = ACTIONS(1),
    [anon_sym_enable] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_location] = ACTIONS(1),
    [anon_sym_source_DASHinterface] = ACTIONS(1),
    [anon_sym_trap_DASHsource] = ACTIONS(1),
    [anon_sym_user] = ACTIONS(1),
    [anon_sym_view] = ACTIONS(1),
    [anon_sym_spanning_DASHtree] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_definition] = ACTIONS(1),
    [anon_sym_address_DASHfamily] = ACTIONS(1),
    [anon_sym_unicast] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(264),
    [sym_header_comment] = STATE(3),
    [sym_statement] = STATE(4),
    [sym_command] = STATE(191),
    [sym_negated_command] = STATE(191),
    [sym_command_access_list] = STATE(192),
    [sym_command_hostname] = STATE(192),
    [sym_command_interface] = STATE(192),
    [sym_command_ip] = STATE(192),
    [sym_command_ipv6] = STATE(192),
    [sym_command_ntp] = STATE(192),
    [sym_command_router_bgp] = STATE(192),
    [sym_command_route_map] = STATE(192),
    [sym_command_tacacs_server] = STATE(192),
    [sym_command_username] = STATE(192),
    [sym_command_vlan] = STATE(192),
    [sym_command_vrf] = STATE(192),
    [sym_interface_section] = STATE(124),
    [sym_router_bgp_section] = STATE(124),
    [sym_route_map_section] = STATE(124),
    [sym_section] = STATE(4),
    [sym_aaa_section] = STATE(124),
    [sym_acl_section] = STATE(124),
    [sym_class_map_section] = STATE(124),
    [sym_ip_section] = STATE(124),
    [sym_ipv6_section] = STATE(124),
    [sym_key_section] = STATE(124),
    [sym_management_section] = STATE(124),
    [sym_monitor_section] = STATE(124),
    [sym_ntp_section] = STATE(124),
    [sym_policy_map_section] = STATE(124),
    [sym_router_ospf_section] = STATE(124),
    [sym_service_section] = STATE(124),
    [sym_snmp_server_section] = STATE(124),
    [sym_spanning_tree_section] = STATE(124),
    [sym_tacacs_server_section] = STATE(124),
    [sym_vlan_section] = STATE(124),
    [sym_vrf_section] = STATE(124),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_header_comment_repeat1] = STATE(36),
    [anon_sym_end_LF] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(7),
    [aux_sym_header_comment_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_no] = ACTIONS(9),
    [sym_command_name] = ACTIONS(11),
    [anon_sym_ipaccess_DASHlist] = ACTIONS(13),
    [anon_sym_hostname] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_ip] = ACTIONS(19),
    [anon_sym_ipv6] = ACTIONS(21),
    [anon_sym_ntp] = ACTIONS(23),
    [anon_sym_routerbgp] = ACTIONS(25),
    [anon_sym_route_DASHmap] = ACTIONS(27),
    [anon_sym_tacacs_DASHserver] = ACTIONS(29),
    [anon_sym_username] = ACTIONS(31),
    [anon_sym_vlan] = ACTIONS(33),
    [anon_sym_vrf] = ACTIONS(35),
    [anon_sym_aaa] = ACTIONS(37),
    [anon_sym_ipv6access_DASHlist] = ACTIONS(39),
    [anon_sym_class_DASHmap] = ACTIONS(41),
    [anon_sym_key] = ACTIONS(43),
    [anon_sym_management] = ACTIONS(45),
    [anon_sym_monitor] = ACTIONS(47),
    [anon_sym_policy_DASHmap] = ACTIONS(49),
    [anon_sym_routerospf] = ACTIONS(51),
    [anon_sym_service] = ACTIONS(53),
    [anon_sym_snmp_DASHserver] = ACTIONS(55),
    [anon_sym_spanning_DASHtree] = ACTIONS(57),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_no,
    ACTIONS(11), 1,
      sym_command_name,
    ACTIONS(13), 1,
      anon_sym_ipaccess_DASHlist,
    ACTIONS(15), 1,
      anon_sym_hostname,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(19), 1,
      anon_sym_ip,
    ACTIONS(21), 1,
      anon_sym_ipv6,
    ACTIONS(23), 1,
      anon_sym_ntp,
    ACTIONS(25), 1,
      anon_sym_routerbgp,
    ACTIONS(27), 1,
      anon_sym_route_DASHmap,
    ACTIONS(29), 1,
      anon_sym_tacacs_DASHserver,
    ACTIONS(31), 1,
      anon_sym_username,
    ACTIONS(33), 1,
      anon_sym_vlan,
    ACTIONS(35), 1,
      anon_sym_vrf,
    ACTIONS(37), 1,
      anon_sym_aaa,
    ACTIONS(39), 1,
      anon_sym_ipv6access_DASHlist,
    ACTIONS(41), 1,
      anon_sym_class_DASHmap,
    ACTIONS(43), 1,
      anon_sym_key,
    ACTIONS(45), 1,
      anon_sym_management,
    ACTIONS(47), 1,
      anon_sym_monitor,
    ACTIONS(49), 1,
      anon_sym_policy_DASHmap,
    ACTIONS(51), 1,
      anon_sym_routerospf,
    ACTIONS(53), 1,
      anon_sym_service,
    ACTIONS(55), 1,
      anon_sym_snmp_DASHserver,
    ACTIONS(57), 1,
      anon_sym_spanning_DASHtree,
    ACTIONS(59), 1,
      anon_sym_end_LF,
    STATE(191), 2,
      sym_command,
      sym_negated_command,
    STATE(5), 3,
      sym_statement,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(192), 12,
      sym_command_access_list,
      sym_command_hostname,
      sym_command_interface,
      sym_command_ip,
      sym_command_ipv6,
      sym_command_ntp,
      sym_command_router_bgp,
      sym_command_route_map,
      sym_command_tacacs_server,
      sym_command_username,
      sym_command_vlan,
      sym_command_vrf,
    STATE(124), 20,
      sym_interface_section,
      sym_router_bgp_section,
      sym_route_map_section,
      sym_aaa_section,
      sym_acl_section,
      sym_class_map_section,
      sym_ip_section,
      sym_ipv6_section,
      sym_key_section,
      sym_management_section,
      sym_monitor_section,
      sym_ntp_section,
      sym_policy_map_section,
      sym_router_ospf_section,
      sym_service_section,
      sym_snmp_server_section,
      sym_spanning_tree_section,
      sym_tacacs_server_section,
      sym_vlan_section,
      sym_vrf_section,
  [127] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_no,
    ACTIONS(11), 1,
      sym_command_name,
    ACTIONS(13), 1,
      anon_sym_ipaccess_DASHlist,
    ACTIONS(15), 1,
      anon_sym_hostname,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(19), 1,
      anon_sym_ip,
    ACTIONS(21), 1,
      anon_sym_ipv6,
    ACTIONS(23), 1,
      anon_sym_ntp,
    ACTIONS(25), 1,
      anon_sym_routerbgp,
    ACTIONS(27), 1,
      anon_sym_route_DASHmap,
    ACTIONS(29), 1,
      anon_sym_tacacs_DASHserver,
    ACTIONS(31), 1,
      anon_sym_username,
    ACTIONS(33), 1,
      anon_sym_vlan,
    ACTIONS(35), 1,
      anon_sym_vrf,
    ACTIONS(37), 1,
      anon_sym_aaa,
    ACTIONS(39), 1,
      anon_sym_ipv6access_DASHlist,
    ACTIONS(41), 1,
      anon_sym_class_DASHmap,
    ACTIONS(43), 1,
      anon_sym_key,
    ACTIONS(45), 1,
      anon_sym_management,
    ACTIONS(47), 1,
      anon_sym_monitor,
    ACTIONS(49), 1,
      anon_sym_policy_DASHmap,
    ACTIONS(51), 1,
      anon_sym_routerospf,
    ACTIONS(53), 1,
      anon_sym_service,
    ACTIONS(55), 1,
      anon_sym_snmp_DASHserver,
    ACTIONS(57), 1,
      anon_sym_spanning_DASHtree,
    ACTIONS(61), 1,
      anon_sym_end_LF,
    STATE(191), 2,
      sym_command,
      sym_negated_command,
    STATE(2), 3,
      sym_statement,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(192), 12,
      sym_command_access_list,
      sym_command_hostname,
      sym_command_interface,
      sym_command_ip,
      sym_command_ipv6,
      sym_command_ntp,
      sym_command_router_bgp,
      sym_command_route_map,
      sym_command_tacacs_server,
      sym_command_username,
      sym_command_vlan,
      sym_command_vrf,
    STATE(124), 20,
      sym_interface_section,
      sym_router_bgp_section,
      sym_route_map_section,
      sym_aaa_section,
      sym_acl_section,
      sym_class_map_section,
      sym_ip_section,
      sym_ipv6_section,
      sym_key_section,
      sym_management_section,
      sym_monitor_section,
      sym_ntp_section,
      sym_policy_map_section,
      sym_router_ospf_section,
      sym_service_section,
      sym_snmp_server_section,
      sym_spanning_tree_section,
      sym_tacacs_server_section,
      sym_vlan_section,
      sym_vrf_section,
  [254] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_no,
    ACTIONS(11), 1,
      sym_command_name,
    ACTIONS(13), 1,
      anon_sym_ipaccess_DASHlist,
    ACTIONS(15), 1,
      anon_sym_hostname,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(19), 1,
      anon_sym_ip,
    ACTIONS(21), 1,
      anon_sym_ipv6,
    ACTIONS(23), 1,
      anon_sym_ntp,
    ACTIONS(25), 1,
      anon_sym_routerbgp,
    ACTIONS(27), 1,
      anon_sym_route_DASHmap,
    ACTIONS(29), 1,
      anon_sym_tacacs_DASHserver,
    ACTIONS(31), 1,
      anon_sym_username,
    ACTIONS(33), 1,
      anon_sym_vlan,
    ACTIONS(35), 1,
      anon_sym_vrf,
    ACTIONS(37), 1,
      anon_sym_aaa,
    ACTIONS(39), 1,
      anon_sym_ipv6access_DASHlist,
    ACTIONS(41), 1,
      anon_sym_class_DASHmap,
    ACTIONS(43), 1,
      anon_sym_key,
    ACTIONS(45), 1,
      anon_sym_management,
    ACTIONS(47), 1,
      anon_sym_monitor,
    ACTIONS(49), 1,
      anon_sym_policy_DASHmap,
    ACTIONS(51), 1,
      anon_sym_routerospf,
    ACTIONS(53), 1,
      anon_sym_service,
    ACTIONS(55), 1,
      anon_sym_snmp_DASHserver,
    ACTIONS(57), 1,
      anon_sym_spanning_DASHtree,
    ACTIONS(61), 1,
      anon_sym_end_LF,
    STATE(191), 2,
      sym_command,
      sym_negated_command,
    STATE(5), 3,
      sym_statement,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(192), 12,
      sym_command_access_list,
      sym_command_hostname,
      sym_command_interface,
      sym_command_ip,
      sym_command_ipv6,
      sym_command_ntp,
      sym_command_router_bgp,
      sym_command_route_map,
      sym_command_tacacs_server,
      sym_command_username,
      sym_command_vlan,
      sym_command_vrf,
    STATE(124), 20,
      sym_interface_section,
      sym_router_bgp_section,
      sym_route_map_section,
      sym_aaa_section,
      sym_acl_section,
      sym_class_map_section,
      sym_ip_section,
      sym_ipv6_section,
      sym_key_section,
      sym_management_section,
      sym_monitor_section,
      sym_ntp_section,
      sym_policy_map_section,
      sym_router_ospf_section,
      sym_service_section,
      sym_snmp_server_section,
      sym_spanning_tree_section,
      sym_tacacs_server_section,
      sym_vlan_section,
      sym_vrf_section,
  [381] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_end_LF,
    ACTIONS(65), 1,
      anon_sym_no,
    ACTIONS(68), 1,
      sym_command_name,
    ACTIONS(71), 1,
      anon_sym_ipaccess_DASHlist,
    ACTIONS(74), 1,
      anon_sym_hostname,
    ACTIONS(77), 1,
      anon_sym_interface,
    ACTIONS(80), 1,
      anon_sym_ip,
    ACTIONS(83), 1,
      anon_sym_ipv6,
    ACTIONS(86), 1,
      anon_sym_ntp,
    ACTIONS(89), 1,
      anon_sym_routerbgp,
    ACTIONS(92), 1,
      anon_sym_route_DASHmap,
    ACTIONS(95), 1,
      anon_sym_tacacs_DASHserver,
    ACTIONS(98), 1,
      anon_sym_username,
    ACTIONS(101), 1,
      anon_sym_vlan,
    ACTIONS(104), 1,
      anon_sym_vrf,
    ACTIONS(107), 1,
      anon_sym_aaa,
    ACTIONS(110), 1,
      anon_sym_ipv6access_DASHlist,
    ACTIONS(113), 1,
      anon_sym_class_DASHmap,
    ACTIONS(116), 1,
      anon_sym_key,
    ACTIONS(119), 1,
      anon_sym_management,
    ACTIONS(122), 1,
      anon_sym_monitor,
    ACTIONS(125), 1,
      anon_sym_policy_DASHmap,
    ACTIONS(128), 1,
      anon_sym_routerospf,
    ACTIONS(131), 1,
      anon_sym_service,
    ACTIONS(134), 1,
      anon_sym_snmp_DASHserver,
    ACTIONS(137), 1,
      anon_sym_spanning_DASHtree,
    STATE(191), 2,
      sym_command,
      sym_negated_command,
    STATE(5), 3,
      sym_statement,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(192), 12,
      sym_command_access_list,
      sym_command_hostname,
      sym_command_interface,
      sym_command_ip,
      sym_command_ipv6,
      sym_command_ntp,
      sym_command_router_bgp,
      sym_command_route_map,
      sym_command_tacacs_server,
      sym_command_username,
      sym_command_vlan,
      sym_command_vrf,
    STATE(124), 20,
      sym_interface_section,
      sym_router_bgp_section,
      sym_route_map_section,
      sym_aaa_section,
      sym_acl_section,
      sym_class_map_section,
      sym_ip_section,
      sym_ipv6_section,
      sym_key_section,
      sym_management_section,
      sym_monitor_section,
      sym_ntp_section,
      sym_policy_map_section,
      sym_router_ospf_section,
      sym_service_section,
      sym_snmp_server_section,
      sym_spanning_tree_section,
      sym_tacacs_server_section,
      sym_vlan_section,
      sym_vrf_section,
  [508] = 13,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_no,
    ACTIONS(149), 1,
      sym_command_name,
    ACTIONS(152), 1,
      anon_sym_ip,
    ACTIONS(155), 1,
      anon_sym_ipv6,
    ACTIONS(158), 1,
      anon_sym_vrf,
    ACTIONS(161), 1,
      anon_sym_description,
    ACTIONS(165), 1,
      anon_sym_switchport,
    ACTIONS(142), 2,
      anon_sym_LF,
      sym_command_args,
    ACTIONS(163), 2,
      anon_sym_shutdown,
      anon_sym_noshutdown,
    STATE(8), 3,
      sym_interface_command,
      sym_negated_interface_command,
      aux_sym_interface_section_repeat1,
    STATE(20), 6,
      sym_interface_command_description,
      sym_interface_command_ip,
      sym_interface_command_ipv6,
      sym_interface_command_shutdown,
      sym_interface_command_switchport,
      sym_interface_command_vrf,
    ACTIONS(140), 21,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ntp,
      anon_sym_routerbgp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_aaa,
      anon_sym_ipv6access_DASHlist,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_routerospf,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [577] = 13,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_description,
    ACTIONS(165), 1,
      anon_sym_switchport,
    ACTIONS(171), 1,
      anon_sym_no,
    ACTIONS(174), 1,
      sym_command_name,
    ACTIONS(177), 1,
      anon_sym_ip,
    ACTIONS(180), 1,
      anon_sym_ipv6,
    ACTIONS(183), 1,
      anon_sym_vrf,
    ACTIONS(163), 2,
      anon_sym_shutdown,
      anon_sym_noshutdown,
    ACTIONS(169), 2,
      anon_sym_LF,
      sym_command_args,
    STATE(9), 3,
      sym_interface_command,
      sym_negated_interface_command,
      aux_sym_interface_section_repeat1,
    STATE(20), 6,
      sym_interface_command_description,
      sym_interface_command_ip,
      sym_interface_command_ipv6,
      sym_interface_command_shutdown,
      sym_interface_command_switchport,
      sym_interface_command_vrf,
    ACTIONS(167), 21,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ntp,
      anon_sym_routerbgp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_aaa,
      anon_sym_ipv6access_DASHlist,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_routerospf,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [646] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_description,
    ACTIONS(163), 1,
      anon_sym_shutdown,
    ACTIONS(165), 1,
      anon_sym_switchport,
    ACTIONS(171), 1,
      anon_sym_no,
    ACTIONS(177), 1,
      anon_sym_ip,
    ACTIONS(180), 1,
      anon_sym_ipv6,
    ACTIONS(183), 1,
      anon_sym_vrf,
    ACTIONS(188), 1,
      sym_command_name,
    ACTIONS(191), 1,
      anon_sym_noshutdown,
    STATE(10), 3,
      sym_interface_command,
      sym_negated_interface_command,
      aux_sym_interface_section_repeat1,
    ACTIONS(186), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    STATE(20), 6,
      sym_interface_command_description,
      sym_interface_command_ip,
      sym_interface_command_ipv6,
      sym_interface_command_shutdown,
      sym_interface_command_switchport,
      sym_interface_command_vrf,
    ACTIONS(167), 16,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [715] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_description,
    ACTIONS(163), 1,
      anon_sym_shutdown,
    ACTIONS(165), 1,
      anon_sym_switchport,
    ACTIONS(191), 1,
      anon_sym_noshutdown,
    ACTIONS(195), 1,
      anon_sym_no,
    ACTIONS(198), 1,
      sym_command_name,
    ACTIONS(203), 1,
      anon_sym_ip,
    ACTIONS(206), 1,
      anon_sym_ipv6,
    ACTIONS(209), 1,
      anon_sym_vrf,
    STATE(10), 3,
      sym_interface_command,
      sym_negated_interface_command,
      aux_sym_interface_section_repeat1,
    ACTIONS(193), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    STATE(20), 6,
      sym_interface_command_description,
      sym_interface_command_ip,
      sym_interface_command_ipv6,
      sym_interface_command_shutdown,
      sym_interface_command_switchport,
      sym_interface_command_vrf,
    ACTIONS(201), 16,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [784] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_no,
    ACTIONS(217), 1,
      sym_command_name,
    ACTIONS(222), 1,
      anon_sym_ip,
    ACTIONS(225), 1,
      anon_sym_ipv6,
    ACTIONS(228), 1,
      anon_sym_vrf,
    ACTIONS(231), 1,
      anon_sym_description,
    ACTIONS(234), 1,
      anon_sym_shutdown,
    ACTIONS(237), 1,
      anon_sym_noshutdown,
    ACTIONS(240), 1,
      anon_sym_switchport,
    STATE(10), 3,
      sym_interface_command,
      sym_negated_interface_command,
      aux_sym_interface_section_repeat1,
    ACTIONS(212), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    STATE(20), 6,
      sym_interface_command_description,
      sym_interface_command_ip,
      sym_interface_command_ipv6,
      sym_interface_command_shutdown,
      sym_interface_command_switchport,
      sym_interface_command_vrf,
    ACTIONS(220), 16,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [853] = 8,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_description,
    ACTIONS(249), 1,
      anon_sym_match,
    ACTIONS(251), 1,
      anon_sym_set,
    ACTIONS(245), 2,
      anon_sym_LF,
      sym_command_args,
    STATE(18), 2,
      sym_route_map_command,
      aux_sym_route_map_section_repeat1,
    STATE(52), 3,
      sym_route_map_command_description,
      sym_route_map_command_match,
      sym_route_map_command_set,
    ACTIONS(243), 26,
      anon_sym_end_LF,
      anon_sym_no,
      sym_command_name,
      anon_sym_ipaccess_DASHlist,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_routerbgp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_ipv6access_DASHlist,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_routerospf,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [907] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_description,
    ACTIONS(260), 1,
      anon_sym_match,
    ACTIONS(263), 1,
      anon_sym_set,
    STATE(12), 2,
      sym_route_map_command,
      aux_sym_route_map_section_repeat1,
    STATE(52), 3,
      sym_route_map_command_description,
      sym_route_map_command_match,
      sym_route_map_command_set,
    ACTIONS(253), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(255), 21,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [959] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_command_name,
    ACTIONS(273), 1,
      anon_sym_neighbor,
    ACTIONS(275), 1,
      anon_sym_network,
    ACTIONS(277), 1,
      anon_sym_redistribute,
    STATE(17), 2,
      sym_router_bgp_command,
      aux_sym_router_bgp_section_repeat1,
    STATE(35), 3,
      sym_router_bgp_command_neighbor,
      sym_router_bgp_command_network,
      sym_router_bgp_command_redistribute,
    ACTIONS(266), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(268), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1013] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_neighbor,
    ACTIONS(275), 1,
      anon_sym_network,
    ACTIONS(277), 1,
      anon_sym_redistribute,
    ACTIONS(283), 1,
      sym_command_name,
    STATE(13), 2,
      sym_router_bgp_command,
      aux_sym_router_bgp_section_repeat1,
    STATE(35), 3,
      sym_router_bgp_command_neighbor,
      sym_router_bgp_command_network,
      sym_router_bgp_command_redistribute,
    ACTIONS(279), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(281), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1067] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_neighbor,
    ACTIONS(275), 1,
      anon_sym_network,
    ACTIONS(277), 1,
      anon_sym_redistribute,
    ACTIONS(286), 1,
      sym_command_name,
    STATE(16), 2,
      sym_router_bgp_command,
      aux_sym_router_bgp_section_repeat1,
    STATE(35), 3,
      sym_router_bgp_command_neighbor,
      sym_router_bgp_command_network,
      sym_router_bgp_command_redistribute,
    ACTIONS(266), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(268), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1121] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_neighbor,
    ACTIONS(275), 1,
      anon_sym_network,
    ACTIONS(277), 1,
      anon_sym_redistribute,
    ACTIONS(293), 1,
      sym_command_name,
    STATE(17), 2,
      sym_router_bgp_command,
      aux_sym_router_bgp_section_repeat1,
    STATE(35), 3,
      sym_router_bgp_command_neighbor,
      sym_router_bgp_command_network,
      sym_router_bgp_command_redistribute,
    ACTIONS(289), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(291), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1175] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_command_name,
    ACTIONS(303), 1,
      anon_sym_neighbor,
    ACTIONS(306), 1,
      anon_sym_network,
    ACTIONS(309), 1,
      anon_sym_redistribute,
    STATE(17), 2,
      sym_router_bgp_command,
      aux_sym_router_bgp_section_repeat1,
    STATE(35), 3,
      sym_router_bgp_command_neighbor,
      sym_router_bgp_command_network,
      sym_router_bgp_command_redistribute,
    ACTIONS(296), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(298), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1229] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_description,
    ACTIONS(249), 1,
      anon_sym_match,
    ACTIONS(251), 1,
      anon_sym_set,
    STATE(12), 2,
      sym_route_map_command,
      aux_sym_route_map_section_repeat1,
    STATE(52), 3,
      sym_route_map_command_description,
      sym_route_map_command_match,
      sym_route_map_command_set,
    ACTIONS(312), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(314), 21,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1281] = 6,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_command_name,
    ACTIONS(323), 1,
      anon_sym_name,
    ACTIONS(318), 2,
      anon_sym_LF,
      sym_command_args,
    STATE(37), 2,
      sym_vlan_name,
      aux_sym_vlan_section_repeat1,
    ACTIONS(316), 25,
      anon_sym_end_LF,
      anon_sym_no,
      anon_sym_ipaccess_DASHlist,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_routerbgp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_ipv6access_DASHlist,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_routerospf,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_noshutdown,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(327), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_shutdown,
      anon_sym_switchport,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_noshutdown,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(331), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_shutdown,
      anon_sym_switchport,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_noshutdown,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(335), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_shutdown,
      anon_sym_switchport,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_noshutdown,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(339), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_shutdown,
      anon_sym_switchport,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_noshutdown,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(343), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_shutdown,
      anon_sym_switchport,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_noshutdown,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(347), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_shutdown,
      anon_sym_switchport,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_noshutdown,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(351), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_shutdown,
      anon_sym_switchport,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_noshutdown,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(355), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_shutdown,
      anon_sym_switchport,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_noshutdown,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(359), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_shutdown,
      anon_sym_switchport,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_route,
    STATE(226), 1,
      sym_protocol_options,
    ACTIONS(361), 27,
      anon_sym_access_DASHlist,
      anon_sym_address,
      anon_sym_community_DASHlist,
      anon_sym_dhcp,
      anon_sym_domain,
      anon_sym_extcommunity_DASHlist,
      anon_sym_host,
      anon_sym_http,
      anon_sym_igmp,
      anon_sym_local_DASHproxy_DASHarp,
      anon_sym_mroute,
      anon_sym_msdp,
      anon_sym_multicast,
      anon_sym_name_DASHserver,
      anon_sym_ospf,
      anon_sym_pim,
      anon_sym_prefix_DASHlist,
      anon_sym_proxy_DASHarp,
      anon_sym_router,
      anon_sym_routing,
      anon_sym_scp,
      anon_sym_ssh,
      anon_sym_tacacs,
      anon_sym_tcp,
      anon_sym_telnet,
      anon_sym_tftp,
      anon_sym_verify,
  [1707] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_command_name,
    ACTIONS(372), 1,
      anon_sym_managementapi,
    STATE(40), 2,
      sym_management_api_section,
      aux_sym_management_section_repeat1,
    ACTIONS(365), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(367), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1750] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_command_name,
    ACTIONS(381), 1,
      anon_sym_class,
    STATE(42), 2,
      sym_policy_map_class_section,
      aux_sym_policy_map_section_repeat1,
    ACTIONS(374), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(376), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1793] = 5,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_command_name,
    STATE(116), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(385), 2,
      anon_sym_LF,
      sym_command_args,
    ACTIONS(383), 25,
      anon_sym_end_LF,
      anon_sym_no,
      anon_sym_ipaccess_DASHlist,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_routerbgp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_ipv6access_DASHlist,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_routerospf,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1834] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_route,
    STATE(226), 1,
      sym_protocol_options,
    ACTIONS(390), 3,
      anon_sym_access_DASHlist,
      anon_sym_community_DASHlist,
      anon_sym_prefix_DASHlist,
    ACTIONS(361), 24,
      anon_sym_address,
      anon_sym_dhcp,
      anon_sym_domain,
      anon_sym_extcommunity_DASHlist,
      anon_sym_host,
      anon_sym_http,
      anon_sym_igmp,
      anon_sym_local_DASHproxy_DASHarp,
      anon_sym_mroute,
      anon_sym_msdp,
      anon_sym_multicast,
      anon_sym_name_DASHserver,
      anon_sym_ospf,
      anon_sym_pim,
      anon_sym_proxy_DASHarp,
      anon_sym_router,
      anon_sym_routing,
      anon_sym_scp,
      anon_sym_ssh,
      anon_sym_tacacs,
      anon_sym_tcp,
      anon_sym_telnet,
      anon_sym_tftp,
      anon_sym_verify,
  [1875] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_route,
    STATE(232), 1,
      sym_protocol_options,
    ACTIONS(394), 2,
      anon_sym_access_DASHlist,
      anon_sym_prefix_DASHlist,
    ACTIONS(361), 25,
      anon_sym_address,
      anon_sym_community_DASHlist,
      anon_sym_dhcp,
      anon_sym_domain,
      anon_sym_extcommunity_DASHlist,
      anon_sym_host,
      anon_sym_http,
      anon_sym_igmp,
      anon_sym_local_DASHproxy_DASHarp,
      anon_sym_mroute,
      anon_sym_msdp,
      anon_sym_multicast,
      anon_sym_name_DASHserver,
      anon_sym_ospf,
      anon_sym_pim,
      anon_sym_proxy_DASHarp,
      anon_sym_router,
      anon_sym_routing,
      anon_sym_scp,
      anon_sym_ssh,
      anon_sym_tacacs,
      anon_sym_tcp,
      anon_sym_telnet,
      anon_sym_tftp,
      anon_sym_verify,
  [1916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(400), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_neighbor,
      anon_sym_network,
      anon_sym_redistribute,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1953] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_header_comment_repeat1,
    ACTIONS(7), 2,
      anon_sym_BANG,
      aux_sym_header_comment_token1,
    ACTIONS(402), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(404), 21,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [1994] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_name,
    ACTIONS(410), 1,
      sym_command_name,
    STATE(62), 2,
      sym_vlan_name,
      aux_sym_vlan_section_repeat1,
    ACTIONS(406), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(408), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2037] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_command_name,
    ACTIONS(420), 1,
      anon_sym_address_DASHfamily,
    STATE(69), 1,
      aux_sym_aaa_section_repeat1,
    STATE(122), 1,
      sym_vrf_address_family_section,
    ACTIONS(413), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(415), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2082] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_address_DASHfamily,
    ACTIONS(422), 1,
      sym_command_name,
    STATE(46), 1,
      aux_sym_aaa_section_repeat1,
    STATE(122), 1,
      sym_vrf_address_family_section,
    ACTIONS(413), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(415), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2127] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_managementapi,
    ACTIONS(429), 1,
      sym_command_name,
    STATE(47), 2,
      sym_management_api_section,
      aux_sym_management_section_repeat1,
    ACTIONS(425), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(427), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2170] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_managementapi,
    ACTIONS(432), 1,
      sym_command_name,
    STATE(48), 2,
      sym_management_api_section,
      aux_sym_management_section_repeat1,
    ACTIONS(425), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(427), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2213] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_class,
    ACTIONS(439), 1,
      sym_command_name,
    STATE(49), 2,
      sym_policy_map_class_section,
      aux_sym_policy_map_section_repeat1,
    ACTIONS(435), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(437), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_route,
    STATE(232), 1,
      sym_protocol_options,
    ACTIONS(361), 27,
      anon_sym_access_DASHlist,
      anon_sym_address,
      anon_sym_community_DASHlist,
      anon_sym_dhcp,
      anon_sym_domain,
      anon_sym_extcommunity_DASHlist,
      anon_sym_host,
      anon_sym_http,
      anon_sym_igmp,
      anon_sym_local_DASHproxy_DASHarp,
      anon_sym_mroute,
      anon_sym_msdp,
      anon_sym_multicast,
      anon_sym_name_DASHserver,
      anon_sym_ospf,
      anon_sym_pim,
      anon_sym_prefix_DASHlist,
      anon_sym_proxy_DASHarp,
      anon_sym_router,
      anon_sym_routing,
      anon_sym_scp,
      anon_sym_ssh,
      anon_sym_tacacs,
      anon_sym_tcp,
      anon_sym_telnet,
      anon_sym_tftp,
      anon_sym_verify,
  [2295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_header_comment_repeat1,
    ACTIONS(444), 2,
      anon_sym_BANG,
      aux_sym_header_comment_token1,
    ACTIONS(442), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(447), 21,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(451), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_match,
      anon_sym_set,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2373] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_address_DASHfamily,
    ACTIONS(457), 1,
      sym_command_name,
    STATE(69), 1,
      aux_sym_aaa_section_repeat1,
    STATE(123), 1,
      sym_vrf_address_family_section,
    ACTIONS(453), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(455), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_command_name,
    ACTIONS(467), 1,
      anon_sym_managementapi,
    STATE(47), 2,
      sym_management_api_section,
      aux_sym_management_section_repeat1,
    ACTIONS(460), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(462), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2461] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_managementapi,
    ACTIONS(474), 1,
      sym_command_name,
    STATE(47), 2,
      sym_management_api_section,
      aux_sym_management_section_repeat1,
    ACTIONS(470), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(472), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2504] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_command_name,
    ACTIONS(484), 1,
      anon_sym_class,
    STATE(49), 2,
      sym_policy_map_class_section,
      aux_sym_policy_map_section_repeat1,
    ACTIONS(477), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(479), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(489), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_neighbor,
      anon_sym_network,
      anon_sym_redistribute,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(493), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_neighbor,
      anon_sym_network,
      anon_sym_redistribute,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(497), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_match,
      anon_sym_set,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(501), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_neighbor,
      anon_sym_network,
      anon_sym_redistribute,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(505), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_neighbor,
      anon_sym_network,
      anon_sym_redistribute,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(509), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_neighbor,
      anon_sym_network,
      anon_sym_redistribute,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(513), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_match,
      anon_sym_set,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2806] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_address_DASHfamily,
    ACTIONS(519), 1,
      sym_command_name,
    STATE(38), 1,
      aux_sym_aaa_section_repeat1,
    STATE(120), 1,
      sym_vrf_address_family_section,
    ACTIONS(515), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(517), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(524), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_match,
      anon_sym_set,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(528), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_match,
      anon_sym_set,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(532), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_match,
      anon_sym_set,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(536), 24,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_description,
      anon_sym_match,
      anon_sym_set,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [2999] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym_command_name,
    ACTIONS(545), 1,
      anon_sym_name,
    STATE(62), 2,
      sym_vlan_name,
      aux_sym_vlan_section_repeat1,
    ACTIONS(538), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(540), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym_command_name,
    STATE(70), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(548), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(550), 21,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_class,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_command_name,
    STATE(64), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(555), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_managementapi,
      anon_sym_routerospf,
    ACTIONS(557), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(564), 23,
      anon_sym_BANG,
      aux_sym_header_comment_token1,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3158] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_command_name,
    STATE(63), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(566), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(568), 21,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_class,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3198] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_command_name,
    STATE(68), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(573), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_managementapi,
      anon_sym_routerospf,
    ACTIONS(575), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3238] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym_command_name,
    STATE(64), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(580), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_managementapi,
      anon_sym_routerospf,
    ACTIONS(582), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3278] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym_command_name,
    STATE(69), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(555), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(557), 21,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
      anon_sym_address_DASHfamily,
  [3318] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_command_name,
    STATE(70), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(555), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(557), 21,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_class,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3358] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym_command_name,
    STATE(88), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(593), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(595), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(600), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(602), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_command_name,
    STATE(102), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(607), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(609), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(614), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(616), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3514] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym_command_name,
    STATE(91), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(614), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(616), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3553] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(624), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(626), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_command_name,
    STATE(92), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(624), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(626), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3631] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(634), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(636), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym_command_name,
    STATE(78), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(600), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(602), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3709] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(644), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(646), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3748] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(651), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(653), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_command_name,
    STATE(114), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(658), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(660), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(665), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(667), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3865] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(672), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(674), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_command_name,
    STATE(101), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(679), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(681), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3943] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(686), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(688), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [3982] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym_command_name,
    STATE(81), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(693), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(695), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4021] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(700), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(702), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4060] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(707), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(709), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4099] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_command_name,
    STATE(72), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(714), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(716), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(721), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(723), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(728), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(730), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4216] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_command_name,
    STATE(76), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(735), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(737), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(744), 22,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
      anon_sym_name,
  [4290] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym_command_name,
    STATE(103), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(746), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(748), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_managementapi,
      anon_sym_routerospf,
    ACTIONS(755), 21,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4364] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(757), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(759), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4403] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(555), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(557), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4442] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(767), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(769), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_command_name,
    STATE(116), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(774), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(383), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4520] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(776), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(778), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4559] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(783), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(785), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4598] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(790), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(792), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym_command_name,
    STATE(109), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(790), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(792), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_managementapi,
      anon_sym_routerospf,
    ACTIONS(802), 21,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4711] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_command_name,
    STATE(83), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(776), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(778), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4750] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      sym_command_name,
    STATE(84), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(807), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(809), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4789] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_command_name,
    STATE(97), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(814), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(816), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(821), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(823), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4867] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_command_name,
    STATE(99), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(783), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(785), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 6,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_managementapi,
      anon_sym_routerospf,
    ACTIONS(833), 21,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      sym_command_name,
    STATE(74), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(835), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(837), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [4980] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym_command_name,
    STATE(86), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(842), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(844), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [5019] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(849), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(851), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [5058] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym_command_name,
    STATE(89), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(849), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(851), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [5097] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym_command_name,
    STATE(98), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(859), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(861), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [5136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym_command_name,
    STATE(80), 1,
      aux_sym_aaa_section_repeat1,
    ACTIONS(866), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(868), 20,
      anon_sym_no,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [5175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(875), 21,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [5209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(879), 21,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [5243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(415), 21,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [5277] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_hostname,
    ACTIONS(31), 1,
      anon_sym_username,
    ACTIONS(881), 1,
      sym_command_name,
    ACTIONS(883), 1,
      anon_sym_ipaccess_DASHlist,
    ACTIONS(885), 1,
      anon_sym_interface,
    ACTIONS(887), 1,
      anon_sym_ip,
    ACTIONS(889), 1,
      anon_sym_ipv6,
    ACTIONS(891), 1,
      anon_sym_ntp,
    ACTIONS(893), 1,
      anon_sym_routerbgp,
    ACTIONS(895), 1,
      anon_sym_route_DASHmap,
    ACTIONS(897), 1,
      anon_sym_tacacs_DASHserver,
    ACTIONS(899), 1,
      anon_sym_vlan,
    ACTIONS(901), 1,
      anon_sym_vrf,
    STATE(197), 1,
      sym_command,
    STATE(192), 12,
      sym_command_access_list,
      sym_command_hostname,
      sym_command_interface,
      sym_command_ip,
      sym_command_ipv6,
      sym_command_ntp,
      sym_command_router_bgp,
      sym_command_route_map,
      sym_command_tacacs_server,
      sym_command_username,
      sym_command_vlan,
      sym_command_vrf,
  [5337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(455), 21,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [5371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(905), 21,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [5405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 5,
      anon_sym_end_LF,
      anon_sym_ipaccess_DASHlist,
      anon_sym_routerbgp,
      anon_sym_ipv6access_DASHlist,
      anon_sym_routerospf,
    ACTIONS(909), 21,
      anon_sym_no,
      sym_command_name,
      anon_sym_hostname,
      anon_sym_interface,
      anon_sym_ip,
      anon_sym_ipv6,
      anon_sym_ntp,
      anon_sym_route_DASHmap,
      anon_sym_tacacs_DASHserver,
      anon_sym_username,
      anon_sym_vlan,
      anon_sym_vrf,
      anon_sym_aaa,
      anon_sym_class_DASHmap,
      anon_sym_key,
      anon_sym_management,
      anon_sym_monitor,
      anon_sym_policy_DASHmap,
      anon_sym_service,
      anon_sym_snmp_DASHserver,
      anon_sym_spanning_DASHtree,
  [5439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(196), 1,
      sym_route_map_set_action,
    ACTIONS(911), 3,
      anon_sym_ip,
      anon_sym_metric,
      anon_sym_origin,
    ACTIONS(913), 13,
      anon_sym_ipv6,
      anon_sym_as_DASHpath,
      anon_sym_community,
      anon_sym_extcommunity,
      anon_sym_tag,
      anon_sym_aggregator,
      anon_sym_atomic_DASHaggregate,
      anon_sym_comm_DASHlist,
      anon_sym_dampening,
      anon_sym_local_DASHpreference,
      anon_sym_metric_DASHtype,
      anon_sym_originator_DASHid,
      anon_sym_weight,
  [5466] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_ip,
    ACTIONS(917), 1,
      anon_sym_ipv6,
    ACTIONS(919), 1,
      anon_sym_vrf,
    ACTIONS(921), 1,
      anon_sym_description,
    ACTIONS(923), 1,
      anon_sym_switchport,
    STATE(27), 1,
      sym_interface_command,
    ACTIONS(191), 2,
      anon_sym_shutdown,
      anon_sym_noshutdown,
    STATE(20), 6,
      sym_interface_command_description,
      sym_interface_command_ip,
      sym_interface_command_ipv6,
      sym_interface_command_shutdown,
      sym_interface_command_switchport,
      sym_interface_command_vrf,
  [5500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_ip,
    STATE(142), 1,
      sym_route_map_match_condition,
    ACTIONS(925), 10,
      anon_sym_interface,
      anon_sym_ipv6,
      anon_sym_as_DASHpath,
      anon_sym_community,
      anon_sym_extcommunity,
      anon_sym_metric,
      anon_sym_origin,
      anon_sym_route_DASHtype,
      anon_sym_source_DASHprotocol,
      anon_sym_tag,
  [5522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 10,
      anon_sym_host,
      anon_sym_community,
      anon_sym_contact,
      anon_sym_enable,
      anon_sym_group,
      anon_sym_location,
      anon_sym_source_DASHinterface,
      anon_sym_trap_DASHsource,
      anon_sym_user,
      anon_sym_view,
  [5538] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_command_args,
    ACTIONS(933), 4,
      anon_sym_authenticate,
      anon_sym_authentication_DASHkey,
      anon_sym_server,
      anon_sym_trusted_DASHkey,
  [5551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 5,
      anon_sym_ssh,
      anon_sym_telnet,
      anon_sym_api,
      anon_sym_console,
      anon_sym_security,
  [5562] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      sym_command_name,
    ACTIONS(939), 1,
      anon_sym_vrf,
    STATE(96), 1,
      sym_management_api_vrf_section,
    STATE(134), 1,
      aux_sym_aaa_section_repeat1,
  [5578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_vrf,
    ACTIONS(941), 1,
      sym_command_name,
    STATE(111), 1,
      sym_management_api_vrf_section,
    STATE(141), 1,
      aux_sym_aaa_section_repeat1,
  [5594] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_vrf,
    ACTIONS(943), 1,
      sym_command_name,
    STATE(105), 1,
      sym_management_api_vrf_section,
    STATE(132), 1,
      aux_sym_aaa_section_repeat1,
  [5610] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_vrf,
    ACTIONS(941), 1,
      sym_command_name,
    STATE(105), 1,
      sym_management_api_vrf_section,
    STATE(141), 1,
      aux_sym_aaa_section_repeat1,
  [5626] = 4,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_command_args,
    ACTIONS(947), 1,
      sym_name,
    ACTIONS(949), 1,
      anon_sym_definition,
  [5639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 3,
      anon_sym_ospf,
      anon_sym_connected,
      anon_sym_static,
  [5648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(186), 1,
      sym_route_map_action,
    ACTIONS(953), 2,
      anon_sym_permit,
      anon_sym_deny,
  [5659] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym_command_args,
    ACTIONS(957), 2,
      anon_sym_host,
      anon_sym_key,
  [5670] = 4,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym_command_args,
    ACTIONS(961), 1,
      aux_sym_command_vlan_token1,
    STATE(156), 1,
      sym_bgp_asn,
  [5683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(202), 1,
      sym_route_map_action,
    ACTIONS(953), 2,
      anon_sym_permit,
      anon_sym_deny,
  [5694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_vrf,
    ACTIONS(963), 1,
      sym_command_name,
    STATE(141), 1,
      aux_sym_aaa_section_repeat1,
  [5707] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_LF,
    ACTIONS(968), 1,
      sym_command_args,
  [5717] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_LF,
    ACTIONS(972), 1,
      sym_command_args,
  [5727] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_LF,
      sym_command_args,
  [5735] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(976), 2,
      anon_sym_LF,
      sym_command_args,
  [5743] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_LF,
    ACTIONS(980), 1,
      sym_command_args,
  [5753] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(982), 2,
      anon_sym_LF,
      sym_command_args,
  [5761] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_LF,
    ACTIONS(986), 1,
      sym_command_args,
  [5771] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_command_args,
    ACTIONS(990), 1,
      sym_name,
  [5781] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(992), 2,
      anon_sym_LF,
      sym_command_args,
  [5789] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(994), 2,
      anon_sym_LF,
      sym_command_args,
  [5797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 2,
      anon_sym_ipv6,
      anon_sym_ipv4,
  [5805] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_command_args,
    ACTIONS(998), 1,
      sym_name,
  [5815] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_LF,
    ACTIONS(1002), 1,
      sym_command_args,
  [5825] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1004), 2,
      anon_sym_LF,
      sym_command_args,
  [5833] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_LF,
    ACTIONS(1008), 1,
      sym_command_args,
  [5843] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_LF,
    ACTIONS(1012), 1,
      sym_command_args,
  [5853] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_LF,
    ACTIONS(1016), 1,
      anon_sym_http_DASHcommands,
  [5863] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_LF,
    ACTIONS(1020), 1,
      sym_command_args,
  [5873] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_LF,
    ACTIONS(1024), 1,
      sym_command_args,
  [5883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 2,
      anon_sym_standard,
      anon_sym_extended,
  [5891] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_LF,
      sym_command_args,
  [5899] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_LF,
      sym_command_args,
  [5907] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(986), 1,
      sym_command_args,
    ACTIONS(1028), 1,
      anon_sym_LF,
  [5917] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1030), 2,
      anon_sym_LF,
      sym_command_args,
  [5925] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_LF,
    ACTIONS(1034), 1,
      sym_command_args,
  [5935] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LF,
    ACTIONS(1038), 1,
      sym_command_args,
  [5945] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_LF,
    ACTIONS(1042), 1,
      sym_command_args,
  [5955] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_LF,
    ACTIONS(1046), 1,
      sym_command_args,
  [5965] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_LF,
      sym_command_args,
  [5973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 2,
      anon_sym_key,
      anon_sym_chain,
  [5981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 2,
      anon_sym_session,
      anon_sym_replication,
  [5989] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_LF,
    ACTIONS(1054), 1,
      anon_sym_unicast,
  [5999] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1056), 2,
      anon_sym_LF,
      sym_command_args,
  [6007] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_LF,
    ACTIONS(1060), 1,
      sym_command_args,
  [6017] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1024), 1,
      sym_command_args,
    ACTIONS(1062), 1,
      anon_sym_LF,
  [6027] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_LF,
    ACTIONS(1066), 1,
      sym_command_args,
  [6037] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1068), 2,
      anon_sym_LF,
      sym_command_args,
  [6045] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_LF,
      sym_command_args,
  [6053] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_LF,
    ACTIONS(1072), 1,
      sym_command_args,
  [6063] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_LF,
    ACTIONS(1076), 1,
      sym_command_args,
  [6073] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1078), 2,
      anon_sym_LF,
      sym_command_args,
  [6081] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1080), 2,
      anon_sym_LF,
      sym_command_args,
  [6089] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_LF,
    ACTIONS(1084), 1,
      sym_command_args,
  [6099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_vlan,
      anon_sym_mode,
  [6107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      aux_sym_command_vlan_token1,
    STATE(148), 1,
      sym_sequence,
  [6117] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1090), 2,
      anon_sym_LF,
      sym_command_args,
  [6125] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1092), 2,
      anon_sym_LF,
      sym_command_args,
  [6133] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1094), 2,
      anon_sym_LF,
      sym_command_args,
  [6141] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_LF,
      sym_command_args,
  [6149] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_LF,
    ACTIONS(1100), 1,
      sym_command_args,
  [6159] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1102), 2,
      anon_sym_LF,
      sym_command_args,
  [6167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 2,
      anon_sym_standard,
      anon_sym_extended,
  [6175] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1106), 2,
      anon_sym_LF,
      sym_command_args,
  [6183] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1108), 2,
      anon_sym_LF,
      sym_command_args,
  [6191] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LF,
    ACTIONS(1112), 1,
      sym_command_args,
  [6201] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_LF,
    ACTIONS(1116), 1,
      sym_command_args,
  [6211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 2,
      anon_sym_standard,
      anon_sym_extended,
  [6219] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1120), 2,
      anon_sym_LF,
      sym_command_args,
  [6227] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym_command_args,
    ACTIONS(1122), 1,
      anon_sym_LF,
  [6237] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(142), 2,
      anon_sym_LF,
      sym_command_args,
  [6245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      aux_sym_command_vlan_token1,
    STATE(164), 1,
      sym_sequence,
  [6255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      sym_name,
    ACTIONS(1126), 1,
      anon_sym_match_DASHany,
  [6265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      sym_name,
  [6272] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_LF,
  [6279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym_name,
  [6286] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_LF,
  [6293] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_LF,
  [6300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      sym_name,
  [6307] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_LF,
  [6314] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_LF,
  [6321] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_LF,
  [6328] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1146), 1,
      sym_command_args,
  [6335] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1148), 1,
      sym_command_args,
  [6342] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1150), 1,
      sym_command_args,
  [6349] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_command_args,
  [6356] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym_command_args,
  [6363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      ts_builtin_sym_end,
  [6370] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1154), 1,
      sym_command_args,
  [6377] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_command_args,
  [6384] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_LF,
  [6391] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1158), 1,
      aux_sym_header_comment_token2,
  [6398] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_LF,
  [6405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym_name,
  [6412] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym_command_args,
  [6419] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1164), 1,
      sym_command_args,
  [6426] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_LF,
  [6433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_name,
  [6440] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_LF,
  [6447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      sym_name,
  [6454] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_LF,
  [6461] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1176), 1,
      sym_command_args,
  [6468] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1178), 1,
      sym_command_args,
  [6475] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_LF,
  [6482] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_LF,
  [6489] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym_command_args,
  [6496] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1186), 1,
      sym_command_args,
  [6503] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_LF,
  [6510] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_LF,
  [6517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      aux_sym_command_vlan_token1,
  [6524] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_LF,
  [6531] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_LF,
  [6538] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_LF,
  [6545] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_LF,
  [6552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_forwarding,
  [6559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      ts_builtin_sym_end,
  [6566] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_LF,
  [6573] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_LF,
  [6580] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_LF,
  [6587] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_command_args,
  [6594] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_LF,
  [6601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      aux_sym_command_vlan_token1,
  [6608] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym_command_args,
  [6615] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1218), 1,
      anon_sym_LF,
  [6622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      aux_sym_command_vlan_token1,
  [6629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      sym_name,
  [6636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      sym_name,
  [6643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      sym_bgp_neighbor,
  [6650] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_LF,
  [6657] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1230), 1,
      anon_sym_LF,
  [6664] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_LF,
  [6671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      sym_name,
  [6678] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_LF,
  [6685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      ts_builtin_sym_end,
  [6692] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1240), 1,
      anon_sym_LF,
  [6699] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1242), 1,
      anon_sym_LF,
  [6706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      sym_name,
  [6713] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1246), 1,
      anon_sym_LF,
  [6720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      sym_ip_prefix,
  [6727] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_LF,
  [6734] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_LF,
  [6741] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1254), 1,
      anon_sym_LF,
  [6748] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_LF,
  [6755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      sym_name,
  [6762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      sym_name,
  [6769] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_LF,
  [6776] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_LF,
  [6783] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_LF,
  [6790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      sym_name,
  [6797] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1270), 1,
      anon_sym_LF,
  [6804] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_LF,
  [6811] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_LF,
  [6818] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_LF,
  [6825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      sym_name,
  [6832] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1280), 1,
      sym_command_args,
  [6839] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_LF,
  [6846] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1284), 1,
      anon_sym_LF,
  [6853] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1286), 1,
      anon_sym_LF,
  [6860] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_LF,
  [6867] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1290), 1,
      anon_sym_LF,
  [6874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      ts_builtin_sym_end,
  [6881] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_LF,
  [6888] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_LF,
  [6895] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_LF,
  [6902] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_LF,
  [6909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      sym_name,
  [6916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      sym_name,
  [6923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      sym_name,
  [6930] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 127,
  [SMALL_STATE(4)] = 254,
  [SMALL_STATE(5)] = 381,
  [SMALL_STATE(6)] = 508,
  [SMALL_STATE(7)] = 577,
  [SMALL_STATE(8)] = 646,
  [SMALL_STATE(9)] = 715,
  [SMALL_STATE(10)] = 784,
  [SMALL_STATE(11)] = 853,
  [SMALL_STATE(12)] = 907,
  [SMALL_STATE(13)] = 959,
  [SMALL_STATE(14)] = 1013,
  [SMALL_STATE(15)] = 1067,
  [SMALL_STATE(16)] = 1121,
  [SMALL_STATE(17)] = 1175,
  [SMALL_STATE(18)] = 1229,
  [SMALL_STATE(19)] = 1281,
  [SMALL_STATE(20)] = 1326,
  [SMALL_STATE(21)] = 1364,
  [SMALL_STATE(22)] = 1402,
  [SMALL_STATE(23)] = 1440,
  [SMALL_STATE(24)] = 1478,
  [SMALL_STATE(25)] = 1516,
  [SMALL_STATE(26)] = 1554,
  [SMALL_STATE(27)] = 1592,
  [SMALL_STATE(28)] = 1630,
  [SMALL_STATE(29)] = 1668,
  [SMALL_STATE(30)] = 1707,
  [SMALL_STATE(31)] = 1750,
  [SMALL_STATE(32)] = 1793,
  [SMALL_STATE(33)] = 1834,
  [SMALL_STATE(34)] = 1875,
  [SMALL_STATE(35)] = 1916,
  [SMALL_STATE(36)] = 1953,
  [SMALL_STATE(37)] = 1994,
  [SMALL_STATE(38)] = 2037,
  [SMALL_STATE(39)] = 2082,
  [SMALL_STATE(40)] = 2127,
  [SMALL_STATE(41)] = 2170,
  [SMALL_STATE(42)] = 2213,
  [SMALL_STATE(43)] = 2256,
  [SMALL_STATE(44)] = 2295,
  [SMALL_STATE(45)] = 2336,
  [SMALL_STATE(46)] = 2373,
  [SMALL_STATE(47)] = 2418,
  [SMALL_STATE(48)] = 2461,
  [SMALL_STATE(49)] = 2504,
  [SMALL_STATE(50)] = 2547,
  [SMALL_STATE(51)] = 2584,
  [SMALL_STATE(52)] = 2621,
  [SMALL_STATE(53)] = 2658,
  [SMALL_STATE(54)] = 2695,
  [SMALL_STATE(55)] = 2732,
  [SMALL_STATE(56)] = 2769,
  [SMALL_STATE(57)] = 2806,
  [SMALL_STATE(58)] = 2851,
  [SMALL_STATE(59)] = 2888,
  [SMALL_STATE(60)] = 2925,
  [SMALL_STATE(61)] = 2962,
  [SMALL_STATE(62)] = 2999,
  [SMALL_STATE(63)] = 3042,
  [SMALL_STATE(64)] = 3082,
  [SMALL_STATE(65)] = 3122,
  [SMALL_STATE(66)] = 3158,
  [SMALL_STATE(67)] = 3198,
  [SMALL_STATE(68)] = 3238,
  [SMALL_STATE(69)] = 3278,
  [SMALL_STATE(70)] = 3318,
  [SMALL_STATE(71)] = 3358,
  [SMALL_STATE(72)] = 3397,
  [SMALL_STATE(73)] = 3436,
  [SMALL_STATE(74)] = 3475,
  [SMALL_STATE(75)] = 3514,
  [SMALL_STATE(76)] = 3553,
  [SMALL_STATE(77)] = 3592,
  [SMALL_STATE(78)] = 3631,
  [SMALL_STATE(79)] = 3670,
  [SMALL_STATE(80)] = 3709,
  [SMALL_STATE(81)] = 3748,
  [SMALL_STATE(82)] = 3787,
  [SMALL_STATE(83)] = 3826,
  [SMALL_STATE(84)] = 3865,
  [SMALL_STATE(85)] = 3904,
  [SMALL_STATE(86)] = 3943,
  [SMALL_STATE(87)] = 3982,
  [SMALL_STATE(88)] = 4021,
  [SMALL_STATE(89)] = 4060,
  [SMALL_STATE(90)] = 4099,
  [SMALL_STATE(91)] = 4138,
  [SMALL_STATE(92)] = 4177,
  [SMALL_STATE(93)] = 4216,
  [SMALL_STATE(94)] = 4255,
  [SMALL_STATE(95)] = 4290,
  [SMALL_STATE(96)] = 4329,
  [SMALL_STATE(97)] = 4364,
  [SMALL_STATE(98)] = 4403,
  [SMALL_STATE(99)] = 4442,
  [SMALL_STATE(100)] = 4481,
  [SMALL_STATE(101)] = 4520,
  [SMALL_STATE(102)] = 4559,
  [SMALL_STATE(103)] = 4598,
  [SMALL_STATE(104)] = 4637,
  [SMALL_STATE(105)] = 4676,
  [SMALL_STATE(106)] = 4711,
  [SMALL_STATE(107)] = 4750,
  [SMALL_STATE(108)] = 4789,
  [SMALL_STATE(109)] = 4828,
  [SMALL_STATE(110)] = 4867,
  [SMALL_STATE(111)] = 4906,
  [SMALL_STATE(112)] = 4941,
  [SMALL_STATE(113)] = 4980,
  [SMALL_STATE(114)] = 5019,
  [SMALL_STATE(115)] = 5058,
  [SMALL_STATE(116)] = 5097,
  [SMALL_STATE(117)] = 5136,
  [SMALL_STATE(118)] = 5175,
  [SMALL_STATE(119)] = 5209,
  [SMALL_STATE(120)] = 5243,
  [SMALL_STATE(121)] = 5277,
  [SMALL_STATE(122)] = 5337,
  [SMALL_STATE(123)] = 5371,
  [SMALL_STATE(124)] = 5405,
  [SMALL_STATE(125)] = 5439,
  [SMALL_STATE(126)] = 5466,
  [SMALL_STATE(127)] = 5500,
  [SMALL_STATE(128)] = 5522,
  [SMALL_STATE(129)] = 5538,
  [SMALL_STATE(130)] = 5551,
  [SMALL_STATE(131)] = 5562,
  [SMALL_STATE(132)] = 5578,
  [SMALL_STATE(133)] = 5594,
  [SMALL_STATE(134)] = 5610,
  [SMALL_STATE(135)] = 5626,
  [SMALL_STATE(136)] = 5639,
  [SMALL_STATE(137)] = 5648,
  [SMALL_STATE(138)] = 5659,
  [SMALL_STATE(139)] = 5670,
  [SMALL_STATE(140)] = 5683,
  [SMALL_STATE(141)] = 5694,
  [SMALL_STATE(142)] = 5707,
  [SMALL_STATE(143)] = 5717,
  [SMALL_STATE(144)] = 5727,
  [SMALL_STATE(145)] = 5735,
  [SMALL_STATE(146)] = 5743,
  [SMALL_STATE(147)] = 5753,
  [SMALL_STATE(148)] = 5761,
  [SMALL_STATE(149)] = 5771,
  [SMALL_STATE(150)] = 5781,
  [SMALL_STATE(151)] = 5789,
  [SMALL_STATE(152)] = 5797,
  [SMALL_STATE(153)] = 5805,
  [SMALL_STATE(154)] = 5815,
  [SMALL_STATE(155)] = 5825,
  [SMALL_STATE(156)] = 5833,
  [SMALL_STATE(157)] = 5843,
  [SMALL_STATE(158)] = 5853,
  [SMALL_STATE(159)] = 5863,
  [SMALL_STATE(160)] = 5873,
  [SMALL_STATE(161)] = 5883,
  [SMALL_STATE(162)] = 5891,
  [SMALL_STATE(163)] = 5899,
  [SMALL_STATE(164)] = 5907,
  [SMALL_STATE(165)] = 5917,
  [SMALL_STATE(166)] = 5925,
  [SMALL_STATE(167)] = 5935,
  [SMALL_STATE(168)] = 5945,
  [SMALL_STATE(169)] = 5955,
  [SMALL_STATE(170)] = 5965,
  [SMALL_STATE(171)] = 5973,
  [SMALL_STATE(172)] = 5981,
  [SMALL_STATE(173)] = 5989,
  [SMALL_STATE(174)] = 5999,
  [SMALL_STATE(175)] = 6007,
  [SMALL_STATE(176)] = 6017,
  [SMALL_STATE(177)] = 6027,
  [SMALL_STATE(178)] = 6037,
  [SMALL_STATE(179)] = 6045,
  [SMALL_STATE(180)] = 6053,
  [SMALL_STATE(181)] = 6063,
  [SMALL_STATE(182)] = 6073,
  [SMALL_STATE(183)] = 6081,
  [SMALL_STATE(184)] = 6089,
  [SMALL_STATE(185)] = 6099,
  [SMALL_STATE(186)] = 6107,
  [SMALL_STATE(187)] = 6117,
  [SMALL_STATE(188)] = 6125,
  [SMALL_STATE(189)] = 6133,
  [SMALL_STATE(190)] = 6141,
  [SMALL_STATE(191)] = 6149,
  [SMALL_STATE(192)] = 6159,
  [SMALL_STATE(193)] = 6167,
  [SMALL_STATE(194)] = 6175,
  [SMALL_STATE(195)] = 6183,
  [SMALL_STATE(196)] = 6191,
  [SMALL_STATE(197)] = 6201,
  [SMALL_STATE(198)] = 6211,
  [SMALL_STATE(199)] = 6219,
  [SMALL_STATE(200)] = 6227,
  [SMALL_STATE(201)] = 6237,
  [SMALL_STATE(202)] = 6245,
  [SMALL_STATE(203)] = 6255,
  [SMALL_STATE(204)] = 6265,
  [SMALL_STATE(205)] = 6272,
  [SMALL_STATE(206)] = 6279,
  [SMALL_STATE(207)] = 6286,
  [SMALL_STATE(208)] = 6293,
  [SMALL_STATE(209)] = 6300,
  [SMALL_STATE(210)] = 6307,
  [SMALL_STATE(211)] = 6314,
  [SMALL_STATE(212)] = 6321,
  [SMALL_STATE(213)] = 6328,
  [SMALL_STATE(214)] = 6335,
  [SMALL_STATE(215)] = 6342,
  [SMALL_STATE(216)] = 6349,
  [SMALL_STATE(217)] = 6356,
  [SMALL_STATE(218)] = 6363,
  [SMALL_STATE(219)] = 6370,
  [SMALL_STATE(220)] = 6377,
  [SMALL_STATE(221)] = 6384,
  [SMALL_STATE(222)] = 6391,
  [SMALL_STATE(223)] = 6398,
  [SMALL_STATE(224)] = 6405,
  [SMALL_STATE(225)] = 6412,
  [SMALL_STATE(226)] = 6419,
  [SMALL_STATE(227)] = 6426,
  [SMALL_STATE(228)] = 6433,
  [SMALL_STATE(229)] = 6440,
  [SMALL_STATE(230)] = 6447,
  [SMALL_STATE(231)] = 6454,
  [SMALL_STATE(232)] = 6461,
  [SMALL_STATE(233)] = 6468,
  [SMALL_STATE(234)] = 6475,
  [SMALL_STATE(235)] = 6482,
  [SMALL_STATE(236)] = 6489,
  [SMALL_STATE(237)] = 6496,
  [SMALL_STATE(238)] = 6503,
  [SMALL_STATE(239)] = 6510,
  [SMALL_STATE(240)] = 6517,
  [SMALL_STATE(241)] = 6524,
  [SMALL_STATE(242)] = 6531,
  [SMALL_STATE(243)] = 6538,
  [SMALL_STATE(244)] = 6545,
  [SMALL_STATE(245)] = 6552,
  [SMALL_STATE(246)] = 6559,
  [SMALL_STATE(247)] = 6566,
  [SMALL_STATE(248)] = 6573,
  [SMALL_STATE(249)] = 6580,
  [SMALL_STATE(250)] = 6587,
  [SMALL_STATE(251)] = 6594,
  [SMALL_STATE(252)] = 6601,
  [SMALL_STATE(253)] = 6608,
  [SMALL_STATE(254)] = 6615,
  [SMALL_STATE(255)] = 6622,
  [SMALL_STATE(256)] = 6629,
  [SMALL_STATE(257)] = 6636,
  [SMALL_STATE(258)] = 6643,
  [SMALL_STATE(259)] = 6650,
  [SMALL_STATE(260)] = 6657,
  [SMALL_STATE(261)] = 6664,
  [SMALL_STATE(262)] = 6671,
  [SMALL_STATE(263)] = 6678,
  [SMALL_STATE(264)] = 6685,
  [SMALL_STATE(265)] = 6692,
  [SMALL_STATE(266)] = 6699,
  [SMALL_STATE(267)] = 6706,
  [SMALL_STATE(268)] = 6713,
  [SMALL_STATE(269)] = 6720,
  [SMALL_STATE(270)] = 6727,
  [SMALL_STATE(271)] = 6734,
  [SMALL_STATE(272)] = 6741,
  [SMALL_STATE(273)] = 6748,
  [SMALL_STATE(274)] = 6755,
  [SMALL_STATE(275)] = 6762,
  [SMALL_STATE(276)] = 6769,
  [SMALL_STATE(277)] = 6776,
  [SMALL_STATE(278)] = 6783,
  [SMALL_STATE(279)] = 6790,
  [SMALL_STATE(280)] = 6797,
  [SMALL_STATE(281)] = 6804,
  [SMALL_STATE(282)] = 6811,
  [SMALL_STATE(283)] = 6818,
  [SMALL_STATE(284)] = 6825,
  [SMALL_STATE(285)] = 6832,
  [SMALL_STATE(286)] = 6839,
  [SMALL_STATE(287)] = 6846,
  [SMALL_STATE(288)] = 6853,
  [SMALL_STATE(289)] = 6860,
  [SMALL_STATE(290)] = 6867,
  [SMALL_STATE(291)] = 6874,
  [SMALL_STATE(292)] = 6881,
  [SMALL_STATE(293)] = 6888,
  [SMALL_STATE(294)] = 6895,
  [SMALL_STATE(295)] = 6902,
  [SMALL_STATE(296)] = 6909,
  [SMALL_STATE(297)] = 6916,
  [SMALL_STATE(298)] = 6923,
  [SMALL_STATE(299)] = 6930,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_section, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_interface, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 3, 0, 0), SHIFT(126),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 3, 0, 0), SHIFT(8),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 3, 0, 0), SHIFT(285),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 3, 0, 0), SHIFT(236),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 3, 0, 0), SHIFT(245),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_section, 4, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_interface, 4, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 4, 0, 0), SHIFT(126),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 4, 0, 0), SHIFT(9),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 4, 0, 0), SHIFT(285),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 4, 0, 0), SHIFT(236),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 4, 0, 0), SHIFT(245),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_section, 4, 0, 0),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 4, 0, 0), SHIFT(10),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_section, 5, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 5, 0, 0), SHIFT(126),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 5, 0, 0), SHIFT(10),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_section, 5, 0, 0),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 5, 0, 0), SHIFT(285),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 5, 0, 0), SHIFT(236),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interface_section, 5, 0, 0), SHIFT(245),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_section_repeat1, 2, 0, 0),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_section_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_section_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_section_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_section_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_section_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_section_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_section_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_section_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_section_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_section_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route_map_section, 5, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_route_map, 5, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_map_section_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_route_map_section_repeat1, 2, 0, 0),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_route_map_section_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_route_map_section_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_route_map_section_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_router_bgp_section, 4, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_router_bgp_section, 4, 0, 0),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_router_bgp_section, 4, 0, 0), SHIFT(17),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_router_bgp_section, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_router_bgp_section, 3, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_router_bgp_section, 3, 0, 0), SHIFT(13),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_router_bgp_section, 4, 0, 0), SHIFT(16),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_router_bgp_section, 5, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_router_bgp_section, 5, 0, 0),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_router_bgp_section, 5, 0, 0), SHIFT(17),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_router_bgp_section_repeat1, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_router_bgp_section_repeat1, 2, 0, 0),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_router_bgp_section_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_router_bgp_section_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_router_bgp_section_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_router_bgp_section_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_map_section, 6, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route_map_section, 6, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vlan_section, 3, 0, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_vlan, 3, 0, 1),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_vlan_section, 3, 0, 1), SHIFT(37),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_command, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_command, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_command_shutdown, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_command_shutdown, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_command_description, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_command_description, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_command_ip, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_command_ip, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_command_ipv6, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_command_ipv6, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_command_description, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_command_description, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_command_switchport, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_command_switchport, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negated_interface_command, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negated_interface_command, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_command_vrf, 4, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_command_vrf, 4, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_management_section, 3, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_management_section, 3, 0, 0),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_management_section, 3, 0, 0), SHIFT(40),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_map_section, 3, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_map_section, 3, 0, 0),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_policy_map_section, 3, 0, 0), SHIFT(42),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acl_section, 4, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_access_list, 4, 0, 0),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_acl_section, 4, 0, 0), SHIFT(116),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_router_bgp_command, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_router_bgp_command, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_comment, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_comment, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vlan_section, 4, 0, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vlan_section, 4, 0, 1),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_vlan_section, 4, 0, 1), SHIFT(62),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vrf_section, 4, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vrf_section, 4, 0, 0),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_vrf_section, 4, 0, 0), SHIFT(69),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_vrf_section, 4, 0, 0), SHIFT(46),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_management_section, 4, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_management_section, 4, 0, 0),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_management_section, 4, 0, 0), SHIFT(47),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_management_section, 4, 0, 0), SHIFT(48),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_map_section, 4, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_map_section, 4, 0, 0),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_policy_map_section, 4, 0, 0), SHIFT(49),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_comment_repeat1, 2, 0, 0),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_comment_repeat1, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_map_command_set, 4, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route_map_command_set, 4, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vrf_section, 5, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vrf_section, 5, 0, 0),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_vrf_section, 5, 0, 0), SHIFT(69),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_management_section_repeat1, 2, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_management_section_repeat1, 2, 0, 0),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_management_section_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_management_section_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_management_section, 5, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_management_section, 5, 0, 0),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_management_section, 5, 0, 0), SHIFT(47),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_policy_map_section_repeat1, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_policy_map_section_repeat1, 2, 0, 0),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_policy_map_section_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_policy_map_section_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_router_bgp_command_network, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_router_bgp_command_network, 3, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_router_bgp_command_redistribute, 3, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_router_bgp_command_redistribute, 3, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_map_command, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route_map_command, 1, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_router_bgp_command_neighbor, 4, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_router_bgp_command_neighbor, 4, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_router_bgp_command_network, 4, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_router_bgp_command_network, 4, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_router_bgp_command_redistribute, 4, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_router_bgp_command_redistribute, 4, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_map_command_description, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route_map_command_description, 2, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vrf_section, 3, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vrf_section, 3, 0, 0),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_vrf_section, 3, 0, 0), SHIFT(38),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_map_command_description, 3, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route_map_command_description, 3, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_map_command_match, 3, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route_map_command_match, 3, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_map_command_set, 3, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route_map_command_set, 3, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_map_command_match, 4, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route_map_command_match, 4, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vlan_section_repeat1, 2, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vlan_section_repeat1, 2, 0, 0),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vlan_section_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vlan_section_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_map_class_section, 4, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_map_class_section, 4, 0, 0),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_policy_map_class_section, 4, 0, 0), SHIFT(70),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aaa_section_repeat1, 2, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_aaa_section_repeat1, 2, 0, 0),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_aaa_section_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_comment_repeat1, 3, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_comment_repeat1, 3, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_map_class_section, 3, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_map_class_section, 3, 0, 0),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_policy_map_class_section, 3, 0, 0), SHIFT(63),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_management_api_vrf_section, 3, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_management_api_vrf_section, 3, 0, 0),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_management_api_vrf_section, 3, 0, 0), SHIFT(68),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_management_api_vrf_section, 4, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_management_api_vrf_section, 4, 0, 0),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_management_api_vrf_section, 4, 0, 0), SHIFT(64),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_aaa_section_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_aaa_section_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_server_section, 4, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snmp_server_section, 4, 0, 0),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_snmp_server_section, 4, 0, 0), SHIFT(88),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntp_section, 4, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ntp_section, 4, 0, 0),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ntp_section, 4, 0, 0), SHIFT(98),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aaa_section, 2, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aaa_section, 2, 0, 0),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_aaa_section, 2, 0, 0), SHIFT(102),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_section, 5, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ip_section, 5, 0, 0),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ip_section, 5, 0, 0), SHIFT(98),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ip_section, 5, 0, 0), SHIFT(91),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_section, 5, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ipv6_section, 5, 0, 0),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ipv6_section, 5, 0, 0), SHIFT(98),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ipv6_section, 5, 0, 0), SHIFT(92),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntp_section, 5, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ntp_section, 5, 0, 0),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ntp_section, 5, 0, 0), SHIFT(98),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ntp_section, 4, 0, 0), SHIFT(78),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_router_ospf_section, 4, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_router_ospf_section, 4, 0, 0),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_router_ospf_section, 4, 0, 0), SHIFT(98),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tacacs_server_section, 5, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tacacs_server_section, 5, 0, 0),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tacacs_server_section, 5, 0, 0), SHIFT(98),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spanning_tree_section, 3, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spanning_tree_section, 3, 0, 0),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_spanning_tree_section, 3, 0, 0), SHIFT(114),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_map_section, 5, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_map_section, 5, 0, 0),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_class_map_section, 5, 0, 0), SHIFT(98),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_section, 5, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_section, 5, 0, 0),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_key_section, 5, 0, 0), SHIFT(98),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_map_section, 3, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_map_section, 3, 0, 0),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_class_map_section, 3, 0, 0), SHIFT(101),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monitor_section, 5, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_monitor_section, 5, 0, 0),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_monitor_section, 5, 0, 0), SHIFT(98),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tacacs_server_section, 4, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tacacs_server_section, 4, 0, 0),
  [697] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tacacs_server_section, 4, 0, 0), SHIFT(81),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_server_section, 5, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snmp_server_section, 5, 0, 0),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_snmp_server_section, 5, 0, 0), SHIFT(98),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spanning_tree_section, 5, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spanning_tree_section, 5, 0, 0),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_spanning_tree_section, 5, 0, 0), SHIFT(98),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntp_section, 3, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ntp_section, 3, 0, 0),
  [718] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ntp_section, 3, 0, 0), SHIFT(72),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_section, 6, 0, 0),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ip_section, 6, 0, 0),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ip_section, 6, 0, 0), SHIFT(98),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_section, 6, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ipv6_section, 6, 0, 0),
  [732] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ipv6_section, 6, 0, 0), SHIFT(98),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_section, 4, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ipv6_section, 4, 0, 0),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ipv6_section, 4, 0, 0), SHIFT(76),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vlan_name, 3, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vlan_name, 3, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vrf_address_family_section, 3, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vrf_address_family_section, 3, 0, 0),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_vrf_address_family_section, 3, 0, 0), SHIFT(103),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_management_api_section, 3, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_management_api_section, 3, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_section, 4, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_section, 4, 0, 0),
  [761] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_service_section, 4, 0, 0), SHIFT(98),
  [764] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_aaa_section_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aaa_section, 4, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aaa_section, 4, 0, 0),
  [771] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_aaa_section, 4, 0, 0), SHIFT(98),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_section, 4, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_map_section, 4, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_map_section, 4, 0, 0),
  [780] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_class_map_section, 4, 0, 0), SHIFT(98),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aaa_section, 3, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aaa_section, 3, 0, 0),
  [787] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_aaa_section, 3, 0, 0), SHIFT(98),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vrf_address_family_section, 4, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vrf_address_family_section, 4, 0, 0),
  [794] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_vrf_address_family_section, 4, 0, 0), SHIFT(98),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_vrf_address_family_section, 4, 0, 0), SHIFT(109),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_management_api_section, 4, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_management_api_section, 4, 0, 0),
  [804] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_class_map_section, 4, 0, 0), SHIFT(83),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_section, 4, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_section, 4, 0, 0),
  [811] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_key_section, 4, 0, 0), SHIFT(84),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_section, 3, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_section, 3, 0, 0),
  [818] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_service_section, 3, 0, 0), SHIFT(97),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vrf_address_family_section, 5, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vrf_address_family_section, 5, 0, 0),
  [825] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_vrf_address_family_section, 5, 0, 0), SHIFT(98),
  [828] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_aaa_section, 3, 0, 0), SHIFT(99),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_management_api_section, 5, 0, 0),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_management_api_section, 5, 0, 0),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_section, 4, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ip_section, 4, 0, 0),
  [839] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ip_section, 4, 0, 0), SHIFT(74),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monitor_section, 4, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_monitor_section, 4, 0, 0),
  [846] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_monitor_section, 4, 0, 0), SHIFT(86),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spanning_tree_section, 4, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spanning_tree_section, 4, 0, 0),
  [853] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_spanning_tree_section, 4, 0, 0), SHIFT(98),
  [856] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_spanning_tree_section, 4, 0, 0), SHIFT(89),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_section, 5, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acl_section, 5, 0, 0),
  [863] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_acl_section, 5, 0, 0), SHIFT(98),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_router_ospf_section, 3, 0, 0),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_router_ospf_section, 3, 0, 0),
  [870] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_router_ospf_section, 3, 0, 0), SHIFT(80),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3, 0, 0),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vrf_section, 6, 0, 0),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vrf_section, 6, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 0),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [963] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_aaa_section_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_ip, 4, 0, 0),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_ipv6, 4, 0, 0),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1, 0, 0),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol_options, 1, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_username, 4, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_vlan, 4, 0, 1),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bgp_asn, 1, 0, 0),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_access_list, 5, 0, 0),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1056] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negated_command, 3, 0, 0),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_hostname, 3, 0, 0),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_ntp, 3, 0, 0),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_router_bgp, 3, 0, 0),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_route_map, 6, 0, 0),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_tacacs_server, 3, 0, 0),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_username, 3, 0, 0),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_vrf, 3, 0, 0),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, 0, 0),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route_map_match_condition, 1, 0, 0),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route_map_set_action, 1, 0, 0),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negated_command, 4, 0, 0),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_map_action, 1, 0, 0),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1238] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_arista(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

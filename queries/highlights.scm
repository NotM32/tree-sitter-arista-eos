                                        ; Comments
(comment) @comment

                                        ; Command names (keywords)
(command_name) @keyword

                                        ; Section names (types)
(section_name) @type

                                        ; Command and section arguments
(command_args) @string
(section_args) @string

                                        ; Special handling for network-related keywords
((command_name) @keyword.network
 (#match? @keyword.network "^(interface|vlan|router|ip|ipv6|spanning-tree|vrf|port-channel)$"))

((section_name) @keyword.network
 (#match? @keyword.network "^(interface|vlan|router|ip|ipv6|spanning-tree|vrf|port-channel)$"))

                                        ; Special handling for security-related keywords
((command_name) @keyword.security
 (#match? @keyword.security "^(access-list|firewall|aaa|tacacs|radius|encrypt|password|key|secret)$"))

((section_name) @keyword.security
 (#match? @keyword.security "^(access-list|firewall|aaa|tacacs|radius|encrypt|password|key|secret)$"))

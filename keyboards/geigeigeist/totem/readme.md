# TOTEM split keyboard

TOTEM is 38 keys column-staggered split keyboard made by @geigeigeist. It uses the Seeed XIAO RP2040.

To compile the firmware:

`qmk compile -kb geigeigeist/totem -km default`

To flash the firmware:

`qmk flash -kb geigeigeist/totem -km default -bl uf2-split-left`
`qmk flash -kb geigeigeist/totem -km default -bl uf2-split-right`

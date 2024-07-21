Doxology keyboard
=================

An ergonomic keyboard based on Dactyl manuform.

## Design goals

When designing Doxology, I had the following criterias in mind:

* Based on Dactyl Manuform. My previous daily driver was a Dactyl manuform that I've loved from day one.
* Integrated trackball with as little wrist movement as possible to use. Tired of switching hand position between keyboard and mouse the whole time.
* Bluetooth, so powered by ZMK.
* Split or non-split. I like having the possibility to split the keyboard, but in reality I never change position once I've placed the halves where I want them, so non-split might just be simpler to wire up and move around.
* Intact 5-key thumb clusters. Many dactyls with trackballs replace some keys in the thumb cluster, but I don't want to sacrifice that.
* Hot swappable keys. Using tactile switches at the moment, but might want to go linear in the future. Or if I need to iterate on the design, I might want to move the microcontroller and wires over to another case (if possible).

## BOM

* 1 nice!nano compatible mcu
* 1 3.7v Li-po battery
* 1 trackball
* 1 pmw3610 module (was lucky enough to find a complete module on Aliexpress that has all capacitors etc. presoldered)
* 48 cherry mx switches
* 48 1N4148 diodes
* 48 Kailh hot swaps
* 3 zro2 ceramic balls with a diameter of 3mm
* single core copper wire
* PLA filament for 3d print


## Design process

First, I used the [python rewrite of Dactyl](https://github.com/joshreve/dactyl-keyboard) to generate .step files, which are *a lot* easier to work with in Fusion 360 than .stl.

Once the files were generated I opened them in Fusion 360 to add the trackball module manually.

3d-printed the cases.


## Edit keymap

I've created the base layout with the genius tool https://nickcoutsos.github.io/keymap-editor. Just login with your github account and select the doxology repo, then you're ready to go. When you're done with the changes, just save and commit. Github actions will take over and create a new firmware artifact to download. Connect a usb cable, press all keys on the thumbcluster to enter flashing mode, then just place the firmware on the usb drive that appears.

### Swedish layout / localization

I've added keymap_swedish.h with inspiration from this github issue comment: https://github.com/zmkfirmware/zmk/issues/177#issuecomment-2107471861. Note that the swedish keycodes are not working with the keymap editor, so they must be edited manually. The keymap editor should preserve the swedish bindings though, so you should be able to use it to edit other keycodes, just ignore the warnings for the keys that are using swedish keycodes.


## Trackball

I've never understood trackballs. Why would anyone give up the precision and comfort of a proper mouse, to use a clumpsy trackball instead? On the other hand I've always wanted to reduce the hand movements between keyboard and mouse. I've tried to reduce it by using vim, rely more on keyboard shortcuts, and even tried to use keyboard buttons to move cursor. Finally the pieces came together when I realized that a trackball integrated into the keyboard, always within reach without having to reposition my right hand would solve it. That said, I'll probably be using it as a complement to my ordinary mouse.

The trackball was the most challenging part of this project. It was hard to find up-to-date information about how to make the trackball work properly with zmk since pointer devices are not yet officially supported. Others have make it work, so I was confident it was possible, the question was how hard it would be, and how many iterations it would take to make it happen. I've used the following resources as a base.

To make the trackball work with zmk I've used [badjeff/zmk-pmw3610-driver](https://github.com/badjeff/zmk-pmw3610-driver).

### Wiring

`<NRF_PSEL(SPIM_SCK, 0, 8)>` should point to the pin connected to SCLK on the sensor module
`<NRF_PSEL(SPIM_MOSI, 0, 17)>` should point to the pin connected to SDIO on the sensor module
`<NRF_PSEL(SPIM_MISO, 0, 17)>` should point to the pin connected to SDIO on the sensor module
`cs-gpios = <&gpio0 20 GPIO_ACTIVE_LOW>` should point to the pin connected to NCS on the sensor module
`irq-gpios = <&gpio0 6 (GPIO_ACTIVE_LOW | GPIO_PULL_UP)>;` should point to the pin connected to MOT on the sensor module
NRESET - is this pin needed? Why would you want to reset the sensor manually?

## Useful links and resources


Keymap inspiration
https://github.com/Sigvah/cnano-dongle/blob/main/config/charybdis.keymap

PMW3610 Data sheet
https://www.epsglobal.com/Media-Library/EPSGlobal/Products/files/pixart/PMW3610DM-SUDU.pdf?ext=.pdf


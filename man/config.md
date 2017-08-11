# CONFIG FORMAT

---

  * [`<config>`](#md_cfg_config)
  * [`<fallout>`](#md_cfg_fallout)
  * [`<group>`](#md_cfg_group)
  * [`<start>`](#md_cfg_start)
  * [`<goal>`](#md_cfg_goal)
  * [`<banana>`](#md_cfg_banana)
  * [`<bumper>`](#md_cfg_bumper)
  * [`<jamabar>`](#md_cfg_jamabar)
  * [`<wormhole>`](#md_cfg_wormhole)
  * [`<entrance>`](#md_cfg_entrance)
  * [`<button>`](#md_cfg_button)
  * [`<seesaw>`](#md_cfg_seesaw)
  * [`<import>`](#md_cfg_import)
  * [`<position>`](#md_cfg_position)
  * [`<rotation>`](#md_cfg_rotation)
  * [`<scale>`](#md_cfg_scale)
  * [`<coli>`](#md_cfg_coli)
  * [`<source>`](#md_cfg_source)
  * [`<level>`](#md_cfg_level)
  * [`<background>`](#md_cfg_background)
  * [`<call>`](#md_cfg_call)
  * [`<anim>`](#md_cfg_anim)
  * [`<frame>`](#md_cfg_anim)

---

## `<config>` <a id="md_cfg_config"></a>
Container element for all configuration data.

## `<fallout>` <a id="md_cfg_fallout"></a>
Block element which declares the fallout plane height.
### Attributes
height: The height of the fallout plane (default is 0).

## `<group>` <a id="md_cfg_group"></a>
Container element for a specific type of object.
### Attributes
type: Type of object.  
#### Allowed values
start: Contains starting positions (default).  
goal: Contains goal objects.  
banana: Contains banana objects.  
bumper: Contains bumper objects.  
jamabar: Contains jamabar objects.  
wormhole: Contains wormhole objects (SMB2 only).  
button: Contains button objects (SMB2 only).  
seesaw: Contains seesaw objects (SMB2 only).

## `<start>` <a id="md_cfg_start"></a>
Container element for a single start position.

## `<goal>` <a id="md_cfg_goal"></a>
Container element for a single goal object.
### Attributes
ext_type: Extended type
#### Allowed values
blue: Blue goal (default).  
green: Green goal.  
red: Red goal.

## `<banana>` <a id="md_cfg_banana"></a>
Container element for a single banana object.
### Attributes
ext_type: Extended type
#### Allowed values
single: Single banana (default).  
bunch: Banana bunch.

## `<bumper>` <a id="md_cfg_bumper"></a>
Container element for a single bumper object.

## `<jamabar>` <a id="md_cfg_jamabar"></a>
Container element for a single jamabar object.

## `<wormhole>` <a id="md_cfg_wormhole"></a>
Container element for a single wormhole object pair (SMB2 only).  
Must contain exactly two `<entrance>` nodes.

## `<entrance>` <a id="md_cfg_entrance"></a>
Container element for a single wormhole entrance in a pair (SMB2 only).

## `<button>` <a id="md_cfg_button"></a>
Container element for a single button object (SMB2 only) (unimplemented).
### Attributes
ext_type: Extended type
#### Allowed values
THIS OBJECT NOT YET REVERSE ENGINEERED, PROPERTIES SUBJECT TO CHANGE!!  
play: Play button (default).  
ff: Fast forward button.  
back: Backwards button.  
rewind: Rewind button.  
pause: Pause button.

## `<seesaw>` <a id="md_cfg_seesaw"></a>
Container element for a single seesaw entrance in a pair (SMB2 only) (unimplemented).
### Attributes
THIS OBJECT NOT YET REVERSE ENGINEERED, PROPERTIES SUBJECT TO CHANGE!!  
strength: Strength of seesaw. Lower values mean a stiffer seesaw (default 1).  
vector: Pivot axis vector (default "0 0 1").

## `<import>` <a id="md_cfg_import"></a>
Block element for importing a custom skin for an object.
### Attributes
obj_name: Object name (default null).

## `<position>` <a id="md_cfg_position"></a>
Block element for the position of an object.
### Attributes
d: Position vector (default "0 0 0").

## `<rotation>` <a id="md_cfg_rotation"></a>
Block element for the rotation of an object in degrees.  
Invalid for banana, button(?), and seesaw objects.
### Attributes
d: Rotation vector (default "0 0 0").

## `<scale>` <a id="md_cfg_scale"></a>
Block element for the scale of an object.  
Valid only for bumper, jamabar, and call objects.  
A scale other than 1.0 for bumper and jamabar objects results in funky collision?
### Attributes
d: Scale vector (default "1 1 1").

## `<coli>` <a id="md_cfg_coli"></a>
Container element for collision specification.

## `<source>` <a id="md_cfg_source"></a>
Block element for collision object source.
### Attributes
obj_name: Object name to use for collision (default null).

## `<level>` <a id="md_cfg_level"></a>
Container element for level models (these tilt with the player).

## `<background>` <a id="md_cfg_background"></a>
Container element for background models (these do not tilt with the player).

## `<call>` <a id="md_cfg_call"></a>
Container element for model source.
### Attributes
obj_name: Object name to use for model (default null).

## `<anim>` <a id="md_cfg_anim"></a>
Container element for animated data (can contain collision, level/background models, and objects).
### Attributes
interp: Interpolation method
#### Allowed values
linear: Linearly interpolate (default).
spline: Spline interpolation.

## `<frame>` <a id="md_cfg_frame"></a>
Container element for animation frame.
### Attributes
time: Frame time offset (default 0).

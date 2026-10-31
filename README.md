<img width="1919" height="1068" alt="trafficcar" src="https://github.com/user-attachments/assets/9ac83338-d1d8-4844-b01f-62cd1c8e02c0" />


# TrafficCars v1.0.0

A mod for Forza Horizon 2 (Azimuth 1.0.0.64) that empties the game database's `TrafficCars` table, so traffic cars are no longer treated as a separate, restricted set and can be used like other cars (for example from car packs).

## How it works

The FH2 Mod Platform runs SQL from mods against a copy of `media\Stripped\gamedbRC.slt` and serves the copy through `mediaoverride`. This mod queues one statement:

```
DELETE FROM TrafficCars;
```

The original database is not touched. The game reads the database once at startup, so restart the game after installing or removing the mod.

## Requirements

- [FH2 Mod Platform](https://github.com/Trinculo54/FH2-Mod-Platform) v2.8.0 or newer.

## Installation

Copy `TrafficCars.dll` from the `fh2-mods` folder of this package into your `fh2-mods` folder and start the game. `platform.log` should show `[TrafficCars] Registered`.

## Uninstall

Delete `TrafficCars.dll` from `fh2-mods` and restart the game; the platform restores the original database.

## Updates

The platform checks https://github.com/suderek22/FH2_TrafficCars for new releases.

Created by suderek. [Visit FH2mods](https://fh2mods.com/)

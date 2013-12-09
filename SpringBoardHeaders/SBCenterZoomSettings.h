/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconZoomSettings.h"


__attribute__((visibility("hidden")))
@interface SBCenterZoomSettings : SBIconZoomSettings {
	float _centerRowCoordinate;
	int _distanceEffect;
	float _firstHopIncrement;
	float _hopIncrementAcceleration;
	float _dockMass;
}
@property(assign) float dockMass;
@property(assign) float hopIncrementAcceleration;
@property(assign) float firstHopIncrement;
@property(assign) int distanceEffect;
@property(assign) float centerRowCoordinate;
+(id)settingsControllerModule;
-(void)setDefaultValues;
@end


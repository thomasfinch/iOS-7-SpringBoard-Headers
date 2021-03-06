/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class _UIScreenEdgePanRecognizerSettings, SBFAnimationSettings;

__attribute__((visibility("hidden")))
@interface SBAppSliderSettings : XXUnknownSuperclass {
	int _simplicityOptions;
	SBFAnimationSettings* _dosidoAnimationSettings;
	_UIScreenEdgePanRecognizerSettings* _gestureSettings;
}
@property(retain) _UIScreenEdgePanRecognizerSettings* gestureSettings;
@property(retain) SBFAnimationSettings* dosidoAnimationSettings;
@property(assign) int simplicityOptions;
+(id)settingsControllerModule;
-(BOOL)shouldSimplifyForOptions:(int)options;
-(void)setDefaultValues;
@end


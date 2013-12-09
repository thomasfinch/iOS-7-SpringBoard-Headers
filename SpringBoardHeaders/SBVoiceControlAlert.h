/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlert.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBVoiceControlAlert : SBAlert {
	struct {
		unsigned shouldBeActivated : 1;
		unsigned isReadyToBeActivated : 1;
		unsigned hasBeenActivated : 1;
	} _voiceControlFlags;
	BOOL _expectsFaceContact;
	BOOL _expectsFaceContactInLandscape;
}
+(void)setNextRecognitionAudioInputPaths:(id)paths;
+(void)bluetoothDeviceTerminatedVoiceControl:(id)control;
+(void)bluetoothDeviceRequestedVoiceControl:(id)control;
+(BOOL)resetVoiceControlIfNecessary:(BOOL)necessary;
+(BOOL)shouldEnterVoiceControl;
+(void)unregisterForAlerts;
+(void)registerForAlerts;
+(id)pendingOrActiveAlert;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(double)autoDimTime;
-(BOOL)handleMenuButtonTap;
-(void)handleHeadsetButtonUpFromActivation:(BOOL)activation;
-(void)dealloc;
-(void)cancel;
-(void)cancelIfNotActivated;
-(void)activateWhenReady;
-(id)initFromMenuButton;
-(BOOL)expectsFaceContactInLandscape;
-(BOOL)expectsFaceContact;
-(void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;
-(void)setExpectsFaceContact:(BOOL)contact;
-(id)initFromWiredHeadsetButton;
-(id)init;
-(void)_setRoutingAttributesForWiredHeadset:(BOOL)wiredHeadset;
-(void)_prime;
-(void)_makeActive;
-(void)_resign;
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSSet, NSArray, NSDictionary, NSLock;

__attribute__((visibility("hidden")))
@interface SBPlatformController : XXUnknownSuperclass {
	NSString* _currentConfigurationName;
	long _defaultIconInfoOnce;
	NSArray* _defaultStarkIconState;
	NSDictionary* _defaultIconState;
	NSSet* _defaultIconStateDisplayIdentifiers;
	NSLock* _iconStateDisplayIdentifiersLock;
	NSSet* _iconStateDisplayIdentifiers;
	NSString* _localizedDeviceName;
	BOOL _hasGasGauge;
	BOOL _supportsOpenGLES2;
	BOOL _internalInstall;
	BOOL _carrierInstall;
	BOOL _singleCoreDevice;
}
+(id)uniqueDeviceIdentifier;
+(id)deviceClass;
+(id)productType;
+(id)hardwareModel;
+(id)systemBuildVersion;
+(id)sharedInstance;
-(void)_visibleIdentifiersChanged:(id)changed;
-(void)_loadDefaultIconInfoIfNecessary;
-(id)_currentConfigurationName;
-(BOOL)isN90Like;
-(BOOL)isSingleCoreDevice;
-(BOOL)isCarrierInstall;
-(BOOL)isInternalInstall;
-(BOOL)supportsOpenGLES2;
-(BOOL)hasGasGauge;
-(id)localizedPlatformName;
-(id)iconStateDisplayIdentifiers;
-(void)registerForIconVisibilityChanges;
-(id)defaultIconStateDisplayIdentifiers;
-(id)defaultStarkIconState;
-(id)defaultIconState;
-(void)dealloc;
-(id)init;
@end

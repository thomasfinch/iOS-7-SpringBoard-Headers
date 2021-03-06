/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWorkspaceTransaction.h"

@class SBApplication;

__attribute__((visibility("hidden")))
@interface SBToAppWorkspaceTransaction : SBWorkspaceTransaction {
	SBApplication* _toApp;
	BOOL _activateSuspended;
	double _watchdogExtension;
	BOOL _fromAssistant;
	BOOL _fromSwitcher;
	id _activationHandlerBlock;
}
@property(readonly, assign, nonatomic) SBApplication* toApplication;
-(void)_commit;
-(void)_captureApplicationData;
-(BOOL)_shouldBeWatchdogged:(id*)watchdogged;
-(double)_watchdogInterval;
-(void)_fireAndClearActivationContinuationForActivationFailureIfNecessary;
-(void)_interruptWithReason:(int)reason;
-(void)_transactionComplete;
-(void)activate:(id)activate;
-(void)toggleStatusBarForCleanup;
-(void)performToAppStateCleanup;
-(BOOL)shouldAnimateOrientationChangeOnCompletion;
-(BOOL)shouldDismissSwitcher;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
-(BOOL)shouldHideSpringBoardStatusBarOnCleanup;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithWorkspace:(id)workspace alertManager:(id)manager toApplication:(id)application activationHandler:(id)handler;
@end


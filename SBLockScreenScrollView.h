/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBUIPasscodeLockView;

__attribute__((visibility("hidden")))
@interface SBLockScreenScrollView : XXUnknownSuperclass {
	id<SBUIPasscodeLockView> _passcodeView;
}
@property(assign, nonatomic) id<SBUIPasscodeLockView> passcodeView;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(BOOL)touchesShouldCancelInContentView:(id)touches;
@end


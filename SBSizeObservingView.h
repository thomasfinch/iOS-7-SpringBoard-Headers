/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBSizeObservingViewDelegate;

__attribute__((visibility("hidden")))
@interface SBSizeObservingView : XXUnknownSuperclass {
	BOOL _delegateInterestedInSizeChanges;
	id<SBSizeObservingViewDelegate> _delegate;
}
@property(assign, nonatomic) id<SBSizeObservingViewDelegate> delegate;
-(void)setFrame:(CGRect)frame;
-(void)setBounds:(CGRect)bounds;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBUIBannerView.h"

@class _UIBackdropView, UIImageView, SBBannerViewCallbackManager, SBUIBannerContext, UIView, UIImage;

__attribute__((visibility("hidden")))
@interface SBBannerContextView : XXUnknownSuperclass <SBUIBannerView> {
	UIEdgeInsets _clippingInsets;
	UIView* _clippingView;
	SBUIBannerContext* _context;
	UIView<SBUIBannerView>* _contentView;
	SBBannerViewCallbackManager* _callbacks;
	SBBannerViewCallbackManager* _wrapperCallbacks;
	_UIBackdropView* _backdropView;
	UIImageView* _backgroundImageView;
}
@property(retain, nonatomic) UIImage* backgroundImage;
@property(readonly, assign, nonatomic) _UIBackdropView* backdrop;
@property(assign, nonatomic) UIEdgeInsets clippingInsets;
-(id)bannerContext;
-(void)layoutSubviews;
-(CGRect)_frameInClippingViewForFrame:(CGRect)frame;
-(void)noteDidDismissWithReason:(int)note;
-(void)noteWillDismissWithReason:(int)note;
-(void)noteDidAppear;
-(void)noteWillAppear;
-(void)setBannerContext:(id)context withReplaceReason:(int)replaceReason;
-(CGRect)_contentFrame;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end


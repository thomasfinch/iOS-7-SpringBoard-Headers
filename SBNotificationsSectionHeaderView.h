/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, SBNotificationCenterSeparatorView, SBNotificationsClearButton, UILabel;

__attribute__((visibility("hidden")))
@interface SBNotificationsSectionHeaderView : XXUnknownSuperclass {
	UILabel* _titleLabel;
	UIImageView* _iconImageView;
	SBNotificationsClearButton* _xButton;
	SBNotificationsClearButton* _clearButton;
	UIImageView* _buttonBackground;
	id _xAction;
	id _clearAction;
	float _widthWhenShowingClear;
	BOOL _showingClear;
	SBNotificationCenterSeparatorView* _separator;
}
+(void)_compositingFilterForView:(id)view;
+(id)defaultBackgroundColorForGraphicsQuality:(int)graphicsQuality;
-(void)buttonAction:(id)action;
-(void)layoutSubviews;
-(void)resetAnimated:(BOOL)animated;
-(void)_setShowsClear:(BOOL)clear animated:(BOOL)animated;
-(BOOL)isShowingClear;
-(CGRect)_buttonBackgroundFrame;
-(CGRect)_xButtonFrame;
-(CGRect)contentBounds;
-(void)setTarget:(id)target forClearButtonAction:(id)clearButtonAction;
-(void)setTarget:(id)target forClearButtonVisibleAction:(id)clearButtonVisibleAction;
-(void)setHasClearButton:(BOOL)button;
-(id)_clearImage;
-(id)_clearBackgroundImage;
-(id)_xImage;
-(void)setFloating:(BOOL)floating;
-(void)prepareForReuse;
-(void)setBackgroundView:(id)view;
-(int)initialGraphicsQuality;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBBulletinObserverSectionHeaderView.h"

@class UIImageView, SBNotificationCenterSeparatorView, UILabel;

__attribute__((visibility("hidden")))
@interface SBTodayWidgetAndTomorrowSectionHeaderView : SBBulletinObserverSectionHeaderView {
	UILabel* _titleLabel;
	UIImageView* _iconImageView;
	SBNotificationCenterSeparatorView* _separatorView;
}
+(id)defaultFont;
+(id)defaultBackgroundColor;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end


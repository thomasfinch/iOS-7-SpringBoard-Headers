/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAwayListItem.h"

@class NSString, SBSCardItem, UIImage;

__attribute__((visibility("hidden")))
@interface SBAwayCardListItem : SBAwayListItem {
	SBSCardItem* _cardItem;
	UIImage* _cardThumbnail;
	UIImage* _iconImage;
}
@property(retain, nonatomic) UIImage* cardThumbnail;
@property(retain, nonatomic) UIImage* iconImage;
@property(readonly, assign, nonatomic) NSString* body;
@property(readonly, assign, nonatomic) NSString* title;
@property(copy, nonatomic) SBSCardItem* cardItem;
-(BOOL)inertWhenLocked;
-(id)sortDate;
-(void)dealloc;
@end


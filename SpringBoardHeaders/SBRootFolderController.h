/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFolderController.h"

@class SBRootFolder, SBRootFolderView;

__attribute__((visibility("hidden")))
@interface SBRootFolderController : SBFolderController {
}
@property(readonly, assign, nonatomic) SBRootFolderView* contentView;
@property(retain, nonatomic) SBRootFolder* folder;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)_listIndexIsVisible:(unsigned)visible;
-(void)setDockVerticalStretch:(float)stretch;
-(void)setDockOffscreenFraction:(float)fraction;
-(id)dockListView;
-(BOOL)hasDock;
-(BOOL)isDisplayingIcon:(id)icon;
-(void)setIdleText:(id)text;
-(BOOL)setCurrentPageIndex:(int)index animated:(BOOL)animated;
-(id)folderControllers;
-(unsigned)_depth;
-(Class)_contentViewClass;
-(void)dealloc;
-(id)initWithFolder:(id)folder orientation:(int)orientation;
@end


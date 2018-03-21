//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchSortbarItem.h"

@class UIButton;

@interface TBXSearchSortbarItemFilter : TBXSearchSortbarItem
{
    _Bool _isOpen;
    _Bool _itemSelected;
    UIButton *_itemView;
}

@property(nonatomic) _Bool itemSelected; // @synthesize itemSelected=_itemSelected;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain, nonatomic) UIButton *itemView; // @synthesize itemView=_itemView;
- (void).cxx_destruct;
- (void)resetToStatusWithAnimated:(_Bool)arg1;
- (void)passiveCloseFloatingLayerWithAnimated:(_Bool)arg1;
- (void)closeFloatingLayer;
- (void)openFloatingLayer;
- (void)setItemSelectedStatus:(_Bool)arg1;
- (void)setItemHightlight:(_Bool)arg1;
- (void)setItemActionChange;
- (void)onItemClick:(id)arg1;
- (id)getInitItemView;

@end


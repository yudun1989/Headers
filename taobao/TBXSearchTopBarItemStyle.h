//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchTopBarItem.h"

@class UIButton;

@interface TBXSearchTopBarItemStyle : TBXSearchTopBarItem
{
    UIButton *_itemView;
}

@property(retain, nonatomic) UIButton *itemView; // @synthesize itemView=_itemView;
- (void).cxx_destruct;
- (void)changeToImmersedStyle:(_Bool)arg1;
- (void)setDisabled:(_Bool)arg1;
- (void)onItemClick:(id)arg1;
- (void)setIconWithLayoutStyle:(int)arg1;
- (id)getInitItemView;

@end


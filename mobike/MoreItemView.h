//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface MoreItemView : UIView
{
    UIButton *_iconBtn;
    UILabel *_nameLbl;
    CDUnknownBlockType _itemViewAction;
}

@property(copy, nonatomic) CDUnknownBlockType itemViewAction; // @synthesize itemViewAction=_itemViewAction;
- (void).cxx_destruct;
- (void)iconBtnClick:(id)arg1;
- (void)updateViewWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


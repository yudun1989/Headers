//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBShareContactModel, UIButton, UILabel;

@interface TBShareContactItemView : UIView
{
    CDUnknownBlockType _actionBlock;
    TBShareContactModel *_model;
    UIButton *_button;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) TBShareContactModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2;

@end


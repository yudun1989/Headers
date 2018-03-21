//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTableviewBaseCell.h"

@class APSwitch, UIView;

@interface SCSwitchCell : SCTableviewBaseCell
{
    UIView *_topLine;
    UIView *_bottomLine;
    APSwitch *_switchControl;
    CDUnknownBlockType _switchValueChangedEeventHandler;
}

@property(copy, nonatomic) CDUnknownBlockType switchValueChangedEeventHandler; // @synthesize switchValueChangedEeventHandler=_switchValueChangedEeventHandler;
@property(retain, nonatomic) APSwitch *switchControl; // @synthesize switchControl=_switchControl;
- (void).cxx_destruct;
- (void)setDescTitle:(id)arg1;
- (void)onSwitchValueChanged:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


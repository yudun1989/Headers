//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSMutiSpaceTextField.h"

@class UIButton, UILabel;

@interface KSExchangeZuanTextField : KSMutiSpaceTextField
{
    UILabel *_title;
    CDUnknownBlockType _didTapAllBtn;
    UIButton *_allBtn;
}

+ (id)instance;
@property(retain, nonatomic) UIButton *allBtn; // @synthesize allBtn=_allBtn;
@property(copy, nonatomic) CDUnknownBlockType didTapAllBtn; // @synthesize didTapAllBtn=_didTapAllBtn;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)didTapBtn;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end


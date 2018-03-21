//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSSHPBaseCell.h"

@class APButton, NSString, UIImageView, UILabel;

@interface AWSStockProfileInitCell : AWSSHPBaseCell
{
    NSString *_type;
    UIImageView *_buttonIcon;
    UILabel *_buttonTitle;
    APButton *_button;
}

+ (id)createCellWithTableView:(id)arg1 type:(id)arg2;
+ (double)cellHeight;
@property(retain, nonatomic) APButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) UIImageView *buttonIcon; // @synthesize buttonIcon=_buttonIcon;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setEnable:(_Bool)arg1;
- (id)disableBackgroundColor;
- (id)buttonBackgroundColor;
- (unsigned long long)getClickType;
- (id)getTitleIcon;
- (id)getButtonTitle;
- (void)layoutSubviews;
- (void)onButtonClick:(id)arg1;
- (void)setupViews;

@end

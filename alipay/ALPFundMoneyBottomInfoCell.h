//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALPFundTransferOutCell.h"

@class UIButton, UILabel;

@interface ALPFundMoneyBottomInfoCell : ALPFundTransferOutCell
{
    UILabel *_textLabel;
    UIButton *_linkButton;
}

+ (double)calcCellHeight:(id)arg1 selectedBankCard:(id)arg2 arriveType:(id)arg3;
- (void).cxx_destruct;
- (void)updateCardTips:(id)arg1 guideText:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 target:(id)arg3 action:(SEL)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface AWSMSTOCKPRODStockQuoteSummaryInfoView : UIView
{
    UILabel *_nameLabel;
    UILabel *_symbolLabel;
    UILabel *_marketLogo;
}

@property(retain, nonatomic) UILabel *marketLogo; // @synthesize marketLogo=_marketLogo;
@property(retain, nonatomic) UILabel *symbolLabel; // @synthesize symbolLabel=_symbolLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setName:(id)arg1 symbol:(id)arg2 marketLogo:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end


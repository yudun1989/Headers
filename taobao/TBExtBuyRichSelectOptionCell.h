//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class UIButton, UILabel, UIView;

@interface TBExtBuyRichSelectOptionCell : TBExtBuyBaseCell
{
    UILabel *_nameLabel;
    UILabel *_tipsLabel;
    UIButton *_checkButton;
    UIView *_line;
}

+ (id)tips:(id)arg1;
+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)setChecked:(_Bool)arg1;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end


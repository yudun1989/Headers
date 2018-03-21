//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;

@interface _KSLiveQuizSheetCell : UITableViewCell
{
    UILabel *_descLabel;
    CDUnknownBlockType _previewButtonPressed;
    UILabel *_titleLabel;
    UILabel *_prizeLabel;
    UILabel *_countInfoLabel;
    UIButton *_previewButton;
}

+ (double)cellHeightWithDataItem:(id)arg1 cellWidth:(double)arg2;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UIButton *previewButton; // @synthesize previewButton=_previewButton;
@property(retain, nonatomic) UILabel *countInfoLabel; // @synthesize countInfoLabel=_countInfoLabel;
@property(retain, nonatomic) UILabel *prizeLabel; // @synthesize prizeLabel=_prizeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType previewButtonPressed; // @synthesize previewButtonPressed=_previewButtonPressed;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
- (void).cxx_destruct;
- (void)_setupPreviewButton;
- (void)_setupCountInfoLabel;
- (void)_setupDescLabel;
- (void)_setupPrizeLabel;
- (void)_setupTitleLabel;
- (void)bindWithDataItem:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


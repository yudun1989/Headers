//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APTableViewCell.h"

@class MBMessageInfoItem, UIImageView, UILabel, UIView;
@protocol MBRoundedCellDelegate;

@interface MBPreferentialAssistantCell : APTableViewCell
{
    UIImageView *_waterMaskImageView;
    UILabel *_cardTypeNameLabel;
    UILabel *_titleLabel;
    UIView *_instructionArea;
    UILabel *_amountLabel;
    UILabel *_amountUnitLabel;
    UILabel *_bottomButtonLabel;
    MBMessageInfoItem *_messageItem;
    id <MBRoundedCellDelegate> _cellDelegate;
    UIView *_containerView;
}

+ (double)cellHeightForMessage:(id)arg1;
+ (id)cellIdentifierForMessage:(id)arg1;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <MBRoundedCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) MBMessageInfoItem *messageItem; // @synthesize messageItem=_messageItem;
- (void).cxx_destruct;
- (double)actionNameWidth:(id)arg1;
- (id)getColorDictionary:(id)arg1;
- (void)delete:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


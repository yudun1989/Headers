//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class SSThemedLabel, UIActivityIndicatorView, UIButton, UIImageView;
@protocol FRThreadFooterCommonEmptyCellDelegate;

@interface FRThreadFooterCommonEmptyCell : SSThemedTableViewCell
{
    id <FRThreadFooterCommonEmptyCellDelegate> _delegate;
    long long _cellType;
    long long _indicateType;
    UIImageView *_emptyImageView;
    SSThemedLabel *_emptyTipLabel;
    UIButton *_emptyButton;
    UIActivityIndicatorView *_indicator;
    double _cellHeight;
}

@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIButton *emptyButton; // @synthesize emptyButton=_emptyButton;
@property(retain, nonatomic) SSThemedLabel *emptyTipLabel; // @synthesize emptyTipLabel=_emptyTipLabel;
@property(retain, nonatomic) UIImageView *emptyImageView; // @synthesize emptyImageView=_emptyImageView;
@property(nonatomic) long long indicateType; // @synthesize indicateType=_indicateType;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) __weak id <FRThreadFooterCommonEmptyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_changEmptyTipLabelControlStateTo:(unsigned long long)arg1;
- (void)forceShowCommentButtonClicked;
- (void)emptyButtonClicked;
- (void)configureCellType:(long long)arg1 indicateType:(long long)arg2 withHeight:(double)arg3 withWidth:(double)arg4;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


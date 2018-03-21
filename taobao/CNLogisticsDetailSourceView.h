//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNLogisticsDetailCell.h"

@class CNLogisticsDetailSourceModel, NSLayoutConstraint, UIImageView, UILabel;

@interface CNLogisticsDetailSourceView : CNLogisticsDetailCell
{
    UIImageView *_logoImageView;
    UIImageView *_backgroundImageView;
    UIImageView *_arrowImageView;
    NSLayoutConstraint *_logoImageViewWidth;
    UILabel *_titleLabel;
}

@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *logoImageViewWidth; // @synthesize logoImageViewWidth=_logoImageViewWidth;
@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)goGuoguo:(id)arg1;
- (void)updateModel;
- (void)initModel;

// Remaining properties
@property(retain, nonatomic) CNLogisticsDetailSourceModel *cellModel; // @dynamic cellModel;

@end


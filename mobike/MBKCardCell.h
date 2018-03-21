//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MBKViewProtocol-Protocol.h"

@class MBKCardCellModel, Mobike_ViewController, NSString, UIImageView, UILabel, UIView;

@interface MBKCardCell : UITableViewCell <MBKViewProtocol>
{
    UIImageView *_cardShadow;
    UIView *_cardBackgroundView;
    UIImageView *_cardBikeLogo;
    UIImageView *_cardBikeLogoShadow;
    UILabel *_cardActiveLabel;
    UILabel *_cardTimeLabel;
    MBKCardCellModel *_model;
    id _delegate;
}

+ (double)viewWidth:(id)arg1;
+ (double)viewHeight:(id)arg1;
+ (id)reuseIdentifier;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MBKCardCellModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UILabel *cardTimeLabel; // @synthesize cardTimeLabel=_cardTimeLabel;
@property(nonatomic) __weak UILabel *cardActiveLabel; // @synthesize cardActiveLabel=_cardActiveLabel;
@property(nonatomic) __weak UIImageView *cardBikeLogoShadow; // @synthesize cardBikeLogoShadow=_cardBikeLogoShadow;
@property(nonatomic) __weak UIImageView *cardBikeLogo; // @synthesize cardBikeLogo=_cardBikeLogo;
@property(nonatomic) __weak UIView *cardBackgroundView; // @synthesize cardBackgroundView=_cardBackgroundView;
@property(nonatomic) __weak UIImageView *cardShadow; // @synthesize cardShadow=_cardShadow;
- (void).cxx_destruct;
- (void)setCellWithCardCellStatus;
- (void)configSubView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(nonatomic) __weak Mobike_ViewController *controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


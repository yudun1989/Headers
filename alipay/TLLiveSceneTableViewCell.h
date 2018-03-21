//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TLScene, UIImageView, UILabel, UIView;

@interface TLLiveSceneTableViewCell : UITableViewCell
{
    TLScene *_modelData;
    UIImageView *_coverView;
    UIView *_coverMaskView;
    UILabel *_titleLabel;
    UILabel *_extInfoLabel;
}

@property(retain, nonatomic) UILabel *extInfoLabel; // @synthesize extInfoLabel=_extInfoLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *coverMaskView; // @synthesize coverMaskView=_coverMaskView;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) TLScene *modelData; // @synthesize modelData=_modelData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


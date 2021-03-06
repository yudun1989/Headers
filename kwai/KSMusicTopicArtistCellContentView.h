//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSFoldableLabel, KSMusicArtistViewModel, KSRoundedImageAsset, UIImageView, UILabel;

@interface KSMusicTopicArtistCellContentView : UIView
{
    UIImageView *_avatarView;
    KSRoundedImageAsset *_avatarAsset;
    UILabel *_artistNameLabel;
    UILabel *_artistTitleLabel;
    KSFoldableLabel *_detailLabel;
    UIImageView *_arrowView;
    KSMusicArtistViewModel *_viewModel;
}

@property(retain, nonatomic) KSMusicArtistViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(readonly, nonatomic) KSFoldableLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *artistTitleLabel; // @synthesize artistTitleLabel=_artistTitleLabel;
@property(retain, nonatomic) UILabel *artistNameLabel; // @synthesize artistNameLabel=_artistNameLabel;
@property(retain, nonatomic) KSRoundedImageAsset *avatarAsset; // @synthesize avatarAsset=_avatarAsset;
@property(readonly, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)bindViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


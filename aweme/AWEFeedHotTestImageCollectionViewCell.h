//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWEFeedNearbyCollectionCellProtocol-Protocol.h"

@class NSString, UIImageView, UILabel, YYAnimatedImageView;

@interface AWEFeedHotTestImageCollectionViewCell : UICollectionViewCell <AWEFeedNearbyCollectionCellProtocol>
{
    _Bool _preferedShowPostTime;
    YYAnimatedImageView *_coverImageView;
    UIImageView *_tagView;
    UILabel *_descriptionLabel;
    UIImageView *_userImageView;
    UILabel *_userNameLabel;
    UILabel *_postTimeLabel;
    UIImageView *_mediaTypeView;
    double _currentAlpha;
}

@property(nonatomic) _Bool preferedShowPostTime; // @synthesize preferedShowPostTime=_preferedShowPostTime;
@property(nonatomic) double currentAlpha; // @synthesize currentAlpha=_currentAlpha;
@property(retain, nonatomic) UIImageView *mediaTypeView; // @synthesize mediaTypeView=_mediaTypeView;
@property(retain, nonatomic) UILabel *postTimeLabel; // @synthesize postTimeLabel=_postTimeLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) YYAnimatedImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)scrollViewDidScroll:(id)arg1;
- (id)firstAvailableLabelForAweme:(id)arg1;
- (void)_updateTagsWithAweme:(id)arg1;
- (void)updateWithAweme:(id)arg1;
- (id)addBottomGradientView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


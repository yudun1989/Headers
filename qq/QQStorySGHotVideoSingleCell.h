//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQAvatarView, QQStoryUrlImageView, TBHotVideoCardModel, UIImageView, UILabel;

@interface QQStorySGHotVideoSingleCell : UIView
{
    TBHotVideoCardModel *_model;
    QQStoryUrlImageView *_coverImageView;
    QQAvatarView *_avatarView;
    UILabel *_nameLabel;
    UIImageView *_viewICon;
    UILabel *_viewNum;
    UIImageView *_likeICon;
    UILabel *_likeNum;
    QQStoryUrlImageView *_identifierIcon;
}

+ (double)height;
@property(retain, nonatomic) QQStoryUrlImageView *identifierIcon; // @synthesize identifierIcon=_identifierIcon;
@property(retain, nonatomic) UILabel *likeNum; // @synthesize likeNum=_likeNum;
@property(retain, nonatomic) UIImageView *likeICon; // @synthesize likeICon=_likeICon;
@property(retain, nonatomic) UILabel *viewNum; // @synthesize viewNum=_viewNum;
@property(retain, nonatomic) UIImageView *viewICon; // @synthesize viewICon=_viewICon;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QQAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) QQStoryUrlImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) TBHotVideoCardModel *model; // @synthesize model=_model;
- (void)updateIdentifierIconWithUserModel:(id)arg1;
- (void)updateFeatureView;
- (void)dealloc;
- (void)useDefaultCover;
- (id)initWithFrame:(struct CGRect)arg1;

@end


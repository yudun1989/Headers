//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GIFTPRODGiftUserViewInfo, NSString, REImageView, REReceiverAvatarViewDisplayInfo, UIImageView, UILabel;

@interface REReceiverAvatarView : UIView
{
    REImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_remarkLabel;
    UIImageView *_addFriendIconView;
    GIFTPRODGiftUserViewInfo *_userInfo;
    REReceiverAvatarViewDisplayInfo *_displayInfo;
    NSString *_source;
}

@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) REReceiverAvatarViewDisplayInfo *displayInfo; // @synthesize displayInfo=_displayInfo;
@property(retain, nonatomic) GIFTPRODGiftUserViewInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIImageView *addFriendIconView; // @synthesize addFriendIconView=_addFriendIconView;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) REImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (double)adjustRatioPixel:(double)arg1;
- (void)handleAvatarTap:(id)arg1;
- (void)addAvatarTapRecognizerWithUserInfo:(id)arg1;
- (void)addAvatarTapRecognizerWithUserInfo:(id)arg1 withSource:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 displayInfo:(id)arg2;

@end


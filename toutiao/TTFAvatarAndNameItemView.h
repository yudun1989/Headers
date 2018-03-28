//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TTFAvatarView, UIColor, UIImageView, UILabel;

@interface TTFAvatarAndNameItemView : UIView
{
    unsigned long long _tagStyle;
    TTFAvatarView *_avatarView;
    UILabel *_userNameLabel;
    UIImageView *_tagView;
    NSString *_avatarURLStr;
    double _avatarViewSize;
    NSString *_userName;
    UIColor *_userNameColor;
    double _fontSize;
    double _avatarAndUserNamePadding;
    double _maxWidth;
}

@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double avatarAndUserNamePadding; // @synthesize avatarAndUserNamePadding=_avatarAndUserNamePadding;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *userNameColor; // @synthesize userNameColor=_userNameColor;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) double avatarViewSize; // @synthesize avatarViewSize=_avatarViewSize;
@property(retain, nonatomic) NSString *avatarURLStr; // @synthesize avatarURLStr=_avatarURLStr;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) TTFAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) unsigned long long tagStyle; // @synthesize tagStyle=_tagStyle;
- (void).cxx_destruct;
- (void)ttf_setConstraints;
- (void)ttf_setupViews;
- (void)ttf_formatedConfigure:(id)arg1;
- (id)initWithTagStyle:(unsigned long long)arg1 configure:(id)arg2;

@end


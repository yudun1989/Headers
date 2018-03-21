//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <QQMainProject/AvatarServiceDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, UIView;

@interface QQGroupMemsAvatarView : UIImageView <AvatarServiceDelegate>
{
    NSArray *_memsUin;
    NSMutableDictionary *_memsAvatarDic;
    UIView *_avatarsBgView;
    long long _avatarNumLimit;
    int _xo;
}

- (void).cxx_destruct;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)initUI;
- (void)refreshAvatars;
- (void)loadMemAvart;
- (id)initWithFrame:(struct CGRect)arg1 memsUin:(id)arg2 withNumLimit:(long long)arg3;

// Remaining properties
@property(nonatomic) long long avatarNumLimit; // @dynamic avatarNumLimit;
@property(retain, nonatomic) UIView *avatarsBgView; // @dynamic avatarsBgView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableDictionary *memsAvatarDic; // @dynamic memsAvatarDic;
@property(retain, nonatomic) NSArray *memsUin; // @dynamic memsUin;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/ITCQRCodeLayoutDataSource-Protocol.h>

@class NSNumber, NSString, QQAvatarView, UIImage;

@interface TCQRCodeLayoutDataSourceImpl : NSObject <ITCQRCodeLayoutDataSource>
{
    NSString *_qrcodeText;
    UIImage *_logoIcon;
    NSString *_nickname;
    NSString *_tips;
    NSNumber *_isCertified;
    unsigned int _certificationType;
    QQAvatarView *_avatarView;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) QQAvatarView *avatarView; // @dynamic avatarView;
@property(nonatomic) unsigned int certificationType; // @dynamic certificationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *isCertified; // @dynamic isCertified;
@property(retain, nonatomic) UIImage *logoIcon; // @dynamic logoIcon;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *qrcodeText; // @dynamic qrcodeText;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *tips; // @dynamic tips;

@end


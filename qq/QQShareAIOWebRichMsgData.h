//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, UIImage;

@interface QQShareAIOWebRichMsgData : NSObject
{
    NSString *_urlStr;
    NSString *_title;
    NSString *_summary;
    NSString *_previewImageURL;
    UIImage *_previewImage;
    NSString *_audioUrl;
    NSString *_toUIN;
    NSNumber *_uinType;
    NSString *_appId;
    NSString *_srcName;
    NSString *_shareType;
    NSString *_puin;
    NSNumber *_needPopBack;
    NSNumber *_keepShareUrl;
    NSString *_callBack;
    int _xo;
    NSNumber *_forceChangeUrl;
}

@property(retain, nonatomic) NSNumber *forceChangeUrl; // @synthesize forceChangeUrl=_forceChangeUrl;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *audioUrl; // @dynamic audioUrl;
@property(retain, nonatomic) NSString *callBack; // @dynamic callBack;
@property(retain, nonatomic) NSNumber *keepShareUrl; // @dynamic keepShareUrl;
@property(retain, nonatomic) NSNumber *needPopBack; // @dynamic needPopBack;
@property(retain, nonatomic) UIImage *previewImage; // @dynamic previewImage;
@property(retain, nonatomic) NSString *previewImageURL; // @dynamic previewImageURL;
@property(retain, nonatomic) NSString *puin; // @dynamic puin;
@property(retain, nonatomic) NSString *shareType; // @dynamic shareType;
@property(retain, nonatomic) NSString *srcName; // @dynamic srcName;
@property(retain, nonatomic) NSString *summary; // @dynamic summary;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *toUIN; // @dynamic toUIN;
@property(retain, nonatomic) NSNumber *uinType; // @dynamic uinType;
@property(retain, nonatomic) NSString *urlStr; // @dynamic urlStr;

@end


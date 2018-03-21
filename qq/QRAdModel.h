//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface QRAdModel : NSObject
{
    long long _adType;
    NSString *_adIDStr;
    NSString *_bookIDStr;
    NSString *_chapterIDStr;
    NSString *_authorNameStr;
    NSString *_authorIDStr;
    NSString *_authorTitleStr;
    NSString *_authorHeadImgUrl;
    NSString *_authorJumpUrl;
    NSString *_authorNoticeStr;
    NSString *_buttonNameStr;
    double _modelHight;
    UIView *_modelView;
    NSString *_jumpUrl;
    int _xo;
}


// Remaining properties
@property(copy, nonatomic) NSString *adIDStr; // @dynamic adIDStr;
@property(nonatomic) long long adType; // @dynamic adType;
@property(copy, nonatomic) NSString *authorHeadImgUrl; // @dynamic authorHeadImgUrl;
@property(copy, nonatomic) NSString *authorIDStr; // @dynamic authorIDStr;
@property(copy, nonatomic) NSString *authorJumpUrl; // @dynamic authorJumpUrl;
@property(copy, nonatomic) NSString *authorNameStr; // @dynamic authorNameStr;
@property(copy, nonatomic) NSString *authorNoticeStr; // @dynamic authorNoticeStr;
@property(copy, nonatomic) NSString *authorTitleStr; // @dynamic authorTitleStr;
@property(copy, nonatomic) NSString *bookIDStr; // @dynamic bookIDStr;
@property(copy, nonatomic) NSString *buttonNameStr; // @dynamic buttonNameStr;
@property(copy, nonatomic) NSString *chapterIDStr; // @dynamic chapterIDStr;
@property(copy, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(nonatomic) double modelHight; // @dynamic modelHight;
@property(retain, nonatomic) UIView *modelView; // @dynamic modelView;
@end


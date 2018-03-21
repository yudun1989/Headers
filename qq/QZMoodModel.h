//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/QZModelObject.h>

@class NSArray, NSDate, NSDictionary, NSString, QZUGCLBSModel;

@interface QZMoodModel : QZModelObject
{
    NSDictionary *_contentParam;
    long long _batchMediaJobType;
    unsigned long long _batchMediaSource;
    NSString *_preUploadId;
}

@property(copy, nonatomic) NSString *preUploadId; // @synthesize preUploadId=_preUploadId;
@property(nonatomic) unsigned long long batchMediaSource; // @synthesize batchMediaSource=_batchMediaSource;
@property(nonatomic) long long batchMediaJobType; // @synthesize batchMediaJobType=_batchMediaJobType;
@property(retain, nonatomic) NSDictionary *contentParam; // @synthesize contentParam=_contentParam;

// Remaining properties
@property(retain, nonatomic) QZUGCLBSModel *LBSModel; // @dynamic LBSModel;
@property(copy, nonatomic) NSString *address; // @dynamic address;
@property(retain, nonatomic) NSArray *allowUins; // @dynamic allowUins;
@property(nonatomic) long long compressBatchId; // @dynamic compressBatchId;
@property(retain, nonatomic) NSArray *compressModels; // @dynamic compressModels;
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) QZUGCLBSModel *currenLBSModel; // @dynamic currenLBSModel;
@property(retain, nonatomic) NSDictionary *extendInfo; // @dynamic extendInfo;
@property(nonatomic) _Bool hasShootInfo; // @dynamic hasShootInfo;
@property(retain, nonatomic) NSDictionary *mentionInfo; // @dynamic mentionInfo;
@property(nonatomic) _Bool needFakeFeed; // @dynamic needFakeFeed;
@property(retain, nonatomic) NSDictionary *otherInfo; // @dynamic otherInfo;
@property(nonatomic) long long photoQuality; // @dynamic photoQuality;
@property(copy, nonatomic) NSString *reportString; // @dynamic reportString;
@property(nonatomic) _Bool syncToQQ; // @dynamic syncToQQ;
@property(nonatomic) _Bool syncToWeixin; // @dynamic syncToWeixin;
@property(retain, nonatomic) NSDate *timer; // @dynamic timer;
@property(nonatomic) long long ugcRight; // @dynamic ugcRight;
@property(nonatomic) long long uploadEntrance; // @dynamic uploadEntrance;
@property(nonatomic) _Bool verified; // @dynamic verified;
@property(nonatomic) long long videoQuality; // @dynamic videoQuality;
@property(nonatomic) _Bool waitForWifi; // @dynamic waitForWifi;

@end


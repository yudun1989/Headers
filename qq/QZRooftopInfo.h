//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QzoneModel.h>

@class NSString;

@interface QZRooftopInfo : QzoneModel
{
    NSString *_bgImageUrl;
    NSString *_bgImageMd5;
    NSString *_guideImageUrl;
    NSString *_guideImageMd5;
    NSString *_videoUrl;
    NSString *_videoMd5;
    NSString *_jumpUrl;
    NSString *_traceInfo;
    long long _timeBegin;
    long long _timeEnd;
}

@property(nonatomic) long long timeEnd; // @synthesize timeEnd=_timeEnd;
@property(nonatomic) long long timeBegin; // @synthesize timeBegin=_timeBegin;
@property(retain, nonatomic) NSString *traceInfo; // @synthesize traceInfo=_traceInfo;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *videoMd5; // @synthesize videoMd5=_videoMd5;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *guideImageMd5; // @synthesize guideImageMd5=_guideImageMd5;
@property(retain, nonatomic) NSString *guideImageUrl; // @synthesize guideImageUrl=_guideImageUrl;
@property(retain, nonatomic) NSString *bgImageMd5; // @synthesize bgImageMd5=_bgImageMd5;
@property(retain, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *videoDownloadPath;
- (id)rooftopDir;

@end

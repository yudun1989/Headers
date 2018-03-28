//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IESVideoCropData, NSArray;

@interface IESMediaTranscoderConfig : NSObject
{
    NSArray *_waterMarkDataArray;
    IESVideoCropData *_cropInfo;
    unsigned long long _currentFilterType;
    struct CGSize _videoOutputSize;
}

@property(nonatomic) unsigned long long currentFilterType; // @synthesize currentFilterType=_currentFilterType;
@property(nonatomic) struct CGSize videoOutputSize; // @synthesize videoOutputSize=_videoOutputSize;
@property(retain, nonatomic) IESVideoCropData *cropInfo; // @synthesize cropInfo=_cropInfo;
@property(retain, nonatomic) NSArray *waterMarkDataArray; // @synthesize waterMarkDataArray=_waterMarkDataArray;
- (void).cxx_destruct;
- (long long)currentWaterMarkIndex:(CDStruct_1b6d18a9)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QQVipFunctionComicRecommandInfo : NSObject
{
    NSMutableDictionary *_seqCompletionDict;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *seqCompletionDict; // @synthesize seqCompletionDict=_seqCompletionDict;
- (void).cxx_destruct;
- (_Bool)checkModelValid:(id)arg1;
- (void)onReceivedAdvertisementData:(id)arg1;
- (void)getAdvertisementComicId:(id)arg1 sectionId:(id)arg2 posId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)onReceivedRecommandData:(id)arg1;
- (void)onReceiveNetData:(id)arg1;
- (void)getLastSessionRecommend:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end


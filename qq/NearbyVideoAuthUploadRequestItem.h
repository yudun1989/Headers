//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SAMLBSRequestItem.h>

@class NearbyVideoAuthModel;

@interface NearbyVideoAuthUploadRequestItem : SAMLBSRequestItem
{
    NearbyVideoAuthModel *_model;
    CDUnknownBlockType _completeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) NearbyVideoAuthModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)updateSummaryModel:(id)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;
- (id)initWithModel:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;

@end


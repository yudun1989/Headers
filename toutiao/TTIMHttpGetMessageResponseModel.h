//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString, TTIMHttpDeliveSilenceModel, TTIMHttpMessageListIDLModel;
@protocol Optional;

@interface TTIMHttpGetMessageResponseModel : JSONModel
{
    NSNumber *_cmd;
    NSString *_seqId;
    NSNumber<Optional> *_statusCode;
    TTIMHttpDeliveSilenceModel<Optional> *_deliveSilence;
    TTIMHttpMessageListIDLModel<Optional> *_msgList;
}

+ (id)keyMapper;
@property(retain, nonatomic) TTIMHttpMessageListIDLModel<Optional> *msgList; // @synthesize msgList=_msgList;
@property(retain, nonatomic) TTIMHttpDeliveSilenceModel<Optional> *deliveSilence; // @synthesize deliveSilence=_deliveSilence;
@property(retain, nonatomic) NSNumber<Optional> *statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic) NSString *seqId; // @synthesize seqId=_seqId;
@property(retain, nonatomic) NSNumber *cmd; // @synthesize cmd=_cmd;
- (void).cxx_destruct;
- (id)transformToPBModel;
- (id)init;

@end


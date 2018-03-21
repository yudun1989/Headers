//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class NSArray, NSDictionary, NSString;

@interface O2OLCNewQuestionModel : O2OHTTPModel
{
    NSString *_type;
    NSString *_title;
    NSString *_desc;
    NSString *_cityCode;
    NSDictionary *_region;
    NSArray *_topics;
    NSString *_questionId;
    NSString *_targetUrl;
}

@property(readonly, copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(readonly, copy, nonatomic) NSString *questionId; // @synthesize questionId=_questionId;
@property(copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(copy, nonatomic) NSDictionary *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)parseResponse:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;

@end


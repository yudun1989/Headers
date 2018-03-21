//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class MOBILECSAHomePageDynamicReponse, NSDictionary, NSString;

@interface O2OSubBlocksModel : O2OMistModel
{
    MOBILECSAHomePageDynamicReponse *_homePageResponse;
    id _responseObject;
    NSString *_blockIds;
    NSString *_parentPageName;
    NSDictionary *_queryInfos;
    NSDictionary *_blockMd5s;
    NSString *_cityId;
    double _x;
    double _y;
    NSString *_templateType;
    NSString *_businessAreaId;
}

@property(retain, nonatomic) NSString *businessAreaId; // @synthesize businessAreaId=_businessAreaId;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSDictionary *blockMd5s; // @synthesize blockMd5s=_blockMd5s;
@property(retain, nonatomic) NSDictionary *queryInfos; // @synthesize queryInfos=_queryInfos;
@property(retain, nonatomic) NSString *parentPageName; // @synthesize parentPageName=_parentPageName;
@property(retain, nonatomic) NSString *blockIds; // @synthesize blockIds=_blockIds;
- (id)responseObject;
- (void).cxx_destruct;
- (_Bool)shouldDowngrade;
- (id)operationType;
- (id)templateConfig;
- (_Bool)handleTemplatesCompletion:(id)arg1 failedItems:(id)arg2 err:(id)arg3;
- (id)templatesFromResponse:(id)arg1;
- (_Bool)raise1002Exception;
- (id)responseObjects:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;

@end


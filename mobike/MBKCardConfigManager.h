//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKDataProviderDelegate-Protocol.h"
#import "MBKDataProviderProtocol-Protocol.h"

@class MBKCardConfigApi, NSArray, NSString;
@protocol MBKDataProviderDelegate;

@interface MBKCardConfigManager : NSObject <MBKDataProviderDelegate, MBKDataProviderProtocol>
{
    id <MBKDataProviderDelegate> _delegate;
    NSArray *_cardListArray;
    MBKCardConfigApi *_api;
    NSString *_countryCode;
    NSString *_cityCode;
}

@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) MBKCardConfigApi *api; // @synthesize api=_api;
@property(retain, nonatomic) NSArray *cardListArray; // @synthesize cardListArray=_cardListArray;
@property(nonatomic) __weak id <MBKDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestFailured:(id)arg1 error:(id)arg2;
- (void)requestSuccessed:(id)arg1;
- (_Bool)repeated;
- (void)configApi;
- (_Bool)isQuerying;
- (int)method;
- (void)startMBKRequest;
- (void)setParamsWithCountryCode:(id)arg1 cityCode:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTResponseModelProtocol-Protocol.h"

@class NSNumber, NSString;

@interface TTABaseRespModel : NSObject <TTResponseModelProtocol>
{
    NSString *_message;
    NSNumber *_ttaCreateTimeStamp;
}

+ (_Bool)propertyIsIgnored:(id)arg1;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSNumber *ttaCreateTimeStamp; // @synthesize ttaCreateTimeStamp=_ttaCreateTimeStamp;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)errorDescription;
- (id)errcodeInData;
- (long long)errorCode;
- (_Bool)isOtherRespError;
- (_Bool)isClientError;
- (_Bool)isServerError;
- (_Bool)isRespSuccess;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

